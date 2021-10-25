#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter length of array: ";cin>>n;
    int i;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"["<<i<<"]: ";cin>>arr[i];
    }

    int lar =0;
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if (arr[i]>lar){
                lar = arr[i];
            }
        }
    }

    cout<<lar;
    
}