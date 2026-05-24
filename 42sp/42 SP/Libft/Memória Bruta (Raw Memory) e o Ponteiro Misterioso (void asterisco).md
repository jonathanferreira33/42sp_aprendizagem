Nas funções da primeira parte da Libft (como `memset`, `bzero`, `memcpy`), você verá um tipo de dado muito estranho no protótipo: o **`void *`**.

O `void *` é um **ponteiro genérico**. Ele diz ao computador: _"Eu tenho o endereço de uma casa na memória, mas não faço a menor ideia do que está guardado lá dentro. Pode ser um texto, um número inteiro, uma imagem ou um arquivo inteiro."_

Como o computador não sabe o tipo de dado, acontece o seguinte:

1. Você **não pode fazer aritmética** com um `void *` direto (o computador não sabe se pula de 1 em 1, de 4 em 4, etc.).
    
2. Você **not pode ler ou modificar** o conteúdo direto dele (fazer `*ptr = 0` quebra o código).
    

#### Como resolvemos isso? Com o Type Casting (Conversão de Tipo)

Para ler ou alterar a memória bruta byte por byte (que é o que funções como o `memset` fazem), nós mascaramos esse ponteiro misterioso como um ponteiro de **`unsigned char *`**.

**Por que `unsigned char`?** Porque no sistema, um `unsigned char` tem o tamanho exato de **1 byte** e aceita valores de 0 a 255 (sem sinal negativo para atrapalhar a matemática binária). Ao converter um `void *` para `unsigned char *`, você ganha o superpoder de caminhar pela memória de 1 em 1 byte com precisão cirúrgica, alterando exatamente o que quiser.

Para que você possa visualizar e praticar essa lógica de como os ponteiros se movem e como a memória bruta é interpretada, preparei um simulador interativo abaixo. Experimente alternar entre os tipos de dados e avançar o ponteiro para ver como os endereços mudam de comportamento.