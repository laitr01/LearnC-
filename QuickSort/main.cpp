#include <iostream>

using namespace std;
int partition(int[],int,int);
void printArray(int[],int);
void quick_sort(int[],int,int);
void swap(int*, int*);
int main()
{
    cout << "Quick sort!" << endl;
    int un_sort_arr[] = {54,26,93,17,77,31,44,55,20};
    int n = sizeof(un_sort_arr)/sizeof(un_sort_arr[0]);
    quick_sort(un_sort_arr, 0, n-1);
    printf("Sorted array: n");
    printArray(un_sort_arr, n);
    return 0;
}
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quick_sort(int un_sort_array[], int low, int high){
    if(low < high){
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(un_sort_array, low, high);

        // Separately sort elements before
        // partition and after partition
        quick_sort(un_sort_array, low, pi - 1);
        quick_sort(un_sort_array, pi + 1, high);
    }
}

int partition(int un_sort_array[], int low, int hight){
    int pivot = un_sort_array[hight];
    int j = (low - 1);
    for(int i = low; i <= hight - 1; i++){
        // If current element is smaller than or
        // equal to pivot
        if(un_sort_array[i] <= pivot){
            j++;// increment index of smaller element
            swap(&un_sort_array[j], &un_sort_array[i]);
        }
        swap(&un_sort_array[i+1],&un_sort_array[hight]);
    }
    return j+1;
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}
void swap(int *a, int *b){
    int  t = *a;
    *a = *b;
    *b = t;
}
