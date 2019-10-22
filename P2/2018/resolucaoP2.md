## Exercício 2

```#include "bits/stdc++.h"
using namespace std;

int pd[1010];
int val[] = {1,2,5,10,20,50,100};
int amt[] = {3,2,1,0,2,1,2};

int main() {

  pd[0] = 1;

  for(int i=0;i<7;i++){ //para todas as notas
    for(int j = 104; j>0; j--){ //para todos os trocos
      for(int k=1;k<=amt[i];k++){
	  if (j - k*val[i] <0)	continue;
	  pd[j] += pd[j - k*val[i]];
      }
    }
  }

  cout << pd[104] << endl;

}
```

## Exercício 3

```
> Ordene x
> S é um conjunto vazio de pares
> Para i de 1 até n/2:
	> Insira em S o par (x[i],x[n-i+1])
> Devolva S
```

Considere uma solução ótima que não contenha <img src="/P2/2018/tex/4bdbe692ca0b8088bd2890cfa375949b.svg?invert_in_darkmode&sanitize=true" align=middle width=55.20369029999999pt height=24.65753399999998pt/>, então essa solução contém <img src="/P2/2018/tex/da79128ac0756d2b4fd86808358a4c50.svg?invert_in_darkmode&sanitize=true" align=middle width=54.20804729999999pt height=24.65753399999998pt/> e <img src="/P2/2018/tex/fe335ec3de3fdd416eea81a4bd497947.svg?invert_in_darkmode&sanitize=true" align=middle width=54.43196384999999pt height=24.65753399999998pt/>. Então troque os pares por <img src="/P2/2018/tex/4bdbe692ca0b8088bd2890cfa375949b.svg?invert_in_darkmode&sanitize=true" align=middle width=55.20369029999999pt height=24.65753399999998pt/>  e <img src="/P2/2018/tex/b9c35d98c41f1e1ab34387d27999be65.svg?invert_in_darkmode&sanitize=true" align=middle width=53.43632084999999pt height=24.65753399999998pt/>, é claro que <img src="/P2/2018/tex/972409965e1fb25ed5e427ac0f5a1eb8.svg?invert_in_darkmode&sanitize=true" align=middle width=54.381650399999984pt height=19.1781018pt/> é menor do que ambos os pares anteriores e <img src="/P2/2018/tex/a89e76ffd569368a2a1ca3b06877d307.svg?invert_in_darkmode&sanitize=true" align=middle width=52.61429909999998pt height=19.1781018pt/> é menor do que <img src="/P2/2018/tex/23f1914cabec0b240bf68e5e1a3a9cb0.svg?invert_in_darkmode&sanitize=true" align=middle width=53.609923949999995pt height=19.1781018pt/>, portanto o par das pontas sempre faz parte da solução ótima.

## Exercício 4

Seja <img src="/P2/2018/tex/5201385589993766eea584cd3aa6fa13.svg?invert_in_darkmode&sanitize=true" align=middle width=12.92464304999999pt height=22.465723500000017pt/> um grafo conexo com custo <img src="/P2/2018/tex/6080da6c6e3253c502990ecf12d50c87.svg?invert_in_darkmode&sanitize=true" align=middle width=13.350722549999988pt height=14.15524440000002pt/> para cada aresta <img src="/P2/2018/tex/8cd34385ed61aca950a6b06d09fb50ac.svg?invert_in_darkmode&sanitize=true" align=middle width=7.654137149999991pt height=14.15524440000002pt/>. Fixe uma aresta <img src="/P2/2018/tex/190083ef7a1625fbc75f243cffb9c96d.svg?invert_in_darkmode&sanitize=true" align=middle width=9.81741584999999pt height=22.831056599999986pt/> de <img src="/P2/2018/tex/5201385589993766eea584cd3aa6fa13.svg?invert_in_darkmode&sanitize=true" align=middle width=12.92464304999999pt height=22.465723500000017pt/>. Prove que <img src="/P2/2018/tex/190083ef7a1625fbc75f243cffb9c96d.svg?invert_in_darkmode&sanitize=true" align=middle width=9.81741584999999pt height=22.831056599999986pt/> está em alguma MST do grafo se, e somente se, <img src="/P2/2018/tex/190083ef7a1625fbc75f243cffb9c96d.svg?invert_in_darkmode&sanitize=true" align=middle width=9.81741584999999pt height=22.831056599999986pt/> tem custo mínimo dentre todas as arestas de algum corte de <img src="/P2/2018/tex/5201385589993766eea584cd3aa6fa13.svg?invert_in_darkmode&sanitize=true" align=middle width=12.92464304999999pt height=22.465723500000017pt/>.

1. <img src="/P2/2018/tex/190083ef7a1625fbc75f243cffb9c96d.svg?invert_in_darkmode&sanitize=true" align=middle width=9.81741584999999pt height=22.831056599999986pt/> está em alguma MST do grafo <img src="/P2/2018/tex/777d001ea1ec5971b67bb546ed760f97.svg?invert_in_darkmode&sanitize=true" align=middle width=16.43840384999999pt height=14.15524440000002pt/> <img src="/P2/2018/tex/190083ef7a1625fbc75f243cffb9c96d.svg?invert_in_darkmode&sanitize=true" align=middle width=9.81741584999999pt height=22.831056599999986pt/> tem custo mínimo dentre todas as arestas de algum corte de <img src="/P2/2018/tex/5201385589993766eea584cd3aa6fa13.svg?invert_in_darkmode&sanitize=true" align=middle width=12.92464304999999pt height=22.465723500000017pt/>
   Prova por contradição: Suponha que $f$ está em alguma MST do grafo e não tem custo mínimo dentre as arestas de nenhum corte de $G$. Então, é possível retirar $f$ e quebrar o grafo em duas partes desconexas, e ao inserir qualquer aresta do corte que $f$ faz parte, é possível escolher uma tal que seu custo é menor do que o custo de $f$, então o custo da nova árvore é menor do que original, contradizendo a escolha da mesma.
   Se $f$ tem custo mínimo, não é possível encontrar tal aresta, menos ainda realizar tal troca, então não há problemas.
2. <img src="/P2/2018/tex/190083ef7a1625fbc75f243cffb9c96d.svg?invert_in_darkmode&sanitize=true" align=middle width=9.81741584999999pt height=22.831056599999986pt/> tem custo mínimo dentre todas as arestas de algum corte de <img src="/P2/2018/tex/aa822da1c06dabb8a35f1854bbb1dbbc.svg?invert_in_darkmode&sanitize=true" align=middle width=33.92914634999999pt height=22.465723500000017pt/> <img src="/P2/2018/tex/190083ef7a1625fbc75f243cffb9c96d.svg?invert_in_darkmode&sanitize=true" align=middle width=9.81741584999999pt height=22.831056599999986pt/> está em alguma MST do grafo.
   Prova por contradição: 
   Suponha $f$ com custo mínimo dentre todas as arestas de algum corte de $G$ e suponha uma MST qualquer no grafo.
   Se $f$ faz parte da MST, não há nada a se provar.
   Se $f$ não faz parte, então considere uma $f'$ que faz parte do corte de $G$ (se $f'$ não existir, a MST não é uma ST, pois as pontas de $f$ não estão na mesma componente), $f'$ tem custo maior ou igual a $f$, então, pode se trocar $f'$ por $f$ e obter uma nova MST. Logo $f$ pertence a alguma MST.
