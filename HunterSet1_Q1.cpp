#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input;
    cin>>input;
    char data[input.length()];
    for (int i=0;i<=input.length();i++)
    {
        data[i]=input[i];
        //cout<<data[i];
        if(i>1)
        {
            if(data[i-1]==data[i])
            {
                cout<<data[i];
            }
            
        }
        
    }
    
}
