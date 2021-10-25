#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

void display(Node *nn){
    while(nn != NULL){
        cout<<nn->data<<"->";
        nn = nn->next;
    }
    cout<<"NULL";
}

int main(){
    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;

    first = new Node();
    second = new Node();
    third = new Node();

    first->data = 4;
    first->next = second;

    second->data = 6;
    second->next = third;

    third->data = 9;
    third->next = NULL;

    display(first);

}