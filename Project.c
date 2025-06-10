#include <stdio.h>

int main(void) {
  int temp;
  char c = 's';

  printf("Seja bem-vindo!\nNeste programa você entenderá os mais diferentes "
         "tipos de primeiros socorros!\nEscolha uma das opcões abaixo "
         "utilizando enter e o comando desejado.\n");

  for (; c == 's' || c == 'S';) {
    printf("[1] Primeiros socorros em caso de queimaduras\n"
           "[2] Primeiros socorros em casos de intoxicações\n"
           "[3] Primeiros socorros em caso de picada de serpente peçonhenta\n"
           "[4] Primeiros socorros em caso de engasgo\n");

    scanf(" %d", &temp);

    switch (temp) {

    case 1:
      printf("O primeiro passo em caso de queimadura é retirar a pessoa da "
             "região próxima à fonte de calor.\n"
             "Feito isso, deve-se avaliar a lesão. Se o dano for leve,\n"
             "recomenda-se lavar o local com água corrente ou colocar\n"
             "compressas de soro fisiológico para reduzir a temperatura do\n"
             "local. Caso apareçam bolhas, elas nunca devem ser \n"
             "furadas. Se ao avaliar a lesão, você perceber que o dano é\n"
             "grave, é fundamental procurar ajuda médica\n"
             "imediatamente. Outro ponto importante é nunca passar no local\n"
             "nenhuma substância caseira nem mesmo medicamentos\n"
             "sem que sejam recomendados por um médico.\n");
      break;
    case 2:
      printf("Em caso de intoxicações, o recomendado é identificar o agente "
             "causador da intoxicação e solicitar\n"
             "atendimento especializado. A pessoa, nesse momento, deve ser "
             "deixada imóvel e caso a intoxicação\n"
             "seja por produtos derivados de petróleo e corrosivos, como soda "
             "cáustica, alvejantes, tira ferrugem,\n"
             "amônia, gasolina, querosene e benzina, não se pode provocar\n"
             "vômito.\n");
      break;
    case 3:
      printf("Os primeiros socorros consistem em lavar a área da picada com\n"
             "água e sabão, colocar o acidentado em\n"
             "posição confortável, de preferência deixando a vítima deitada\n"
             "com a área afetada em um nível abaixo do\n"
             "coração e levar a vítima ao atendimento médico mais rápido. É "
             "fundamental não aplicar qualquer substância,\n"
             "não fazer cortes no local e nem amarrar ou fazer torniquetes. "
             "Outro ponto importante é não deixar a vítima\n"
             "locomover-se por meios próprios. Caso seja possível, levar a\n"
             "cobra para a identificação.\n");
      break;
    case 4:
      printf("Inicialmente, o socorrista deve acalmar a vítima e,\n"
             "posteriormente, aplicar a técnica conhecida como\n"
             "manobra de Heimlich. Nessa manobra, o socorrista posiciona-se\n"
             "logo atrás da vítima e coloca o braço\n"
             "ao redor abdome dela. Uma mão fica fechada sobre a boca do\n"
             "estômago e a outra mão é posicionada em\n"
             "cima da primeira e a comprime. Os movimentos de compressão\n"
             "deverão ser feitos para dentro e para\n"
             "cima, permitindo que o objeto que está bloqueando a via\n"
             "respiratória seja eliminado.\n");
      break;
    default:
      printf("Comando incorreto.\n");
      break;
    }

    printf("Deseja continuar?(sim/não)");
    scanf(" %1c", &c);
  }

  return 0;
}
