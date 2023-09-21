#include <stdio.h>

 int tipodesangue;

  int main (void){

    printf("digite seu tipo sanguinio:\n dite 1 para A , 2 para B , 3 para AB e 4 para O.\n");

    scanf("%d" , &tipodesangue);

    if (tipodesangue == 1){
      printf("sangue recebe tipo O e A");
    }
    else if (tipodesangue == 2){
    printf("sangue recebe tipo B e O.");
    }
    else if (tipodesangue == 3){
      printf("sangue compativel com geral.");
    }
    else if (tipodesangue ==4){
      printf("sangue compativel com O.");
    }
    else{
      printf("sangue não compativel.");
    }
  }