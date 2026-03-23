// DP Arrays
#include<stdio.h>
#include<stdlib.h>
int *catalan(int n){
    int *c =(int*) malloc((n+1) * sizeof(int));
    c[0]=1;
    c[1]=1;
    for(int i=2;i<=n;i++){
         c[i]=0;
        for(int j=0;j<i;j++){
            c[i]=c[j]+c[i-j-1];
        }
    }
return c;
}
void countBST(int arr[],int n){
    int *c=catalan(n);
    for(int i=0;i<n;i++){
        int l=0,r = 0;
    for(int j=0;j<n;j++){
        if(arr[j]<arr[i])
            l++;
        if(arr[j]>arr[i])
            r++;
        }
        printf("Index %d (value %d) -> %d forms\n", i, arr[i], c[l] * c[r]);
        printf("\n");
    }
    free(c);
}
int main(){
    int arr[]={2,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    countBST(arr,n);
    return 0;
}
