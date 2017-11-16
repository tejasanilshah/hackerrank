#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long n,start,end;
    cin>>n>>start>>end;
    if(start==end){
    	cout<<0;
    	return 0;
    }
    long range[n],g,seed,p;
    cin>>range[0]>>g>>seed>>p;
    for (long i = 1; i < n; i++)
    {
    	range[i] = (range[i-1]*g + seed)%p;
    }
	bool ohThePlacesYouCanGoTo[n][n];
    for (long i = 0; i < n; ++i)
    {
    	for (long j = 0; j < n; j++)
    		{
    			ohThePlacesYouCanGoTo[i][j]=false;
    		}	
    }
    for (long i = 0; i < n; i++)
    {
    	for(long j=range[i];j>0;j--){
    		ohThePlacesYouCanGoTo[i][(i+j)%n]=true;
    		ohThePlacesYouCanGoTo[i][(i-j+n)%n]=true;
    	}
    }
    bool visited[n];
    for (long i = 0; i < n; i++)
    {
    	visited[i]=false;
    }
    queue<long> bfsQueue;
    long depth[n];
    for (long i = 0; i < n; i++)
    {
    	depth[i]=-1;
    }
    long visiting;
    long wantToVisit;
    bfsQueue.push(start);
    depth[start]=0;
    while(!bfsQueue.empty()){
    	visiting = bfsQueue.front();
    	visited[visiting]=true;
    	cout<<"Visiting "<<visiting<<endl;
    	if(visiting==end){
    		cout<<depth[visiting];
    		return 0;
    	}
    	for(wantToVisit = 0;wantToVisit<n;wantToVisit++){
    		if(ohThePlacesYouCanGoTo[visiting][wantToVisit]==true && visited[wantToVisit]==false){
    			bfsQueue.push(wantToVisit);
    			depth[wantToVisit]=depth[visiting]+1;
    		}
    	}
    	bfsQueue.pop();
    }
    cout<<-1;
    return 0;
}
