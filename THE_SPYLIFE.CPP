#include <iostream>
#include <cstring>

using namespace std;

/* You are a secret agent, and you receive an encrypted message that needs to be decoded. The code that is being used flips the             message backwards and inserts non-alphabetic characters in the message to make it hard to decipher.

Task: 
   Create a program that will take the encoded message, flip it around, remove any characters that are not a letter or a space,
       and output the hidden message.

                                                Input Format:  
                           A string of characters that represent the encoded message.

                                             Output Format: 
                        A string of character that represent the intended secret message.

                                             Sample Input: 
                                      d89%l++5r19o7W *o=l645le9H

                                             Sample Output: 
                                             Hello World */
                                             
                                           //Lets Do the TASK...

int main() {
    
    int j=1,len=0,k=1;
    
    int temp=0;
    
    string arr,ans,ans1;
    
    getline(cin,arr);
    
    len=arr.length();
    
    
    
    for(int i=0 ; i <len ; i++)
    {
        if(((arr[i]>64 &&  arr[i]<91 ) ||
    
         (arr[i]>96 && arr[i]<123)) || (arr[i] == 32)  ) 
        {
        ans[k] = arr[i];
        k++;
        }
    }
    
    temp=k;
    
    
  for(int i=0 ; i<=temp ; i++)

{
    
    swap(ans1[j] , ans[k]);
    
    j++;
    k--;
    
    
}


for(int r=1+1 ; r<=temp ; r++)
    {
        
    cout<<ans1[r];
    
    }
    
	return 0;
}
