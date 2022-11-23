#include<iostream>
using namespace std;

int main(int argc,char *argv[])
{
    for(int i=1;i<=10;i++)
    {
        cout<<argv[1]<<"*"<<i<<"="<<strtol(argv[1],0,10)*i<<endl;
    }
    return 0;
}