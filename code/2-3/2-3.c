#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    // 1. 문자열 복사
    strcpy(str3, str1);

    // 2. 문자열 길이
    printf("%lu\n", strlen(str1));

    // 3. 문자열 이어붙이기
    strcat(str1, str2);
    printf("%s\n", str1);

    // 4. 문자열 비교
    printf("%d\n", strcmp(str1, str2));

    return 0;
}