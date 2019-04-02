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
    
    string input;
    cin>>input;
    string data[21] ={" ","I","II","III","IV","V","VI","VII","VIII","XI","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX"};
    for (int i=0;i<=20;i++)
    {   
       if(input==data[i])
       {
           cout<<i;
       }
    }
    
    
    return 0;
}
