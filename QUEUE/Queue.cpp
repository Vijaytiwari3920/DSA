#include<iostream>
using namespace std;

class Queue{
public:
   int *arr;
   int size ;
   int front = -1 ;
   int rear = -1 ;
   

   Queue(int val){
        this -> size = val;
        arr = new int[size];
   }

   void push(int val){

        if (front == -1 && rear == -1) {
            arr[++rear] = val;
            front = rear;
        }
        else if(rear < size){
            arr[++rear] = val;
        }
        else cout<<"OverFlow"<<endl;
   }

    int pop(){
        if(front > -1 && front <= rear){
            int x = arr[front++];
            return x;
        }
        else{
            front= rear = -1;
            cout<< "Stack Underflow";
        }
        return 0;
    }
};

int main(){
    Queue q(10);

    q.push(15);
    q.push(22);
    q.push(18);
    q.push(19);
    q.push(24);
    q.push(13);

    while (q.rear != -1)
    {
        cout << q.pop() <<endl;
    }
    return 0;

} 