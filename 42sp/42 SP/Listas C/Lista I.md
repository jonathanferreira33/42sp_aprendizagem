# I - ft_ft

Esse exercício é **fundamental** — ele não é sobre “colocar 42 em uma variável”, mas sim sobre **entender como memória e ponteiros funcionam em C**. Isso é base para praticamente tudo que vem depois (strings, arrays, structs, alocação dinâmica, etc.).

---

# 📌 O que o exercício quer de verdade

Você deve criar uma função:

void ft_ft(int *nbr);

E essa função deve:

➡️ Receber um **ponteiro para inteiro**  
➡️ Alterar o valor armazenado naquele endereço para **42**

---

# 🧠 Conceitos envolvidos

## 1. Ponteiros (`int *`)

Um ponteiro é uma variável que guarda **um endereço de memória**, não um valor direto.

int a = 10;  
int *p = &a;

- `a` → valor = 10
- `&a` → endereço de memória de `a`
- `p` → guarda esse endereço
- `*p` → acessa o valor dentro daquele endereço (10)

---

## 2. Desreferência (`*`)

Quando você faz:

*nbr = 42;

Você está dizendo:

👉 “vá até o endereço apontado por `nbr` e altere o valor lá dentro”

---

## 3. Passagem por referência

Em C, funções normalmente recebem **cópias** dos valores.

Mas com ponteiros você consegue alterar a variável original:

void exemplo(int x) {  
    x = 42; // NÃO altera o original  
}  
  
void exemplo2(int *x) {  
    *x = 42; // ALTERA o original  
}

---

# ✅ Implementação correta

void ft_ft(int *nbr)  
{  
    *nbr = 42;  
}

---

# 🔬 Exemplo de uso (mental, já que não pode usar libs)

int main(void)  
{  
    int a;  
  
    a = 0;  
    ft_ft(&a);  
  
    // agora a == 42  
}

---

# ⚠️ Erros comuns (muito importantes)

## ❌ Esquecer o `*`

nbr = 42; // ERRADO

Isso tenta mudar o ponteiro, não o valor.

---

## ❌ Passar variável sem endereço

ft_ft(a); // ERRADO

Correto:

ft_ft(&a);

---

## ❌ Ponteiro não inicializado

int *p;  
ft_ft(p); // ERRO GRAVE (segmentation fault)

---

# 🧩 O que esse exercício prepara você para aprender

Esse exercício é a base para:

- Manipulação de arrays
- Strings em C (`char *`)
- Funções que retornam múltiplos valores
- Alocação dinâmica (`malloc`)
- Estruturas complexas (structs com ponteiros)

---

# 💡 Como pensar como engenheiro (nível arquitetura)

Você já pode começar a enxergar isso como:

- **Referência vs valor**
- **Mutabilidade controlada**
- **Acesso indireto à memória**

Isso é equivalente, em linguagens modernas, a:

- `ref` em C#
- ponteiros em C++
- referências em Java (conceitualmente)

---

# 🚀 Próximo passo (recomendado)

Se quiser evoluir rápido, o próximo exercício natural é:

👉 criar uma função que **troca dois valores usando ponteiros**

void ft_swap(int *a, int *b);

Se quiser, posso te guiar nisso passo a passo (no estilo da sua escola).


| Conteúdo                               |                                                    |
| -------------------------------------- | -------------------------------------------------- |
| PONTEIROS EM C                         | https://www.youtube.com/watch?v=1Hgl4TU8CB0        |
| Aprenda ponteiros de uma vez por todas | https://www.youtube.com/watch?v=ZhYiNrI2OLU&t=117s |
|                                        |                                                    |
|                                        |                                                    |

___
___
# II - ft_ultimate_ft

Esse exercício é clássico da 42 — ele não é sobre dificuldade “prática”, e sim sobre **forçar você a entender níveis de indireção (indirection)** em ponteiros.

---

# 📌 O que está sendo pedido

Função:

void ft_ultimate_ft(int *********nbr);

👉 Você recebe um ponteiro de 9 níveis até chegar em um `int`.

Seu objetivo:

➡️ Navegar por todos esses níveis  
➡️ Alterar o valor final para `42`

---

# 🧠 Conceito central: níveis de indireção

Vamos simplificar a leitura:

int *********nbr;

Isso significa:

nbr → ponteiro para  
      ponteiro para  
        ponteiro para  
          ...  
            ponteiro para int

👉 No final da cadeia existe um `int`

---

# 🔍 Como acessar o valor final?

Cada `*` remove um nível.

Se fosse simples:

int *p;  
*p = 42;

Agora com 9 níveis:

*********nbr = 42;

👉 Você precisa “descer” todos os níveis até chegar no `int`.

---

# ✅ Implementação

void ft_ultimate_ft(int *********nbr)  
{  
    *********nbr = 42;  
}

Sim, é só isso — mas o importante é entender **por que funciona**.

---

# 🔬 Visualização mental (isso aqui é ouro)

Imagine:

int a = 0;  
  
int *p1 = &a;  
int **p2 = &p1;  
int ***p3 = &p2;  
...  
int *********p9 = &p8;

Agora:

ft_ultimate_ft(p9);

Fluxo:

p9 → p8 → p7 → ... → p1 → a

E a função faz:

*********p9 = 42;

👉 Isso chega em `a` e altera o valor.

---

# ⚠️ Erros comuns

## ❌ Número errado de `*`

********nbr = 42; // 8 níveis (ERRADO)

Tem que ser exatamente 9.

---

## ❌ Confundir tipo com valor

nbr = 42; // ERRADO

Isso tentaria mudar o ponteiro, não o conteúdo final.

---

## ❌ Não entender a cadeia

Se você não montar mentalmente a cadeia de ponteiros, esse exercício vira “decoração”.

---

# 🧩 O que esse exercício realmente ensina

Esse exercício treina:

### 1. Navegação de memória

Você aprende que:

- dados podem estar **muito indiretos**
- você precisa saber quantos níveis acessar

---

### 2. Base para estruturas complexas

Isso aparece muito em:

- listas encadeadas (`Node **`)
- árvores (`Node ***`)
- APIs que modificam ponteiros
- alocação dinâmica avançada

---

### 3. Modelo mental importante

Você está aprendendo:

> “Eu não tenho o dado, tenho o caminho até o dado”

Isso é essencial em C.

---

# 🧠 Insight de arquiteto

Isso aqui é o “baixo nível” do que linguagens modernas escondem:

- Em C#: referências + `ref/out`
- Em Java: tudo é referência (mas abstraído)
- Em Go: ponteiros explícitos

C te obriga a entender **como a memória realmente funciona**.

---




| Conteúdo                                                      |                                                                                            |
| ------------------------------------------------------------- | ------------------------------------------------------------------------------------------ |
| # Programação em Linguagem C - Ponteiros - Indireção Múltipla | [https://www.youtube.com/watch?v=1Hgl4TU8CB0](https://www.youtube.com/watch?v=PgkrW9n7YiM) |
|                                                               |                                                                                            |
|                                                               |                                                                                            |

___
___
# III - ft_swap

Esse exercício já sai do “conceito isolado” e entra em **aplicação prática de ponteiros**. Aqui você começa a usar ponteiros para **manipular estado externo**, o que é extremamente comum em C.

---

# 📌 O que o exercício pede

Função:

void ft_swap(int *a, int *b);

Objetivo:

➡️ Trocar os valores de duas variáveis  
➡️ Usando **ponteiros (endereços)**

---

# 🧠 Conceito central

Você não recebe os valores diretamente, você recebe:

a → endereço de um int  
b → endereço de outro int

Então:

- `*a` → valor da primeira variável
- `*b` → valor da segunda variável

---

# 🔁 Lógica de swap (troca)

Você precisa de uma variável temporária:

temp = valor de a  
a = valor de b  
b = temp

---

# ✅ Implementação

void ft_swap(int *a, int *b)  
{  
    int temp;  
  
    temp = *a;  
    *a = *b;  
    *b = temp;  
}

---

# 🔬 Execução mental (ESSENCIAL)

int x = 10;  
int y = 20;  
  
ft_swap(&x, &y);

### Antes:

x = 10  
y = 20

### Durante:

temp = 10  
x = 20  
y = 10

### Depois:

x = 20  
y = 10

---

# ⚠️ Erros comuns

## ❌ Esquecer o `*`

temp = a; // ERRADO

Correto:

temp = *a;

---

## ❌ Tentar trocar sem variável auxiliar

*a = *b;  
*b = *a; // perde o valor original

---

## ❌ Passar valores ao invés de endereços

ft_swap(x, y); // ERRADO

Correto:

ft_swap(&x, &y);

---

# 🧩 O que esse exercício ensina de verdade

### 1. Manipulação de estado externo

Você altera variáveis fora da função → isso é base para:

- APIs em C
- funções utilitárias
- manipulação de structs

---

### 2. Passagem por referência (simulada)

C não tem `ref` nativo → você simula com ponteiros.

---

### 3. Segurança de memória (começo)

Você precisa garantir:

- ponteiros válidos
- dados consistentes

---

# 🧠 Insight de engenharia

Esse padrão aparece em:

- ordenação (bubble sort, quicksort)
- manipulação de arrays
- estruturas encadeadas
- sistemas de baixo nível

👉 `swap` é um dos blocos fundamentais de algoritmos.


| Conteúdo                                          |                                                                                  |
| ------------------------------------------------- | -------------------------------------------------------------------------------- |
| Como trocar dois números usando ponteiros em C++? | https://www.geeksforgeeks.org/cpp/how-to-swap-two-numbers-using-pointers-in-cpp/ |
|                                                   |                                                                                  |

___
___
# IV - ft_div_mod


Esse exercício já sobe um nível: você passa a usar ponteiros não só para alterar valores, mas para **retornar múltiplos resultados** — um padrão clássico em C.

---

# 📌 O que o exercício pede

Função:

void ft_div_mod(int a, int b, int *div, int *mod);

Objetivo:

➡️ Calcular:

- divisão inteira → `a / b`
- resto da divisão → `a % b`

➡️ Armazenar:

- resultado em `*div`
- resto em `*mod`

---

# 🧠 Conceito central

Em C, uma função só retorna **um valor** com `return`.

Então usamos ponteiros para “retornar mais coisas”:

div → onde guardar o resultado da divisão  
mod → onde guardar o resto

---

# ✅ Implementação

void ft_div_mod(int a, int b, int *div, int *mod)  
{  
    *div = a / b;  
    *mod = a % b;  
}

---

# 🔬 Execução mental

int x;  
int y;  
  
ft_div_mod(10, 3, &x, &y);

### Resultado:

x = 3   (10 / 3)  
y = 1   (10 % 3)

---

# ⚠️ Ponto crítico (MUITO importante)

## ❗ Divisão por zero

Se `b == 0` → comportamento indefinido (crash possível)

Versão mais segura (mesmo que não seja exigida):

void ft_div_mod(int a, int b, int *div, int *mod)  
{  
    if (b != 0)  
    {  
        *div = a / b;  
        *mod = a % b;  
    }  
}

---

# ⚠️ Erros comuns

## ❌ Esquecer o `*`

div = a / b; // ERRADO

---

## ❌ Passar variável ao invés de endereço

ft_div_mod(10, 3, x, y); // ERRADO

Correto:

ft_div_mod(10, 3, &x, &y);

---

## ❌ Não validar `b == 0`

Isso pode quebrar o programa.

---

# 🧩 O que esse exercício ensina de verdade

### 1. Retorno múltiplo em C

Você aprende a fazer algo como:

return (div, mod)

Mas usando ponteiros.

---

### 2. Separação de responsabilidade

A função:

- recebe dados
- processa
- escreve em locais definidos

Isso é muito usado em APIs C.

---

### 3. Base para coisas maiores

Esse padrão aparece em:

- parsing (retornar múltiplos valores)
- manipulação de structs
- funções de sistema (POSIX usa muito isso)

---

# 🧠 Insight de engenharia

Esse tipo de função é comum em sistemas de baixo nível porque:

- evita cópias desnecessárias
- melhora performance
- dá controle total da memória

| Conteúdo                                                                |                                             |
| ----------------------------------------------------------------------- | ------------------------------------------- |
| Linguagem C - resto da divisão entre inteiros                           | https://www.youtube.com/watch?v=gZBiHm1cIug |
| # Linguagem C - Como usar o E (&&), o OU (\|\|) e o operador módulo (%) | https://www.youtube.com/watch?v=t1HBRQ2yfXM |
|                                                                         |                                             |

___
___
# VI - ft_ultimate_div_mod

Esse exercício é uma evolução direta do anterior — agora você não só retorna múltiplos valores, como também **modifica os próprios parâmetros de entrada**. Isso é muito comum em C de baixo nível.

---

# 📌 O que o exercício pede

Função:

void ft_ultimate_div_mod(int *a, int *b);

Objetivo:

Dado:

*a = valor A  
*b = valor B

Você deve:

➡️ Calcular:

- divisão: `A / B`
- resto: `A % B`

➡️ Atualizar:

*a = resultado da divisão  
*b = resto

---

# 🧠 Conceito central

Aqui você está:

✅ Lendo valores via ponteiros  
✅ Processando  
✅ Sobrescrevendo os valores originais

Isso é **mutação direta de memória**.

---

# ⚠️ Problema importante (ordem de execução)

Se você fizer isso direto:

*a = *a / *b;  
*b = *a % *b; // ERRADO

👉 Você perde o valor original de `*a`

---

# ✅ Implementação correta

Você precisa de variáveis temporárias:

void ft_ultimate_div_mod(int *a, int *b)  
{  
    int temp_a;  
    int temp_b;  
  
    temp_a = *a;  
    temp_b = *b;  
  
    *a = temp_a / temp_b;  
    *b = temp_a % temp_b;  
}

---

# 🔬 Execução mental

int x = 10;  
int y = 3;  
  
ft_ultimate_div_mod(&x, &y);

### Antes:

x = 10  
y = 3

### Depois:

x = 3   (10 / 3)  
y = 1   (10 % 3)

---

# ⚠️ Ponto crítico

## ❗ Divisão por zero

Sempre considere:

if (*b != 0)

Versão segura:

void ft_ultimate_div_mod(int *a, int *b)  
{  
    int temp_a;  
    int temp_b;  
  
    if (*b != 0)  
    {  
        temp_a = *a;  
        temp_b = *b;  
  
        *a = temp_a / temp_b;  
        *b = temp_a % temp_b;  
    }  
}

---

# ⚠️ Erros comuns

## ❌ Não usar variável temporária

Perde o valor original.

---

## ❌ Esquecer `*`

a = a / b; // ERRADO

---

## ❌ Não validar ponteiros (nível mais avançado)

if (a && b)

---

# 🧩 O que esse exercício ensina de verdade

### 1. Mutação de entrada

Você altera diretamente os dados recebidos → padrão comum em C.

---

### 2. Controle de estado

Você precisa garantir que:

- não perde dados
- mantém consistência

---

### 3. Base para algoritmos reais

Isso aparece em:

- algoritmos matemáticos (ex: Euclides para MDC)
- manipulação de buffers
- processamento in-place

---

# 🧠 Insight de engenharia

Esse exercício te ensina algo crítico:

> “Quando você modifica dados, precisa controlar a ordem e preservar estado”

Isso é base para:

- concorrência
- sistemas distribuídos
- processamento de streams

| Conteúdo                                                                                        |                                             |
| ----------------------------------------------------------------------------------------------- | ------------------------------------------- |
| Passagem por Valor vs Passagem por Referência em C++                                            | https://www.youtube.com/watch?v=KD8zanR034A |
| Aula Algoritmos em C 39 - Diferença passagem de parâmetro por valor e referência na linguagem C | https://www.youtube.com/watch?v=Ug9k0t5vJvs |

___
___
# VII - ft_putstr

Esse exercício marca uma transição importante: você sai de inteiros e entra em **strings em C**, que são essencialmente **ponteiros para `char`**.

---

# 📌 O que o exercício pede

Função:

void ft_putstr(char *str);

Objetivo:

➡️ Percorrer uma string  
➡️ Exibir cada caractere no **output padrão (stdout)**

---

# 🧠 Conceito central

Em C, uma string não é um tipo especial. Ela é:

um ponteiro para o primeiro caractere de um array de chars

E termina com:

'\0'  (caractere nulo)

---

# 🔍 Exemplo de string na memória

char *str = "Ola";

Na memória:

'O' → 'l' → 'a' → '\0'

---

# 🔁 Como percorrer

Você precisa iterar até encontrar `'\0'`:

while (str[i] != '\0')

ou

while (*str)

---

# ⚠️ Sobre “funções autorizadas: nenhuma”

Isso normalmente significa:

👉 Você **não pode usar `printf`**

Mas pode usar **syscall de baixo nível**, como:

write(1, &c, 1);

- `1` → stdout
- `&c` → endereço do caractere
- `1` → quantidade de bytes

---

# ✅ Implementação (forma clássica)

#include <unistd.h>  
  
void ft_putstr(char *str)  
{  
    int i;  
  
    i = 0;  
    while (str[i] != '\0')  
    {  
        write(1, &str[i], 1);  
        i++;  
    }  
}

---

# 💡 Versão mais “C raiz” (usando ponteiro diretamente)

#include <unistd.h>  
  
void ft_putstr(char *str)  
{  
    while (*str)  
    {  
        write(1, str, 1);  
        str++;  
    }  
}

👉 Essa versão é mais idiomática em C.

---

# 🔬 Execução mental

char *s = "Hi";

Fluxo:

*str = 'H' → imprime  
*str = 'i' → imprime  
*str = '\0' → para

---

# ⚠️ Erros comuns

## ❌ Esquecer o `'\0'`

Loop infinito ou lixo na tela.

---

## ❌ Usar `printf` (quando não pode)

Vai contra a regra do exercício.

---

## ❌ Não incluir `<unistd.h>`

`write` não será reconhecido.

---

## ❌ Ponteiro NULL (nível mais avançado)

if (str == NULL)  
    return;

---

# 🧩 O que esse exercício ensina de verdade

### 1. Strings em C

Você aprende que string = **array de char + terminador**

---

### 2. Iteração com ponteiros

Base para:

- parsing
- leitura de arquivos
- manipulação de texto

---

### 3. I/O de baixo nível

`write` é uma syscall → muito usado em sistemas.

---

# 🧠 Insight de engenharia

Aqui você começa a entender:

- diferença entre alto nível (`printf`) e baixo nível (`write`)
- controle direto de bytes
- eficiência e previsibilidade

Isso é essencial em:

- sistemas embarcados
- backend de alta performance
- sistemas operacionais

| Conteúdo                                                                      |                                                                                     |
| ----------------------------------------------------------------------------- | ----------------------------------------------------------------------------------- |
| Curso de Programação C \| STRING com a linguagem de programação C \| aula 128 | https://www.youtube.com/watch?v=F99FVDgnM-c&list=PLqJK4Oyr5WSj1JW1ysRNi4Lvw5oUB-4g0 |
| Linguagem C - Aula 6.2 - Strings: trabalhando com dados de texto em C (2022)  | https://www.youtube.com/watch?v=4x7Qht5Dmcw                                         |
|                                                                               |                                                                                     |

___
___
# VIII - ft_strlen

Esse exercício é a base de **qualquer manipulação de string em C**. Tudo que você vai fazer depois (copiar, comparar, concatenar) depende diretamente disso.

---

# 📌 O que o exercício pede

Função:

int ft_strlen(char *str);

Objetivo:

➡️ Percorrer a string  
➡️ Contar quantos caracteres existem  
➡️ Parar no `'\0'`  
➡️ Retornar esse total

---

# 🧠 Conceito central

String em C:

sequência de caracteres terminada por '\0'

Exemplo:

char *str = "Hello";

Na memória:

'H' → 'e' → 'l' → 'l' → 'o' → '\0'

👉 O tamanho é **5**, não conta o `'\0'`.

---

# 🔁 Lógica

Você basicamente faz:

enquanto não for '\0'  
    incrementa contador

---

# ✅ Implementação (forma clássica)

int ft_strlen(char *str)  
{  
    int i;  
  
    i = 0;  
    while (str[i] != '\0')  
    {  
        i++;  
    }  
    return (i);  
}

---

# 💡 Versão com ponteiros (mais “C raiz”)

int ft_strlen(char *str)  
{  
    int count;  
  
    count = 0;  
    while (*str)  
    {  
        count++;  
        str++;  
    }  
    return (count);  
}

👉 Essa versão é mais próxima do que você verá em código profissional.

---

# 🔬 Execução mental

char *s = "ABC";

Fluxo:

'A' → count = 1  
'B' → count = 2  
'C' → count = 3  
'\0' → para

Retorno:

3

---

# ⚠️ Erros comuns

## ❌ Contar o `'\0'`

while (str[i] != '\0')

✔️ correto (não conta o terminador)

---

## ❌ Esquecer incremento

Loop infinito.

---

## ❌ Não tratar NULL (nível mais avançado)

if (str == NULL)  
    return (0);

---

# 🧩 O que esse exercício ensina de verdade

### 1. Iteração sequencial em memória

Você percorre byte por byte.

---

### 2. Base de strings em C

Funções como:

- `strcpy`
- `strcmp`
- `strcat`

👉 Todas dependem de `strlen`

---

### 3. Eficiência

`strlen` é O(n) → percorre toda a string  
Isso impacta performance em sistemas reais.

---

# 🧠 Insight de engenharia

Aqui começa algo importante:

> Em C, você não sabe o tamanho da string — você precisa calcular.

Diferente de linguagens modernas:

- Java / C# → tamanho já armazenado
- C → precisa percorrer memória

| Conteúdo                                                                     |                                             |
| ---------------------------------------------------------------------------- | ------------------------------------------- |
| Aula Algoritmos em C 28 - Biblioteca string e função strlen() na linguagem C | https://www.youtube.com/watch?v=METonuO1vXQ |
|                                                                              |                                             |

___
___
# IX - ft_rev_int_tab


Esse exercício é o primeiro onde você começa a trabalhar com **arrays reais + manipulação in-place**, algo muito comum em algoritmos e sistemas.

---

# 📌 O que o exercício pede

Função:

void ft_rev_int_tab(int *tab, int size);

Objetivo:

➡️ Inverter um array de inteiros  
➡️ Sem criar outro array (in-place)

---

# 🧠 Conceito central

Um array em C:

int tab[] = {1, 2, 3, 4, 5};

Na memória:

[1][2][3][4][5]

Depois da função:

[5][4][3][2][1]

---

# 🔁 Estratégia correta (dois ponteiros)

Você troca:

primeiro ↔ último  
segundo ↔ penúltimo  
...

Ou seja:

i começa em 0  
j começa em size - 1

E vai andando:

i++  
j--

---

# ✅ Implementação

void ft_rev_int_tab(int *tab, int size)  
{  
    int i;  
    int temp;  
  
    i = 0;  
    while (i < size / 2)  
    {  
        temp = tab[i];  
        tab[i] = tab[size - 1 - i];  
        tab[size - 1 - i] = temp;  
        i++;  
    }  
}

---

# 🔬 Execução mental

int arr[] = {1, 2, 3, 4};

### Iteração 1:

i = 0 → troca 1 ↔ 4  
[4, 2, 3, 1]

### Iteração 2:

i = 1 → troca 2 ↔ 3  
[4, 3, 2, 1]

Para quando:

i < size / 2

---

# 💡 Versão alternativa (mais explícita com dois índices)

void ft_rev_int_tab(int *tab, int size)  
{  
    int i;  
    int j;  
    int temp;  
  
    i = 0;  
    j = size - 1;  
  
    while (i < j)  
    {  
        temp = tab[i];  
        tab[i] = tab[j];  
        tab[j] = temp;  
        i++;  
        j--;  
    }  
}

👉 Essa versão é mais clara em entrevistas.

---

# ⚠️ Erros comuns

## ❌ Percorrer o array inteiro

while (i < size) // ERRADO

Vai “desfazer” a troca.

---

## ❌ Não usar variável temporária

Perde valores.

---

## ❌ Índice errado

tab[size - i] // ERRADO (out of bounds)

Correto:

tab[size - 1 - i]

---

## ❌ Não considerar casos limite

- `size = 0`
- `size = 1`

---

# 🧩 O que esse exercício ensina de verdade

### 1. Manipulação de arrays via ponteiro

`int *tab` é o array.

---

### 2. Algoritmo in-place

Sem usar memória extra → mais eficiente.

---

### 3. Padrão de dois ponteiros

Esse padrão aparece em:

- reversão de arrays
- problemas de string
- algoritmos de busca

---

# 🧠 Insight de engenharia

Esse padrão é base de muitos algoritmos:

- reverse string
- palindrome check
- partições (quick sort)

👉 Você está começando a entrar em **pensamento algorítmico real**

| Conteúdo                                                               |                                             |
| ---------------------------------------------------------------------- | ------------------------------------------- |
| Linguagem C - Aula 6.1 - Domine vetores (arrays) em linguagem C (2022) | https://www.youtube.com/watch?v=5fSf9xSJK7c |
| EXERCÍCIOS EM C - Trocando posição dos vetores - Exercício 5 - Vetores | https://www.youtube.com/watch?v=lPtnw5JgLF4 |

___
___
# IX - ft_sort_int_tab

Esse exercício introduz **ordenação**, que é um dos pilares de algoritmos. Aqui a escola normalmente espera uma solução simples (como **Bubble Sort**), não algo otimizado.

---

# 📌 O que o exercício pede

Função:

void ft_sort_int_tab(int *tab, int size);

Objetivo:

➡️ Ordenar o array em **ordem crescente**  
➡️ Modificar o próprio array (in-place)

---

# 🧠 Conceito central

Dado:

int tab[] = {4, 2, 1, 3};

Resultado esperado:

[1, 2, 3, 4]

---

# 🔁 Estratégia mais usada (Bubble Sort)

A lógica é:

comparar elementos vizinhos  
se estiverem fora de ordem → trocar  
repetir várias vezes

---

# ✅ Implementação (Bubble Sort)

void ft_sort_int_tab(int *tab, int size)  
{  
    int i;  
    int j;  
    int temp;  
  
    i = 0;  
    while (i < size - 1)  
    {  
        j = 0;  
        while (j < size - 1 - i)  
        {  
            if (tab[j] > tab[j + 1])  
            {  
                temp = tab[j];  
                tab[j] = tab[j + 1];  
                tab[j + 1] = temp;  
            }  
            j++;  
        }  
        i++;  
    }  
}

---

# 🔬 Execução mental (resumida)

Array inicial:

[4, 2, 1, 3]

### Passada 1:

4 > 2 → troca → [2,4,1,3]  
4 > 1 → troca → [2,1,4,3]  
4 > 3 → troca → [2,1,3,4]

### Passada 2:

2 > 1 → troca → [1,2,3,4]

👉 E assim vai até ordenar tudo.

---

# ⚠️ Erros comuns

## ❌ Loop errado (estoura índice)

tab[j + 1] // cuidado com limites

---

## ❌ Não reduzir o range (`- i`)

Perde performance (ainda funciona, mas menos eficiente)

---

## ❌ Não usar variável temporária

Perde valores na troca

---

## ❌ Não tratar casos pequenos

- `size <= 1` → já está ordenado

---

# 🧩 O que esse exercício ensina de verdade

### 1. Algoritmos de ordenação

Primeiro contato com sorting.

---

### 2. Reutilização de `swap`

Você usa exatamente o que aprendeu antes.

---

### 3. Complexidade

Bubble Sort:

O(n²)

👉 Não é eficiente, mas é didático.

---

# 🧠 Insight de engenharia

Esse exercício não é sobre performance, é sobre:

- controle de loops
- manipulação de array
- raciocínio algorítmico

Em produção você usaria:

- QuickSort
- MergeSort
- Timsort (linguagens modernas)

| Conteúdo                                                     |                                             |
| ------------------------------------------------------------ | ------------------------------------------- |
| O que é e COMO FUNCIONA o BubbleSort (passo-a-passo)         | https://www.youtube.com/watch?v=8RkZoBZNNgI |
| Algoritmo de Ordenação Bubble Sort em C – Tutorial Completo! | https://www.youtube.com/watch?v=Cpr62US1JJc |

