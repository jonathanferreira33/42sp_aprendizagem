### Semana 1: A Base de Tudo (Configuração e Libc)

Nesta semana, o foco é entender a memória básica, ponteiros simples e como estruturar o seu projeto.

**Dias 1 e 2: Infraestrutura e Caracteres**

- **Funções:** `Makefile`, `libft.h`, `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`.
    
- **O que estudar/entender:**
    
    - **Makefile:** Como criar regras (`all`, `clean`, `fclean`, `re`), o que são as flags `-Wall -Wextra -Werror` e como usar o comando `ar rcs` para compilar uma biblioteca estática (`.a`).
        
    - **Cabeçalhos (Headers):** O que são _Include Guards_ (`#ifndef`, `#define`, `#endif`) e como declarar protótipos de funções.
        
    - **Tabela ASCII:** Entender que em C, um `char` é apenas um número inteiro pequeno. Como fazer operações matemáticas com caracteres (ex: `c - 32` para maiúsculas).
        

**Dias 3 e 4: Manipulação de Strings (O pesadelo do `\0`)**

- **Funções:** `strlen`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `atoi`.
    
- **O que estudar/entender:**
    
    - **Strings em C:** Entender que não existe o tipo "string" nativo, apenas arrays de caracteres terminados em `\0` (Nulo).
        
    - **Ponteiros e Aritmética de Ponteiros:** Como iterar por uma string usando `*str` e `str++`.
        
    - **Tipos e Modificadores:** O que é `size_t` (e por que é diferente de `int`) e o uso da palavra-chave `const` para proteger dados lidos.
        

**Dias 5 e 6: Manipulação de Memória Bruta**

- **Funções:** `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`.
    
- **O que estudar/entender:**
    
    - **Ponteiros `void *`:** Como lidar com tipos genéricos de memória.
        
    - **Casting de Tipos:** A necessidade de converter `void *` para `unsigned char *` antes de ler ou escrever na memória byte a byte.
        
    - **Sobreposição de Memória (Memory Overlap):** O conceito crucial por trás do `memmove`. O que acontece se a origem e o destino da cópia se sobrepuserem na memória? (Dica: pesquise sobre cópia de trás para frente).
        

**Dia 7: Alocação Dinâmica Básica**

- **Funções:** `calloc`, `strdup`, `strlcpy`, `strlcat`.
    
- **O que estudar/entender:**
    
    - **Stack vs Heap:** A diferença entre declarar uma variável normal e usar `malloc()`.
        
    - **Gerenciamento de Erros:** O que retornar se o `malloc` falhar (retornar `NULL`).
        
    - A diferença entre as funções de cópia da família `strl*` (BSD) e `strn*` (C standard) na garantia da colocação do `\0`.
        

### Semana 2: Funções Adicionais e Lógica Avançada

Na segunda semana, os problemas ficam mais complexos. Você terá que gerenciar a memória que você mesmo aloca e evitar _memory leaks_ a todo custo.

**Dias 8 e 9: Strings Dinâmicas**

- **Funções:** `ft_substr`, `ft_strjoin`, `ft_strtrim`.
    
- **O que estudar/entender:**
    
    - **Alocação Segura:** Como calcular exatamente quantos bytes alocar (`strlen + 1` para o `\0`).
        
    - **Edge Cases (Casos Limite):** Como sua função deve se comportar se receber uma string vazia `""` ou ponteiros nulos?
        
    - **Lógica de ponteiros:** No `strtrim`, como encontrar o início e o fim da string usando dois índices ou ponteiros.
        

**Dias 10 e 11: O "Boss" da Parte Obrigatória (`ft_split` e `ft_itoa`)**

- **Funções:** `ft_split`, `ft_itoa`.
    
- **O que estudar/entender:**
    
    - **Ponteiros Duplos (`char` ):** O `split` retorna um array de strings. Você precisará de `malloc` para o array principal de ponteiros, e um `malloc` para cada palavra dentro dele.
        
    - **Liberação em caso de falha:** Se o terceiro `malloc` dentro de um `split` falhar, você precisa dar `free` nos dois primeiros antes de retornar `NULL` (evitar leaks no meio do processo).
        
    - **Matemática de Base 10:** No `itoa`, como contar dígitos de um inteiro, lidar com números negativos e o caso terrível do `INT_MIN` (`-2147483648`).
        

**Dia 12: Ponteiros de Função**

- **Funções:** `ft_strmapi`, `ft_striteri`.
    
- **O que estudar/entender:**
    
    - **Passando funções como parâmetros:** Como a sintaxe `void (*f)(unsigned int, char*)` funciona. É um conceito muito útil para aplicar mapeamentos iterativos sobre dados.
        

**Dia 13: File Descriptors (Manipulação de Saída)**

- **Funções:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
    
- **O que estudar/entender:**
    
    - **A função `write` (`<unistd.h>`):** Como ela funciona.
        
    - **File Descriptors (FDs):** Entender os canais padrão: `0` (Standard Input), `1` (Standard Output) e `2` (Standard Error), e como escrever dados especificamente neles.
        

**Dia 14: Polimento, Testes e Revisão Geral**

- **O que fazer:**
    
    - Passar a **Norminette** em tudo. Um erro de formatação zera seu projeto.
        
    - Escrever uma `main.c` para testar suas funções na mão.
        
    - _Opcional, mas recomendado:_ Usar testes comunitários criados por outros alunos (ex: _Francinette_, _libft-war-machine_) para checar os casos que você esqueceu de testar.
        
    - Escrever seu `README.md`.