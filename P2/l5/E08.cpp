#include "bits/stdc++.h"
using namespace std;

int freq[1010];
int key[1010];

int pd[1010][1010];

struct node {

	int key;
	struct node *lc,*rc;

};

void dfs(struct node *root){

	if(root == NULL)	return;

	printf("sou o cara %d \n",root->key);
	
	if(root->lc==NULL)
		printf("lc eh null\n");
	else
		printf("lc eh %d\n",root->lc->key);
	
	if(root->rc==NULL)
		printf("rc eh null\n");
	else
		printf("rc eh %d\n",root->rc->key);
	
	printf("\n");

	dfs(root->lc);
	dfs(root->rc);

}

struct node *build(int i, int j) {

	if(i>j)	return NULL;

	int best = 0x3f3f3f3f;
	int who = -1;

	for(int root = i;root<=j;root++){
		int cost = pd[i][root-1] + pd[root+1][j];
		if(cost<best){
			best=cost;
			who=root;
		}
	}

	struct node *top = (struct node*)malloc(sizeof (struct node));

	top->lc = build(i,who-1);
	top->rc = build(who+1,j);
	top->key = key[who];
	return top;

}

int main() {
  
  int n;
  cin >> n;
  
  for(int i=1;i<=n;i++){
    cin >> key[i];
  }
  for(int i=1;i<=n;i++){
    cin >> freq[i];
  }

  for(int i=1;i<=n;i++){
    freq[i]+=freq[i-1];
    pd[i][i] = freq[i]-freq[i-1]; 
    
  }

  for(int l=2;l<=n;l++){
    for(int i=1; i+l-1<=n;i++){
	
	pd[i][i+l-1] = 0x3f3f3f3f;
	for( int j=i; j<=i+l-1; j++){
	  pd[i][i+l-1] = min( pd[i][i+l-1], 
			      pd[i][j-1] + pd[j+1][i+l-1] +
			      freq[i+l-1] - freq[i-1] );
      }
    }
  
  }

  cout << pd[1][n] << endl;
  
  struct node *bst = build(1,n);
  printf("buildei\n");
  dfs(bst);

}
