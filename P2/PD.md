# Programação Dinâmica (PD)

## Corte de hastes
Você recebe uma haste de aço de tamanho <img src="/P2/tex/77a3b857d53fb44e33b53e4c8b68351a.svg?invert_in_darkmode&sanitize=true" align=middle width=5.663225699999989pt height=21.68300969999999pt/> e uma tabela de preços <img src="/P2/tex/2ec6e630f199f589a2402fdf3e0289d5.svg?invert_in_darkmode&sanitize=true" align=middle width=8.270567249999992pt height=14.15524440000002pt/>, onde <img src="/P2/tex/7f131a60c8e7bb2b22f383f7bd49e2c0.svg?invert_in_darkmode&sanitize=true" align=middle width=14.37507554999999pt height=14.15524440000002pt/> indica o preço de uma haste de tamanho <img src="/P2/tex/36b5afebdba34564d884d347484ac0c7.svg?invert_in_darkmode&sanitize=true" align=middle width=7.710416999999989pt height=21.68300969999999pt/>. Qual a melhor forma de cortar a haste para maximizar o preço total?

Para simplificar, vamos nos concentrar em maximizar o preço total. Tome a seguinte tabela:

| <img src="/P2/tex/55a049b8f161ae7cfeb0197d75aff967.svg?invert_in_darkmode&sanitize=true" align=middle width=9.86687624999999pt height=14.15524440000002pt/>   | 1    | 2    | 3    | 4    | 5    | 6    | 7    | 8    | 9    |
| ----- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| <img src="/P2/tex/dcacd0c2df330290b04661ab76e2a62c.svg?invert_in_darkmode&sanitize=true" align=middle width=16.39658954999999pt height=14.15524440000002pt/> | 1    | 5    | 8    | 9    | 10   | 17   | 17   | 20   | 24   |

Podemos pensar na PD da seguinte forma:

- Tome <img src="/P2/tex/3bc6fc8b86b6c61889f4e572c7546b8e.svg?invert_in_darkmode&sanitize=true" align=middle width=11.76470294999999pt height=14.15524440000002pt/> como o custo ótimo para a haste de tamanho <img src="/P2/tex/77a3b857d53fb44e33b53e4c8b68351a.svg?invert_in_darkmode&sanitize=true" align=middle width=5.663225699999989pt height=21.68300969999999pt/>.

- Quando chegamos em <img src="/P2/tex/77a3b857d53fb44e33b53e4c8b68351a.svg?invert_in_darkmode&sanitize=true" align=middle width=5.663225699999989pt height=21.68300969999999pt/>, podemos vender <img src="/P2/tex/77a3b857d53fb44e33b53e4c8b68351a.svg?invert_in_darkmode&sanitize=true" align=middle width=5.663225699999989pt height=21.68300969999999pt/> inteiro ou cortar <img src="/P2/tex/77a3b857d53fb44e33b53e4c8b68351a.svg?invert_in_darkmode&sanitize=true" align=middle width=5.663225699999989pt height=21.68300969999999pt/> em dois pedaços e vendê-los separadamente.
- Os pedaços são sempre menores = são subproblemas, que devemos resolver antes.
- Temos um caso base <img src="/P2/tex/d274b75a7ddaf8a454055465adb83035.svg?invert_in_darkmode&sanitize=true" align=middle width=103.15999484999999pt height=21.18721440000001pt/>.
- Definimos a PD como <img src="/P2/tex/17f0bb9ca82a964113c8b0cf73d7a879.svg?invert_in_darkmode&sanitize=true" align=middle width=275.45582459999997pt height=24.65753399999998pt/>

Agora é simples, pra evitar de repetir problemas, é só calcular <img src="/P2/tex/09d819a43c6e2990856e40dbda09f893.svg?invert_in_darkmode&sanitize=true" align=middle width=13.666351049999989pt height=14.15524440000002pt/>, depois <img src="/P2/tex/988584bba6844388f07ea45b7132f61c.svg?invert_in_darkmode&sanitize=true" align=middle width=13.666351049999989pt height=14.15524440000002pt/> e assim por diante. Também é interessante setar <img src="/P2/tex/8495bd709e23d579b8854276d0cbdd62.svg?invert_in_darkmode&sanitize=true" align=middle width=47.425697549999995pt height=14.15524440000002pt/>, daí é correto usar <img src="/P2/tex/935fd358f00dae9d33d158ff520f8f75.svg?invert_in_darkmode&sanitize=true" align=middle width=191.4612579pt height=24.65753399999998pt/> pra simplificar o código.

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

## Cadeias de matrizes

Considere uma sequência de de <img src="/P2/tex/55a049b8f161ae7cfeb0197d75aff967.svg?invert_in_darkmode&sanitize=true" align=middle width=9.86687624999999pt height=14.15524440000002pt/> matrizes <img src="/P2/tex/fb97d38bcc19230b0acd442e17db879c.svg?invert_in_darkmode&sanitize=true" align=middle width=17.73973739999999pt height=22.465723500000017pt/>, onde <img src="/P2/tex/e8a87898efc00bd6e44ae2c7edcfcd1c.svg?invert_in_darkmode&sanitize=true" align=middle width=20.598413549999993pt height=22.465723500000017pt/> é a i-ésima matriz, que representa a multiplicação das <img src="/P2/tex/55a049b8f161ae7cfeb0197d75aff967.svg?invert_in_darkmode&sanitize=true" align=middle width=9.86687624999999pt height=14.15524440000002pt/> matrizes, na ordem da sequência. Se pede para minimizar o número de operações de multiplicação no processo.
<p align="center"><img src="/P2/tex/183fe54aee98b53caf8817db094b8f53.svg?invert_in_darkmode&sanitize=true" align=middle width=95.3747949pt height=13.698590399999999pt/></p>
A multiplicação de matrizes é associativa, então podemos fazer
<p align="center"><img src="/P2/tex/dcab1e0584c4932a006e0a50efe49c0e.svg?invert_in_darkmode&sanitize=true" align=middle width=131.48220195pt height=16.438356pt/></p>
por exemplo.

Queremos encontrar o custo mínimo (i.e. minimizar operações) para tal.

O subproblema mais básico é o de não multiplicar nenhuma matriz, então o custo é zero. Ao multiplicar duas matrizes consecutivas (<img src="/P2/tex/71b1ff898e46aa38123dc4f17f64bb5b.svg?invert_in_darkmode&sanitize=true" align=middle width=58.662644699999994pt height=22.465723500000017pt/>), onde <img src="/P2/tex/e8a87898efc00bd6e44ae2c7edcfcd1c.svg?invert_in_darkmode&sanitize=true" align=middle width=20.598413549999993pt height=22.465723500000017pt/> é <img src="/P2/tex/6138fffcb519bd581c1706bfb8e325d8.svg?invert_in_darkmode&sanitize=true" align=middle width=36.28986404999999pt height=19.1781018pt/> e <img src="/P2/tex/9431f757d88a51ae939ac23aae6a8668.svg?invert_in_darkmode&sanitize=true" align=middle width=37.24233479999999pt height=22.465723500000017pt/> é <img src="/P2/tex/798dc198da7da5eb576acbe3069455ef.svg?invert_in_darkmode&sanitize=true" align=middle width=35.89223384999999pt height=19.1781018pt/>, o custo é <img src="/P2/tex/5d773c2c0d3f2c8a68d0cbfe4b83880d.svg?invert_in_darkmode&sanitize=true" align=middle width=47.81557274999999pt height=14.611911599999981pt/>, e forma uma matriz <img src="/P2/tex/ff342c91b9085e95391bd4a0f1131d25.svg?invert_in_darkmode&sanitize=true" align=middle width=36.23471279999999pt height=19.1781018pt/>.

Agora precisamos quebrar o problema maior nesses subproblemas:

- Tome <img src="/P2/tex/2103f85b8b1477f430fc407cad462224.svg?invert_in_darkmode&sanitize=true" align=middle width=8.55596444999999pt height=22.831056599999986pt/> como o vetor que guarda as dimensões das matrizes, daí <img src="/P2/tex/d635f47719485e84d076bb51ff86bbca.svg?invert_in_darkmode&sanitize=true" align=middle width=30.03343034999999pt height=22.831056599999986pt/> e <img src="/P2/tex/008f617b736053d3c26eb46f3f9cdc1c.svg?invert_in_darkmode&sanitize=true" align=middle width=13.206862349999989pt height=22.831056599999986pt/>, então a matriz <img src="/P2/tex/e8a87898efc00bd6e44ae2c7edcfcd1c.svg?invert_in_darkmode&sanitize=true" align=middle width=20.598413549999993pt height=22.465723500000017pt/> é <img src="/P2/tex/bb88d84311dbf65454165484d08cc555.svg?invert_in_darkmode&sanitize=true" align=middle width=64.15335465pt height=22.831056599999986pt/>.
- Tome o custo da multiplicação das matrizes de <img src="/P2/tex/77a3b857d53fb44e33b53e4c8b68351a.svg?invert_in_darkmode&sanitize=true" align=middle width=5.663225699999989pt height=21.68300969999999pt/> até <img src="/P2/tex/36b5afebdba34564d884d347484ac0c7.svg?invert_in_darkmode&sanitize=true" align=middle width=7.710416999999989pt height=21.68300969999999pt/> como <img src="/P2/tex/0840a27ff936534046a3ef2b53d1c1ea.svg?invert_in_darkmode&sanitize=true" align=middle width=21.77334554999999pt height=14.15524440000002pt/>.

- Podemos quebrar a multiplicação <img src="/P2/tex/e66bce2d337e65018b9bed2acbf44617.svg?invert_in_darkmode&sanitize=true" align=middle width=72.05282039999999pt height=22.465723500000017pt/> em <img src="/P2/tex/875850e8243f14f143ae8d7672ce7a9b.svg?invert_in_darkmode&sanitize=true" align=middle width=182.58744405pt height=24.65753399999998pt/> com <img src="/P2/tex/77a3b857d53fb44e33b53e4c8b68351a.svg?invert_in_darkmode&sanitize=true" align=middle width=5.663225699999989pt height=21.68300969999999pt/> variando de 1 até <img src="/P2/tex/efcf8d472ecdd2ea56d727b5746100e3.svg?invert_in_darkmode&sanitize=true" align=middle width=38.17727759999999pt height=21.18721440000001pt/> e calculamos o resultado, que será dado por <img src="/P2/tex/8e8dcc1a234429c6ff0a9322b928fe07.svg?invert_in_darkmode&sanitize=true" align=middle width=197.1037035pt height=24.65753399999998pt/>.
- Caso base: 