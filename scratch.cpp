#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
typedef tuple<int,int> place;

int main() {
    unordered_map<place,bool> myMap = {
        {make_tuple(1,5),true},
        {make_tuple(3,4),true}
    };
    cout << "myMap contains:" << endl;
    for (auto& x: myMap){
      cout << x.first << ": " << x.second << endl;
    }
    cout << endl;
    return 0;
}
