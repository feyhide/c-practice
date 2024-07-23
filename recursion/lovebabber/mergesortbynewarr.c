#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int s,int mid,int e){
    int len1= mid-s+1;
    int len2= e - mid;
    int* first = malloc(len1*sizeof(int));
    int* second = malloc(len2*sizeof(int));
    int mainarrayindex=s;
    for (int i = 0; i < len1; i++)
    {
        first[i]=arr[mainarrayindex++];
    }
    for (int i = 0; i < len2; i++)
    {
        second[i]=arr[mainarrayindex++];
    }
    int index1=0,index2=0;
    mainarrayindex=s;
    while(index1<len1&&index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayindex++]=first[index1++];
        }else{
            arr[mainarrayindex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainarrayindex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarrayindex++]=second[index2++];
    }
}

void mergesort(int arr[],int s,int e){
    if(s>=e)return;
    int mid = s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
}
int main(){
    int arr[5]={1,4,3,2,5};
    int n=5;
    mergesort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}