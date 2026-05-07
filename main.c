#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx]) min_idx = j;
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[i + 1] = key; // Hata düzeltme: arr[j+1] = key olmalı
    }
}

int main() {
    int X[500], Y[500];
    srand(time(NULL));

    for(int i=0; i<500; i++) {
        X[i] = rand() % 1001; // 0-1000 arası
        Y[i] = X[i]; // Aynı diziyi diğer algoritma için kopyalıyoruz
    }

    clock_t start, end;

    start = clock();
    selectionSort(X, 500);
    end = clock();
    printf("Selection Sort suresi: %f saniye\n", (double)(end - start) / CLOCKS_PER_SEC);

    start = clock();
    insertionSort(Y, 500);
    end = clock();
    printf("Insertion Sort suresi: %f saniye\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}