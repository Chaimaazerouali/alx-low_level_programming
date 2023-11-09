#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Generate a key depending on a username for Crackme5.
 * @argc: Number of arguments passed.
 * @argv: Arguments passed to main.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char **argv)
{
    unsigned int index, value;
    size_t username_length, accumulated_value;
    char *key_characters = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    char generated_key[7] = "      ";

    if (argc != 2)
    {
        printf("Correct usage: ./keygen5 username\n");
        return 1;
    }

    username_length = strlen(argv[1]);
    generated_key[0] = key_characters[(username_length ^ 59) & 63];

    for (index = 0, accumulated_value = 0; index < username_length; index++)
        accumulated_value += argv[1][index];
    generated_key[1] = key_characters[(accumulated_value ^ 79) & 63];

    for (index = 0, value = 1; index < username_length; index++)
        value *= argv[1][index];
    generated_key[2] = key_characters[(value ^ 85) & 63];

    for (value = argv[1][0], index = 0; index < username_length; index++)
        if ((char)value <= argv[1][index])
            value = argv[1][index];

    srand(value ^ 14);
    generated_key[3] = key_characters[rand() & 63];

    for (value = 0, index = 0; index < username_length; index++)
        value += argv[1][index] * argv[1][index];
    generated_key[4] = key_characters[(value ^ 239) & 63];

    for (value = 0, index = 0; (char)index < argv[1][0]; index++)
        value = rand();
    generated_key[5] = key_characters[(value ^ 229) & 63];

    printf("%s\n", generated_key);
    return 0;
}

