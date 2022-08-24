#include<stdio.h>
#include<locale.h>
/* Projeto de jogo de escolhas com História */
main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Esse jogo baseia-se  na leitura de textos e na escolha da opção que o usuário\nachar mais favorável para continuar a história.\n");
	puts("Cuidado com suas escolhas pois elas influenciarão no decorrer da aventura.\n");	
	puts("A Caverna\n");
	printf("Seu nome é Charlie, um arqueólogo que viajou com sua esposa para umas férias no Alasca\nDurante a viagem você acaba ficando sabendo de uma caverna onde foram encontrados\ndiversos restos de uma civilização antiga, onde poderiam haver riquezas nunca antes escritas na história,\nsabendo disso, você sem pensar duas vezes  arruma suas coisas  parte em expedição\nem busca de riquezas na caverna. ");
	printf("Ao chegar no local, você se depara com uma queda gigantesca,\npara descer você confia em sua habilidade com o  rapel, durante a descida a corda se rompe,\nvocê só consegue sentir suas costas se chocando contra as pedras, pelo menos você ainda sente as pernas.\n");
	printf("Algumas horas se passaram, você acorda no completo escuro, o que deve ser feito?\n");
	printf("Digite 1 para acender um sinalizador.\nDigite 2 para procurar sua lanterna na mochila.\nDigite 3 para ficar no escuro e se escorar na parede.\n");	
	int i, j, k, c, t;
	scanf("%d",&i);
	while(i!=1 && i!=2 && i!=3){  // todos os whiles do programa foram usados para caso o usuário digitasse números diferentes de 1 2 ou 3, assim o programa pedirá para ele digitar uma opção válida.
		puts("Insira uma opção válida.");
		scanf("%d",&i);
	}
	if(i==1){
		printf("Ao acender o sinalizador você nota que a caverna está lotada de pólvora, provavelmente usada pela civilização antiga,\nou por mineradores que estariam coletando metais na região, as faíscas do sinalizador acabaram por cair no amontoado de pólvora\ne causaram uma grande explosão, você não conseguiu escapar e morreu, pelo menos foi uma morte rápida.\n");
	}
	else if(i==2){
		printf("Você procura e encontra sua lanterna em sua mochila, ao acendê-la vê que a caverna está abarrotada de pólvora,\nainda bem que não acendeu um sinalizador aí. Andando um pouco você acaba achando uma toca de urso,\npor precaução você decide não incomodá-lo e segue seu caminho, mais uma descida se encontra na sua frente,\ndessa vez há amarras de exploradores anteriores, você aproveita elas e consegue descer sem problemas\naté a parte mais baixa da caverna, lá fica em frente a 3 túneis, o primeiro tem trilhos e extruturas de madeira,\no segundo se parece com uma caverna comum e o terceiro está encharcado, você terá que nadar para atravessá-lo.\nQual seguir?\nDigite 1 para seguir pelo primeiro túnel.\nDigite 2 para seguir o segundo túnel.\nDigite 3 para seguir o terceiro túnel.\n");
		scanf("%d",&j);
		while(j!=1 && j!=2 && j!=3){
			puts("Insira uma opção válida.");
			scanf("%d",&j);
		}
		if(j==1){
			printf("Você decide seguir pelo túnel com trilhos, nele você encontra diversos cadáveres de mineradores ao longo do caminho,\nao avançar mais você encontra uma rampa antiga, lotada de musgo, o que fazer a seguir?\nDigite 1 para descer usando sua faca para frear a descida.\nDigite 2 para descer deslizando.\nDigite 3 para desistir.\n");
			scanf("%d",&k);
			while(k!=1 && k!=2 && k!=3){
				puts("Insira uma opção válida.");
				scanf("%d",&k);
			}
			if(k==1){
				printf("Você consegue aterrisar sem problemas graças ao atrito de sua faca, o chão é formado por um amontoado de rochas\npontiagudas, uma queda nelas poderia ser fatal, avançando em frente você vê o que parece um sarcófago rodeado de ouro\nem volta, várias placas com caveiras desenhadas estão ao redor do sarcófago, o que fazer a seguir?\nDigite 1 para coletar os objetos de ouro e cair fora.\nDigite 2 para abrir o sarcófago e ver o que há dentro.\nDigite 3 para fotografar tudo e ir embora.\n");
				scanf("%d",&c);
				while(c!=1 && c!=2 && c!=3){
					puts("Insira uma opção válida.");
					scanf("%d",&c);
				}
				if(c==1){
					printf("Você não se atreve a abrir aquele sarcófago, com isso você resolveu apenas coletar vários dos objetos de ouro do local\ne sair da caverna, com cuidado para não ficar pesado demais e você acabar despencando na volta, ao chegar na superfície\nvocê encontra sua esposa chorando desesperada enquanto conversa com policiais em frente o hotel que vocês se alojaram,\nvocês se abraçam e no dia seguinte você acaba descobrindo que todos os objetos que você coletou eram feitos de\nouro dos tolos, você ainda os vende e arrecada um dinheirinho, mas volta para casa frustrado, chega de aventuras\npor enquanto.\n");
				}
				if(c==2){
					printf("Você não consegue segurar a curiosidade, assim sendo você empurra a tampa do sarcófago e antes que tenha qualquer\nchance de reagir acaba sendo empalado por um punhado de lanças, uma morte instantânea.\n");
				}
				if(c==3){
					printf("Você resolve não mexer com o que não conhece, com isso você usa sua câmera para fotografar tudo o que encontra naquela\nsala, pinturas, o sarcófago, até mesmo os esqueletos cheios de ornamentos que estavam no chão, ao sair da caverna você\nvai para o hotel que sua esposa ficou, lá ela estava chorando enquanto conversava com policiais, você abraça ela e se\ndesculpa, no dia seguinte você divulga tudo o que fotografou e recebe vários prêmios por encontrar registros históricos\nde uma civilização tão antiga e desconhecida.\n");
				}
			}
			if(k==2){
				printf("A Adrenalina contagiou você, com  isso você decide descer deslizando, o excesso de velocidade\nacaba fazendo você se desequilibrar e cair em uma pilha de pedras, você quebrou as pernas e provavelmente\nalgumas costelas, seu celular se despedaçou, ninguém irá resgatá-lo.\nVocê terá uma morte lenta, com bastante tempo para pensar em sua decisão imprudente.\n");
			}
			if(k==3){
				printf("Você decide desistir, não vale a pena se arriscar mais e correr o risco de deixar sua esposa sozinha.\nCom isso, você volta pelo caminho de onde veio, sua esposa estava com policiais em frente ao hotel chorando e pálida,\nvocê se aproxima e abraça ela, ela dá um belo carão em você mas fica muito alegre com seu retorno,\nvocê decide não fazer loucuras como essa de novo.\nParabéns, esse é um final feliz :)\n");
			}	
		}
		if(j==2){
			printf("Você decide seguir pela caverna comum, nela você segue por uma completa escuridão,\nvocê liga sua lanterna e se depara com um cogumelo familiar, é um Amanita muscaria,\nvocê leu sobre ele em uma enciclopédia durante a viagem de avião, com isso você começa a alucinar e morre lentamente.\n");
		}
		if(j==3){
			printf("Você decide se aventurar pela caverna submersa, felizmente você trouxe seu equipamento de mergulho,\ncom isso você coloca seu respirador e mergulha na água, por sorte sua lanterna é a prova d'água e você consegue usá-la\npara se localizar ali embaixo, você chega em um bolsão de ar, nele há várias anotações em uma língua que você\ndesconhece, provavelmente a história da civilização que já habitou essas ruínas, você decide que aquelas anotações\njá seriam algo valioso o bastante, então você leva tudo o que consegue e tira foto do que não conseguiu levar,\nao chegar à superfície, você se encontra com sua esposa que estava desesperada em busca de você, pelo visto você passou\nvárias horas na caverna, vocês se abraçam e no dia seguinte você divulga tudo o que achou naquela gruta,\ncom isso você acaba ganhando muito dinheiro e liderando a equipe de tradução das anotações,\nseu nome ficou conhecido em todo o mundo.\n");
		}
	}
	else if(i==3){
		printf("Você tem medo de que acender alguma luz possa acordar alguma criatura ali embaixo, com isso você começa a se escorar\npelas paredes, você sente que há algo arenoso no chão, você ignora e continua seguindo até achar uma quina na parede,\noque fazer a seguir?\nDigite 1 para dobrar na quina.\nDigite 2 para seguir em frente.\nDigite 3 para ligar a lanterna e ver o que há em sua volta.\n ");
		scanf("%d",&j);
		while(j!=1 && j!=2 && j!=3){
			printf("Insira uma opção válida.");
			scanf("%d",&j);
		}
		if(j==1){
			printf("Você decide dobrar na quina, ao avançar um pouco você acaba esbarrando em algo, algo peludo e muito grande,\no que fazer a seguir?\nDigite 1 para correr!\nDigite 2 para acender a lanterna e ver em que você esbarrou.\nDigite 3 para chutar o bicho(porque você faria isso?).\n");
			scanf("%d",&k);
			while(k!=1 && k!=2 && k!=3){
				puts("Insira uma opção válida.");
				scanf("%d",&k);
			}
			if(k==1){
				printf("Você sabe que acabou encostando em algum animal, sua única reação foi dar meia volta a toda velocidade, o desespero\nacabou fazendo você se descuidar e cair em um buraco que estava fora da toca do urso, você não estava vendo nada então\nacabou despencando direto em um punhado de pedras que estava no fundo do buraco.\n");
			}
			if(k==2){
				printf("Você acende sua lanterna e então vê um urso pardo gigantesco dormindo, você se afasta devagar e sai de seu covil,\nseguindo pela caverna você encontra uma descida com vestígios de equipamentos de rapel, quando você já está\nse preparando para descer quando você escuta o rugido do urso que estava correndo em sua direção, pelo visto sua\nlanterna incomodou seu sono. O que fazer a seguir?\nDigite 1 para terminar de ajeitar o equipamento e descer.\nDigite 2 para descer às pressas pelo rapel.\nDigite 3 para tentar driblar o urso\n");
				scanf("%d",&c);
				while(c!=1 && c!=2 && c!=3){
					puts("Insira uma opção válida.");
					scanf("%d",&c);
				}
				if(c==1){
					printf("Você controla a ansiedade e tenta ajeitar o equipamento, infelizmente você foi calmo demais,\no urso te dá uma patada e você despenca do penhasco, a pancada fez você desmaiar, pelo menos sua morte será indolor.\n");
				}
				if(c==2){
					printf("Você vê que não dá tempo de enrolar, então você só se amarra no rapel rapidamente e desce, você imagina que morrer\npara um urso deve ser muito doloroso, por incrível que pareça você conseguiu cair inteiro, ou quase, você torceu\no tornozelo, ao olhar pra cima você vê que o urso não está mais atrás de você, como você já tinha chegado até aí,\nvocê resolve continuar em frente, você avista 3 túneis à sua frente, antes de cogitar por qual seguir seu tornozelo\ncomeça a doer muito, você se abaixa para tentar tratá-lo e vê uma espécie de botão camuflado no chão,(que sorte!),\nentão você resolve apertar o botão e ver o que vai dar, ao apertar o botão os túneis se fecham, havia\numa passagem secreta na sua direita, você decide seguir por ela, arrastando-se pelo corredor você chega em uma sala\nespecial, há um trono no meio com um esqueleto usando uma coroa de ouro e uma lança enfiada em seu peito,\natrás do trono tinha vários baús transbordando moedas de ouro, e alguns baús derrubados mais na frente,\nao chegar perto você nota que ao lado dos baús derrubados há esqueletos soterrados por pedras, pelo visto\naquela era a sala do rei, e seus súditos o mataram e queriam fugir com seu ouro mas morreram durante a fuga\ncom um desabamento, você decide fotografar tudo e coletar algumas moedas de ouro, não ficando muito pesado\npara não prejudicar sua volta mais do que seu tornozelo machucado, você consegue voltar para a parte superior,\no urso não estava te esperando, você consegue voltar à superfíce e chama uma ambulância, você também\nliga para sua mulher e explica tudo o que houve, ela te encontra no hospital, briga com você mas fica muito feliz\nque você sobreviveu, no dia seguinte você divulga tudo o que foi visto e guia uma expedição pela caverna,\nvocê descobre outras salas como a que você entrou e consegue formular toda a história por trás daquela civilização,\nvocê recebe vários méritos além de ficar conhecido por todo o mundo graças à sua descoberta.\n(Parabéns, esse é o final verdadeiro.)\n");
				}
				if(c==3){
					printf("Por algum motivo você achou que conseguiria driblar o urso, você corre na direção dele e tenta dar um olé,\nele simplesmente fica sobre duas patas e derruba todo o peso dele sobre você, você sente suas garras e dentes\nrasgando sua pele, você teve uma das mortes mais sangrentas do jogo.\n");
				}
			}
			if(k==3){
				printf("Você por algum  motivo resolve chutar o bicho em que você esbarrou, você se arrepende logo depois ao ver os olhos de um\nurso pardo brilhando no escuro, ele logo se levantou e atacou você, pelo visto pelo menos alguém saiu com alguns\nespólios, seus ossos e sua carne.\n");
			}
		}
		if(j==2){
			printf("Você resolve continuar seguindo em frente às cegas, mas infelizmente acaba despencando em um buraco que estava\nà frente, você até agarra umas cordas que tinham penduradas mas ainda assim cai com muita força e morre na mesma hora.\n");
		}
		if(j==3){
			printf("Você resolve acender sua lanterna e ver o que estava em sua volta, ao olhar além da quina você vê um urso gigantesco\ndormindo, com isso você resolve seguir adiante, à sua frente estava um gigantesco buraco com pedras pontiagudas\nno fundo, havia restos de equipamento de escalada na boca do buraco, você reutiliza esses equipamentos e desce pelo\nburaco, ao descer você se depara com 3 túneis, o primeiro tem trilhos e extruturas de madeira, o segundo se parece\ncom uma caverna comum e o terceiro está encharcado, você terá que nadar para atravessá-lo.\nQual seguir?\nDigite 1 para seguir pelo primeiro túnel.\nDigite 2 para seguir o segundo túnel.\nDigite 3 para seguir o terceiro túnel.\n");
			scanf("%d",&k);
			while(k!=1 && k!=2 && k!=3){
				puts("Insira uma opção válida.");
				scanf("%d",&k);
			}
			if(k==1){
				printf("Você decide seguir pelo túnel com trilhos, nele você encontra diversos cadáveres de mineiros ao longo do caminho,\nao avançar mais você encontra uma rampa antiga, lotada de musgo, o que fazer a seguir?\nDigite 1 para descer usando sua faca para frear a descida.\nDigite 2 para descer deslizando.\nDigite 3 para desistir.\n");
				scanf("%d",&c);
				while(c!=1 && c!=2 && c!=3){
					puts("Insira uma opção válida.");
					scanf("%d",&c);
				}
				if(c==1){
					printf("Você consegue aterrisar sem problemas graças ao atrito de sua faca, o chão é formado por um amontoado de rochas\npontiagudas, uma queda nelas poderia ser fatal, avançando em frente você vê o que parece um sarcófago rodeado de ouro\nem volta, várias placas com caveiras desenhadas estão ao redor do sarcófago, o que fazer a seguir?\nDigite 1 para coletar os objetos de ouro e cair fora.\nDigite 2 para abrir o sarcófago e ver o que há dentro.\nDigite 3 para fotografar tudo e ir embora.\n");
					scanf("%d",&t);
					while(t!=1 && t!=2 && t!=3){
						puts("Insira uma opção válida.");
						scanf("%d",&t);
					}
					if(t==1){
						printf("Você não se atreve a abrir aquele sarcófago, com isso você resolveu apenas coletar vários dos objetos de ouro do local\ne sair da caverna, com cuidado para não ficar pesado demais e você acabar despencando na volta, ao chegar na superfície\nvocê encontra sua esposa chorando desesperada enquanto conversa com policiais em frente o hotel que vocês se alojaram,\nvocês se abraçam e no dia seguinte você acaba descobrindo que todos os objetos que você coletou eram feitos de\nouro dos tolos, você ainda os vende e arrecada um dinheirinho, mas volta para casa frustrado, chega de aventuras\npor enquanto.\n");
					}
					if(t==2){
						printf("Você não consegue segurar a curiosidade, assim sendo você empurra a tampa do sarcófago e antes que tenha qualquer\nchance de reagir acaba sendo empalado por um punhado de lanças, uma morte instantânea.\n");
					}
					if(t==3){
						printf("Você resolve não mexer com o que não conhece, com isso você usa sua câmera para fotografar tudo o que encontra naquela\nsala, pinturas, o sarcófago, até mesmo os esqueletos cheios de ornamentos que estavam no chão, ao sair da caverna você\nvai para o hotel que sua esposa ficou, lá ela estava chorando enquanto conversava com policiais, você abraça ela e se\ndesculpa, no dia seguinte você divulga tudo o que fotografou e recebe vários prêmios por encontrar registros históricos\nde uma civilização tão antiga e desconhecida.\n");
					}
				}
				if(c==2){
					printf("A Adrenalina contagiou você, com  isso você decide descer deslizando, o excesso de velocidade\nacaba fazendo você se desequilibrar e cair em uma pilha de pedras, você quebrou as pernas e provavelmente\nalgumas costelas, seu celular se despedaçou, ninguém irá resgatá-lo.\nVocê terá uma morte lenta, com bastante tempo para pensar em sua decisão imprudente.\n");
				}
				if(c==3){
					printf("Você decide desistir, não vale a pena se arriscar mais e correr o risco de deixar sua esposa sozinha.\nCom isso, você volta pelo caminho de onde veio, sua esposa estava com policiais em frente ao hotel chorando e pálida,\nvocê se aproxima e abraça ela, ela dá um belo carão em você mas fica muito alegre com seu retorno,\nvocê decide não fazer loucuras como essa de novo.\nParabéns, esse é um final feliz :)\n");
				}	
			}
			if(k==2){
				printf("Você decide seguir pela caverna comum, nela você segue por uma completa escuridão,\nvocê liga sua lanterna e se depara com um cogumelo familiar, é um Amanita muscaria,\nvocê leu sobre ele em uma enciclopédia durante a viagem de avião, com isso você começa a alucinar e morre lentamente.\n");
			}
			if(k==3){
				printf("Você decide se aventurar pela caverna submersa, felizmente você trouxe seu equipamento de mergulho,\ncom isso você coloca seu respirador e mergulha na água, por sorte sua lanterna é a prova d'água e você consegue usá-la\npara se localizar ali embaixo, você chega em um bolsão de ar, nele há várias anotações em uma língua que você\ndesconhece, provavelmente a história da civilização que já habitou essas ruínas, você decide que aquelas anotações\njá seriam algo valioso o bastante, então você leva tudo o que consegue e tira foto do que não conseguiu levar,\nao chegar à superfície, você se encontra com sua esposa que estava desesperada em busca de você, pelo visto você passou\nvárias horas na caverna, vocês se abraçam e no dia seguinte você divulga tudo o que achou naquela gruta,\ncom isso você acaba ganhando muito dinheiro e liderando a equipe de tradução das anotações,\nseu nome ficou conhecido em todo o mundo.\n");
			}
		}

	}
	puts("");
	puts("Essa foi a História de Charlie, você pode dar outro fim a ele reiniciando o programa.\nMuito obrigado por jogar!");
	system ("pause");	
}
