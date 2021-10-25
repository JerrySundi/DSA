#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
}*first, *newnode, *temp, *temp1, *temp2;

Node *create(int);
void insert(Node*);
void display(Node*);

int main(){
    int n;
    char ch = 'y';

    Node *first = NULL;

    while(ch=='y' || ch == 'Y'){
        cout<<"enter the no: ";cin>>n;
        newnode = create(n);

        insert(newnode);
        display(newnode);
        cout<<"\n";
        cout<<"wanna continue: ";cin>>ch;
    }

}

Node *create(int x){
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    return temp;
}

void insert(Node *nn){
    if (first == NULL){
        first = nn;
        temp1 = first;
    }
    else{
        temp1->next = nn;
        temp1 = nn;
    }
}

void display(Node *nn){
    temp2 = first;
    while(temp2 != NULL){
        cout<<temp2->data<<"->";
        temp2 = temp2->next;
    }
    cout<<"NULL\n";
}