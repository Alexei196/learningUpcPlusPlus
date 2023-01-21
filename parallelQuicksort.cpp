 /* Andrew Rossman
 * Experimenting with parallel programming using sorting algorithm
 * 01/21/2023
 */
#include<iostream>
//#include<upcxx/upcxx.hpp>

void quicksort(int[], int, int);
int partition(int[], int, int);
void swap(int*, int*);

int main(int argc, char *argv[]) {
    int testArray[] = {19, 57, 45, 8, 12, 6, 1, 52, 24, 38};
    int testArrayLength = sizeof(testArray) / sizeof(testArray[0]);

    std::cout << "Unsorted array : " ; 
    for(int number : testArray){
        std::cout << number << ", ";
    }
    std::cout << "\n";

    quicksort(testArray, 0, testArrayLength-1);

    std::cout << "Sorted array : " ; 
    for(int number : testArray){
        std::cout << number << ", ";
    }
    std::cout << "\n";

    return -1;
}

void quicksort(int sortingArray[], int low, int high) {
    if(low < high) {
        int partitionIndex = partition(sortingArray, low, high);

        quicksort(sortingArray, low, partitionIndex-1);
        quicksort(sortingArray, partitionIndex+1, high);
    }
}

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low-1);

    for(int j = low; j <= high-1; j++){
        if(array[j] < pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i+1], &array[high]);
    return (i+1);
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
} 

