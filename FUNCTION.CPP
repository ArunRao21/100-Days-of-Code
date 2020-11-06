#include<stdio.h>            //no return without arrguments
#include<conio.h>
/*void example();
void main()
{
example();
getch();
}
void example()
{
int a,b,c;
scanf("%d%d",&a,&b);
c=a+b;
clrscr();
printf("sum=%d",c);
}*/

				//no return with arrguments

/*void example(int n);
void main()
{
int n;
clrscr();
scanf("%d",&n);
example(n);
getch();
}
void example(int n)
{
if(n%2==0)
printf("the entered n value is positive");
else
printf("\nthe entered n value is negative");
}*/


			   //retrun type without arrguments

/*int fac();
void main()
{
clrscr();
printf("fibo=%d",fac());
getch();
}
int fac()
{
int i=0,n,f=0;
printf("enter the n value=");
scanf("%d",&n);
while(i<=n)
{
f+=i;
i++;
}
return f;
}*/
				//return type with arrgument

/*int sum(int,int);
void main()
{
int a,b;
clrscr();
scanf("%d%d",&a,&b);
printf("the sum is=%d",sum(a,b));
getch();
}
int sum(int a,int b)
{
return (a+b);
}*/
			  //return type with arrguments

/*int ams(int);
void main()
{
int s;
clrscr();
printf("\n\`nthe entered value is =%d",ams(s));
getch();
}
int ams(int s)
{
int n,r,t;
scanf("%d",&n);
t=n;
while(n>0)
{
r=n%10;
s=s+(r*r*r);
n=n/10;
}
clrscr();
if(t==s)
printf("the entered value is a amstrong number");
else
printf("the entered value is not a amstrong number");
return s;
}*/

/*void main()                 //amstrong number
{
int r,n,temp,s=0;                  //[0,1,153,370]
clrscr();
printf("enter the n value=");            //=(1)cube+(5)cube+(3)cube
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
s=s+(r*r*r);
n=n/10;
}
if(temp==s)
printf("the entered value is a amstrong number");
else
printf("the entered value is not a amstrong number");
getch();
}*/
