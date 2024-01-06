#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void afisareTablou(int arr[], int dimensiune) {
    for (int i = 0; i < dimensiune; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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
}