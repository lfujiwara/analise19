## Exercício 4

Seja $G$ um grafo conexo com custo $c_e$ para cada aresta $e$. Fixe uma aresta $f$ de $G$. Prove que $f$ está em alguma MST do grafo se, e somente se, $f$ tem custo mínimo dentre todas as arestas de algum corte de $G$.

1. $f$ está em alguma MST do grafo $\Rightarrow$ $f$ tem custo mínimo dentre todas as arestas de algum corte de $G$
   Prova por contradição: Suponha que $f$ está em alguma MST do grafo e não tem custo mínimo dentre as arestas de nenhum corte de $G$. Então, é possível retirar $f$ e quebrar o grafo em duas partes desconexas, e ao inserir qualquer aresta do corte que $f$ faz parte, é possível escolher uma tal que seu custo é menor do que o custo de $f$, então o custo da nova árvore é menor do que original, contradizendo a escolha da mesma.
   Se $f$ tem custo mínimo, não é possível encontrar tal aresta, menos ainda realizar tal troca, então não há problemas.
2. $f$ tem custo mínimo dentre todas as arestas de algum corte de $G \Rightarrow$ $f$ está em alguma MST do grafo.
   Prova por contradição: 
   Suponha $f$ com custo mínimo dentre todas as arestas de algum corte de $G$ e suponha uma MST qualquer no grafo.
   Se $f$ faz parte da MST, não há nada a se provar.
   Se $f$ não faz parte, então considere uma $f'$ que faz parte do corte de $G$ (se $f'$ não existir, a MST não é uma ST, pois as pontas de $f$ não estão na mesma componente), $f'$ tem custo maior ou igual a $f$, então, pode se trocar $f'$ por $f$ e obter uma nova MST. Logo $f$ pertence a alguma MST.