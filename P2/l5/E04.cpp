#include "bits/stdc++.h"
using namespace std;

#define dbg(x) cout << #x << " = " << x << endl
#define olar cout << "olar" << endl
#define all(x) x.begin(),x.end()
int pd[1010][1010];
int sz1,sz2;
int clk=1;
string a,b;
string aux;
set<string> ans;

void printa(int i, int j) {

  if(!i || !j){
  	reverse(all(aux));
  	ans.insert(aux);
  	reverse(all(aux));
    return;
  }

  int printa1 = (a[i-1]==b[j-1]) + pd[i-1][j-1];
  int printa2 = pd[i-1][j];
  int printa3 = pd[i][j-1];

  if(printa1 == pd[i][j] && a[i-1]==b[j-1]){
   aux.push_back(a[i-1]);
   printa(i-1,j-1);
   aux.pop_back(); 
  }

  if(printa2==pd[i][j]) printa(i-1,j);
  if(printa3==pd[i][j]) printa(i,j-1);

}

int main (){

  cin >> a >> b;
  sz1= a.size();
  sz2= b.size();
 
  for(int i=1;i<=sz1;i++){
    for(int j=1;j<=sz2;j++){
      if(a[i-1]==b[j-1])
		pd[i][j] = 1 + pd[i-1][j-1];
      pd[i][j] = max(pd[i][j-1], pd[i][j]); 
      pd[i][j] = max(pd[i-1][j], pd[i][j]);
    } 
  }

  for(int i=1;i<=sz1;i++){
  	for(int j=1;j<=sz2;j++){
  		cout << pd[i][j] << " ";
  	}
  	cout << endl;
  }
  cout << pd[sz1][sz2] << endl;
  printa(sz1,sz2);
  for(auto x : ans)
  	cout << x << endl;

}
