#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;
}*first, *temp, *newnode,*temp1, *temp2;

Node *create(int);
void insert(Node*);
void display(Node*); 

int main(){
    int newdata;
    first = NULL;
    char ch = 'y';

    while(ch=='y'||ch=='Y'){
        cout<<"enter data: ";cin>>newdata;
        newnode = create(newdata);

        if (newnode == NULL){
            cout<<"node not created :/";
        }
        else{
            cout<<"node created successfully :)";
        }
        insert(newnode);
        cout<<"\nlinked list: \n";
        display(newnode);

        cout<<"wanna continue: ";cin>>ch;
    }
}

Node *create(int x){
    temp = new Node();
    temp->data = x; 
    temp->next = NULL;
    return temp;
}

void insert(Node *nn){
    if (first == NULL){
        first = nn;
        temp1 = first;
        nn->prev = NULL;
        nn->next = NULL;
    }
    else{
        nn->prev = temp1;
        temp1->next = nn;
        temp1 = temp1->next;
    }
}

void display(Node *nn){
    temp2 = first;
    while(temp2!=NULL){
        cout<<temp2->data<<"->";
        temp2 = temp2->next;
    }
    cout<<"\n";
}

