#include <vector>
#include <iostream>

using namespace std;


int main() {
    vector<vector<int>> Vector;
    vector<int> firstVector = {1, 2, 3, 4};
    vector<int> secondVector = {10, 23};
    vector<int> thirdVector = {1, 2, 3, 6, 7, 8, 9};

    Vector.push_back(firstVector);
    Vector.push_back(secondVector);
    Vector.push_back(thirdVector);

    return 0;
}
