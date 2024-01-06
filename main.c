#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void afisareTablou(int arr[], int dimensiune) {
    for (int i = 0; i < dimensiune; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
\
void bubbleSort(int arr[], int dimensiune) {
    for (int i = 0; i < dimensiune - 1; i++) {
        for (int j = 0; j < dimensiune - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void shellSort(int arr[], int dimensiune) {
    for (int pas = dimensiune / 2; pas > 0; pas /= 2) {
        for (int i = pas; i < dimensiune; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= pas && arr[j - pas] > temp; j -= pas) {
                arr[j] = arr[j - pas];
            }
            arr[j] = temp;
        }
    }
}

int main()
{
    int N;
    printf("Introduceti dimensiunea tabloului: ");
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));
    int* arrCopy = (int*)malloc(N * sizeof(int));

    printf("Introduceti elementele tabloului:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        arrCopy[i] = arr[i];  
    }


    printf("Tablou initial: ");
    afisareTablou(arr, N);

     bubbleSort(arr, N);
    printf("Tablou sortat prin Bubblesort: ");
    afisareTablou(arr, N);

     for (int i = 0; i < N; i++) { //resetare pt urmatoarele sortari 
        arr[i] = arrCopy[i];
    }

    shellSort(arr, N);
    printf("Tablou sortat prin Shellsort: ");
    afisareTablou(arr, N);

   
    for (int i = 0; i < N; i++) {
        arr[i] = arrCopy[i];
    }
}