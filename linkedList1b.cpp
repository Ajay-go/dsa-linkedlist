#include<iostream>
using namespace std;

class node{
   public:
        int val;
        node*next;

    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int count(node*head){
    node* temp=head;
    int count=0;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;

}
int main(){
    node* a= new node(10);
    node* b= new node(20);
    node* c= new node(30);
    node* d= new node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    

    cout<<a->next->next->val;
    

    // node *temp=a;

    // while(temp!=NULL){
    //     cout<<"["<<temp->val<<"]->";
        
    //     temp=temp->next;
    // cout<<count(a);
}