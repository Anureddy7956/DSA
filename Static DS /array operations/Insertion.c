//Insertion
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
      printf("Before insertion: %d\n",a[i]);  
    }
    int pos;
    printf("Enter the position where you want to insert the element: ");
    scanf("%d",&pos);
    int val;
    printf("Enter the value you want to insert: ");
    scanf("%d",&val);

for(int i=n;i>pos;i--){
    a[i]=a[i-1];
}
a[pos]=val;
n+=1;
 for(int i=0;i<n;i++){
    printf("After insertion %d\n: ",a[i]);
}
return 0;
}
