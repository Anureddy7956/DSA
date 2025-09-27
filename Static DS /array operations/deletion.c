//Deletion
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
      printf("Before Deletion: %d\n",a[i]);  
    }
    int pos;
    printf("Enter the position where you want to delete the element: ");
    scanf("%d",&pos);

for(int i=pos;i<n-1;i++){
    a[i]=a[i+1];
}
n-=1;
 for(int i=0;i<n;i++){
    printf("After deletion %d\n: ",a[i]);
}
return 0;
}
