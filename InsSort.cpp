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
    
    int j,temp;
    
    for(i=0;i<n-1;i++){
        for(j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
            else{
                break;
            }
        }
    }

    cout<<"after sorting : ";

    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}