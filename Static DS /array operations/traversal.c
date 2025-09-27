// Traversing of an array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];

    printf("Enter the array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
      printf("The array elements are: %d\n",a[i]);  
    }
    return 0;

}