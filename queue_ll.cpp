#include <iostream>
using namespace std;

class Queue{
    public:
        int data;
        Queue *next;
}*temp, *temp1;

Queue *first = NULL;
Queue *last = NULL;

void insert(int);
void display();

int main(){
    int n;
    char ch='y';
    while(ch=='y'||ch=='Y'){
        cout<<"enter no: ";cin>>n;
        insert(n);
        cout<<"\n linked list: ";
        display();
        cout<<"wanna continue ? ";cin>>ch;
    }
}

void insert(int n){
    if(last == NULL){
        last->next = NULL;
        last->data = n;
        first = last;
        return;
    }
    else{
        temp = new Queue();
        last->next = temp;
        temp->data = n;
        temp->next = NULL;
        last = temp;
    }
}

void display(){
    temp1 = first;
    while(temp1 != NULL){
        cout<<temp1->data<<"->";
        temp1 = temp1->next;
    }
    cout<<endl;
}