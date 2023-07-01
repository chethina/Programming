#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> l1;

    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30.5);
    l1.push_back(40);
    l1.push_back(50);

    int lasteliment = l1.at(l1.size()-1);
    l1.pop_back();
    std::cout << "Popped value: " << lasteliment << std::endl;

    return 0;
    
}