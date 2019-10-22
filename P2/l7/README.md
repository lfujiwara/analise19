# Lista 7

1. **Seja <img src="/P2/l7/tex/8cd34385ed61aca950a6b06d09fb50ac.svg?invert_in_darkmode&sanitize=true" align=middle width=7.654137149999991pt height=14.15524440000002pt/> alguma aresta de custo mínimo em um grafo <img src="/P2/l7/tex/5201385589993766eea584cd3aa6fa13.svg?invert_in_darkmode&sanitize=true" align=middle width=12.92464304999999pt height=22.465723500000017pt/> com custos nas arestas. É verdade que <img src="/P2/l7/tex/8cd34385ed61aca950a6b06d09fb50ac.svg?invert_in_darkmode&sanitize=true" align=middle width=7.654137149999991pt height=14.15524440000002pt/> pertence a alguma MST de <img src="/P2/l7/tex/5201385589993766eea584cd3aa6fa13.svg?invert_in_darkmode&sanitize=true" align=middle width=12.92464304999999pt height=22.465723500000017pt/>? É verdade que <img src="/P2/l7/tex/8cd34385ed61aca950a6b06d09fb50ac.svg?invert_in_darkmode&sanitize=true" align=middle width=7.654137149999991pt height=14.15524440000002pt/> pertence a toda MST de <img src="/P2/l7/tex/5201385589993766eea584cd3aa6fa13.svg?invert_in_darkmode&sanitize=true" align=middle width=12.92464304999999pt height=22.465723500000017pt/>?**
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

7. Se a MST não for <img src="/P2/l7/tex/2f118ee06d05f3c2d98361d9c30e38ce.svg?invert_in_darkmode&sanitize=true" align=middle width=11.889314249999991pt height=22.465723500000017pt/>, então no mínimo alguma aresta mudou (formando <img src="/P2/l7/tex/ebeaa05cb906f59457d4c67ace59d4a9.svg?invert_in_darkmode&sanitize=true" align=middle width=15.67927349999999pt height=24.7161288pt/>, nesse caso, essa aresta <img src="/P2/l7/tex/8cd34385ed61aca950a6b06d09fb50ac.svg?invert_in_darkmode&sanitize=true" align=middle width=7.654137149999991pt height=14.15524440000002pt/> de custo <img src="/P2/l7/tex/6080da6c6e3253c502990ecf12d50c87.svg?invert_in_darkmode&sanitize=true" align=middle width=13.350722549999988pt height=14.15524440000002pt/> é uma que faz parte do corte de uma aresta <img src="/P2/l7/tex/190083ef7a1625fbc75f243cffb9c96d.svg?invert_in_darkmode&sanitize=true" align=middle width=9.81741584999999pt height=22.831056599999986pt/> de custo <img src="/P2/l7/tex/49b4952d104d909f66efed5b2c217730.svg?invert_in_darkmode&sanitize=true" align=middle width=14.813671949999991pt height=14.15524440000002pt/> de <img src="/P2/l7/tex/2f118ee06d05f3c2d98361d9c30e38ce.svg?invert_in_darkmode&sanitize=true" align=middle width=11.889314249999991pt height=22.465723500000017pt/> e vale que <img src="/P2/l7/tex/aae6cada470455040405053e80f7a5f4.svg?invert_in_darkmode&sanitize=true" align=middle width=51.219565649999986pt height=26.76175259999998pt/>. Como os pesos são positivos, então vale também que <img src="/P2/l7/tex/ecf23fdf9777518c4c8baed3fdd60ee9.svg?invert_in_darkmode&sanitize=true" align=middle width=50.903922299999984pt height=17.723762100000005pt/>. Mas daí tal alteração poderia ser aplicada a <img src="/P2/l7/tex/2f118ee06d05f3c2d98361d9c30e38ce.svg?invert_in_darkmode&sanitize=true" align=middle width=11.889314249999991pt height=22.465723500000017pt/> no grafo original, e formaria uma MST nova com custo menor, contradizendo a escolha de <img src="/P2/l7/tex/2f118ee06d05f3c2d98361d9c30e38ce.svg?invert_in_darkmode&sanitize=true" align=middle width=11.889314249999991pt height=22.465723500000017pt/>, então a afirmação é verdadeira.

8. Sim, <img src="/P2/l7/tex/8209c0f8b3c5233ea2e20dae55588c43.svg?invert_in_darkmode&sanitize=true" align=middle width=14.041179899999989pt height=22.465723500000017pt/> sempre é conexo, pois qualquer MST é vizinha de outra, dado que a existência de uma MST diferente quer dizer que existem duas arestas de mesmo custo em algum corte, dessa forma, basta substituir essas arestas sucessivamente e se formará todas as MSTs.
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

