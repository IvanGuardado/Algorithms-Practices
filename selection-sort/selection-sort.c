#include <stdio.h>

void selectionSort(int a[], unsigned int length);

int main()
{
    unsigned int i;
    int a[] = {5,2,1,7,8,4,100,213,345,344};
    unsigned int length = sizeof(a)/sizeof(int);
    selectionSort(a, length);
    for(i=0; i<length; i++){
        printf("%d\n", a[i]);
    }
    
}

void selectionSort(int a[], unsigned int length)
{
    unsigned int i;
    for(i=0; i<length-1; i++){
        unsigned int j;
        unsigned int min = i;
        for(j=i+1; j<length; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        int aux = a[i];
        a[i] = a[min];
        a[min] = aux;
    }
}
