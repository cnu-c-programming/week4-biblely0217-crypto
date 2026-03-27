#include <stdio.h>

int main() {
    int arr[] = {3, 7, 1, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {

        printf("address of arr[%d]: %p\n", i, (void*)&arr[i]);
        printf("address of arr[%d]: %p\n", i+1, (void*)&arr[i+1]);

        printf("&(arr[%d]) - &(arr[%d]) = %d\n",
               i, i+1,
               (int)((char*)&arr[i+1] - (char*)&arr[i]));

        printf("\n");
    }

    return 0;
}