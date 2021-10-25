#include <iostream>
using namespace std;


void display(int arr[], int n);
void search(int arr[], int n, int ss);
void deletee(int arr[], int n, int del);
void insert(int arr[], int n, int a, int b);

int main(){
    int arr[100];
    int i;
    int n;
    cout<<"length of array : ";cin>>n;
    for(i=0;i<n;i++){
        cout<<"["<<i<<"]: ";cin>>arr[i];
    }

    int a,b;
    cout<<"enter element to insert : ";cin>>a;
    cout<<"insert at what position: ";cin>>b;
    insert(arr, n, a,b);
    
    int x;
    cout<<"what element to delete : ";cin>>x;
    deletee(arr, n, x);
    cout<<endl;
    display(arr, n);

    int ss;
    cout<<"\nEnter element to search: ";cin>>ss;
    search(arr,n, ss);
}

void insert(int arr[], int n, int a, int b){
    int i;
    if(b>n+1 || b<=0)
    {
        cout<<"cannot insert :/";
    }
    else
    {
        for(i=n; i>=b; i--){
            arr[i] = arr[i-1];
        }
        arr[b-1] = a;
        n++;
        cout<<"updated array : ";
        for(i=0; i<n; i++)
        {
           cout<<arr[i]<<"  ";
        }
    }
}

void deletee(int arr[], int n, int x){
    int i,j;
    int f=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            for(j=i;j<n;j++){
                arr[j] = arr[j+1];
            }
            f++;
            i--;
            n--;
        }
    }
    if(f==0)
        cout<<"\ninvalid element";
    else
        cout<<"\nElement Deleted Successfully!";

}

void display(int arr[], int n){
    int i;
    for(i=0; i<n; i++){
       cout<<arr[i]<<"  ";
    }
}

void search(int arr[], int n, int ss){
    
    int f = 0;
    int l = n-1;
    int m = (f+l)/2;
    while(f <= l)
    {
        if(arr[m]<ss)
            f = m+1;
        else if(arr[m]==ss)
        {
            cout<<"\nposition of "<<ss<<" is : "<<m+1;
            break;
        }
        else
            l = m-1;
        m = (f+l)/2;
    }
    if(f>l)
        cout<<"\nThe number, "<<ss<<" is not found in given Array";
}