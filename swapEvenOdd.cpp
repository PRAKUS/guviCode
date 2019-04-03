/* 
 * File:   main.cpp
 * Author: Pramod
 *
 * Created on April 2, 2019, 7:59 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
int swap(char a,char b)
{
    char temp1=a;
    char temp2=b;
    char temp3=temp1;
    temp1=temp2;
    temp2=temp3;
    cout<<temp1<<temp2;
    
    
}
int main(int argc, char** argv) {
    
    string input;
    cin>>input;
    char data[input.length()];
    for (int i=0;i<=input.length();i++)
    {   data[input.length()];
        data[i]=input[i];
        if(i%2!=0)
        {   
            swap(data[i-1],data[i]);
        }
    }
    
    
    return 0;
}
