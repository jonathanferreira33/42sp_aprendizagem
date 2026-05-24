Agora você entrou em uma etapa muito importante: **programas com `main` + argumentos de linha de comando**.  
Isso é literalmente como programas reais recebem entrada no terminal.

Aqui o foco é:

argc / argv + manipulação de strings + saída com write

---

# 📌 Conceito base (ANTES de tudo)

## 🧠 `main(int argc, char **argv)`

int main(int argc, char **argv)

### 📌 Significado

- `argc` → quantidade de argumentos
- `argv` → array de strings

---

## 🔬 Exemplo

./a.out hello world

argc = 3  
  
argv[0] = "./a.out"  
argv[1] = "hello"  
argv[2] = "world"

---

# 📌 00 - ft_print_program_name

## 🧠 Conceito

👉 `argv[0]` sempre contém o nome do programa

---

## ✅ Implementação

#include <unistd.h>  
  
int main(int argc, char **argv)  
{  
    int i = 0;  
  
    (void)argc;  
    while (argv[0][i])  
    {  
        write(1, &argv[0][i], 1);  
        i++;  
    }  
    write(1, "\n", 1);  
    return (0);  
}

---

## 🧠 Insight

👉 `(void)argc` evita warning  
👉 você já começa a tratar string manualmente

---

## 🔎 YouTube

- `argc argv C explicação`
- `argumentos linha de comando C`

---

## 🧪 Exercícios

1. Imprimir só o nome sem caminho
2. Contar tamanho do nome do programa

---

# 📌 01 - ft_print_params

## 🧠 Conceito

👉 percorrer `argv` ignorando índice 0

---

## ✅ Implementação

#include <unistd.h>  
  
int main(int argc, char **argv)  
{  
    int i;  
    int j;  
  
    i = 1;  
    while (i < argc)  
    {  
        j = 0;  
        while (argv[i][j])  
        {  
            write(1, &argv[i][j], 1);  
            j++;  
        }  
        write(1, "\n", 1);  
        i++;  
    }  
    return (0);  
}

---

## 🧠 Insight

👉 `argv` = array de strings  
👉 você percorre duas dimensões:

- argumentos
- caracteres

---

## 🔎 YouTube

- `argv em C exemplos`
- `percorrer argumentos C`

---

## 🧪 Exercícios

1. Mostrar índice + argumento
2. Contar total de caracteres

---

# 📌 02 - ft_rev_params

## 🧠 Conceito

👉 mesmo que anterior, mas invertendo a ordem

---

## ✅ Implementação

#include <unistd.h>  
  
int main(int argc, char **argv)  
{  
    int i;  
    int j;  
  
    i = argc - 1;  
    while (i > 0)  
    {  
        j = 0;  
        while (argv[i][j])  
        {  
            write(1, &argv[i][j], 1);  
            j++;  
        }  
        write(1, "\n", 1);  
        i--;  
    }  
    return (0);  
}

---

## 🧠 Insight

👉 manipulação de índices reversos  
👉 muito comum em algoritmos

---

## 🔎 YouTube

- `inverter argumentos C`
- `loop reverso C`

---

## 🧪 Exercícios

1. Inverter letras de cada argumento
2. Mostrar só o último argumento

---

# 📌 03 - ft_sort_params

## 🧠 Conceito

👉 ordenar argumentos (strings) em ordem ASCII

👉 você precisa:

- comparar (`strcmp`)
- trocar (`swap`)
- ordenar (bubble sort)

---

## ✅ Implementação

#include <unistd.h>  
  
int ft_strcmp(char *s1, char *s2)  
{  
    int i = 0;  
    while (s1[i] && s2[i] && s1[i] == s2[i])  
        i++;  
    return (s1[i] - s2[i]);  
}  
  
void ft_swap(char **a, char **b)  
{  
    char *temp = *a;  
    *a = *b;  
    *b = temp;  
}  
  
int main(int argc, char **argv)  
{  
    int i;  
    int j;  
    int k;  
  
    i = 1;  
    while (i < argc - 1)  
    {  
        j = i + 1;  
        while (j < argc)  
        {  
            if (ft_strcmp(argv[i], argv[j]) > 0)  
                ft_swap(&argv[i], &argv[j]);  
            j++;  
        }  
        i++;  
    }  
  
    i = 1;  
    while (i < argc)  
    {  
        k = 0;  
        while (argv[i][k])  
        {  
            write(1, &argv[i][k], 1);  
            k++;  
        }  
        write(1, "\n", 1);  
        i++;  
    }  
    return (0);  
}

---

## 🧠 Insight FORTE

Aqui você junta tudo:

- ponteiros (`char **`)
- strings
- ordenação
- comparação

👉 isso é um mini algoritmo real

---

## 🔎 YouTube

- `ordenar argumentos C`
- `bubble sort strings C`
- `strcmp explicação C`

---

## 🧪 Exercícios

### 🔹 Nível 1

1. Ordenar ignorando maiúsculo/minúsculo
2. Ordenar por tamanho da string

---

### 🔹 Nível 2

3. Ordenar por último caractere
4. Mostrar apenas o menor argumento

---

### 🔹 Nível 3 (forte)

5. Implementar `quick sort` para strings
6. Filtrar argumentos antes de ordenar

---

# 🧠 VISÃO GERAL DA LISTA

Você aprendeu:

### 🔹 Entrada de programa

- `argc`
- `argv`

### 🔹 Manipulação real de dados

- percorrer argumentos
- imprimir
- inverter

### 🔹 Algoritmos aplicados

- ordenação
- comparação

---

# 🔥 INSIGHT MAIS IMPORTANTE

Essa lista é a primeira onde você realmente faz:

INPUT → PROCESSAMENTO → OUTPUT

👉 isso é literalmente um programa real

---

# 🚀 Evolução real

Se você domina isso, você já consegue:

- criar CLI tools
- manipular input do usuário
- construir pequenos utilitários

---

# 🎯 Como explicar para outro aluno (importante)

Explique assim:

> “argv é um array de strings, cada posição é um argumento do terminal”

E mostre:

argv[i][j]

👉 i = argumento  
👉 j = caractere