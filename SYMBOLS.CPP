#include <iostream>
#include <cstring>
using namespace std;

                             /*  Take a text that includes some random     
                   symbols and translate it into a text that has none of them.  
                   The resulting text should only include letters and numbers.  */
     
     
                                     /*       Sample Input: 
                   #l$e%ts go @an#d@@ g***et #l#unch$$$     */


                                /*         Sample Output: 
                                      lets go and get lunch     */

                                   // Lets Do the Task.......

int main() {


string input ,output ;

char  inout[40] ;

int len , x=0;

getline(cin,input);

len=input.length();



for(int i=0 ; i<=len ; i++)


  {
    if((( input[i] >= 65 && input[i] <= 122) || 
     
     (input[i] == 32)) ||
          
           (input[i] >= 48 && input[i] <= 57 ))
           
        {


      inout[x]=input[i];
      
      x++;

}

}

for( int i=0 ; i<x ; i++ )
{
    
    cout<<inout[i];
    
}

    return 0;
}