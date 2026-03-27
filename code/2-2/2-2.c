#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[] = "10";
    char b[] = "-20";
    char c[] = "3.14";

    printf("%d\n", atoi(a));
    printf("%d\n", abs(atoi(b)));
    printf("%.2f\n", atof(c));

    return 0;
}