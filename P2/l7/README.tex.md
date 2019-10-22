# Lista 7

1. **Seja $e$ alguma aresta de custo mínimo em um grafo $G$ com custos nas arestas. É verdade que $e$ pertence a alguma MST de $G$? É verdade que $e$ pertence a toda MST de $G$?**
   Considere $e = (u,v)$ com custo $|e|$ e uma MST qualquer $M$ de $G$ de custo $c$. Retire uma aresta $f$ de $M$ a qual desfaça o único caminho de $u$ para $v$ (o caminho é único pois se trata de uma árvore) e adicione $e$, resultando em um custo total $c - |f| + |e|$, como $e$ é a aresta de menor custo, então $- |f| + |e| \leq 0$ e $c - |f| + e \leq c$, portanto $e$ está em alguma MST (pois produziu uma árvore de custo menor ou igual a M, a qual é uma MST).
   Não é verdade que $e$ está em toda MST de G, basta considerar um grafo a seguir:
   ![](media/EicNV.png)
2. (Não vou mais colocar enunciado)
   Seja $V$ o número de vértices de $G$, de certo, qualquer MST de $G$ possui $V-1$ arestas. Considere uma MST de $G$, se existir outra, ela possui $V-1$, das quais alguma delas deve ser distinta de alguma da escolhida anteriormente, mas como todas as arestas possuem custos diferentes, então essa nova MST iria possuir valor diferente da anterior. Nesse caso, ou a nova MST é de custo maior, contraditório, pois é uma MST, ou essa nova MST é de custo menor, o que contradiz a escolha da MST inicial. Então, existe apenas uma MST para o dado grafo.
3. .
4. .
5. .
6. Se um conjunto de arestas que conecta todos os vértices com peso total mínimo não forma uma árvore, então este forma um circuito, mas, se a existência desse circuito contradiz a escolha do conjunto de arestas com peso total mínimo, pois é possível retirar qualquer aresta do ciclo, e os vértices seguem conectados e se arranja uma árvore de menor peso.
   A propriedade não vale se alguns pesos são negativos, pois tal conjunto de arestas iria incluir todos os pesos negativos, possivelmente formando ciclos (pois o acúmulo de arestas com peso negativo diminui o peso da árvore).

