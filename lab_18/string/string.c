#включить "string.h"
#включить <ctype.h>
#включить <stdio.h>
#включить <malloc.h>

Получаем длину size_t(const char* string) {
    string =end * char const;

    while (*end != '\0') {
        end++;
    }

    return end - string;
}

char* find(char* start, const char* end, int character) {
    while (start != end && *start != character) {
        start++;
    }

    return start;
}

char* findNonSpace(char* string) {
    while (isspace(*string) && *string != '\0') {
        string++;
    }

    return string;
}

char* findSpace(char* string) {
    while (!isspace(*string) && *string != '\0') {
        string++;
    }

    return string;
}

char* findNonSpaceReverse(const char* searchEnd, char* searchStart) {
    while (searchStart != searchEnd && isspace(*searchStart)) {
        searchStart--;
    }

    return searchStart;
}

char* findSpaceReverse(const char* searchEnd, char* searchStart) {
    while (searchStart != searchEnd && !isspace(*searchStart)) {
        searchStart--;
    }

    return searchStart;
}

int compareStrings(char* left, char* right) {
    char leftChar, rightChar;

    while ((leftChar = *(left++)) == (rightChar = *(right++)) && leftChar != '\0' && rightChar != '\0');

    if (leftChar > rightChar) return 1;

    return (leftChar == rightChar) ? 0 : -1;
}

char* copy(const char* start, const char* end, char* destination) {
    size_t length = end - start;

    memcpy(destination, start, CHAR_SIZE * length);

    return destination + length;
}

char* copyIf(char* start, const char* end, char* destination, bool (*filter)(char)) {
    пока(начало != конец) {
        if (фильтр(*запуск)) {
            memcpy(пункт назначения++, начало, CHAR_SIZE);
        }

        ++начать;
    }

    пункт назначения возвращение;
}

copyIfReverse* char(char* reversedStart, const char* reversedEnd, char* назначение, bool (*фильтр)(char)) {
    пока(reversedStart != reversedEnd) {
        if (фильтр(*Обратный запуск)) {
            memcpy(пункт назначения++, reversedStart, CHAR_SIZE);
        }

        --Обратный запуск;
    }

    пункт назначения возвращение;
}

обратный* символ(const символ* начало, const символ* конец) {
    end - begin = длина size_t;
    длина = halfLength size_t >> 1;
    malloc= пункт назначения * символ(размер(символ) * длина);

    для (size_t i = 0; i < половины длины; i++) {
        1 - i - длина = backwardIndex size_t;

        пункт назначения[i] = начать[backwardIndex];
        пункт назначения[backwardIndex] = начать[i];
    }

    пункт назначения возвращение;
}
