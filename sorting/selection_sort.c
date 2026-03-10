#include<stdio.h>
// selection sort -> find the min in the array and swap the elements 
void selection_sort(int n , int a[]){
for(int i=0;i<n-1;i++){
    int min=i;
    for (int j=i;j<n;j++){
            if(a[j]<a[min]){
                min=j;
        }
    } //swap 
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}
int main(){
int n;
printf("Enter the size of the array:");
scanf("%d",&n);
int a[n];
printf("Enter the elements into the array: ");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
selection_sort(n,a);
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;
}