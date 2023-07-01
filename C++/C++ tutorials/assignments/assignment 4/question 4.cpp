#include<iostream>
#include<string>
using namespace std;

int main(){
    string myfirstString= "User's name is: " ;
    string mysecoundString= "User is ";
    string username;
    string full;
    int x;
    
    cout << myfirstString;
    cin >> username;
    full = mysecoundString + username ;
    cout << full;

    cout << "\nEnter the number of character you want to replace with space : " ;
    cin >> x;
    username[x] = ' ' ;
    full = mysecoundString + username;
    cout << full;
}