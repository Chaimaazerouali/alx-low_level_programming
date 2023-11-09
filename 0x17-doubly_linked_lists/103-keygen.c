#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*main - generate a key depending on a username for crackme5
*@argc: number of arguments passed
*@argv: arguments passed to main
*Return: 0 on success, 1 on error
*/
int main(int argc, char **argv)
{
unsigned int index1, value1;
size_t username_length, accumulated_value;
char *key_characters = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
char generated_key[7] = "      ";

if (argc != 2)
{
printf("Correct usage: ./keygen5 username\n");
return (1);
}
username_length = strlen(argv[1]);
generated_key[0] = key_characters[(username_length ^ 59) & 63];
for (index1 = 0, accumulated_value = 0; index1 < username_length; index1++)
accumulated_value += argv[1][index1];
generated_key[1] = key_characters[(accumulated_value ^ 79) & 63];
for (index1 = 0, value1 = 1; index1 < username_length; index1++)
value1 *= argv[1][index1];
generated_key[2] = key_characters[(value1 ^ 85) & 63];
for (value1 = argv[1][0], index1 = 0; index1 < username_length; index1++)
if ((char)value1 <= argv[1][index1])
value1 = argv[1][index1];
srand(value1 ^ 14);
generated_key[3] = key_characters[rand() & 63];
for (value1 = 0, index1 = 0; index1 < username_length; index1++)
value1 += argv[1][index1] * argv[1][index1];
generated_key[4] = key_characters[(value1 ^ 239) & 63];
for (value1 = 0, index1 = 0; (char)index1 < argv[1][0]; index1++)
value1 = rand();
generated_key[5] = key_characters[(value1 ^ 229) & 63];
printf("%s\n", generated_key);
return (0);
}

