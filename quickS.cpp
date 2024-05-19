#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int array[], int low, int high) {
    int pivot = array[high];
    int pindext = (low - 1);

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            pindext++;
            swap(&array[pindext], &array[j]);
        }
    }
    swap(&array[pindext + 1], &array[high]);
    return (pindext + 1);
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
  }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main() {
    int data[50],n;
    printf("Enter amount of data : ");
    scanf("%d",&n);
    printf("Enter data : ");
    for(int i; i<n;i++){
        scanf("%d",&data[i]);
    }
    quickSort(data, 0, n - 1);

    printf("Sorted array in ascending order: \n");
    printArray(data, n);
}
