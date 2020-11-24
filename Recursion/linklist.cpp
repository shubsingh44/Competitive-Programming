#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *next;
};
struct node *start;
struct node *reverseinpair(struct node *temp){


}
struct node *reverserecursion(struct node *temp){
     if(temp->next==NULL)
     {
       start=temp;
       return temp;
     }
     struct node *prev=reverserecursion(temp->next);
     prev->next=temp;
     temp->next=NULL;
     return temp;
}

struct node *reverseiterative(struct node *start){
     struct node *current,*next,*prev=NULL;
     current=start;
     while(current!=NULL){
         next=current->next;
         current->next=prev;
         prev=current;
         current=next;
      }
         start=prev;
         return start;
}

int main(){

    struct node *temp,*end;
    start=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=value;
        if(start==NULL){
           start=temp;
           end =temp;
        }
        else{
            end->next = temp;
            end = temp;
         }
         end->next=NULL;
    }
    temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

   start = reverseiterative(start);


    temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    temp=start;
    reverserecursion(temp);
    temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    temp=start;
    reverseinpair(temp);
    temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
