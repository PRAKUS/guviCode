/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Pramod
 *
 * Created on April 2, 2019, 7:59 PM
 */
#include <cstdlib>
#include<iostream>

using namespace std;

int main(int argc, char** argv) {
    string data;
    int b=0;
    cin>>data;
    char a[data.length()];
    for (int i=data.length();i>=0;i--)
    {   
        
        a[i]=data[b];
        b++;
        
    }
    for(int i=0;i<=data.length();i++)
    {
        cout<<a[i];
    }
    //string reverse(a);
    //cout<<reverse;
    //cout<<endl;
    return 0;
}
