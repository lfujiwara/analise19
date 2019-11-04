# Dijkstra (4/11)

```pseudocode
DIJKSTRA (G,,c,s)
1 para v em V(G) faça d[v] = INF
2 d[s] = 0, pi[s] = nil
3 Q = V(G) // Q recebe todos os vértices de G
4 enquanto Q não estiver vazio, faça
5   u = Extract-Min(Q)
6   para v nas adjacências de u, faça
7     se v está em Q e d[u] + c(uv) < d[v]
8       então pi[v] = u, d[v] = d[u] + c(uv)
9 devolva (pi,d)
```

**Invariantes: ** $d[u] = \delta{(s,u)}$, se $u \not\in Q$ e $d[u] \geq \delta{(s,u)}$, se $u \in Q$.

Prova (segunda):

Se $d[u] < \infty$, então existe um caminho de $s$ até $u$ de comprimento $d[u]$ $\Rightarrow d[u] \geq \delta(s,u) \forall u \in V$.

Prova (primeiro):

**Fato:** Se $u \in Q$ satisfaz $d[u] = \min_{v\in Q} d[v]$, então $d[u] = \delta(s,u)$.

*Prova:*

- Se $u = s$, não há nada a se provar (Esta é a primeira iteração e $d[s] = 0 = \delta(s,u)$)

- Suponha $u \neq s$. Seja $P = \left<v_1,\dots,v_k\right>$ um caminho de $s$ a $u$ de comprimento $\delta(s,u)$, onde $s = 1$ e $u = k$, $s \not\in Q, u \in Q$. Tome $i := \min\left\{j \in 1,\dots,k: v_j \in Q \right\} > 1$.
  Temos
  $$
  d[u] \leq d[v_i] \leq d[v_{i-1}] + c(v_{i-1}v_{i}) \leq \delta(s,v_{i-1}) + c(v_{i-1}v_i) + \sum^{k}_{j=i}c(v_{j-1}v_j) = \delta(s,u). \square
  $$
  Note a importância de $u,v_{i-1} \not\in Q$ e $v_i \in Q$ e $\delta(s,v_{i-1}) = \sum^{i-2}_{j=1} c(v_jv_{j+1})$.

# Floyd-Warshall (4/11)

$$
V = \left\{1,\dots,n\right\}, k \in \left\{0,\dots,n\right\}
$$

- $SP_k :=$ problema de encontrar, para cada par $(s,t) \in V \times V$, o comprimento mínimo de um caminho de $s$ até $t$ cujos vértices internos estão em $\{1,\dots,k\}$

<img src="aula20_notes.assets/SmartSelect_20191104-090601_Samsung Notes.jpg" style="zoom: 33%;" />

Suponha que o caminho rosa não passa pelo vértice $k$, então não há nenhum caminho mais curto passando por $k$.

Suponha que um caminho rosa passa por $k$, então existe um caminho mínimo ($s-k$) e outro $k-t$.

**Pointer para prova: Escrever Floyd Warshall (provar?) + informação + algoritmo p/ recuperar solução**

