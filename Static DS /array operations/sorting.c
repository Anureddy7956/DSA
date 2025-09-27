// Sorting 
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
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    printf("\n The array elements in ascending order: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("The array elements in descending order: "); 
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
