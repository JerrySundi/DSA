#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
}*newnode,*temp, *temp1, *temp2, *first, *tempcirc, *tempdis, *tempdis1, *circll;

Node *create(int);
void insert(Node*);
void display(Node*);
void circular();
void displayll();

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
	circular();
	displayll();

    
}
void circular(){
	tempcirc = first;
	while(tempcirc->next != NULL){
		tempcirc = tempcirc->next;
	}
	tempcirc->next = first;
	
}

void displayll(){
	tempdis = first->next;
	cout<<first->data<<"->";
	while(tempdis != first){
		cout<<tempdis->data<<"->";
		tempdis = tempdis->next;
	}
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


