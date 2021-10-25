#include <bits/stdc++.h>
using namespace std;
#define LEN 100

class Queue{
    public:
        int arr[LEN];
        int first;
        int last;
        Queue(){
            first = -1;
            last = -1;
        }
        void insert(int);
        void pop();
        void display(); 

};

void Queue :: insert(int n){
    if (last == LEN -1){
        cout<<"queue overflow :/";
        return;
    }
    if (first == -1){
        first=0;
    }
    last++;
    arr[last] = n;
}

void Queue :: pop(){
    first++;
}

void Queue :: display(){
    int i;
    for(i=first;i<=last;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int n;
    char ch = 'y';
    Queue qq;
    while(ch == 'y' || ch == 'Y'){
        cout<<"enter the no: ";cin>>n;
        qq.insert(n);
        cout<<"the current queue is: \n";
        qq.display();

        cout<<"\nwanna continue: ";cin>>ch;
    }
    cout<<"wanna pop out the element ? ";cin>>ch;
    
    if (ch == 'Y' || ch == 'y'){
        qq.pop();
        qq.display();
    }
    else{
        cout<<"finised :) ";
    }
}