#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
    int A, count = 0;
    int arr[SIZE];
    
    printf("Введите %d целых чисел (положительных и отрицательных):\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Введите число A для сравнения: ");
    scanf("%d", &A);
    
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > A) {
            count++;
        }
    }
    
    printf("Количество элементов массива, больших %d: %d\n", A, count);
    
    return 0;
}