# 📌 00 - ft_strcpy

## 🧠 Conceito

Copiar uma string (`src`) para outra (`dest`) **incluindo o `'\0'`**.

---

## ✅ Implementação

char *ft_strcpy(char *dest, char *src)  
{  
    int i;  
  
    i = 0;  
    while (src[i] != '\0')  
    {  
        dest[i] = src[i];  
        i++;  
    }  
    dest[i] = '\0';  
    return (dest);  
}

---

## ⚠️ Ponto crítico

- `dest` precisa ter espaço suficiente

---

## 🔎 YouTube (PT-BR)

- `strcpy em C explicação`
- `como copiar string em C`
- `função strcpy implementada`

---

## 🧪 Exercícios

1. Implemente `ft_strcpy` sem usar índice (só ponteiros)
2. Copie apenas até encontrar um caractere específico (ex: `'a'`)

---

# 📌 01 - ft_strncpy

## 🧠 Conceito

Copiar **até n caracteres**

---

## ✅ Implementação

char *ft_strncpy(char *dest, char *src, unsigned int n)  
{  
    unsigned int i;  
  
    i = 0;  
    while (i < n && src[i] != '\0')  
    {  
        dest[i] = src[i];  
        i++;  
    }  
    while (i < n)  
    {  
        dest[i] = '\0';  
        i++;  
    }  
    return (dest);  
}

---

## ⚠️ Diferença importante

- Pode **não terminar com `'\0'`** se `src >= n`

---

## 🔎 YouTube

- `strncpy em C explicação`
- `diferença strcpy strncpy`

---

## 🧪 Exercícios

1. Teste com `n` menor que o tamanho da string
2. Teste com `n` maior que o tamanho

---

# 📌 02 - ft_str_is_alpha

## 🧠 Conceito

Verificar se só contém letras: `A-Z` ou `a-z`

---

## ✅ Implementação

int ft_str_is_alpha(char *str)  
{  
    int i;  
  
    i = 0;  
    if (str[0] == '\0')  
        return (1);  
    while (str[i])  
    {  
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||  
              (str[i] >= 'a' && str[i] <= 'z')))  
            return (0);  
        i++;  
    }  
    return (1);  
}

---

## 🔎 YouTube

- `verificar letras string C`
- `ascii tabela C explicação`

---

## 🧪 Exercícios

1. Aceitar também espaço como válido
2. Criar versão que aceita acentos (nível avançado)

---

# 📌 03 - ft_str_is_numeric

## ✅ Implementação

int ft_str_is_numeric(char *str)  
{  
    int i;  
  
    i = 0;  
    if (str[0] == '\0')  
        return (1);  
    while (str[i])  
    {  
        if (!(str[i] >= '0' && str[i] <= '9'))  
            return (0);  
        i++;  
    }  
    return (1);  
}

---

## 🔎 YouTube

- `verificar numero string C`
- `ascii numeros C`

---

## 🧪 Exercícios

1. Permitir números negativos (`-123`)
2. Permitir decimal (`12.5`)

---

# 📌 04 - ft_str_is_lowercase

## ✅ Implementação

int ft_str_is_lowercase(char *str)  
{  
    int i;  
  
    i = 0;  
    if (str[0] == '\0')  
        return (1);  
    while (str[i])  
    {  
        if (!(str[i] >= 'a' && str[i] <= 'z'))  
            return (0);  
        i++;  
    }  
    return (1);  
}

---

## 🧪 Exercícios

1. Converter string e depois validar
2. Misturar com `ft_strlowcase`

---

# 📌 05 - ft_str_is_uppercase

## ✅ Implementação

int ft_str_is_uppercase(char *str)  
{  
    int i;  
  
    i = 0;  
    if (str[0] == '\0')  
        return (1);  
    while (str[i])  
    {  
        if (!(str[i] >= 'A' && str[i] <= 'Z'))  
            return (0);  
        i++;  
    }  
    return (1);  
}

---

## 🧪 Exercícios

1. Criar função que detecta se é “misto” (upper + lower)

---

# 📌 06 - ft_str_is_printable

## 🧠 Conceito

ASCII imprimível: **32 a 126**

---

## ✅ Implementação

int ft_str_is_printable(char *str)  
{  
    int i;  
  
    i = 0;  
    if (str[0] == '\0')  
        return (1);  
    while (str[i])  
    {  
        if (!(str[i] >= 32 && str[i] <= 126))  
            return (0);  
        i++;  
    }  
    return (1);  
}

---

## 🔎 YouTube

- `tabela ascii explicação`
- `caracteres imprimiveis C`

---

## 🧪 Exercícios

1. Detectar caracteres invisíveis (`\n`, `\t`)
2. Filtrar string removendo não imprimíveis

---

# 📌 07 - ft_strupcase

## 🧠 Conceito

Converter minúsculas → maiúsculas

---

## ✅ Implementação

char *ft_strupcase(char *str)  
{  
    int i;  
  
    i = 0;  
    while (str[i])  
    {  
        if (str[i] >= 'a' && str[i] <= 'z')  
            str[i] -= 32;  
        i++;  
    }  
    return (str);  
}

---

## 🔎 YouTube

- `converter maiusculo minusculo C`
- `ascii diferença letras C`

---

## 🧪 Exercícios

1. Fazer sem usar `- 32` (mais legível)
2. Converter só primeira letra

---

# 📌 08 - ft_strlowcase

## ✅ Implementação

char *ft_strlowcase(char *str)  
{  
    int i;  
  
    i = 0;  
    while (str[i])  
    {  
        if (str[i] >= 'A' && str[i] <= 'Z')  
            str[i] += 32;  
        i++;  
    }  
    return (str);  
}

---

## 🧪 Exercícios

1. Fazer função que alterna maiúsculo/minúsculo
2. Normalizar texto inteiro

---

# 🧠 Visão geral (o que você acabou de aprender)

Você cobriu:

- ✔️ Cópia de memória (strings)
- ✔️ Validação de dados
- ✔️ Manipulação de ASCII
- ✔️ Transformação de texto

👉 Isso é literalmente a base de:

- parsers
- APIs
- validação de input
- sistemas reais