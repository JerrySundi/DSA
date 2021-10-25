#include <bits/stdc++.h>
using namespace std;
#define LEN 100

class Stack{
    int top;
    public:
        Stack(){
            top=-1;
        }
        int arr[LEN];
        void insert(int);
        void display();
        void pop();
};

void Stack :: insert(int n){
    arr[++top] = n;
}

void Stack :: display(){
    int i =0;
    for(i=0;i<=top;i++){
        cout<<arr[i]<<"\t";
    }
}

void Stack :: pop(){
    top--;
}

int main(){
    int n;
    Stack ss;
    char ch = 'y';
    while(ch =='y'|| ch == 'Y'){
        cout<<"enter the no: ";cin>>n;
        ss.insert(n);
        cout<<"wanna continue: ";cin>>ch;
    }
    ss.display();
    cout<<"\nwanna pop ? ";cin>>ch;
    if (ch == 'y' || ch == 'Y'){
        ss.pop();
        ss.display();
    }
    
}