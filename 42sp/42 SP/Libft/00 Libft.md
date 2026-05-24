## Capítulo I

### Introdução

A programação em C pode ser bastante tediosa sem o acesso às funções padrão altamente úteis. Este projeto tem como objetivo ajudar você a entender como essas funções funcionam, implementando-as você mesmo e aprendendo a usá-las de forma eficaz. Você criará sua própria biblioteca, que será valiosa para as suas futuras tarefas de C na escola.

## Capítulo II

### Instruções Comuns

- **O seu projeto deve ser escrito em C.**
    
- O seu projeto deve ser escrito de acordo com a **Norma** (The Norm). Se você tiver arquivos/funções de bônus, eles estarão incluídos na verificação da norma e você receberá nota 0 se houver algum erro de norma.
    
- As suas funções não devem terminar inesperadamente (_segmentation fault_, _bus error_, _double free_, etc.), exceto por comportamentos indefinidos. Se isso ocorrer, o seu projeto será considerado não funcional e receberá nota 0 durante a avaliação.
    
- Toda a memória alocada na _heap_ deve ser devidamente liberada quando necessário. **Vazamentos de memória (memory leaks) não serão tolerados.**
    
- Se o enunciado exigir, você deve enviar um **Makefile** que compile os seus arquivos-fonte para a saída exigida com as flags `-Wall`, `-Wextra` e `-Werror`, usando `cc`. Além disso, o seu Makefile não deve realizar _relinking_ desnecessário.
    
- O seu Makefile deve conter, pelo menos, as regras `$(NAME)`, `all`, `clean`, `fclean` e `re`.
    
- Para enviar bônus para o seu projeto, você deve incluir uma regra `bonus` no seu Makefile, que adicionará todos os cabeçalhos, bibliotecas ou funções que não são permitidos na parte principal do projeto. Os bônus devem ser colocados em arquivos `_bonus.{c/h}`, a menos que o enunciado especifique o contrário. A avaliação das partes obrigatória e de bônus é realizada separadamente.
    
- Se o seu projeto permitir o uso da sua `libft`, você deve copiar os fontes dela e o Makefile associado para uma pasta `libft`. O Makefile do seu projeto deve compilar a biblioteca usando o Makefile dela e, em seguida, compilar o projeto.
    
- Incentivamos você a criar programas de teste para o seu projeto, embora esse trabalho não precise ser enviado e não será pontuado. Isso lhe dará a oportunidade de testar facilmente o seu trabalho e o de seus colegas. Você achará esses testes especialmente úteis durante a sua defesa (avaliação). De fato, durante a defesa, você estará livre para usar os seus testes e/ou os testes do colega que estiver avaliando.
    
- Envie o seu trabalho para o repositório Git atribuído. Apenas o trabalho no repositório Git será avaliado. Se o **Deepthought** (o avaliador automático) for atribuído para corrigir o seu trabalho, isso ocorrerá após as avaliações por pares. Se ocorrer um erro em qualquer seção do seu trabalho durante a correção do Deepthought, a avaliação será interrompida.
    

## Capítulo III

### Instruções de IA

#### ● Contexto

Este projeto foi projetado para ajudar você a descobrir os blocos de construção fundamentais do seu treinamento na 42.

Para fixar adequadamente os conhecimentos e habilidades essenciais, é fundamental adotar uma abordagem reflexiva ao usar ferramentas e suportes de IA.

O verdadeiro aprendizado fundamental exige um esforço intelectual genuíno — por meio de desafios, repetição e trocas de aprendizado entre pares.

Para uma visão mais completa da nossa posição sobre a IA — como ferramenta de aprendizado, como parte do treinamento da 42 e como uma expectativa no mercado de trabalho — consulte o FAQ dedicado na intranet.

#### ● Mensagem principal

- ☛ Construa bases fortes sem atalhos.
    
- ☛ Desenvolva verdadeiramente habilidades técnicas e competências pessoais (_tech & power skills_).
    
- ☛ Vivencie o verdadeiro aprendizado entre pares, comece a aprender a aprender e a resolver novos problemas.
    
- ☛ A jornada de aprendizado é mais importante do que o resultado.
    
- ☛ Conheça os riscos associados à IA e desenvolva práticas eficazes de controle e contramedidas para evitar armadilhas comuns.
    

#### ● Regras do estudante:

- Você deve aplicar o raciocínio às tarefas atribuídas, especialmente antes de recorrer à IA.
    
- Você não deve pedir respostas diretas à IA.
    
- Você deve se informar sobre a abordagem global da 42 em relação à IA.
    

#### ● Resultados da fase:

Dentro desta fase fundamental, você alcançará os seguintes resultados:

- Obter bases técnicas e de programação adequadas.
    
- Saber por que e como a IA pode ser perigosa durante esta fase.
    

#### ● Comentários e exemplo:

- Sim, sabemos que a IA existe — e sim, ela pode resolver os seus projetos. Mas você está aqui para aprender, não para provar que a IA aprendeu. Não perca o seu tempo (nem o nosso) apenas para demonstrar que a IA consegue resolver o problema proposto.
    
- Aprender na 42 não é sobre saber a resposta — é sobre desenvolver a capacidade de encontrar uma. A IA lhe dá a resposta diretamente, mas isso impede você de construir o seu próprio raciocínio. E o raciocínio leva tempo, esforço e envolve falhas. O caminho para o sucesso não deve ser fácil.
    
- Tenha em mente que, **durante os exames, a IA não está disponível** — sem internet, sem smartphones, etc. Você perceberá rapidamente se dependeu demais da IA no seu processo de aprendizado.
    
- O aprendizado entre pares expõe você a diferentes ideias e abordagens, melhorando suas habilidades interpessoais e sua capacidade de pensar de forma divergente. Isso é muito mais valioso do que apenas conversar com um bot. Portanto, não seja tímido — converse, faça perguntas e aprendam juntos!
    
- Sim, a IA fará parte do currículo — tanto como ferramenta de aprendizado quanto como um tópico em si. Você terá até a chance de criar seu próprio software de IA. Para saber mais sobre a nossa abordagem "crescendo" pela qual você passará, consulte a documentação disponível na intranet.
    

> **✓ Boa prática:** > Estou travado em um conceito novo. Pergunto a alguém por perto como essa pessoa o abordou. Conversamos por 10 minutos — e de repente tudo faz sentido. Eu entendo.

> **✗ Má prática:** > Uso a IA secretamente, copio um código que parece correto. Durante a avaliação por pares, não consigo explicar nada. Eu reprovo. Durante o exame — sem IA — fico travado novamente. Eu reprovo.

## Capítulo IV

### Parte Obrigatória

- **Nome do Programa:** `libft.a`
    
- **Arquivos a enviar:** `Makefile`, `libft.h`, `ft_*.c`
    
- **Makefile:** `NAME`, `all`, `clean`, `fclean`, `re`
    
- **Funções externas:** Detalhadas abaixo
    
- **Libft autorizada:** Não se aplica (n/a)
    
- **Descrição:** Crie sua própria biblioteca: uma coleção de funções que será uma ferramenta útil para o seu currículo.
    

#### IV.1 Considerações técnicas

- A declaração de variáveis globais é estritamente proibida.
    
- Se precisar de funções auxiliares para dividir uma função mais complexa, defina-as como funções estáticas (`static`) para restringir o escopo delas ao arquivo apropriado.
    
- Todos os arquivos devem ser colocados na raiz do seu repositório.
    
- Não é permitido enviar arquivos não utilizados.
    
- Todo arquivo `.c` deve compilar com as seguintes flags: `-Wall -Wextra -Werror`.
    
- Você deve usar o comando `ar` para criar sua biblioteca. O uso de `libtool` é estritamente proibido.
    
- O seu `libft.a` deve ser criado na raiz do seu repositório.
    

#### IV.2 Parte 1 - Funções da Libc

Para começar, você deve reimplementar um conjunto de funções da `libc`. Suas versões terão os mesmos protótipos e comportamentos que as originais, aderindo estritamente às definições de suas páginas de manual (_man page_). A única diferença será nos nomes, que devem começar com o prefixo `ft_`. Por exemplo, `strlen` torna-se `ft_strlen`.

> ⚠️ Alguns dos protótipos de funções que você precisa reimplementar usam o qualificador `restrict`. Esta palavra-chave faz parte do padrão C99. Portanto, **é proibido incluí-la em seus próprios protótipos** e compilar seu código com a flag `-std=c99`.

Você deve escrever suas próprias funções que implementem as seguintes originais. Elas não devem depender de nenhuma função externa.

Para as funções de classificação de caracteres (`isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`), o valor de retorno deve ser:

- `1` se o caractere corresponder à classe testada
    
- `0` se o caractere não corresponder
    

Lista de funções:

- `isalpha`
    
- `isdigit`
    
- `isalnum`
    
- `isascii`
    
- `isprint`
    
- `strlen`
    
- `memset`
    
- `bzero`
    
- `memcpy`
    
- `memmove`
    
- `strlcpy`
    
- `strlcat`
    
- `toupper`
    
- `tolower`
    
- `strchr`
    
- `strrchr`
    
- `strncmp`
    
- `memchr`
    
- `memcmp`
    
- `strnstr`
    
- `atoi`
    

Para implementar as duas funções a seguir, você usará a função `malloc()`:

- `calloc`
    
- `strdup`
    

> 💡 Dependendo do seu sistema operacional atual, o comportamento da função `calloc` pode diferir da descrição da sua _man page_. Você deve seguir esta regra: **Se `nmemb` ou `size` for 0, então `calloc()` retorna um valor de ponteiro único** que pode ser passado com sucesso para a função `free()`.

> 💡 Algumas funções que você deve reimplementar, como `strlcpy`, `strlcat` e `bzero`, não são incluídas por padrão na Biblioteca GNU C (`glibc`). Para testá-las contra o padrão do sistema, pode ser necessário incluir e compilar com a flag `-lbsd`. Este comportamento é específico de sistemas `glibc`. Se tiver curiosidade, aproveite a oportunidade para explorar as diferenças entre a `glibc` e a `BSD libc`.

#### IV.3 Parte 2 - Funções Adicionais

Nesta segunda parte, você deve desenvolver um conjunto de funções que não estão incluídas na `libc` ou que existem em uma forma diferente. _Algumas das funções da Parte 1 podem ser úteis para implementar as funções abaixo._

- **Nome da Função:** `ft_substr`
    
- **Protótipo:** `char *ft_substr(char const *s, unsigned int start, size_t len);`
    
- **Parâmetros:**
    
    - `s`: A string original a partir da qual criar a substring.
        
    - `start`: O índice inicial da substring dentro de `s`.
        
    - `len`: O comprimento máximo della substring.
        
- **Valor de Retorno:** A substring. `NULL` se a alocação falhar.
    
- **Função Externa:** `malloc`
    
- **Descrição:** Aloca memória (usando `malloc(3)`) e retorna uma substring da string `s`. A substring começa no índice `start` e tem um comprimento máximo de `len`.
    

- **Nome da Função:** `ft_strjoin`
    
- **Protótipo:** `char *ft_strjoin(char const *s1, char const *s2);`
    
- **Parâmetros:**
    
    - `s1`: A string de prefixo.
        
    - `s2`: A string de sufixo.
        
- **Valor de Retorno:** A nova string. `NULL` se a alocação falhar.
    
- **Função Externa:** `malloc`
    
- **Descrição:** Aloca memória (usando `malloc(3)`) e retorna uma nova string, que é o resultado da concatenação de `s1` e `s2`.
    

- **Nome da Função:** `ft_strtrim`
    
- **Protótipo:** `char *ft_strtrim(char const *s1, char const *set);`
    
- **Parâmetros:**
    
    - `s1`: A string a ser limpa (_trimmed_).
        
    - `set`: A string contendo o conjunto de caracteres a serem removidos.
        
- **Valor de Retorno:** A string limpa. `NULL` se a alocação falhar.
    
- **Função Externa:** `malloc`
    
- **Descrição:** Aloca memória (usando `malloc(3)`) e retorna uma cópia de `s1` com os caracteres presentes em `set` removidos do início e do fim.
    

- **Nome da Função:** `ft_split`
    
- **Protótipo:** `char ft_split(char const *s, char c);`
    
- **Parâmetros:**
    
    - `s`: A string a ser dividida.
        
    - `c`: O caractere delimitador.
        
- **Valor de Retorno:** O array de novas strings resultante da divisão. `NULL` se qualquer alocação falhar. A estrutura retornada será desalocada usando: 1) `free()` em cada string do array; 2) `free()` no próprio array.
    
- **Função Externa:** `malloc`, `free`
    
- **Descrição:** Aloca memória (usando `malloc(3)`) e retorna um array de strings obtido ao dividir `s` usando o caractere `c` como delimitador. Cada string no array retornado é alocada de forma independente. O próprio array de ponteiros também é alocado dinamicamente. O array retornado deve ser finalizado com `NULL`.
    

- **Nome da Função:** `ft_itoa`
    
- **Protótipo:** `char *ft_itoa(int n);`
    
- **Parâmetros:**
    
    - `n`: O número inteiro a ser convertido.
        
- **Valor de Retorno:** A string que representa o número inteiro. `NULL` se a alocação falhar.
    
- **Função Externa:** `malloc`
    
- **Descrição:** Aloca memória (usando `malloc(3)`) e retorna uma string que representa o número inteiro recebido como argumento. Números negativos devem ser gerenciados.
    

- **Nome da Função:** `ft_strmapi`
    
- **Protótipo:** `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
    
- **Parâmetros:**
    
    - `s`: A string a ser iterada.
        
    - `f`: A função a ser aplicada a cada caractere.
        
- **Valor de Retorno:** A string criada a partir das aplicações sucessivas de `f`. Retorna `NULL` se a alocação falhar.
    
- **Função Externa:** `malloc`
    
- **Descrição:** Aplica a função `f` a cada caractere da string `s`, passando seu índice como primeiro argumento e o próprio caractere como segundo. Uma nova string é criada (usando `malloc(3)`) para armazenar os resultados das aplicações sucessivas de `f`.
    

- **Nome da Função:** `ft_striteri`
    
- **Protótipo:** `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
    
- **Parâmetros:**
    
    - `s`: A string a ser iterada.
        
    - `f`: A função a ser aplicada a cada caractere.
        
- **Valor de Retorno:** Nenhum
    
- **Função Externa:** Nenhum
    
- **Descrição:** Aplica a função `f` a cada caractere da string passada como argumento, passando seu índice como primeiro argumento. Cada caractere é passado por endereço para `f`, para que possa ser modificado, se necessário.
    

- **Nome da Função:** `ft_putchar_fd`
    
- **Protótipo:** `void ft_putchar_fd(char c, int fd);`
    
- **Parâmetros:**
    
    - `c`: O caractere a ser exibido.
        
    - `fd`: O descritor de arquivo (_file descriptor_) no qual escrever.
        
- **Valor de Retorno:** Nenhum
    
- **Função Externa:** `write`
    
- **Descrição:** Escreve o caractere `c` no descritor de arquivo especificado.
    

- **Nome da Função:** `ft_putstr_fd`
    
- **Protótipo:** `void ft_putstr_fd(char *s, int fd);`
    
- **Parâmetros:**
    
    - `s`: A string a ser exibida.
        
    - `fd`: O descritor de arquivo no qual escrever.
        
- **Valor de Retorno:** Nenhum
    
- **Função Externa:** `write`
    
- **Descrição:** Escreve a string `s` no descritor de arquivo especificado.
    

- **Nome da Função:** `ft_putendl_fd`
    
- **Protótipo:** `void ft_putendl_fd(char *s, int fd);`
    
- **Parâmetros:**
    
    - `s`: A string a ser exibida.
        
    - `fd`: O descritor de arquivo no qual escrever.
        
- **Valor de Retorno:** Nenhum
    
- **Função Externa:** `write`
    
- **Descrição:** Escreve a string `s` no descritor de arquivo especificado, seguida de uma nova linha (`\n`).
    

- **Nome da Função:** `ft_putnbr_fd`
    
- **Protótipo:** `void ft_putnbr_fd(int n, int fd);`
    
- **Parâmetros:**
    
    - `n`: O número inteiro a ser exibido.
        
    - `fd`: O descritor de arquivo no qual escrever.
        
- **Valor de Retorno:** Nenhum
    
- **Função Externa:** `write`
    
- **Descrição:** Escreve o número inteiro `n` no descritor de arquivo especificado.
    

#### IV.4 Parte 3 - Lista Encadeada

Funções de manipulação de memória e strings são úteis. Mas você logo descobrirá que manipular listas é ainda mais útil.

Nesta terceira parte, você deve implementar funções usando uma estrutura para manipular listas encadeadas. Para fazer isso, adicione a seguinte declaração de estrutura ao seu arquivo `libft.h`:

``` C
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

Os membros da estrutura `t_list` são:

- `content`: Os dados contidos no nó. O uso de `void *` permite armazenar qualquer tipo de dado.
    
- `next`: O endereço do próximo nó, ou `NULL` se o nó atual for o último.
    

Implemente as seguintes funções para usar suas listas facilmente:

- **Nome da Função:** `ft_lstnew`
    
- **Protótipo:** `t_list *ft_lstnew(void *content);`
    
- **Parâmetros:**
    
    - `content`: O conteúdo a ser armazenado no novo nó.
        
- **Valor de Retorno:** Um ponteiro para o novo nó.
    
- **Função Externa:** `malloc`
    
- **Descrição:** Aloca memória (usando `malloc(3)`) e retorna um novo nó. A variável membro `content` é inicializada com o parâmetro `content` fornecido. A variável `next` é inicializada como `NULL`.
    

- **Nome da Função:** `ft_lstadd_front`
    
- **Protótipo:** `void ft_lstadd_front(t_list lst, t_list *new);`
    
- **Parâmetros:**
    
    - `lst`: O endereço de um ponteiro para o primeiro nó de uma lista.
        
    - `new`: O endereço de um ponteiro para o nó a ser adicionado.
        
- **Valor de Retorno:** Nenhum
    
- **Função Externa:** Nenhum
    
- **Descrição:** Adiciona o nó `new` no início da lista.
    

- **Nome da Função:** `ft_lstsize`
    
- **Protótipo:** `int ft_lstsize(t_list *lst);`
    
- **Parâmetros:**
    
    - `lst`: O início da lista.
        
- **Valor de Retorno:** O comprimento da lista.
    
- **Função Externa:** Nenhum
    
- **Descrição:** Conta o número de nós na lista.
    

- **Nome da Função:** `ft_lstlast`
    
- **Protótipo:** `t_list *ft_lstlast(t_list *lst);`
    
- **Parâmetros:**
    
    - `lst`: O início da lista.
        
- **Valor de Retorno:** O último nó da lista.
    
- **Função Externa:** Nenhum
    
- **Descrição:** Retorna o último nó da lista.
    

- **Nome da Função:** `ft_lstadd_back`
    
- **Protótipo:** `void ft_lstadd_back(t_list lst, t_list *new);`
    
- **Parâmetros:**
    
    - `lst`: O endereço de um ponteiro para o primeiro nó de uma lista.
        
    - `new`: O endereço de um ponteiro para o nó a ser adicionado.
        
- **Valor de Retorno:** Nenhum
    
- **Função Externa:** Nenhum
    
- **Descrição:** Adiciona o nó `new` no final da lista.
    

- **Nome da Função:** `ft_lstdelone`
    
- **Protótipo:** `void ft_lstdelone(t_list *lst, void (*del)(void *));`
    
- **Parâmetros:**
    
    - `lst`: O nó a ser liberado.
        
    - `del`: O endereço da função usada para deletar o conteúdo.
        
- **Valor de Retorno:** Nenhum
    
- **Função Externa:** `free`
    
- **Descrição:** Recebe um nó como parâmetro e libera o seu conteúdo usando a função `del`. Libera o nó em si, mas **NÃO** libera o próximo nó.
    

- **Nome da Função:** `ft_lstclear`
    
- **Protótipo:** `void ft_lstclear(t_list lst, void (*del)(void *));`
    
- **Parâmetros:**
    
    - `lst`: O endereço de um ponteiro para um nó.
        
    - `del`: O endereço da função usada para deletar o conteúdo do nó.
        
- **Valor de Retorno:** Nenhum
    
- **Função Externa:** `free`
    
- **Descrição:** Deleta e libera o nó fornecido e todos os seus sucessores, usando a função `del` e `free(3)`. Por fim, define o ponteiro da lista como `NULL`.
    

- **Nome da Função:** `ft_lstiter`
    
- **Protótipo:** `void ft_lstiter(t_list *lst, void (*f)(void *));`
    
- **Parâmetros:**
    
    - `lst`: O endereço de um ponteiro para um nó.
        
    - `f`: O endereço da função a ser aplicada ao conteúdo de cada nó.
        
- **Valor de Retorno:** Nenhum
    
- **Função Externa:** Nenhum
    
- **Descrição:** Itera pela lista `lst` e aplica a função `f` ao conteúdo de cada nó.
    

- **Nome da Função:** `ft_lstmap`
    
- **Protótipo:** `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
    
- **Parâmetros:**
    
    - `lst`: O endereço de um ponteiro para um nó.
        
    - `f`: O endereço da função aplicada ao conteúdo de cada nó.
        
    - `del`: O endereço da função usada para deletar o conteúdo de um nó, se necessário.
        
- **Valor de Retorno:** A nova lista. `NULL` se a alocação falhar.
    
- **Função Externa:** `malloc`, `free`
    
- **Descrição:** Itera pela lista `lst`, aplica a função `f` ao conteúdo de cada nó e cria uma nova lista resultante das aplicações sucessivas da função `f`. A função `del` é usada para deletar o conteúdo de um nó, se necessário.

## Capítulo V

### Requisitos do Readme

Um arquivo `README.md` deve ser fornecido na raiz do seu repositório Git. O seu propósito é permitir que qualquer pessoa que não esteja familiarizada com o projeto (colegas, equipe, recrutadores, etc.) entenda rapidamente do que se trata o projeto, como executá-lo e onde encontrar mais informações sobre o assunto.

O `README.md` deve incluir pelo menos:

- **A primeiríssima linha deve estar em itálico e conter:** _This project has been created as part of the 42 curriculum by [, [, [...]]]._
    
- Uma seção **“Description”** (Descrição) que apresente claramente o projeto, incluindo seu objetivo e uma breve visão geral.
    
- Uma seção **“Instructions”** (Instruções) contendo qualquer informação relevante sobre compilação, instalação e/ou execução.
    
- Uma seção **“Resources”** (Recursos) listando referências clássicas relacionadas ao tema (documentação, artigos, tutoriais, etc.), bem como uma **descrição de como a IA foi usada** — especificando para quais tarefas e em quais partes do projeto.
    

➠ Seções adicionais podem ser exigidas dependendo do projeto (ex: exemplos de uso, lista de funcionalidades, escolhas técnicas, etc.). Quaisquer adições necessárias seriam listadas explicitamente abaixo.

- Uma descrição detalhada da biblioteca criada para este projeto também deve ser incluída.
    

> 💡 O inglês é recomendado; alternativamente, você pode usar o idioma principal do seu campus.

## Capítulo VI

### Envio e avaliação por pares

Envie o seu trabalho no seu repositório Git como de costume. Apenas o trabalho dentro do seu repositório será avaliado durante a avaliação por pares. Certifique-se de verificar duas vezes os nomes dos seus arquivos para garantir que estejam corretos.

**Coloque todos os seus arquivos na raiz do seu repositório.**

Durante a avaliação, uma breve modificação do projeto pode ser solicitada ocasionalmente. Isso pode envolver uma pequena mudança de comportamento, algumas linhas de código para escrever ou reescrever, ou uma funcionalidade fácil de adicionar.

Embora esta etapa possa não se aplicar a todos os projetos, você deve estar preparado para ela caso seja mencionada nas diretrizes de avaliação. Esta etapa serve para verificar a sua real compreensão de uma parte específica do projeto. A modificação pode ser realizada em qualquer ambiente de desenvolvimento que você escolher (ex: sua configuração habitual) e deve ser viável em poucos minutos — a menos que um período de tempo específico seja definido como parte da avaliação.

Você pode, por exemplo, ser solicitado a fazer uma pequena atualização em uma função ou script, modificar uma exibição ou ajustar uma estrutura de dados para armazenar novas informações, etc. Os detalhes (escopo, alvo, etc.) serão especificados nas diretrizes de avaliação e podem variar de uma avaliação para outra para o mesmo projeto.