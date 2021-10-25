#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"length of array: ";cin>>n;
    int i,j;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"["<<i<<"]: ";cin>>arr[i];
    }
    int ind = 0;
    int temp;
    int lar = arr[0];
    for(i=0;i<n;i++){
        for(j=1;j<n-i;j++){
            if (arr[j]>lar){
                lar = arr[j];
                ind = j;
            }
        }
        temp = arr[ind];
        arr[ind] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

}