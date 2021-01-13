#include<iostream>
using namespace std;


/* *********************************** creating NODE ************************************* */
class node{  // struct in c  = class in c++
    public:
        int data;
        node* link;

        node(int value){   // this is called a constructor
            data = value;
            link = NULL;
        }
};

/* ********************************** insering element at the tail **************************** */
void insertAtTail(node* &head,int value){
    node* n = new node(value);  // malloc in c = new in c++

    if(head==NULL){
        head = n;
        return ;
    }

    node* temp = head;
    while(temp->link != NULL){
        temp = temp->link;
    }
    temp->link = n;
}

/************************************ inserting element in the front ******************************** */
void insertAtHead(node* &head,int value){
    node* n = new node(value);

    if(head==NULL){
        head = n;
        return;
    }

    n->link = head;
    head = n;
}

/* ************************************* function that will print linked list ****************************** */
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data <<  "->";
        temp = temp->link;
    }
    cout<<"NULL"<<endl;
}

/* ************************************* searching in Linked list ********************************* */

bool search(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(key == temp->data){
            return true;
        }
        temp = temp->link;
    }
    return false;
}
/* ************************************** deletion from the begining **************************** */
void deleteFromBegin(node* &head){
    node* todeleteNode = head;
    head = head->link;
    delete todeleteNode;
}

/* ***************************************** delete nth node ************************************* */
void deletion(node* &head , int value){

    if(head==NULL){
        cout << "underflow" << endl;
        return;
    }

    if(head->next==NULL){
        deleteFromBegin(head);
        return;
    }
    
    node* temp = head;
    while(temp->link->data != value){
        temp = temp->link;
    }
    node* todeleteNode = temp->link;
    temp->link  = temp->link->link;
    delete todeleteNode;
}
int main(){

    node* head = NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtHead(head,5);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
  //  cout << search(head,4) << endl;
     //  deleteFromBegin(head);
  //  deletion(head,3);
   /// display(head);

    return 0;
}