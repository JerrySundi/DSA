#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
}*newnode,*temp, *temp1, *temp2, *first, *tempcount, *tempindex;

Node *create(int);
void insert(Node*);
void display(Node*);
int checknodes();
int indexnode(int);

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

        cout<<"updated linked list: ";
        display(newnode);
        cout<<"wanna continue: ";cin>>ch;
    }
    
    int len;
    len = checknodes();
    int ss, ii;
    cout<<"no to look for its index: ";cin>>ss;
    ii = indexnode(ss);
    cout<<"\n index of "<<ss <<" is: "<<ii;
    
}

int checknodes(){
     tempcount = first;
    int a=0;
    while(tempcount != NULL){
        if (tempcount != NULL){
            tempcount = tempcount->next;
            a++;
        }
    }
    return a;
}

int indexnode(int xx){
    tempindex = first;
    int index=0;
    while(tempindex != NULL){
        if(tempindex->data != xx){
            tempindex = tempindex->next;
            index = index +1;
        }
        else{
            break;
        }
    }
    return index;
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
