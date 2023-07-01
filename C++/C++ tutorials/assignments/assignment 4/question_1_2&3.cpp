#include<iostream>
using namespace std;

int main(){
    string myfirstString= "User's name is: " ;
    string username;
    string full;
    
    cout << myfirstString;
    cin >> username;
    full = myfirstString + username ;
    cout << full;
}