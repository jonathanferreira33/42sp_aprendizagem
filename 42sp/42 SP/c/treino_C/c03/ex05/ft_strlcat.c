/*
A função strlcat em C é uma alternativa segura à strcat
para concatenar (unir) duas strings, projetada para
evitar estouro de buffer (buffer overflow). Ela anexa
a string de origem ao final da string de destino,
garantindo que o resultado seja terminado por nulo (\0)
e respeitando o tamanho total do buffer de destino. 

Segurança: A strlcat lê o tamanho total do buffer de
destino, não apenas o restante disponível. Isso
impede que a escrita ultrapasse os limites da memória
alocada.
Assinatura: size_t strlcat(char *dst, const char *src, size_t size);
dst: String de destino.
src: String a ser anexada.
size: O tamanho total total do buffer dst (em bytes).

Garantia de Nulo: Ela garante que a string resultante seja sempre
finalizada com \0, desde que size seja maior que 0.

Retorno: Retorna o tamanho total da string que ela tentou
criar (tamanho inicial de dst + tamanho de src). Se o retorno
for maior ou igual a size, a string foi truncada.
Diferença da strncat: Ao contrário de strncat, que requer o
cálculo manual do espaço restante, strlcat usa o tamanho
total do buffer, tornando o código mais simples e menos
propenso a erros. 
*/