#include <stdio.h>

int recbinarysearch(int a[],int l,int r,int key)
{
    int mid;

    if(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]>key)
                return recbinarysearch(a,l,mid-1,key);
            else
                return recbinarysearch(a,mid+1,r,key);

    }
    return -1;
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    quickSort(arr, 0, n - 1);
    
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int key,pos;
    printf("\n Enter an key to search:\n");
    scanf("%d",&key);
    pos=recbinarysearch(arr,0,n,key);

    printf("Position:%d",pos);


}