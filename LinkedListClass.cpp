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

class Linkedlist{
public:
    node*head;
    int size;

    Linkedlist(){
        this->head=NULL;
        this->size =0;
    }

    void display(){
        node*temp= head;

        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    void InsertATend(int val){
        node *x=new node(val);
        
        if (head==NULL)head=x;
        else {
            node*temp=head;

            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=x;
            
        }
        size++;
    }
    void InsertAtStart(int val){
        node*temp=new node(val);

        if(head==NULL)head=temp;

        else {
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void InsertAt(int pos,int val){
        if(pos==0)InsertAtStart(val);
        else if (pos==size-1) InsertATend(val);

        else {
            node *x=new node(val);
            node*temp=head;

            for(int i=0;i<pos-1;i++){
                temp=temp->next;
            }
            x->next=temp->next;
            temp->next=x;
        }
        size++;
    }
    void GetValueAT(int idx){
        node*temp=head;
        for(int i=0;i<idx;i++){
                temp=temp->next;
            }
            cout<< temp->val;


    }
    void deleteHead(){
        if(size==1){
            head=NULL;
            size--;
        }
        else if(size==0)cout<<"Empty list"<<endl;
        
        else
        {
            head=head->next;
            size--;
        }
        
    }
    void DeleteEnd(){
        node*temp=head;
        for(int i=0;i<size-2;i++)
        {
            temp=temp->next;
        }
            temp->next=NULL;
            size--;
    }
    void DeleteAt(int idx){
        
        if(idx==size-1)DeleteEnd();
        
        if(idx==0)deleteHead();
        
        node*temp=head;
        
        for(int i=0;i<idx-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;

    size--;
    }
    
};

main(){
    
    Linkedlist l1;

    l1.InsertATend(10);
    l1.InsertATend(20);
    l1.InsertATend(30);
    l1.InsertATend(40);
    l1.InsertATend(50);
    l1.display();
    cout<<l1.size;
    cout<<endl;
    
    l1.display();
    cout<<endl;
    l1.deleteHead();
    cout<<endl;
    

    l1.display();
    
    
}