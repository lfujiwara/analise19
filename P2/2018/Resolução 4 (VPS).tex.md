##### 4

###### Ida

Suponha uma $MST$ $m$ que contém $f$. Dado um corte qualquer de G, onde $f$ é uma das arestas do corte.

Se $f$ tiver o custo mínimo no corte, não há problemas.

Se $f$ não tiver custo mínimo, então podemos pegar uma aresta $f'$ com custo mínimo do corte e trocar $f$ por $f'$ gerando uma nova $m'$ com custo menor que a $m$. O que é um absurdo, dado que a $m$ já tem custo minimo. 

Logo $f$ tem o custo mínino dentre todas as arestas de algum corte de G onde $f$ é aresta desse corte.

###### Volta

Dado algum corte de $G$ onde $f$ é uma das arestas do corte e tem custo mínimo. 

Considere uma $MST$ $m$ qualquer de $G$.

Se $f$ pertencer a $MST$ não há problemas.

Se $f$ não pertencer, existe uma aresta $f'$ da $m$ com custo maior ou igual a $f$ neste corte. Então podemos trocar $f'$ por $f$ e obter uma nova $m'$ que é $MST$. Senão existisse uma $f'$ a $m$ não teria caminhos ente os vértices das margens do corte, um absurdo dado que a $m$ é uma $MST$.

Logo $f$ pertence a uma $MST$.

