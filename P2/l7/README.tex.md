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

7. Se a MST não for $T$, então no mínimo alguma aresta mudou (formando $T'$, nesse caso, essa aresta $e$ de custo $c_e$ é uma que faz parte do corte de uma aresta $f$ de custo $c_f$ de $T$ e vale que $c_e^2 < c_f^2$. Como os pesos são positivos, então vale também que $c_e < c_f$. Mas daí tal alteração poderia ser aplicada a $T$ no grafo original, e formaria uma MST nova com custo menor, contradizendo a escolha de $T$, então a afirmação é verdadeira.

8. Sim, $\mathcal{H}$ sempre é conexo, pois qualquer MST é vizinha de outra, dado que a existência de uma MST diferente quer dizer que existem duas arestas de mesmo custo em algum corte, dessa forma, basta substituir essas arestas sucessivamente e se formará todas as MSTs.
   Por contradição, pode se supor que não é verdade, então existe uma MST a qual não é vizinha de outra, isso implica que é necessário substituir arestas de mais de um corte, e a árvore intermediária que se obtém realizando alguma dessas substituições não é uma MST, mas daí isso implicaria que árvore de destino não é uma MST, um absurdo.

9. Ideia: Uma aresta é crítica se ela é a menor dentre algum corte por uma margem maior do que 1 (supondo custos apenas inteiros) ou ela é uma ponte.

10. Prim => Não cai na P2

11. .

12. .

13. .

14. ```
    > Encontre um ciclo
    > Remova do ciclo a aresta de maior custo até que o número de arestas seja igual a n-1
    > A MST são todas as arestas do grafo restante
    
    Encontrar ciclo => DFS 9 vezes => 9*O(m+n) <= 9*O(n)
    ```

