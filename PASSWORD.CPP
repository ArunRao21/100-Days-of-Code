#include<iostream.h>
#include<conio.h>
#include<string.h>

	// This program is about password validation:
	  // Takes a string as input Next,
	    // The password should contain atleast:
	      // Atleast a Length of 7 chars, 2 Numbers , 2 Symbols:
		// Example for strong and weak password:
		  //   Strong passsword=Hello@21$
		    //   Weak password=Hello3$
		      //Lets write a code for This Task:

void main()

{

char PW[20];
int Nums=0,Symbols=0,Length;
clrscr();

cout<<"Enter the Pass Word : ";
cin>>PW;
cout<<"\n";

Length=strlen(PW);

if(Length>=7)
for(int i=0;i<Length;i++)
{
     if( PW[i]=='!' ||  PW[i]=='@' ||  PW[i]=='#'  ||
	PW[i]=='$'  ||  PW[i]=='%'  ||   PW[i]=='$' ||
		   PW[i]=='*'  ||  PW[i]=='&' )

	  Symbols++;

     else if( PW[i]>=48 && PW[i]<=57 ) //

	  Nums++;
}

if( Symbols>1 && Nums>1)
cout<<"Strong Pass Word";
else
cout<<"Weak Pass Word";

getch();
}


