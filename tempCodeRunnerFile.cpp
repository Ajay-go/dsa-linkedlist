
    void DeleteEnd(){
        node*temp=head;
        for(int i=0;i<size-1;i++){
                temp=temp->next;
            }
            temp->next=NULL;
    }
    void DeleteAt(int idx){
        node*temp=head;
        for(int i=0;i<idx-1;i++){
            temp=temp->next;