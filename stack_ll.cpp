#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int data;
        Stack *next;
}*temp, *temp1;

Stack *top = NULL;

Stack *insert(int);
void display();
void pop();

int main(){
    int n;
    char ch = 'y';

    while(ch=='y' || ch=='Y'){
        cout<<"enter the no: ";cin>>n;
        insert(n);
        cout<<"the current linked list is : \n";
        display();
        cout<<"wanna continue: ";cin>>ch;
    }
    cout<<"wanna pop ? ";cin>>ch;
    if (ch == 'y' || ch== 'Y'){
        pop();
        display();
    }
}

Stack *insert(int n){
    Stack *temp = new Stack();
    temp->data = n;
    temp->next = top;
    top = temp;
    return temp;
}

void display(){
    temp1 = top;
    
    while(temp1 != NULL){
        cout<<temp1->data<<"<-";
        temp1 = temp1->next;
    }
    cout<<"NULL";
    cout<<endl;
}

void pop(){
    top = top->next;
}




