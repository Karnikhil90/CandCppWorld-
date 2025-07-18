#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN(arr) (sizeof(arr) / sizeof((arr)[0]))

// Function declarations
void print_arr_str(char **words, int size);
int length(const char *word);
int count(const char *word, char key);
char *join(const char **words, int size, char chr);
char **split(char *words, char regex, int *out_count);

int length(const char words[]) {
    int lenghth = 0;
    while (words[lenghth] != '\0') lenghth++;
    return lenghth;
}

int count(const char *word, char key) {
    int cnt = 0;
    int i = 0;
    while (word[i] != '\0') {
        if (word[i] == key) cnt++;
        i++;
    }
    return cnt;
}

char *join(const char **words, int size, char chr) {
    int N = 0;
    for (int i = 0; i < size; i++) {
        N += length(words[i]);
    }
    printf("size=%d\n", N);
    N += (size - 1) + 1; // (size - 1) separators + 1 null terminator

    char *result = (char *)malloc(N);
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    int idx = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < length(words[i]); j++) {
            result[idx++] = words[i][j];
        }

        if (i < size - 1) {  // Only add separator between words
            result[idx++] = chr;
        }

        // TEMPORARY NULL-TERMINATE FOR DEBUG PRINT
        char temp = result[idx];
        result[idx] = '\0';
        printf("[DEBUG] %d = %s\n", i, result);
        result[idx] = temp;
    }

    result[idx] = '\0';  // Final null-terminator
    return result;
}

char **split(char *words, char regex, int *out_count) {
    int size = length(words);
    int count_blank = count(words, regex);
    int word_count = count_blank + 1;
    *out_count = word_count;

    char **result = (char **)malloc(word_count * sizeof(char *));
    if (!result) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    int i = 0, idx = 0, idxx = 0;
    result[idx] = (char *)malloc(size + 1);

    while (i < size) {
        if (words[i] != regex) {
            result[idx][idxx++] = words[i];
        } else {
            result[idx][idxx] = '\0';
            idx++;
            idxx = 0;
            result[idx] = (char *)malloc(size + 1);
        }
        i++;
    }
    result[idx][idxx] = '\0';

    return result;
}

void print_arr_str(char **words, int size) {
    for (int i = 0; i < size; i++) {
        printf("[%d] = %s\n", i, words[i]);
    }
}

int main() {
    const char *arr[] = {"my", "name", "is", "nikhil"};
    int size = sizeof(arr) / sizeof(arr[0]);

    char *joined = join(arr, size, ' ');
    printf("Joined: %s\n", joined);

    int size_str = length(joined);
    int word_count = 0;

    char **splited = split(joined,' ', &word_count);

    printf("==========================================================\n");
    print_arr_str(splited, word_count);

    free(joined);

    for (int i = 0; i < word_count; i++) {
        free(splited[i]);
    }
    free(splited);

    return 0;
}