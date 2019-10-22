# Lista 7

1. **Seja $e$ alguma aresta de custo mínimo em um grafo $G$ com custos nas arestas. É verdade que $e$ pertence a alguma MST de $G$? É verdade que $e$ pertence a toda MST de $G$?**
   Considere $e = (u,v)$ com custo $|e|$ e uma MST qualquer $M$ de $G$ de custo $c$. Retire uma aresta $f$ de $M$ a qual desfaça o único caminho de $u$ para $v$ (o caminho é único pois se trata de uma árvore) e adicione $e$, resultando em um custo total $c - |f| + |e|$, como $e$ é a aresta de menor custo, então $- |f| + |e| \leq 0$ e $c - |f| + e \leq c$, portanto $e$ está em alguma MST (pois produziu uma árvore de custo menor ou igual a M, a qual é uma MST).
   Não é verdade que $e$ está em toda MST de G, basta considerar um grafo a seguir:
   ![](media/EicNV.png)

