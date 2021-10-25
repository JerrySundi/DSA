#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
}*first, *newnode, *temp, *temp1, *temp2, *temp3, *delnode, *temp4;

Node *create(int);
void insert(Node*);
void display(Node*);
void remove(Node*, int);

int main(){
    first = NULL;
    int newdata;
    char ch = 'y';

    while(ch=='y'||ch=='Y'){
        cout<<"enter new data: ";cin>>newdata;
        newnode = create(newdata);

        if (newnode == NULL){
            cout<<"node havent been created ";
        }
        else{
            cout<<"node have been created successfully ";
        }

        cout<<"inserting node into the linked list :)";
        insert(newnode);

        display(newnode);

        cout<<"do you wish to continue :";cin>>ch;
        
    }
    int re;
    cout<<"what value to remove: ";cin>>re;
    
    remove(first, re);
    display(first);
}
void remove(Node *head, int re){
    temp4 = first;
    temp3 = first;
    int len=0, i=1;

    while(temp4 != NULL){
        if (temp4->data != re){
            temp4 = temp4->next;
            len++;
        }
        else{
            break;
        }
    }
    for(i=0;i<len;i++){
        temp3= temp3->next;
    }
    /*while(i<len){
        temp3 = temp3->next;
        i++;
    }*/
    delnode = temp4;
    temp3->next = temp4->next;
    delete delnode;
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
    cout<<"NULL";
    cout<<"\n";
}