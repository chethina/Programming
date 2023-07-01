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

    cout << "\n\n\n\n\n\n\n\n\n";

    int lasteliment = l1.at(l1.size()-1);
    l1.pop_back();
    std::cout << "Popped value: " << lasteliment << std::endl;



    cout << "\n\nLast number : " << l1.at(l1.size()-1) << "     " << "New Size of the Vector : " << l1.size() ;

    l1.clear();

    if (l1.empty()) {
    cout << "\n\n" << "\nVector is Empty..  :(";
    }
    else {
    cout << "\n\n" << "\nVecotor is Not Empty.. :)";
    }

    cout << "\n\n\n\n\n\n\n\n\n\n\n";

    return 0;
    
}