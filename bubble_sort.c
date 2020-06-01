//Anupreet Singh 11911063 CSE
#include<stdio.h>
#include<time.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void BubbleSort(int arr[],int upper){
    for (int i = 0; i < upper-1; i++)
    {
        for (int j = 0; j < upper-i-1; j++)
            if(arr[j]>arr[j+1]){
                swap(&arr[j+1],&arr[j]);
            }
    }
}

int main(){
    int arr[10000];
    for (int i = 10000; i < 0; i--)
    {
        arr[i]=i;
    }
    
    clock_t t = clock();
    BubbleSort(arr,10000);
    t=clock()-t;
    long double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time Taken = %Lf\n",time_taken);
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
