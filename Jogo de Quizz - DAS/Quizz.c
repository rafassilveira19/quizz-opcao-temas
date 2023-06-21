#include <stdio.h>
#include <ctype.h>
#include <locale.h>


int main() {
setlocale(LC_ALL, "Portuguese");

    int tema;
    int pontos = 0;


    printf("Escolha um tema:\n");


    printf("\n1. L�gica\n");
    printf("2. Tecnologia\n");

   do {
        printf("\nDigite o n�mero do tema desejado: ");
        if (scanf("%d", &tema) != 1) {
            printf("Op��o inv�lida. Digite um n�mero v�lido.\n");
            while (getchar() != '\n');
            continue;
        }

        if (tema < 1 || tema > 2) {
            printf("Op��o inv�lida. Digite um n�mero v�lido.\n");
        }
    } while (tema < 1 || tema > 2);

    getchar();
    system("cls");

    switch (tema) {
        case 1: // L�gica
            printf("\nVoc� escolheu o tema L�gica.\n");
            printf("\nCada pergunta tem 4 op��es, sendo elas A, B, C e D.\n");
            printf("\nBoa Sorte!\n");
            getchar();
system("cls");

            // Pergunta 1
            printf("Caminhando de manh�, uma senhora contou 20 casas em uma rua � sua direita.\n");
            printf("Na volta, ela contou 20 casas � sua esquerda. Quantas casas ela viu no total?\n");

            printf("\nA) 40 \n");
            printf("B) 20\n");
            printf("C) 10\n");
            printf("D) Nenhuma\n");
            char resposta1;
            do {
                printf("\nDigite a resposta: ");
                scanf(" %c", &resposta1);

                if (toupper(resposta1) < 'A' || toupper(resposta1) > 'D') {
                    printf("\nResposta inv�lida. Tente novamente.\n");
                }
            } while (toupper(resposta1) < 'A' || toupper(resposta1) > 'D');

            if (toupper(resposta1) == 'B') {
                pontos++;
                printf("\nResposta correta! Voc� ganhou 1 ponto.\n");
                system("pause");
            } else {
                printf("\nResposta incorreta!\n");
                printf("\nA senhora viu 20 casas no total, porque a sua direita na ida � a sua esquerda na volta, ou seja, nos dois itiner�rios, ela viu e contou as mesmas casas e n�o casas diferentes.\n");
system("pause");
}
   getchar();
system("cls");

            //Pergunta 2
            printf("Maria comprou um vaso de flores por 20 reais e o vendeu por 25 reais. Arrependida da venda, comprou o mesmo vaso por 35 reais, mas logo decidiu vend�-lo por 40 reais. No final, quanto ela lucrou?\n");

            printf("\nA) 10 \n");
            printf("B) 20\n");
            printf("C) 5\n");
            printf("D) Ela ficou no preju�zo.\n");
            char resposta2;
            do {
                printf("\nDigite a resposta: ");
                scanf(" %c", &resposta2);

                if (toupper(resposta2) < 'A' || toupper(resposta2) > 'D') {
                    printf("\nResposta inv�lida. Tente novamente.\n");
                }
            } while (toupper(resposta2) < 'A' || toupper(resposta2) > 'D');

            if (toupper(resposta2) == 'A') {
                pontos++;
                printf("\nResposta correta! Voc� ganhou 1 ponto.\n");
                system("pause");
            } else {
                printf("\nResposta incorreta!\n");
                printf("\nMaria gastou 20 reais e depois mais 35, o que soma 55 reais. Por sua vez, Maria recebeu primeiro 25 reais e depois mais 40, somando 65 reais. 65 - 55 = 10 reais.\n");
                system("pause");
}
   getchar();
system("cls");

            //Pergunta 3
            printf("Quando eu tinha 8 anos, a minha irm� tinha a metade da minha idade. Agora que tenho 60 anos, com quantos anos minha irm� est�?\n");

            printf("\nA) 30 \n");
            printf("B) 120\n");
            printf("C) 10\n");
            printf("D) 56\n");
            char resposta3;
            do {
                printf("\nDigite a resposta: ");
                scanf(" %c", &resposta3);

                if (toupper(resposta3) < 'A' || toupper(resposta3) > 'D') {
                    printf("\nResposta inv�lida. Tente novamente.\n");

                }
            } while (toupper(resposta3) < 'A' || toupper(resposta3) > 'D');

            if (toupper(resposta3) == 'D') {
                pontos++;
                printf("\nResposta correta! Voc� ganhou 1 ponto.\n");
                system("pause");
            } else {
                printf("\nResposta incorreta!\n");
                printf("\nMinha irm� est� com 51, porque se quando eu tinha 8 anos, ela tinha a metade, ou seja, 4 anos, temos 4 anos de diferen�a.\n");
                system("pause");
}
   getchar();
system("cls");

                //Pergunta 4
            printf("Se 5 ma��s custam 10 reais, quanto custariam 8 ma��s?\n");

            printf("\nA) 30 \n");
            printf("B) 16\n");
            printf("C) 12\n");
            printf("D) 20\n");
            char resposta4;
            do {
                printf("\nDigite a resposta: ");
                scanf(" %c", &resposta4);

                if (toupper(resposta4) < 'A' || toupper(resposta4) > 'D') {

                    printf("\nResposta inv�lida. Tente novamente.\n");

                }
            } while (toupper(resposta4) < 'A' || toupper(resposta4) > 'D');

            if (toupper(resposta4) == 'B') {
                pontos++;
                printf("\nResposta correta! Voc� ganhou 1 ponto.\n");
                system("pause");
            } else {
                printf("\nResposta incorreta!\n");

                printf("\nSe 5 ma��s custam 10 reais, ent�o cada ma�� custa 2 reais. Portanto, 8 ma��s custariam 16 reais.\n");
                system("pause");
}
   getchar();
system("cls");

                //Pergunta 5
            printf("Quatro suspeitos de praticar um crime fazem as seguintes declara��es:\n");

            printf("\nJo�o: Carlos � o criminoso\n");
            printf("Pedro: eu n�o sou criminoso\n");
            printf("Carlos: Paulo � o criminoso\n");
            printf("Paulo: Carlos est� mentindo\n");

            printf("\nSabendo que apenas um dos suspeitos mente, determine quem � o criminoso.\n");

            printf("\nA) Carlos \n");
            printf("B) Pedro\n");
            printf("C) Jo�o\n");
            printf("D) Paulo\n");
            char resposta5;
            do {
                printf("\nDigite a resposta: ");
                scanf(" %c", &resposta5);

                if (toupper(resposta5) < 'A' || toupper(resposta5) > 'D') {
                    printf("\nResposta inv�lida. Tente novamente.\n");

                }
            } while (toupper(resposta5) < 'A' || toupper(resposta5) > 'D');

            if (toupper(resposta5) == 'A') {
                pontos++;
                printf("\nResposta correta! Voc� ganhou 1 ponto.\n");
                system("pause");
            } else {
                printf("\nResposta incorreta!\n");

                printf("\nApenas um suspeito mente e os outros dizem a verdade. Assim, h� uma contradi��o entre a declara��o de Jo�o e de Carlos.\n");
                printf("1� op��o: Se Jo�o diz a verdade, a declara��o de Pedro pode ser verdadeira, a de Carlos seria falsa (por ser contradit�ria) e Paulo estaria falando a verdade.\n");
                printf("2� op��o: Se a declara��o de Jo�o for a falsa e a declara��o de Carlos for verdadeira, a declara��o de Pedro pode ser verdadeira, mas a declara��o de Paulo teria que ser falsa.\n");
                printf("\nLogo, seriam duas declara��es falsas (Jo�o e Paulo), invalidando a quest�o (apenas uma falsidade).\n");
                printf("\nAssim, a �nica op��o v�lida � Jo�o dizer a verdade e Carlos ser o criminoso.\n");

system("pause");
}
   getchar();
system("cls");



            break;





       case 2: //Tecnlogia

            printf("\nVoc� escolheu o tema Tecnologia.\n");
            printf("\nCada pergunta tem 4 op��es, sendo elas A, B, C e D.\n");
            printf("\nBoa Sorte!\n");
            getchar();
system("cls");

            // Pergunta 1
            printf("Qual destes passwords foi o mais usado na internet?\n");

            printf("\nA) a1b2b3 \n");
            printf("B) senha123\n");
            printf("C) abcdef\n");
            printf("D) 123456\n");
            char resposta6;
            do {
                printf("\nDigite a resposta: ");
                scanf(" %c", &resposta6);

                if (toupper(resposta6) < 'A' || toupper(resposta6) > 'D') {
                    printf("\nResposta inv�lida. Tente novamente.\n");
                }
            } while (toupper(resposta6) < 'A' || toupper(resposta6) > 'D');

            if (toupper(resposta6) == 'D') {
                pontos++;
                printf("\nResposta correta! Voc� ganhou 1 ponto.\n");
                system("pause");
            } else {
                printf("\nResposta incorreta!\n");
                printf("\nA resposta correta � a letra D. A senha mais utilizada na internet foi 123456 \n");
system("pause");
}
   getchar();
system("cls");

            //Pergunta 2
            printf("Qual dos seguintes � considerado um sistema operacional?\n");

            printf("\nA) Google Chrome \n");
            printf("B) Microsoft Office\n");
            printf("C) Windows 10\n");
            printf("D) Adobe Photoshop\n");
            char resposta7;
            do {
                printf("\nDigite a resposta: ");
                scanf(" %c", &resposta7);

                if (toupper(resposta7) < 'A' || toupper(resposta7) > 'D') {
                    printf("\nResposta inv�lida. Tente novamente.\n");
                }
            } while (toupper(resposta7) < 'A' || toupper(resposta7) > 'D');

            if (toupper(resposta7) == 'C') {
                pontos++;
                printf("\nResposta correta! Voc� ganhou 1 ponto.\n");
                system("pause");
            } else {
                printf("\nResposta incorreta!\n");
                printf("\nA resposta correta � a letra C. Apenas Windows 10 � considerado um sistema operacional.\n");
                system("pause");
}
   getchar();
system("cls");

            //Pergunta 3
            printf("Qual � a fun��o principal de um firewall?\n");

            printf("\nA) Proteger contra v�rus e malware \n");
            printf("B) Armazenar dados em nuvem\n");
            printf("C) Amplificar o sinal Wi-Fi\n");
            printf("D) Gerenciar a impress�o de documentos\n");
            char resposta8;
            do {
                printf("\nDigite a resposta: ");
                scanf(" %c", &resposta8);

                if (toupper(resposta8) < 'A' || toupper(resposta8) > 'D') {
                    printf("\nResposta inv�lida. Tente novamente.\n");

                }
            } while (toupper(resposta8) < 'A' || toupper(resposta8) > 'D');

            if (toupper(resposta8) == 'A') {
                pontos++;
                printf("\nResposta correta! Voc� ganhou 1 ponto.\n");
                system("pause");
            } else {
                printf("\nResposta incorreta!\n");
                printf("\nA resposta correta � a letra A. Um firewall � um sistema de seguran�a que controla o tr�fego de rede entre um dispositivo ou rede interna e a internet.\n");
                system("pause");
}
   getchar();
system("cls");

                //Pergunta 4
            printf("Qual destes � um exemplo de linguagem de programa��o?\n");

            printf("\nA) HTML \n");
            printf("B) Java\n");
            printf("C) CSS\n");
            printf("D) PDF\n");
            char resposta9;
            do {
                printf("\nDigite a resposta: ");
                scanf(" %c", &resposta9);

                if (toupper(resposta9) < 'A' || toupper(resposta9) > 'D') {
                    printf("\nResposta inv�lida. Tente novamente.\n");

                }
            } while (toupper(resposta9) < 'A' || toupper(resposta9) > 'D');

            if (toupper(resposta9) == 'B') {
                pontos++;
                printf("\nResposta correta! Voc� ganhou 1 ponto.\n");
                system("pause");
            } else {
                printf("\nResposta incorreta!\n");
                printf("\nA resposta certa � a letra B. O Java � uma linguagem de programa��o amplamente utilizada e popular para o desenvolvimento de aplicativos e software em uma variedade de plataformas, incluindo desktop, web e dispositivos m�veis.\n");
                system("pause");
}
   getchar();
system("cls");

                //Pergunta 5
            printf("O que � intelig�ncia artificial (IA)?\n");


            printf("\nA) Um campo da ci�ncia da computa��o que busca criar sistemas capazes de realizar tarefas que normalmente exigem intelig�ncia humana. \n");
            printf("B) Um tipo de computador com alta capacidade de processamento.\n");
            printf("C) Um ramo da matem�tica que estuda algoritmos avan�ados.\n");
            printf("D) Uma t�cnica de programa��o para criar interfaces de usu�rio intuitivas.\n");
            char resposta10;
            do {
                printf("\nDigite a resposta: ");
                scanf(" %c", &resposta10);

                if (toupper(resposta10) < 'A' || toupper(resposta10) > 'D') {
                    printf("\nResposta inv�lida. Tente novamente.\n");

                }
            } while (toupper(resposta10) < 'A' || toupper(resposta10) > 'D');

            if (toupper(resposta10) == 'A') {
                pontos++;
                printf("\nResposta correta! Voc� ganhou 1 ponto.\n");
                system("pause");
            } else {
                printf("\nResposta incorreta!\n");
                printf("A resposta correta � a Letra C. A intelig�ncia artificial � um campo da ci�ncia da computa��o que busca criar sistemas capazes de realizar tarefas que normalmente exigem intelig�ncia humana, como reconhecimento de padr�es, aprendizado, racioc�nio, tomada de decis�es e compreens�o da linguagem natural.\n");


system("pause");
}
   getchar();
system("cls");

            break;


    }
    printf("                                                      Total de pontos: %d\n", pontos);
printf("  \n                                                    ");
getchar();


    return 0;
}
