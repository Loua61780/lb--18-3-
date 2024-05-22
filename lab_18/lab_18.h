#ifndef LAB_17_LAB_18_SOLUTIONS_H
#определение LAB_17_LAB_18_SOLUTIONS_H

ASCII_SYMBOLS_AMOUNT #определение 256

#включить <stdbool.h>
#включить "../str/string.h"

typedef struct WordDescriptor {
    char* begin;
    char* end;
} WordDescriptor;

typedef struct BagOfWords {
    WordDescriptor words[MAX_N_WORDS_IN_STRING];
    size_t size;
} BagOfWords;

static BagOfWords bag1;
static BagOfWords bag2;

typedef enum WordBeforeFirstWordWithAReturnCode {
    FIRST_WORD_WITH_A,
    NOT_FOUND_A_WORD_WITH_A,
    WORD_FOUND,
    EMPTY_STRING
} WordBeforeFirstWordWithAReturnCode;

void removeExtraSpaces(char* source);

int getWord(char* beginSearch, WordDescriptor* word);

int getWordReverse(char* searchEnd, char* searchStart, WordDescriptor* word);

void forEachWord(char* string, void (*function)(WordDescriptor));

void lettersToStartDigitsToEnd(WordDescriptor word);

void replaceDigitsBySpaces(char* string);

int compareWords(WordDescriptor left, WordDescriptor right);

void replace(char* string, char* replaceable, char* replacement);

bool areWordsSorted(char* string);

void outputWordsInReverseOrder(char* string);

int countPalindromes(char* string);

void mixWords(char* left, char* right, char* destination);

void reverseWordsOrder(char* string);

Печатное слово недействительно(WordDescriptor word);

Получить слово beforefirstwordwithsymbol WordBeforeFirstWordWithAReturnCode(символ* строка, описание слова* слово, символ символа);

Найди нужное слово в обоих строках bool(символ* строка, символ* слово, описание слова* Последнее слово);

hasStringEqualWords bool(символ* строка);

Имеет strwordsfromequalsymbols bool(символ* строка);

getStrFromWordsNotEqualToTheLast void(символ* строка);

Получаем слово beforefirstwordinbothstr WordBeforeFirstWordWithAReturnCode(символ* строка, символ* слово, описание слова* wordDst);

removePalindromes void(символ* строка);

addWordsToShorterStr void(символ* слева, символ* справа);

isbstringbysymbols bool(символ* строка, символ* символы);

#endif //LAB_17_LAB_18_SOLUTIONS_H
