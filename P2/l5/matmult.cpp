#include "bits/stdc++.h"
using namespace std;

long long int arr[100100];
long long int pd[1010][1010];

int main() {
  
  int n = 6;  
  
  int arr[] = {5,10,3,12,5,50,6};
  
  for(int l = 2; l<=n; l++) {
  
    for(int i=0; i+l-1 < n; i++){
      
	pd[i][i+l-1] = 1e18;
	
	for(int j=i;j<i+l-1;j++) {
	  
	    long long int cand = pd[i][j] + pd[j+1][i+l-1] +
				 arr[i] * arr[j+1] * arr[i+l]; 
	    
	    pd[i][i+l-1] = min(pd[i][i+l-1], cand);

      }
    }

  }

  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      cout << pd[i][j] << " ";
    }
    cout << endl;
  }

  cout << pd[0][n-1] << endl;

}
