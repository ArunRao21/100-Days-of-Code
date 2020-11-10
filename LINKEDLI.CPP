#include<iostream.h>
#include<conio.h>

class node{
public:
int data;
node *next;
};


void printelements(node *n)
{
while (n!=NULL)
{
cout<<n->data<<" ";
n=n->next;
}
}

void main()
{

clrscr();

node *head=NULL;
node *sec=NULL;
node *third=NULL;

head=new node();
sec=new node();
third=new node();

head->data=21;
head->next=sec;

sec->data=22;
sec->next=third;

third->data=23;
third->next=NULL;

printelements(head);

getch();

}