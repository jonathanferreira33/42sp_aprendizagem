# 🚀 MINI PROJETO: Normalizador e Validador de Strings

## 📌 Objetivo

Você vai criar um programa que:

1. Recebe uma string
2. Normaliza (minúsculo ou maiúsculo)
3. Valida o conteúdo
4. Retorna um status

---

# 🧠 Problema real simulado

Imagine que você está validando entrada de usuário (login, ID, etc):

Input: "Joao123"  
Output:  
- Normalizado: "joao123"  
- É alfabético? NÃO  
- É numérico? NÃO  
- É válido? DEPENDE DA REGRA

---

# 🧱 Etapas do projeto

---

## 🔹 Etapa 1 — Normalização

Use:

- `ft_strlowcase`

👉 Converte tudo para minúsculo

---

## 🔹 Etapa 2 — Validação

Use:

- `ft_str_is_alpha`
- `ft_str_is_numeric`
- `ft_str_is_printable`

---

## 🔹 Etapa 3 — Regras de negócio

Você define regras, por exemplo:

✔ só letras → válido  
✔ só números → válido  
✔ misto → inválido  
✔ vazio → válido

---

# 🧩 Implementação exemplo

int is_valid(char *str)  
{  
    if (ft_str_is_alpha(str))  
        return (1);  
    if (ft_str_is_numeric(str))  
        return (1);  
    return (0);  
}

---

# 🧪 Teste mental

"abc"     → válido  
"123"     → válido  
"abc123"  → inválido  
""        → válido

---

# 🔥 Exercícios (nível crescente)

---

## 🧪 Nível 1 (obrigatório)

1. Criar função:

int ft_is_alphanumeric(char *str);

👉 aceita letras OU números

---

2. Criar função:

int ft_has_uppercase(char *str);

---

## 🧪 Nível 2 (intermediário)

3. Criar função:

int ft_str_is_email_like(char *str);

Regra:

- precisa ter `'@'`
- precisa ter `'.'`

---

4. Criar função:

char *ft_strcapitalize(char *str);

Ex:

"ola mundo" → "Ola Mundo"

---

## 🧪 Nível 3 (forte — estilo 42 hard)

5. Criar função:

void ft_remove_non_alpha(char *str);

👉 remove tudo que não for letra

---

6. Criar função:

void ft_reverse_words(char *str);

Ex:

"ola mundo" → "mundo ola"

---

## 🧪 Nível 4 (pensamento de arquiteto)

7. Criar pipeline:

char *process(char *input);

Fluxo:

input → lowercase → valida → transforma → output

---

# 🔎 Como buscar no YouTube (EM PORTUGUÊS)

---

## 🔰 Base

- `manipulação de strings em C`
- `funções de string em C explicação`

---

## 🧠 Intermediário

- `validação de string em C`
- `como tratar entrada do usuário em C`
- `processamento de string C`

---

## 🔬 Mais avançado

- `parser em C string`
- `string processing C do zero`
- `como criar funções de string em C`

---

# 🎯 Busca mais assertiva

> `projeto manipulação de string em C passo a passo`

---

# 🧠 Insight de engenharia

Você acabou de montar algo que existe em:

- APIs (validação de input)
- sistemas de autenticação
- parsers
- compiladores

👉 Isso NÃO é mais só exercício — é base de backend real.