#include<iostream>
#include<cstring>

				//::TASK::
		  //Takes in a string, figure our the Average length:
		  // of all the words and return a number representing:
		  //   the average length.1.(Remove all punctuations).
		  //                      2.(spaces do not count).
		  // output should be convert into  Average format like:
			       //_3.28_ convert into _3_:
		 // Example sample input =can you not do that?
		 //         sample output= 3
		    // Lets do the Task...


 int main()
 {

 string str;

 int Total,space=0,letters=0,len,Average,punctuations=0;

 clrscr();

 getline(cin,str);

 len=str.length();

 for(int i=0;i<=len;i++)
  {
    if(str[i]==32)
       space++;

    else if(  str[i]==':' ||  str[i]=='.' || str[i]=='_' || str[i]=='-' ||
	      str[i]=='?' || str[i]=='"' || str[i]==';' || str[i]=='!' ||
			  str[i]=='()' || str[i]==',' )

  }

 counts+=1;

 Total=len - punctuations;

 Average=lets / counts;

 cout<<Average;

 return 0;
 }




