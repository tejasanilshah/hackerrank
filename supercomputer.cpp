#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPlusOfSizeKPossibleAtIJ(int i,int j, int k, char **input){
    int step=0;
    if(input[i][j]=='G'){
        while(step<=k/2){
            if( input[i][j+step]=='G' 
                && input[i][j-step]=='G'
                && input[i+step][j]=='G'
                && input[i-step][j]=='G'){
                    step++;
                } else {
                    return false;
                }
        }
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    cin>>n>>m;
    int x = min(n,m);
    int maxPossiblePlus = (x%2==0)?x-1:x;
    cout<<endl<<maxPossiblePlus<<endl;
    char input[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>input[i][j];
        }
    }
    cout<<isPlusOfSizeKPossibleAtIJ(1,1,3,&input)<<endl;
    return 0;
}
