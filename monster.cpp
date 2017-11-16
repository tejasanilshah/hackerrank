#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,count,currentlyShooting;
    long hit,time;
    cin>>n>>hit>>time;
    long totalHP=0,maxMonsterHealth=0,monsterHealth[n];
    for(int i =0;i<n;i++){
        cin>>monsterHealth[i];
        totalHP += monsterHealth[i];
        if(maxMonsterHealth<monsterHealth[i]){
            maxMonsterHealth=monsterHealth[i];
        }
    }
    return 0;
}
