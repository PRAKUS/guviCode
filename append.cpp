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
int main(int argc, char** argv) {
    string data;
    cin>>data;
    char a[data.length()];
    for (int i=0;i<=data.length();i++)
    {   
        
        a[i]=data[i];
      
        
    }
    
    string reverse(a);
    reverse.append(1u,'.');
    cout<<reverse;
    //cout<<endl;
    return 0;
}

