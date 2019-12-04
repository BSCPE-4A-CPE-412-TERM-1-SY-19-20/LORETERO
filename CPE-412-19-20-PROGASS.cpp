#include <iostream>
using namespace std;

int main() 
{
  int j=0, state=0;     
  int table[8][2]={{1,5},{1,2},{2,3},{4,3},{4,4},{6,5},{7,6},{4,4}};     
  int input; 
  int flag=0;     
  char st[100]; 
  cin>>st;     
  while(st[j]!='\0')     
  {         
    switch (st[j])         
    {             
      case'a':                 
        input=0;                 
        break;             
      case'b':                 
        input=1;                 
        break;         
     }         
     state=table[state][input];         
     if(state==4)         
     {             
       flag=1;             
       break;         
     }         
     j++;     
   }      
   if(flag==1)     
   {         
     cout<<"Accepted";     
   }     
   else     
   {         
     cout<<"Not Accepeted";     
   }
    return 0;
}
