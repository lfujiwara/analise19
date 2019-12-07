# Lista 8

1. Basta iterar por todos os pares de vértices `(i,j)` e rodar Dijkstra para cada um deles (Solução simples: O(V^2(ELogV)))
2. A ideia é alterar a forma de se calcular a distância:
    
    Se antes era `d[v] = d[u] + c(uv)`, agora é `d[v] = d[u] + c(v)`.
    ```pseudocode
    DIJKSTRA (G,c,s)
        para v em V(G) faça d[v] = INF
        d[s] = 0, pi[s] = null
        Q = V(G)
        enquanto Q não estiver vazio faça
            u = Extract-Min(Q)
            para cada v em adj(u) faça
                se v está em Q e d[v] > d[u] + c(v)
                    então pi[v] = u, d[v] = d[u] + c(v)
    ```
3. O Dijkstra te dá um vetor de distâncias `d`, basta ver se `d[i] = x[i]` para todo `i`.
4. Primeiro é preciso definir a probabilidade do caminho como o produto das probabilidades das arestas que formam o mesmo. Temos que `cst(caminho) = prod(cst(arestas))`, então `log(cst(caminho)) = log(prod(cst(arestas))) = sum(log(cst(arestas)))`. Daí, basta trocar os custos das arestas por `-log(cst(aresta))` e rodar.
5. Considere o grafo
    ```
    0 1 5
    0 2 2
    1 2 -10
    ```
    Ao sair de 0, o algoritmo pode ir direto para 2 (pois é a aresta de menor custo) e irá marcar 2 como fechado e distância igual a 2. Então, ao passar por 1, depois, não irá considerar passar por 2 novamente, pois o mesmo já foi marcado como fechado. Isto se dá pela característica gulosa do algoritmo, a qual faz a escolha ótima de procurar a aresta de menor custo, pois, em grafo sem custos negativos, essa escolha local leva a um caminho 'ótimo'.
6. Basta criar dois vértices e ligar o primeiro a todos os vértices de S com custo 0 e fazer o mesmo com o segundo novo vértice e os vértices de T.

