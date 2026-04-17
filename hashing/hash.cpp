#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the HASH: ";
    cin>>n;
     int arr[n];
    cout<<"Enter the elements into the hash array: "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int q;
    cout<<"enter the no.of queries : "<<endl;
    cin>>q;
    while(q--){
        int number;
        cout<<"enter the number to find frequency: "<<endl;
        cin >>number;
        cout << hash[number]<<endl;
    // fetch
    }
    return 0;
}