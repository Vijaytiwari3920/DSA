#include<iostream>
using namespace std;

class stack{
public:
   int *arr;
   int top = -1 ;
   int size ;

   stack(int val){
        this -> size = val;
        arr = new int[size];
   }
   void push(int val){
        if(top < 1000){
            top++;
            arr[top] = val;
        }
        else cout<<"OverFlow"<<endl;
   }

    int pop(){
        if(top == -1) cout<< "Stack Underflow";

        else{
            int x = arr[top--];
            return x;
        }
        return 0;
    }

    int Peek(){
        return arr[top];
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }
};

int main(){
    stack st(10);

    st.push(15);
    st.push(22);
    st.push(18);
    st.push(19);
    st.push(24);
    st.push(13);

    while (st.top != -1)
    {
        cout << st.pop() <<endl;
    }
    return 0;

} 
