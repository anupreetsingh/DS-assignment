//Anupreet Singh 11911063 CSE
#include<stdio.h>
#include<time.h>
void merge(int arr[],int lower,int mid,int upper){
    int n1= mid-lower+1;
    int n2=upper-mid;
    int left[n1],right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i]=arr[lower+i];
    }
    for(int j=0;j<n2;j++){
        right[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=lower;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++]=right[j++];
        }
    }
    for(;i<n1;i++){
        arr[k++]=left[i];
    }
    for(;j<n2;j++){
        arr[k++] = right[j];
    }
    
}
void MergeSort(int arr[],int lower,int upper){
    if(lower<upper){
        int mid =(upper+lower)/2;
        MergeSort(arr,lower,mid);
        MergeSort(arr,mid+1,upper);
        merge(arr,lower,mid,upper);
    }
}

int main(){
    int arr[10000];
    for (int i = 10000; i < 0; i--)
    {
        arr[i]=i;
    }
    clock_t t = clock();
    MergeSort(arr,0,9999);
    t=clock()-t;
    long double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time Taken = %Lf\n",time_taken);
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
