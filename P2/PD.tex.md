# Programação Dinâmica (PD)

## Corte de hastes
Você recebe uma haste de aço de tamanho $i$ e uma tabela de preços $p$, onde $p_j$ indica o preço de uma haste de tamanho $j$. Qual a melhor forma de cortar a haste para maximizar o preço total?

Para simplificar, vamos nos concentrar em maximizar o preço total. Tome a seguinte tabela:

| $n$   | 1    | 2    | 3    | 4    | 5    | 6    | 7    | 8    | 9    |
| ----- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| $p_n$ | 1    | 5    | 8    | 9    | 10   | 17   | 17   | 20   | 24   |

Podemos pensar na PD da seguinte forma:

- Tome $c_i$ como o custo ótimo para a haste de tamanho $i$.

- Quando chegamos em $i$, podemos vender $i$ inteiro ou cortar $i$ em dois pedaços e vendê-los separadamente.
- Os pedaços são sempre menores = são subproblemas, que devemos resolver antes.
- Temos um caso base $c_0 = 0, c_1 = p_1$.
- Definimos a PD como $c_i = \max\left(p_i,\max_{j = 1,\dots,i-1}\left(c_{j} + c_{i -j}\right)\right)$

Agora é simples, pra evitar de repetir problemas, é só calcular $c_0$, depois $c_1$ e assim por diante. Também é interessante setar $c_i = p_i$, daí é correto usar $c_i = \max_{j = 1,\dots,i}\left(c_{j} + c_{i -j}\right)$ pra simplificar o código.

Eis o código:

```c++
// Indexando a partir do 0, isso nao e pseudo-codigo, pelo amor de deus
int cut_this_shit(vector<int> p, int n) {
    vector<int> c(p.size()); // Guardar os custos aqui
    c[0] = 0; // Caso base
    for (int i = 1; i < n; i++) c[i] = p[i];
    for (int i = 2; i < n; i++)
        for (int j = 0; j < i-1; j++)
            c[i] = max(c[i],c[j] + c[i - j]);
    return c[n-1];
}
// Precisa adaptar pra devolver os cortes, mas o grosso eh isso ai
```


