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

  /* In This programm i am going to Remove the 1st node (if the there is any n nodes).... */




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

void prepend(int data)
{
node *n=new node(data);

if(head == NULL)
{
head = n;
tail = n;
}
else
{
node *temp=head;  // temp node is used to store the head address
head = n;
n->nxt=temp;                 // see the contiues steps to under stand the concept..
}
size++;
}

void Remove_1st_node()
{
if(head != NULL)
{
node *temp=head;
head = head -> nxt;
delete temp;
size--;
}
}

void print()
{
node *n=head;

while (n != NULL)
{
cout<<n->data<<" "<<endl;
n=n->nxt;
}
cout<<"size of Nodes : "<<size<<" "<<endl;
}
clrscr();
};


void main()
{
clrscr();
linkedlist ll;

ll.append(21);
ll.append(22);
ll.append(23);

ll.print();
cout<<"\n";

ll.prepend(20);

ll.print();
cout<<"\n";

ll.remove_1st_node();

ll.print();
cout<<"\n";

getch();
}

