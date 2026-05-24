Agora você entrou em uma lista **muito importante**: aqui você começa a trabalhar com **I/O + parsing + conversão de dados**, que é base de praticamente qualquer sistema.

Vou manter o padrão:

- ✅ conceito profundo
- ✅ implementação
- ✅ execução mental
- ✅ erros comuns
- ✅ como buscar no YouTube
- ✅ exercícios para fixação

---

# 📌 00 - ft_strlen

## 🧠 Conceito

Contar caracteres até `'\0'`.

👉 **String em C não guarda tamanho**, você precisa percorrer.

---

## ✅ Implementação

int ft_strlen(char *str)  
{  
    int i = 0;  
    while (str[i])  
        i++;  
    return (i);  
}

---

## 🔬 Insight

👉 Complexidade: **O(n)**  
👉 Sempre percorre toda a string

---

## 🔎 YouTube

- `strlen em C explicação`
- `como contar caracteres string C`

---

## 🧪 Exercícios

1. Implementar com ponteiros (`while (*str++)`)
2. Parar ao encontrar um caractere específico

---

# 📌 01 - ft_putstr

## 🧠 Conceito

Imprimir string = **percorrer + escrever byte a byte**

---

## ✅ Implementação

#include <unistd.h>  
  
void ft_putstr(char *str)  
{  
    while (*str)  
    {  
        write(1, str, 1);  
        str++;  
    }  
}

---

## 🔬 Insight

👉 `write` trabalha com bytes → baixo nível  
👉 você controla exatamente o que sai

---

## 🔎 YouTube

- `write em C explicação`
- `imprimir string sem printf C`

---

## 🧪 Exercícios

1. Criar `ft_putendl` (com `\n`)
2. Imprimir string reversa

---

# 📌 02 - ft_putnbr

## 🧠 Conceito

Converter número → string **sem usar string**

👉 usando divisão por 10

---

## ⚠️ Desafio crítico

INT_MIN = -2147483648

👉 não pode fazer `-nb` diretamente

---

## ✅ Implementação

#include <unistd.h>  
  
void ft_putchar(char c)  
{  
    write(1, &c, 1);  
}  
  
void ft_putnbr(int nb)  
{  
    if (nb == -2147483648)  
    {  
        ft_putchar('-');  
        ft_putchar('2');  
        ft_putnbr(147483648);  
        return;  
    }  
    if (nb < 0)  
    {  
        ft_putchar('-');  
        nb = -nb;  
    }  
    if (nb >= 10)  
        ft_putnbr(nb / 10);  
    ft_putchar((nb % 10) + '0');  
}

---

## 🔬 Insight

👉 recursão = imprime da esquerda pra direita  
👉 `% 10` pega o último dígito

---

## 🔎 YouTube

- `imprimir numero em C sem printf`
- `recursão em C exemplo números`

---

## 🧪 Exercícios

1. Fazer versão iterativa
2. Imprimir número invertido

---

# 📌 03 - ft_atoi

## 🧠 Conceito

Converter string → inteiro

---

## 🔁 Etapas

1. Ignorar espaços  
2. Ler sinais (+ e -)  
3. Converter números  
4. Parar no primeiro inválido

---

## ✅ Implementação

int ft_atoi(char *str)  
{  
    int i = 0;  
    int sign = 1;  
    int result = 0;  
  
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))  
        i++;  
  
    while (str[i] == '+' || str[i] == '-')  
    {  
        if (str[i] == '-')  
            sign *= -1;  
        i++;  
    }  
  
    while (str[i] >= '0' && str[i] <= '9')  
    {  
        result = result * 10 + (str[i] - '0');  
        i++;  
    }  
  
    return (result * sign);  
}

---

## 🔬 Execução

"---+--+1234ab"  
→ sinais: negativo  
→ resultado: -1234

---

## 🔎 YouTube

- `atoi em C explicação`
- `string para inteiro C`

---

## 🧪 Exercícios

1. Parar ao encontrar letra
2. Implementar versão com overflow check

---

# 📌 04 - ft_putnbr_base

## 🧠 Conceito

Converter número para qualquer base

👉 divisão sucessiva:

nbr / base_len  
nbr % base_len

---

## ⚠️ Validação da base

Erro se:

- tamanho < 2
- caracteres repetidos
- contém `+` ou `-`

---

## ✅ Implementação

int ft_strlen(char *str)  
{  
    int i = 0;  
    while (str[i])  
        i++;  
    return i;  
}  
  
int is_valid_base(char *base)  
{  
    int i, j;  
  
    if (ft_strlen(base) <= 1)  
        return 0;  
  
    for (i = 0; base[i]; i++)  
    {  
        if (base[i] == '+' || base[i] == '-')  
            return 0;  
        for (j = i + 1; base[j]; j++)  
        {  
            if (base[i] == base[j])  
                return 0;  
        }  
    }  
    return 1;  
}  
  
void ft_putnbr_base(int nbr, char *base)  
{  
    int base_len = ft_strlen(base);  
  
    if (!is_valid_base(base))  
        return;  
  
    if (nbr == -2147483648)  
    {  
        write(1, "-", 1);  
        ft_putnbr_base(-(nbr / base_len), base);  
        ft_putnbr_base(-(nbr % base_len), base);  
        return;  
    }  
  
    if (nbr < 0)  
    {  
        write(1, "-", 1);  
        nbr = -nbr;  
    }  
  
    if (nbr >= base_len)  
        ft_putnbr_base(nbr / base_len, base);  
  
    write(1, &base[nbr % base_len], 1);  
}

---

## 🔎 YouTube

- `converter numero para binario C`
- `bases numericas C explicação`

---

## 🧪 Exercícios

1. Converter para binário
2. Converter para hexadecimal

---

# 📌 05 - ft_atoi_base

## 🧠 Conceito (nível alto)

👉 Inverso do anterior  
👉 string (em base X) → inteiro

---

## 🔁 Processo

resultado = resultado * base + valor_do_char

---

## ⚠️ Parte difícil

Converter char → valor na base

---

## ✅ Implementação

int get_index(char c, char *base)  
{  
    int i = 0;  
    while (base[i])  
    {  
        if (base[i] == c)  
            return i;  
        i++;  
    }  
    return -1;  
}  
  
int ft_atoi_base(char *str, char *base)  
{  
    int i = 0, sign = 1, result = 0;  
    int base_len = ft_strlen(base);  
    int value;  
  
    if (!is_valid_base(base))  
        return 0;  
  
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))  
        i++;  
  
    while (str[i] == '+' || str[i] == '-')  
    {  
        if (str[i] == '-')  
            sign *= -1;  
        i++;  
    }  
  
    while ((value = get_index(str[i], base)) != -1)  
    {  
        result = result * base_len + value;  
        i++;  
    }  
  
    return result * sign;  
}

---

## 🔬 Execução

"101" base "01"  
→ 5

---

## 🔎 YouTube

- `converter base para decimal C`
- `atoi base C explicação`

---

## 🧪 Exercícios

1. Converter hexadecimal → int
2. Criar função que detecta base automaticamente

---

# 🧠 VISÃO GERAL DA LISTA

Você aprendeu:

### 🔹 I/O

- `write`
- `putstr`
- `putnbr`

### 🔹 Parsing

- `atoi`
- `atoi_base`

### 🔹 Conversão numérica

- decimal ↔ outras bases

---

# 🔥 Insight MAIS IMPORTANTE da lista

Você está aprendendo:

STRING ↔ NÚMERO

👉 isso é base de:

- APIs
- bancos de dados
- parsing de arquivos
- compiladores

---

# 🚀 Próximo nível mental

Se você domina isso, você já consegue:

- ler input do usuário
- interpretar dados
- transformar dados

👉 isso já é pensamento de backend