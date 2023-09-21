#include<iostream>
#include<math.h>
using namespace std;

int main()
{
     int a,c; 
     cout<<"Enter any num    ";
     cin>>a;
       if(a<=1)
      cout<<"Neither C&P";
       c=2;
       while (c<=sqrt(a))
       {
          if(a%c==0)
          cout<<"NP"; 
          break;
          c++;
          
       } 
       if(c>=1)
          cout<<"P";
        return 0;
}