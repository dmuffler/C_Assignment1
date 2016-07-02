#include "sort1.h"

void sort1(int arr[],int N)
{
    int i;
    int j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N-i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
