#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
  system("clear");

  int temp;
  char c;

  printf("░▒▓███████▓▒░░▒▓████████▓▒░▒▓██████████████▓▒░       "
         "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓███████▓▒░░▒▓███████▓▒░ ░▒▓██████▓▒░░▒▓█▓▒░ \n"
         "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░      "
         "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░ \n"
         "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░       "
         "░▒▓█▓▒▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░ \n"
         "░▒▓███████▓▒░░▒▓██████▓▒░ ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░       "
         "░▒▓█▓▒▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░ \n"
         "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░        ░▒▓█▓▓█▓▒░ "
         "░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░ \n"
         "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░        ░▒▓█▓▓█▓▒░ "
         "░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░       \n"
         "░▒▓███████▓▒░░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░         ░▒▓██▓▒░  "
         "░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓███████▓▒░ ░▒▓██████▓▒░░▒▓█▓▒░ \n"
         "                                                                     "
         "                                                  \n"
         "                                                                     "
         "                                                  \n");

  printf("Neste programa você entenderá os mais diferentes "
         "tipos de primeiros socorros!\n");
  sleep(3);

  do {
    system("clear");

    printf("                                                   "
           "               ░▒▓███████▓▒░░▒▓██████▓▒░ ░▒▓███████▓▒░ \n"
           "                                                   "
           "               ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░        \n"
           "                                                   "
           "               ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░        \n"
           "                                                   "
           "                ░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░  \n"
           "                                                   "
           "                      ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░ \n"
           "                                                   "
           "                      ░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░ \n"
           "                                                   "
           "               ░▒▓███████▓▒░ ░▒▓██████▓▒░░▒▓███████▓▒░  \n"
           "                                         \n"
           "                                         \n");

    printf("[1] Primeiros socorros em caso de queimaduras\n"
           "[2] Primeiros socorros em casos de intoxicações\n"
           "[3] Primeiros socorros em caso de picada de serpente peçonhenta\n"
           "[4] Primeiros socorros em caso de engasgo\n");
    printf("\nDigite: ");
    scanf(" %d", &temp);

    system("clear");

    switch (temp) {

    case 1:
      printf(
          " ░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░▒▓█▓▒░▒▓██████████████▓▒░ "
          "░▒▓██████▓▒░░▒▓███████▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓███████▓▒░ ░▒▓██████▓▒░  \n"
          "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      "
          "░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓"
          "█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░  \n"
          "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      "
          "░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓"
          "█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░  \n"
          "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓██████▓▒░ "
          "░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓"
          "███████▓▒░░▒▓████████▓▒░  \n"
          "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      "
          "░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓"
          "█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░  \n"
          "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      "
          "░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓"
          "█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░  \n"
          " ░▒▓██████▓▒░ "
          "░▒▓██████▓▒░░▒▓████████▓▒░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█"
          "██████▓▒░ ░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░  \n"
          "    ░▒▓█▓▒░                                                         "
          "                                                                    "
          " \n"
          "    ░▒▓██▓▒░\n\n");

      printf("\nO primeiro passo em caso de queimadura é retirar a pessoa da "
             "região próxima à fonte de calor. "
             "Feito isso, deve-se avaliar a lesão. Se o dano for leve, "
             "recomenda-se lavar o local com água corrente ou colocar "
             "compressas de soro fisiológico para reduzir a temperatura do "
             "local. Caso apareçam bolhas, elas nunca devem ser "
             "furadas. Se ao avaliar a lesão, você perceber que o dano é "
             "grave, é fundamental procurar ajuda médica "
             "imediatamente. Outro ponto importante é nunca passar no local "
             "nenhuma substância caseira nem mesmo medicamentos "
             "sem que sejam recomendados por um médico.\n");
      break;
    case 2:
      printf("░▒▓████████▓▒░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓██████▓▒░ "
             "░▒▓██████▓▒░  \n"
             "   ░▒▓█▓▒░  "
             "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ \n"
             "   ░▒▓█▓▒░  ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░      "
             "░▒▓█▓▒░░▒▓█▓▒░ \n"
             "   ░▒▓█▓▒░  ░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░░▒▓█▓▒░▒▓█▓▒░      "
             "░▒▓█▓▒░░▒▓█▓▒░ \n"
             "   ░▒▓█▓▒░  ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░      "
             "░▒▓█▓▒░░▒▓█▓▒░ \n"
             "   ░▒▓█▓▒░  "
             "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ \n"
             "   ░▒▓█▓▒░   ░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓██████▓▒░ "
             "░▒▓██████▓▒░  \n"
             "                                                                 "
             "       \n"
             "                                                                 "
             "       \n");

      printf("\nEm caso de intoxicações, o recomendado é identificar o agente "
             "causador da intoxicação e solicitar "
             "atendimento especializado. A pessoa, nesse momento, deve ser "
             "deixada imóvel e caso a intoxicação "
             "seja por produtos derivados de petróleo e corrosivos, como soda "
             "cáustica, alvejantes, tira ferrugem, "
             "amônia, gasolina, querosene e benzina, não se pode provocar "
             "vômito.\n");
      break;
    case 3:
      printf(" ░▒▓███████▓▒░▒▓████████▓▒░▒▓███████▓▒░░▒▓███████▓▒░░▒▓████████▓▒"
             "░▒▓███████▓▒░▒▓████████▓▒░▒▓████████▓▒░ \n"
             "░▒▓█▓▒░      ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      "
             "░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░  ░▒▓█▓▒░        \n"
             "░▒▓█▓▒░      ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      "
             "░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░  ░▒▓█▓▒░        \n"
             " ░▒▓██████▓▒░░▒▓██████▓▒░ ░▒▓███████▓▒░░▒▓███████▓▒░░▒▓██████▓▒░ "
             "░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░  ░▒▓██████▓▒░  \n"
             "        ░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░     "
             " ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░  ░▒▓█▓▒░        \n"
             "        ░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░     "
             " ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░  ░▒▓█▓▒░        \n"
             "░▒▓███████▓▒░░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      "
             "░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░  ░▒▓████████▓▒░  \n"
             "                                                                 "
             "                                                      \n"
             "                                                                 "
             "                                                      \n");

      printf("\nOs primeiros socorros consistem em lavar a área da picada com "
             "água e sabão, colocar o acidentado em "
             "posição confortável, de preferência deixando a vítima deitada "
             "com a área afetada em um nível abaixo do "
             "coração e levar a vítima ao atendimento médico mais rápido. É "
             "fundamental não aplicar qualquer substância, "
             "não fazer cortes no local e nem amarrar ou fazer torniquetes. "
             "Outro ponto importante é não deixar a vítima "
             "locomover-se por meios próprios. Caso seja possível, levar a "
             "cobra para a identificação.\n");
      break;
    case 4:
      printf("░▒▓████████▓▒░▒▓███████▓▒░ ░▒▓██████▓▒░ ░▒▓██████▓▒░ "
             "░▒▓███████▓▒░░▒▓██████▓▒░ ░▒▓██████▓▒░  \n"
             "░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      "
             "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ \n"
             "░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      "
             "░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░ \n"
             "░▒▓██████▓▒░ "
             "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒▒▓███▓▒░▒▓████████▓▒░░▒▓██████▓▒░░▒▓█▓▒▒▓███▓▒"
             "░▒▓█▓▒░░▒▓█▓▒░ \n"
             "░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░      "
             "░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ \n"
             "░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░      "
             "░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ \n"
             "░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓███████▓▒░"
             " ░▒▓██████▓▒░ ░▒▓██████▓▒░  \n"
             "                                                                 "
             "                            \n"
             "                                                                 "
             "                            \n");

      printf("\nInicialmente, o socorrista deve acalmar a vítima e, "
             "posteriormente, aplicar a técnica conhecida como "
             "manobra de Heimlich. Nessa manobra, o socorrista posiciona-se "
             "logo atrás da vítima e coloca o braço "
             "ao redor abdome dela. Uma mão fica fechada sobre a boca do "
             "estômago e a outra mão é posicionada em "
             "cima da primeira e a comprime. Os movimentos de compressão "
             "deverão ser feitos para dentro e para "
             "cima, permitindo que o objeto que está bloqueando a via "
             "respiratória seja eliminado.\n");
      break;
    default:
      printf("\nComando incorreto.\n");
      break;
    }

    printf("\nDeseja continuar?(sim/não)");
    printf("\nDigite: ");
    scanf(" %s", &c);

    system("clear");
  } while (c == 's' || c == 'S');

  return 0;
}
