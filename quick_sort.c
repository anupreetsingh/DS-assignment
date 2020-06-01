//Anupreet Singh 11911063 CSE
#include<stdio.h>
#include<time.h>
//swapping two integers
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//partition algo
int part(int arr[],int lower,int upper){
    int i = lower-1;
    int pivot = arr[upper];
    for (int j = lower; j < upper; j++)
    {
        if(pivot>arr[j]){               //sorting pivot
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[upper]);
    return i+1; 
}

//divide and conquer algo to sort
void QuickSort(int arr[],int lower,int upper){
    if(lower<upper){
        int partition = part(arr,lower,upper);
        QuickSort(arr,lower,partition-1);
        QuickSort(arr,partition+1,upper);
    }
}

int main(){
    int arr[10000];
    for (int i = 10000; i < 0; i--)
    {
        arr[i]=i;
    }
    clock_t t = clock();
    QuickSort(arr,0,10000);
    t=clock()-t;
    long double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time Taken = %Lf\n",time_taken);
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
