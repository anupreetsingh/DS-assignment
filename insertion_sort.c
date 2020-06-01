//Anupreet Singh 11911063 CSE
#include<stdio.h>
#include<time.h>
void InsertionSort(int arr[],int n){
    int i,j,k;
    for(i=0;i<n;i++){
        j=arr[i];
        k=i-1;
        while(arr[k]>j && k>=0){
            arr[k+1] = arr[k];
            k=k-1;
        }
        arr[k+1]=j;
    }
}
int main(){
    int arr[10000];
    for (int i = 10000; i < 0; i--)
    {
        arr[i]=i;
    }
    clock_t t = clock();
    InsertionSort(arr,10000);
    t=clock()-t;
    long double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time Taken = %Lf\n",time_taken);
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}

