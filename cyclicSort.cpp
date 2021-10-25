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

    // 0 1 2 3 4 5

    // 1 2 3 4 5 6 
    // 4 1 3 2 6 5
    int temp;
    for(i=0;i<n;i++){
        if (arr[i] == i+1){
            continue;
        }
        else{
            temp = arr[i];
            int z = arr[i]-1;
            arr[i] = arr[z];
            arr[z] = temp;
        }
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    
}