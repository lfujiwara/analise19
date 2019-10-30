##### Q1

###### a)

```
MAT-CHAIN(p,n)
	m = MAT(n,n) // Cria uma matrix NxN para a PD
	c = MAT(n,n) // Cria uma matrix NxN para as escolhas
	para i <- 1 até n faça
		m[i,i] = 0 // Inicializa as diagonais 
		c[i,i] = 0 // Não existe escolha com uma matrix
	para diagonal <- 2 até n faça // Percorre pela diagonal
		para i <- 1 até n - diagonal + 1 faça
			j <- i + diagonal - 1
			m[i,j] <- inf // busca o k que minimiza o m[i,j]
			para k <- i até j - 1 faça
				q = m[i,k] + m[k+1,j] + p[i-1] * p[k] * p[j]
				se q < m[i,j]
					então	m[i,j] = q
								c[i,j] = k // guarda a escolha
	devolva m[1,n], c
```

###### b)

Para recuperar a gente percorre c usando: A~i,j~ = (A~i,k~A~k+1,j~)

```
MAT-CHAIN-RECOVER(p,n,c)
	imprime MAT-CHAIN-RECOVER-REC(c, 1, n)

MAT-CHAIN-RECOVER-REC(c, i, j)
	se c[i,j] = 0
		então devolva "A" 
									. ToString(i)
		senão devolva "(" 
									. MAT-CHAIN-RECOVER-REC(c, i, c[i,j]) 
									. MAT-CHAIN-RECOVER-REC(c, c[i,j] + 1, j) 
									. ")"
```