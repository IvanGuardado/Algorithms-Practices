#include <stdio.h>

void insertionSort(int a[], unsigned int length);

int main()
{
    unsigned int i;
    int a[] = {5,2,1,7,8,4,100,213,345,344};
    int length = sizeof(a)/sizeof(int);
    insertionSort(a, length);
    for(i=0; i<length; i++){
        printf("%d\n", a[i]);
    }
    
}

void insertionSort(int a[], unsigned int length)
{
    int j;
    for(j=1; j<length; j++){
        int key = a[j];
        int i = j-1;
        while(i>=0 && a[i]>key){
            a[i+1] = a[i];
            --i;
        }
        a[i+1] = key;
    }
}
