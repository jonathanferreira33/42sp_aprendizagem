Essa lista é onde você começa a trabalhar **matemática + lógica + recursão**, e isso muda bastante o nível.

Aqui o foco não é só “funcionar”, mas:

- entender **complexidade**
- saber **quando usar recursão vs iteração**
- evitar erros clássicos (principalmente base cases)

---

# 📌 00 - ft_iterative_factorial

## 🧠 Conceito

Fatorial:

n! = n × (n-1) × (n-2) ... × 1

Ex:

5! = 5 × 4 × 3 × 2 × 1 = 120

---

## ⚠️ Regras importantes

- `nb < 0` → retorna 0
- `0! = 1`

---

## ✅ Implementação

int ft_iterative_factorial(int nb)  
{  
    int result = 1;  
  
    if (nb < 0)  
        return (0);  
  
    while (nb > 1)  
    {  
        result *= nb;  
        nb--;  
    }  
    return (result);  
}

---

## 🧠 Insight

👉 Iterativo = mais eficiente (sem stack)

---

## 🔎 YouTube

- `fatorial em C iterativo`
- `loop fatorial explicação`

---

## 🧪 Exercícios

1. Implementar usando `for`
2. Mostrar passo a passo (debug mental)

---

# 📌 01 - ft_recursive_factorial

## 🧠 Conceito

Recursão:

n! = n × (n-1)!

---

## ⚠️ Base case (CRÍTICO)

0! = 1

---

## ✅ Implementação

int ft_recursive_factorial(int nb)  
{  
    if (nb < 0)  
        return (0);  
    if (nb == 0)  
        return (1);  
    return (nb * ft_recursive_factorial(nb - 1));  
}

---

## 🔬 Execução

5! = 5 × 4 × 3 × 2 × 1

---

## 🧠 Insight

👉 Recursão = elegante  
👉 Mas consome stack

---

## 🔎 YouTube

- `recursão fatorial C`
- `como funciona recursão`

---

## 🧪 Exercícios

1. Desenhar árvore de chamadas
2. Converter recursivo → iterativo

---

# 📌 02 - ft_iterative_power

## 🧠 Conceito

nb^power = nb × nb × ... (power vezes)

---

## ⚠️ Regras

- `power < 0 → 0`
- `0^0 = 1`

---

## ✅ Implementação

int ft_iterative_power(int nb, int power)  
{  
    int result = 1;  
  
    if (power < 0)  
        return (0);  
  
    while (power > 0)  
    {  
        result *= nb;  
        power--;  
    }  
    return (result);  
}

---

## 🔎 YouTube

- `potencia em C loop`

---

## 🧪 Exercícios

1. Implementar com `for`
2. Testar `power = 0`

---

# 📌 03 - ft_recursive_power

## 🧠 Conceito

nb^power = nb × nb^(power-1)

---

## ✅ Implementação

int ft_recursive_power(int nb, int power)  
{  
    if (power < 0)  
        return (0);  
    if (power == 0)  
        return (1);  
    return (nb * ft_recursive_power(nb, power - 1));  
}

---

## 🧠 Insight

👉 Mesmo padrão do fatorial

---

## 🔎 YouTube

- `recursão potencia C`

---

## 🧪 Exercícios

1. Fazer versão otimizada (log n - avançado)

---

# 📌 04 - ft_fibonacci

## 🧠 Conceito

Sequência:

0, 1, 1, 2, 3, 5, 8...

Regra:

f(n) = f(n-1) + f(n-2)

---

## ⚠️ Casos base

f(0) = 0  
f(1) = 1

---

## ✅ Implementação

int ft_fibonacci(int index)  
{  
    if (index < 0)  
        return (-1);  
    if (index == 0)  
        return (0);  
    if (index == 1)  
        return (1);  
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));  
}

---

## 🧠 Insight MUITO IMPORTANTE

👉 Complexidade: **O(2^n)**  
👉 MUITO ineficiente

---

## 🔎 YouTube

- `fibonacci recursivo C`
- `complexidade fibonacci`

---

## 🧪 Exercícios

1. Fazer versão iterativa
2. Usar memoization (avançado)

---

# 📌 05 - ft_sqrt

## 🧠 Conceito

Encontrar:

x * x = nb

---

## ✅ Implementação

int ft_sqrt(int nb)  
{  
    int i = 1;  
  
    if (nb <= 0)  
        return (0);  
  
    while (i * i <= nb)  
    {  
        if (i * i == nb)  
            return (i);  
        i++;  
    }  
    return (0);  
}

---

## 🧠 Insight

👉 busca linear → simples  
👉 pode otimizar com binária

---

## 🔎 YouTube

- `raiz quadrada em C sem sqrt`

---

## 🧪 Exercícios

1. Otimizar com busca binária
2. Testar números grandes

---

# 📌 06 - ft_is_prime

## 🧠 Conceito

Número primo:

divisível apenas por 1 e ele mesmo

---

## ✅ Implementação

int ft_is_prime(int nb)  
{  
    int i = 2;  
  
    if (nb <= 1)  
        return (0);  
  
    while (i * i <= nb)  
    {  
        if (nb % i == 0)  
            return (0);  
        i++;  
    }  
    return (1);  
}

---

## 🧠 Insight

👉 verificar até √n (otimização importante)

---

## 🔎 YouTube

- `numero primo C explicação`

---

## 🧪 Exercícios

1. Testar números grandes
2. Contar quantos primos existem até N

---

# 📌 07 - ft_find_next_prime

## 🧠 Conceito

Encontrar o próximo primo ≥ nb

---

## ✅ Implementação

int ft_find_next_prime(int nb)  
{  
    if (nb <= 2)  
        return (2);  
  
    while (!ft_is_prime(nb))  
        nb++;  
    return (nb);  
}

---

## 🧠 Insight

👉 reutilização de função (clean code)

---

## 🔎 YouTube

- `proximo numero primo C`

---

## 🧪 Exercícios

1. Encontrar intervalo de primos
2. Implementar versão otimizada

---

# 🧠 VISÃO GERAL DA LISTA

Você aprendeu:

### 🔹 Matemática computacional

- fatorial
- potência
- fibonacci

### 🔹 Recursão vs Iteração

- quando usar cada um

### 🔹 Otimização

- √n em primos
- evitar recomputação

---

# 🔥 INSIGHT MAIS IMPORTANTE

Essa lista não é sobre matemática, é sobre:

pensamento recursivo + controle de complexidade

---

# 🚀 Evolução real

Se você domina isso:

👉 já consegue resolver problemas de:

- entrevistas (mesmo que não seja seu caso)
- algoritmos reais
- sistemas que processam dados