/**
 * @file stringg.c
 * @brief Demonstrates the 20 most useful functions from <string.h> in C.
 *
 * This file shows how to use key C string and memory functions with clear examples.
 * All functions are part of the standard C library (`<string.h>`) unless stated.
 */

#include <stdio.h>      // for printf
#include <string.h>     // for all string functions
#include <stdlib.h>     // for malloc, free, strdup (POSIX)

int main() {
    /**
     * @function strlen
     * @brief Returns the number of characters in a string, excluding the null terminator.
     * @param const char* str - input string
     * @return size_t - length of the string
     */
    char str1[50] = "Hello";
    printf("1. strlen: %zu\n", strlen(str1));

    /**
     * @function strcpy
     * @brief Copies a/null-terminated string to a destination.
     / @param char* des// const char* src
     / @return char* - pointer to destination
     */
    char str2[50];
    strcpy(str2, str1);
    printf("2. strcpy: %s\n", str2);

    /**
     * @function strncpy
     * @brief Copies up to n characters from source to destination.
     * @note Doesn't guarantee null-termination if src length ≥ n
     */
    char str3[50];
    strncpy(str3, "WorldWide", 5);
    str3[5] = '\0';  // ensure termination
    printf("3. strncpy: %s\n", str3);

    /**
     * @function strcat
     * @brief Appends src to dest (must be null-terminated).
     */
    strcat(str1, " World");
    printf("4. strcat: %s\n", str1);

    /**
     * @function strncat
     * @brief Appends n characters from src to dest.
     */
    strncat(str1, "!!!###", 3);  // append "!!!"
    printf("5. strncat: %s\n", str1);

    /**
     * @function strcmp
     * @brief Lexicographically compares two strings.
     * @return int - 0 if equal, <0 if str1<str2, >0 if str1>str2
     */
    printf("6. strcmp: %d\n", strcmp("apple", "banana"));

    /**
     * @function strncmp
     * @brief Compares up to n characters of two strings.
     */
    printf("7. strncmp: %d\n", strncmp("apple", "apricot", 3));

    /**
     * @function strchr
     * @brief Finds the first occurrence of a character in a string.
     */
    char *ch = strchr(str1, 'W');
    printf("8. strchr: %c\n", ch ? *ch : ' ');

    /**
     * @function strrchr
     * @brief Finds the last occurrence of a character.
     */
    char *rch = strrchr(str1, 'l');
    printf("9. strrchr: %c\n", rch ? *rch : ' ');

    /**
     * @function strstr
     * @brief Finds the first occurrence of a substring.
     */
    char *substr = strstr(str1, "lo Wo");
    printf("10. strstr: %s\n", substr ? substr : "Not found");

    /**
     * @function strspn
     * @brief Returns the length of the prefix that only contains chars from `accept`.
     */
    size_t span = strspn("123abc", "1234567890");
    printf("11. strspn: %zu\n", span); // output: 3

    /**
     * @function strcspn
     * @brief Returns length of prefix with NO characters from `reject`.
     */
    size_t cspan = strcspn("abc123", "123");
    printf("12. strcspn: %zu\n", cspan); // output: 3

    /**
     * @function strpbrk
     * @brief Returns pointer to first char in string from a set of chars.
     */
    char *setchar = strpbrk("hello world", "aeiou");
    printf("13. strpbrk: %c\n", setchar ? *setchar : ' ');

    /**
     * @function strtok
     * @brief Tokenizes a string using a delimiter.
     * @warning Destructive and not thread-safe.
     */
    char input[] = "split,this,string,by,comma";
    char *token = strtok(input, ",");
    printf("14. strtok: ");
    while (token != NULL) {
        printf("[%s] ", token);
        token = strtok(NULL, ",");
    }
    printf("\n");

    /**
     * @function memcpy
     * @brief Copies memory block (raw bytes).
     * @note Faster but unsafe for overlapping regions.
     */
    char source[10] = "abcdef";
    char dest[10];
    memcpy(dest, source, strlen(source)+1);
    printf("15. memcpy: %s\n", dest);

    /**
     * @function memmove
     * @brief Safe version of memcpy that handles overlap.
     */
    char overlap[] = "123456";
    memmove(overlap + 2, overlap, 4);  // shifts first 4 bytes to position 2
    printf("16. memmove: %s\n", overlap);

    /**
     * @function memcmp
     * @brief Compares memory byte-by-byte.
     * @return 0 if equal, else difference.
     */
    int cmp_result = memcmp("ABC", "ABD", 3);
    printf("17. memcmp: %d\n", cmp_result);

    /**
     * @function memset
     * @brief Fills a memory block with a given byte.
     */
    char buffer[10];
    memset(buffer, '*', sizeof(buffer));
    buffer[9] = '\0';  // ensure printable output
    printf("18. memset: %s\n", buffer);

    /**
     * @function strdup
     * @brief Allocates and duplicates a string.
     * @return char* - new copy (must be freed)
     * @note POSIX; not available in strict ISO C90
     */
    const char *original = "Duplicate me!";
    char *copy = strdup(original);
    printf("19. strdup: %s\n", copy);
    free(copy);

    /**
     * @function strerror
     * @brief Returns human-readable error message for an error code (errno).
     */
    int errnum = 2; // usually "No such file or directory"
    printf("20. strerror: %s\n", strerror(errnum));

    return 0;
}
