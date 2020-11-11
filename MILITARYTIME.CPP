#include <iostream>
#include <string>
using namespace std;

                                                                           //Today TASK                      

/* You want to convert the time from a 12 hour clock to a 24 hour clock. If you are given the time on a 12 hour clock, you should output the time as it would appear on a 24 hour clock.  

Task:  
Determine if the time you are given is AM or PM, then convert that value to the way that it would appear on a 24 hour clock.

Input Format: 
A string that includes the time, then a space and the indicator for AM or PM.

Output Format: 
A string that includes the time in a 24 hour format (XX:XX)

Sample Input: 
1:15 PM

Sample Output: 
13:15    */

                                                   //:Lets do the TASK......


int main() {

int hour;
int  mins;
int zero=0;
char space;
string amorpm=" ";

{

cin>>hour>>space>>mins>>amorpm;

}

  if(amorpm == "PM" )
{

if(hour < 12)
{
hour+=12;
}

else
{
    
    hour-=12;
}
    
    if(hour<10 && mins<10)
    
    {
    
    cout<<zero<<hour<<space<<zero<<mins;
    
    }

else if(hour>12  &&  mins>10)
{
    
    cout<<hour<<space<<mins;
    
}

}
else if(amorpm == "AM")
{

if(hour >= 12)
{
hour+=12;
}

}


if(hour<10 && mins<10)
{

     cout<<zero<<hour<<space<<zero<<mins;
    }
    else if(hour<10 && mins>10)
    {
    cout<<zero<<hour<<space<<mins;
    
  }
     else if(hour>10 && mins<10)
     {
         cout<<hour<<space<<zero<<mins;
     }
  
    return 0;
}
