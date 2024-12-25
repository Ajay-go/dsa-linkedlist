#include<iostream>
using namespace std;


class Node{
public:
    int val;
    Node*Next;

    //constructor
    Node(int val){
        this->val=val;
        this->Next=NULL;
    }
};
int main(){

    Node b(20);
    Node a(10);
    Node c(30);
    Node d(40);
    a.Next=&b;
    b.Next=&c;
    c.Next=&d;

    cout<<a.Next<<endl;
    cout<<&b;

    // cout<<"a-->"<<a.Next<<endl;
    // cout<<((a.Next)->val);
    
    // Node temp=a;

    // while(temp.Next!=NULL){
    //     cout<<temp.val<<endl;
    //     temp = *((temp.Next));
    // }

}