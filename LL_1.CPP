#include<iostream.h>
#include<conio.h>

	/* Every NODE contains DATA part (int,char..etc)
				  and
		  ADDRESS part (*)in Pointer variable...

			  ________ _________
			 |        | ADDRESS |
			 |  DATA  | (*)part |
			 |________|_________|

   Every linked list Starts with HEADER and Ends with TAIL..
	* Header is pointing to the 1st Node of the linked list..
	* Tail is pointing to the last Node of the linked list...
	* The tail always end with NULL...
   inbetween the header and tail , we are going to insert the Nodes...
		    .... And form the linked list ....  */

  /* In This programm i am going to insert some numbers called (Append).... */




class node
{

public:
int data;
node *nxt;

node(int data)
{
    this->data=data;
    nxt=NULL;
    }
};

class linkedlist
{
private:
node *head;
node *tail;
int size;

public:
linkedlist()
{
head=NULL;
tail=NULL;
size=0;
}



void append(int data)
{
node *n=new node(data);
if(head == NULL)
{
head =n;
tail =n;
}
else
{
 tail->nxt=n;
 tail=n;

}
size++;
}



void print()
{
node *n=head;

while (n != NULL)
{
cout<<n->data<<" "<<endl;
n=n->nxt;
}
cout<<"size of inserted Nodes : "<<size<<" ";
}

};


void main()
{
clrscr();
linkedlist ll;

ll.append(21);
ll.append(22);
ll.append(23);

ll.print();

getch();
}

