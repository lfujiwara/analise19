# Floyd Warshall (6/11)

**Pontos importantes**

- Basta uma matriz para guardar as distâncias, perceba que (nem eu sei o que é pra fazer com isso, mas tava na lousa)
  $$
  D^{k-1}[i][k] = D^k[i][k]
  \\
  = \min\{D^{k-1}[i][k], D^{k-1}[i][k] + D^{k-1}[k][k] \}
  $$

# Análise Amortizada

**tl;dr;** Análisar várias operações em conjunto => Melhorar estimativa

## Odômetro binário

- Análise por créditos => Uma operação pesada agora já está paga por uma operação leve realizada anteriormente ('antes tive que passar por apenas 1 bit, agora preciso passar por $n$...').

- Método do potencial => Denote o potencial como a quantidade de bits 'acesos' (`__builtin_popcount`), daí compare a diferença de potencial entre duas operações, ela é sempre menor ou igual do que 1 - $t_i$ ($t_i$ é o n. de bits acesos consecutivos no fim de $A_{i-1}$).

