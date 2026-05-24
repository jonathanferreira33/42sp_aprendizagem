# 📌 00 - ft_strcmp

## 🧠 Conceito

Comparar duas strings **lexicograficamente (ordem ASCII)**

"s1" vs "s2"

Retorno:

0  → iguais  
<0 → s1 < s2  
>0 → s1 > s2

👉 baseado na diferença:

s1[i] - s2[i]

---

## ✅ Implementação

int ft_strcmp(char *s1, char *s2)  
{  
    int i;  
  
    i = 0;  
    while (s1[i] && s2[i] && s1[i] == s2[i])  
        i++;  
    return (s1[i] - s2[i]);  
}

---

## 🔬 Execução mental

"abc" vs "abd"  
→ 'c' - 'd' = negativo

---

## 🎯 Insight

👉 Não compara tamanho primeiro  
👉 Compara caractere por caractere

---

## 🔎 YouTube (PT-BR)

- `strcmp em C explicação`
- `comparar strings em C`

---

## 🧪 Exercícios

1. Fazer versão **case insensitive**
2. Comparar ignorando espaços

---

# 📌 01 - ft_strncmp

## 🧠 Conceito

Mesma ideia do `strcmp`, mas:

compara apenas os primeiros N caracteres

---

## ✅ Implementação

int ft_strncmp(char *s1, char *s2, unsigned int n)  
{  
    unsigned int i;  
  
    i = 0;  
    if (n == 0)  
        return (0);  
    while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])  
        i++;  
    return (s1[i] - s2[i]);  
}

---

## ⚠️ Ponto crítico

- `n == 0` → retorna 0

---

## 🔎 YouTube

- `strncmp em C explicação`
- `comparar strings limitadas C`

---

## 🧪 Exercícios

1. Comparar só prefixo (`"abc"` vs `"abcd"`)
2. Validar senha parcial

---

# 📌 02 - ft_strcat

## 🧠 Conceito

Concatenar:

dest = dest + src

👉 adiciona `src` no final de `dest`

---

## ⚠️ MUITO IMPORTANTE

👉 `dest` precisa ter espaço suficiente

---

## ✅ Implementação

char *ft_strcat(char *dest, char *src)  
{  
    int i;  
    int j;  
  
    i = 0;  
    j = 0;  
  
    while (dest[i])  
        i++;  
    while (src[j])  
    {  
        dest[i] = src[j];  
        i++;  
        j++;  
    }  
    dest[i] = '\0';  
    return (dest);  
}

---

## 🔬 Execução

"Hello " + "World"  
→ "Hello World"

---

## 🔎 YouTube

- `strcat em C explicação`
- `concatenar strings em C`

---

## 🧪 Exercícios

1. Concatenar com limite máximo
2. Concatenar múltiplas strings

---

# 📌 03 - ft_strncat

## 🧠 Conceito

Igual ao `strcat`, mas:

concatena apenas N caracteres

---

## ✅ Implementação

char *ft_strncat(char *dest, char *src, unsigned int nb)  
{  
    unsigned int i;  
    unsigned int j;  
  
    i = 0;  
    j = 0;  
  
    while (dest[i])  
        i++;  
  
    while (j < nb && src[j])  
    {  
        dest[i] = src[j];  
        i++;  
        j++;  
    }  
  
    dest[i] = '\0';  
    return (dest);  
}

---

## 🔎 YouTube

- `strncat em C explicação`

---

## 🧪 Exercícios

1. Concatenar só metade da string
2. Criar versão segura

---

# 📌 04 - ft_strstr

## 🧠 Conceito

Buscar uma substring dentro de outra

"hello world"  
buscar "world"

👉 retorna ponteiro para onde começa

---

## 🔬 Visual

hello world  
      ↑

---

## ✅ Implementação

char *ft_strstr(char *str, char *to_find)  
{  
    int i;  
    int j;  
  
    if (to_find[0] == '\0')  
        return (str);  
  
    i = 0;  
    while (str[i])  
    {  
        j = 0;  
        while (str[i + j] && to_find[j] &&  
               str[i + j] == to_find[j])  
        {  
            j++;  
        }  
        if (to_find[j] == '\0')  
            return (&str[i]);  
        i++;  
    }  
    return (0);  
}

---

## 🧠 Insight

👉 É um “mini algoritmo de busca”

---

## 🔎 YouTube

- `strstr em C explicação`
- `buscar substring em C`

---

## 🧪 Exercícios

1. Retornar índice ao invés de ponteiro
2. Buscar ignorando maiúsculo/minúsculo

---

# 📌 05 - ft_strlcat (mais difícil da lista)

## 🧠 Conceito

Versão **segura** do `strcat`

limita pelo tamanho total do buffer

---

## 💡 O que ela resolve

👉 Evita **buffer overflow**

---

## ✅ Implementação

unsigned int ft_strlen(char *str)  
{  
    unsigned int i = 0;  
    while (str[i])  
        i++;  
    return i;  
}  
  
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)  
{  
    unsigned int i;  
    unsigned int j;  
    unsigned int dest_len;  
    unsigned int src_len;  
  
    dest_len = ft_strlen(dest);  
    src_len = ft_strlen(src);  
  
    if (size <= dest_len)  
        return (size + src_len);  
  
    i = dest_len;  
    j = 0;  
  
    while (src[j] && (i + 1) < size)  
    {  
        dest[i] = src[j];  
        i++;  
        j++;  
    }  
  
    dest[i] = '\0';  
  
    return (dest_len + src_len);  
}

---

## 🧠 Insight forte

retorno = tamanho que TENTOU criar

👉 não o tamanho real

---

## 🔎 YouTube

- `strlcat em C explicação`
- `buffer overflow C explicação`
- `funções seguras string C`

---

## 🧪 Exercícios

1. Simular buffer pequeno
2. Criar versão `strlcpy`

---

# 🧠 VISÃO GERAL DA LISTA

Você aprendeu:

### 🔹 Comparação

- `strcmp`
- `strncmp`

### 🔹 Concatenação

- `strcat`
- `strncat`
- `strlcat`

### 🔹 Busca

- `strstr`

---

# 🚀 O que isso constrói

Isso é base para:

- parsers
- filtros
- APIs
- validação de input
- sistemas reais

---

# 🎯 Como explicar isso para alguém (importante)

Se você tiver que explicar:

👉 **Strings em C são ponteiros para memória sequencial**

E tudo aqui é:

ler → comparar → copiar → modificar

---

# 🔥 Próximo nível (quando quiser)

- `ft_split` (parser real)
- `ft_atoi` (string → número)
- `ft_itoa` (número → string)