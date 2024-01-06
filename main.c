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
}