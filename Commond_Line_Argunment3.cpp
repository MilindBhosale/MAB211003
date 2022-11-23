#include<iostream>
using namespace std;

int main(int argc,char *argv[])
{
    int temp,result=1;
    
   cout<<"You have enter "<<argc<<" argunments\n";
   for(int i=1;i<argc;i++)
   {
    temp=strtol(argv[i],0,10);
    result=result*temp;
   }
   cout<<result;
   
   return 0;
}