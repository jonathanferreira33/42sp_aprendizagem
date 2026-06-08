#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
 
int main (int argc, char  *argv[])
{
   int iFileDescriptor;
   ssize_t iQtdeWrite;
   char aBuffer[100];
   if( argc < 2 )
   {
      fprintf(stderr, "Obrigatório informar os nomes dos arquivos\n");
      exit(1);
   }
 
   
   return 0;
}