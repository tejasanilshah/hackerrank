#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> factorial(int n);
vector<int> multiply(vector<int> input, int multiplier);
void display(vector<int> input, bool isReverse);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> a, b;
    b = factorial(37);
    display(b, true);
    cout<<endl;
    return 0;
}

vector<int> multiply(vector<int> multiplicand, int multiplier){
    int accumulator = 0;
    for(int i=0;i<multiplicand.size();i++){
        accumulator = accumulator + (multiplicand[i]*multiplier);
        multiplicand[i] = accumulator%10;
        accumulator = accumulator/10;
    }
    while(accumulator>0){
        multiplicand.push_back(accumulator%10);
        accumulator = accumulator/10;
    }
    return multiplicand;
}

void display(vector<int> input, bool isReverse){
    if(isReverse){
        for(int i=input.size()-1;i>=0;i--){
            cout<<input[i];
        }
    } else {
        for(int i=0;i<input.size();i++){
            cout<<input[i];
        }
    }
}

vector<int> factorial(int n){
    vector<int> result;
    result.push_back(1);
    for(int i=1;i<=n;i++){
        result = multiply(result, i);
    }
    return result;
}