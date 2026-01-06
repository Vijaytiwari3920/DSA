#include<iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int val){
        this -> val = val;
        this -> next = NULL;
    }
};

void insertBegining(ListNode* &Head, int  x){
    
    ListNode* node = new ListNode(x);
    node -> next = Head ;
    Head = node;
}

void insertEnding(ListNode* &End, int  x){
    
    ListNode* node = new ListNode(x);
    End -> next = node ;
    End = node;
}

void insertPosition(ListNode* &Head, ListNode* &End, int P ,int  x){
    
    if(Head -> next == NULL ) insertBegining(Head, x);
    ListNode* temp = Head;

    while (P >1){
        P--;
        temp = temp -> next;
    }

    if (temp -> next == NULL) {
        insertEnding(End , x);
    }
    else{
        ListNode* node = new ListNode(x);
        node ->next = temp ->next;
        temp->next = node;
    } 
}

void deleteBegining(ListNode* &Head){
    if (Head == NULL) return;
    ListNode* temp = Head;
    Head = Head -> next;
    free(temp);
}

void Print (ListNode* &Head, ListNode* &End ){
    ListNode* temp = Head ;
    while (temp != NULL)
    {
        cout<< temp -> val<< " ";
        temp = temp -> next ;
    }
    cout<<"Head is :" <<Head ->val << " End is :" <<End -> val<<endl<<endl;
}
int main(){

    ListNode* Node = new ListNode(5);
    ListNode* Head = Node;
    ListNode* End = Node; 

    insertBegining(Head, 7);
    insertBegining(Head, 6);
    insertBegining(Head, 2);
    insertBegining(Head, 11);
    Print(Head ,End);

    insertEnding(End , 9);
    insertEnding(End , 4);
    insertEnding(End , 1);
    Print(Head ,End);

    insertPosition(Head, End , 4 , 65);
    insertPosition(Head, End , 5 , 54);
    Print(Head ,End);

    deleteBegining(Head);
    deleteBegining(Head);
    Print(Head ,End);

    return 0;
}