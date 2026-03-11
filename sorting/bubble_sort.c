#include<stdio.h>
//bubble sort ->  comparing the adjacent elements and swapping the elements in ascending order 
void bubbleSort(int n, int arr[]){
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
}
int main(){
int n;
printf("Enter the numbers of elements:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements: ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
bubbleSort(n,arr);
printf("bubble sort: ");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
