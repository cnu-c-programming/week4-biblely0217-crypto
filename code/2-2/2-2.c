#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[] = "10";
    char b[] = "3.14";
    char c[] = "-20";

    int x = atoi(a);
    double y = atof(b);
    int z = abs(atoi(c));

    printf("%d\n", x);   // 10
    printf("%.2f\n", y); // 3.14
    printf("%d\n", z);   // 20

    return 0;
}