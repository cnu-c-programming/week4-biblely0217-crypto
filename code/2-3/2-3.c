#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    strcpy(str3, str1);
    printf("%s\n", str3);

    printf("%lu\n", strlen(str1));

    strcat(str1, str2);
    printf("%s\n", str1);

    printf("%d\n", strcmp(str1, str2));

    return 0;
}