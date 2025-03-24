#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *start = nullptr;

void display();
void insert_beg(int);
void insert_end(int);
void insert_after(int,int);
void delete_node(int);
void search_list();
int count();

int main(){
    int option,num,val;
    do
    {
        cout<<"\n\n ** MAIN MENU CIRCULAR LINKED LIST**";
        cout<<"\n 1. Display";
        cout<<"\n 2. Add Node at Beginning";
        cout<<"\n 3. Add Node at End";
        cout<<"\n 4. Add Node before Given Node";
        cout<<"\n 5. Delete";
        cout<<"\n 6. Search";
        cout<<"\n 7. Count";
        cout<<"\n 8. Exit";
        cout<<"\n\n Enter Your Option : ";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"linked list is ";
            display();
            break;
        case 2: cout<<"Enter Number to be Added: ";
                cin>>num;
                insert_beg(num);
                break;
        case 3: cout<<"Enter Number to be Added: ";
                cin>>num;
                insert_end(num);
                break;
        case 4: cout<<"Enter Number to be added: ";
                cin>>num;
                cout<<"\nEnter the value after which the data has to be inserted: ";
                cin>>val;
                insert_after(num,val);
                break;
        case 5: cout<<"\nEnter the value which is to be deleted: ";
                cin>>val;
                delete_node(val);
                break;
        case 6: search_list();
                break;
        case 7: count();
                break;
        }
     }
        while (option!=8);
        return 0;

}
void display(){
    struct node *ptr;
    if (start==nullptr){
        cout<<"/n linked list is empty";
        return;}
    ptr =start;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=start);
    cout<<endl;
}
int count(){
    if (start==nullptr)
    return 0;
    node* ptr =start;
    int cnt=0;
    do{
        cnt++;
        ptr=ptr->next;
    }while(ptr!=start);
    return cnt;
}


void insert_beg(int num){
    node * new_node;
    new_node=new node();
    new_node->data=num;
    if (start==nullptr){
        start=new_node;
        start->next=start;
    }else{
        node*ptr=start;
        while(ptr->next!=start){
            ptr =ptr->next;

        }
        new_node->next=start;
        ptr->next=new_node;
        start=new_node;
    }
}

void insert_end(int num)
{
    node * new_node;
    new_node=new node();
    new_node->data=num;
    if (start==nullptr){
        start=new_node;
        start->next=start;
    }else{
        node*ptr=start;
        while(ptr->next!=start){
            ptr =ptr->next;

        }
        ptr->next=new_node;
        new_node->next=start;
    }
}



void insert_after(int num,int val){
    struct node *ptr,*new_node;
    new_node=new node();
    new_node->data=num;
    ptr=start;
    if (start==nullptr){
        cout<<"empty linked list";
        return;
    }
    do {
        if(ptr->data==val) {
            new_node->next=ptr->next;
            ptr->next=new_node;
            return;
        }
        ptr=ptr->next;
    }while(ptr!=start);
    cout<<"node with value"<<val<<"not found";
}
void delete_node(int value){
    if (start==nullptr){
        cout<<"Linked List is Empty";
        return;
    }
    node*curr =start;
    node* prev = nullptr;
    if
    
}
void search_list(){
    struct node *ptr;
    int val ,pos=0,flag=-1;
    if (start!=0){
        ptr=start;
        cout<<"/n enter the value to be searched ";
        cin>>val;
        while (ptr!=nullptr){
            pos++;
            if (ptr->data==val){
                cout<<"/nvalue found at"<<pos<<"position";
                flag=1;
                break;

            }
            ptr=ptr->next;
            
        }


    }else 
    cout<<"/n empty linked list ";
    if (flag==-1)
        cout <<"value not found";

}



