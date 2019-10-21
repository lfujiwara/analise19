#include <bits/stdc++.h>
using namespace std;

long long int pd[1010];
//may overflow, idc.

int main(){

    pd[0] = 1; //existe exatamente uma arvore vazia

    for(int i=1;i<=1000;i++){ // pd[i] = numero de arvores com i chaves
      for(int j=0;j<i;j++){
	pd[i] += pd[j] * pd[i-1-j]; //fixa j pra ser a raiz
				    //subarvore esquerda tem j chaves
				    // direita i-1-j chaves
      }
    }

    for(int i=0;i<=10;i++){
      cout << i << " - " << pd[i] << endl;
    }

}

