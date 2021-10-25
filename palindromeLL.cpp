#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;
}*first, *temp, *newnode,*temp1, *temp2,*temp3, *temp4;

Node *create(int);
void insert(Node*);
void display(Node*); 
void palindrome();

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
    palindrome();
}

void palindrome(){
    int len = 0;
    temp3 = first;
    while(temp3 != NULL){
        len++;
        temp3 = temp3->next;
    }
    temp4 = first;
    int arr[len];
    int i=0;
    while(i != len){
        arr[i] = temp4->data;
        i = i+1;
        temp4 = temp4->next;
    }
    int check = 0;
    for(i=0;i<len;i++){
        if(arr[i] == arr[len-1-i]){
            continue;
        }
        else{
            check =1;
        }
    }


    if(check == 1){
        cout<<"not palindrome";
    }
    else{
        cout<<"palindrome";
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

