#ifndef LAB_17_OWN_STRING_H
#define LAB_17_OWN_STRING_H

CHAR_SIZE #определить sizeof(символ)
MAX_STRING_SIZE #определить 100
MAX_N_WORDS_IN_STRING #определить 100
MAX_WORD_SIZE #определить 20

string_buffer char static[MAX_STRING_SIZE + 1];

#включить <memory.h>
#включить <stdbool.h>

Получаем длину size_t(const char* string);

найти* символ(символ* начало, постоянный символ* конец, int символ);

Найди в пространстве* символ(char* строка);

findSpace* char(символ* строка);

Найдите nonspacereverse* char(const char* searchEnd, char* searchStart);

findSpaceReverse* char(const char* searchEnd, char* searchStart);

compareStrings int(char* слева, char* справа);

копировать* символ(const символ* начало, const символ* конец, символ* пункт назначения);

copyIf* char(char* start, const char* end, char* destination, bool (*фильтр)(char));

copyIfReverse* char(char* reversedStart, const char* reversedEnd, char* назначение, bool (*фильтр)(char));

обратный* символ(const символ* начало, const символ* конец);

#endif //LAB_17_OWN_STRING_H
