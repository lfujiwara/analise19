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



