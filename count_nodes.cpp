#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
}*newnode,*temp, *temp1, *temp2, *first, *tempcount;

Node *create(int);
void insert(Node*);
void display(Node*);
void countnodes();


int main(){
    int data;

    Node *first = NULL;
    char ch = 'y';

    while(ch=='y'||ch=='Y'){
        cout<<"enter data: ";cin>>data;

        newnode = create(data);

        if (newnode == NULL){
            cout<<"data didnt create :/";
        }
        else{
            cout<<"data created successfully";
        }
        cout<<"inserting data into the node :)";
        insert(newnode);

        cout<<"updated linked list: \n\n";
        display(newnode);
        cout<<"wanna continue: ";cin>>ch;
    }
    countnodes();
}
void countnodes(){
    tempcount = first;
    int a=0;
    while(tempcount != NULL){
        if (tempcount != NULL){
            tempcount = tempcount->next;
            a++;
        }
    }
    cout<<"no of nodes: "<<a;
}


Node* create(int x){
    temp = new Node();
    temp->data = x;
    temp->next = NULL;
    return temp;
}

void insert(Node* nn){
    if (first == NULL){
        first = nn;
        temp1 = first;
    }
    else {
        temp1->next =nn;
        temp1= nn;
    }
}

void display(Node* nn){
    temp2 = first;
    while(temp2 != NULL){
        cout<<temp2->data<<"->";
        temp2 = temp2->next;
    }
    cout<<"NULL";
    cout<<"\n";
}
