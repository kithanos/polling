#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main( int argc, char **argv )
{
  FILE *arq;
  char Linha[100];
  char nomearquivo[100];
  nomearquivo [ 0 ] = 0;
  char *result;
  int i,n;
  int dado[4096];
  
  strcpy( nomearquivo, argv[ 1 ] );

  arq = fopen(nomearquivo, "rt");

  if (arq == NULL)  
  {
    printf("Problemas na abertura do arquivo\n");
    return;
  }

  i = 1;
  while (!feof(arq))
  {
    result = fgets(Linha, 100, arq);
    dado[i] = atoi(Linha);

    if (result)
      {
	//printf(Linha);
      }
    i++;    
  }

  i=i-2;
  fclose(arq);

  /*for(int x=1;x<=i;x++)
    {
      printf("%d\n", dado[x]);
      }*/
  
  // printf("Numero de linhas: %d\n", i);

  int indice=1;
  int n_amostras_media;     //Define aqui o tanto de amostras consideradas
  int neuronio_divisor;     //Define aqui qual o neuronio divisor(comeco da segunda classe)
  float acertos, erros, total, acuracia;
  int indice_init=1;
  float acertos_total, erros_total;

  printf("Informe o neuronio divisor (comeco da segunda classe): ");
  scanf("%d", &neuronio_divisor);

  printf("Informe o N. de amostras a ser considerado: ");
  scanf("%d", &n_amostras_media);
  
  //while(indice_init<=(i-(n_amostras_media-1)))
  // {
      while(indice_init<=(i-(n_amostras_media-1)))
	{
	  while(indice < (indice_init + n_amostras_media))
	    {
	      if (dado[indice]>=neuronio_divisor)
		{
		  acertos++;
		}
	      else
		{
		  erros++;
		}
	      indice++;
	    }

	  if(acertos>erros)
	    {
	      acertos_total++;
	    }

	  else
	    {
	      erros_total++;
	    }
	  acertos=0;
	  erros=0;
	  indice_init++;
	  indice=indice_init;
	}
  
  total = acertos_total + erros_total;
  acuracia = (acertos_total*100)/total;
  printf("Interictal\n");
  printf("Acertos: %.0f\n", acertos_total);
  printf("Erros: %.0f\n", erros_total);
  printf("Total: %.0f\n", total);
  printf("Acuracia: %.2f%%\n", acuracia);
  
}

