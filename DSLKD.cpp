#include<bits/stdc++.h>
using namespace std;
struct Dathuc{
    int year;
    string msv;
    string name;
};
struct node{
    Dathuc data;
    struct node *next;
};
// Tao node tiep theo
node *makeNode(Dathuc s)
{
    node *newNode=new node();
    newNode->data=s;
    newNode->next=NULL;
    return newNode;
}
//Duyet ds lien ket
void duyet(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data.msv<<" "<<head->data.name<<" "<<head->data.year<<endl;
        head=head->next;
    }
}
// Size dslk
int size(node *head)
{
    int dem=0;
    while(head!=NULL)
    {
        dem++;
        head=head->next;
    }
    return dem;
}
// Them node vao dau danh sach
void  pushFront(node *&head,Dathuc s)
{
    node *newNode=makeNode(s);
    // Buoc 1: phan next cua newNode-> head;
    newNode->next=head;
    // Buoc 2: capnhap node head => newNode
    head=newNode;
}
//Them node vao cuoi dslk
void pushBack(node *&head,Dathuc s)
{
    node *temp=head;
    node *newNode=makeNode(s);
    if(temp==NULL) {
        head=newNode;
        return;
    }
    while(temp->next!=NULL)
    {
      temp=temp->next;  
    }
    temp->next=newNode;
}
// Chen node vao giua dslk
void insertNode(node *&head,int k,Dathuc s)
{
    int n=size(head);
    if(k<1||k>n+1) return;
    if(k==1) {
        pushFront(head,s);
        return;
    }
    node *temp=head;
    for(int i=1;i<=k-2;i++) temp=temp->next;
    node *newNode=makeNode(s);
    newNode->next=temp->next;
    temp->next=newNode;
}
void popFront(node *&head)
{
    if(head==NULL) return;
    node *temp=head;
    head=head->next;
    delete temp;
}
void popBack(node *&head)
{
  if(head==NULL) return;
  node *temp=head;
  if(temp->next==NULL)
  {
    head=NULL;
    delete temp; return;
  }
  while(temp->next->next!=NULL)
  {
    temp=temp->next;
  }
  node *last=temp->next;
  temp->next=NULL;
  delete temp;
}
void erase(node *&head,int k)
{
 int n=size(head);
 if(k<1||k>n) return;
 if(k==1) {
    popFront(head);
    return;
 }
 node *tmp=head;
 for(int i=1;i<=k-2;i++)
 {
   tmp=tmp->next;
 }
 node *last=tmp->next;
 tmp->next=last->next;
 delete last;
}
main()
{
    node *head=NULL;
    string MSV;
    while(getline(cin,MSV))
    {
        if(MSV=="") break;
        Dathuc s;
        s.msv=MSV;
        getline(cin,s.name);
        cin>>s.year;
        cin.ignore();
        pushBack(head,s);
    }
    duyet(head);
    Dathuc x;
    getline(cin,x.msv);
    getline(cin,x.name);
    cin>>x.year;
    pushFront(head,x);
    duyet(head);
}