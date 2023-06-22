#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h>

int main ( ){
    setlocale(LC_ALL,"Portuguese");
	
	
	int ganhou,resposta,i, j, linha, coluna, contador;
	char jogador1[10],jogador2[10],matriz[3][3]= {'.','.','.','.','.','.','.','.','.'};
	
	int y = 400, c = 0;
    char cmd_MSDOS[50]   ;
    char barra[50];
    
    
	for(c = 1; c<= 6; c++){
		
        system("cls");
        
    {
        
		sprintf(cmd_MSDOS, "color %x", c);
        printf("              JV   JVJVJV   JVJVJVJV   JVJVJV  \n");
		printf("              JV   JV  JV   JV         JV  JV  \n");
	    printf("              JV   JV  JV   JV         JV  JV  \n");
		printf("              JV   JV  JV   JV         JV  JV  \n");
		printf("              JV   JV  JV   JV  JVJV   JV  JV  \n");
		printf("              JV   JV  JV   JV    JV   JV  JV  \n");
		printf("          JVJVJV   JVJVJV   JVJVJVJV   JVJVJV  \n");
		printf("\n");
		
		printf("                 JVJVJV        JVJV      \n");
		printf("                 JV    JV    JV    JV    \n");
		printf("                 JV    JV    JV    JV    \n");
		printf("                 JV    JV   JVJVJVJVJV   \n");
		printf("                 JV    JV   JV      JV   \n");
		printf("                 JV    JV  JV        JV  \n");
		printf("                 JVJVJV    JV        JV  \n");
   		printf("\n");
	
		printf("   jv      jv  jvjvjv   jv       jv    jv       jvjv       \n");
		printf("   jv      jv  jvjvjv   jv       jv    jv     jv    jv     \n");
		printf("    jv    jv   jv       jv       jv    jv     jv    jv     \n");
		printf("    jv    jv   jvjvjv   jv       jvjvjvjv    jvjvjvjvjv    \n");
		printf("     jv  jv    jv       jv       jv    jv    jv      jv    \n");
		printf("     jv  jv    jvjvjv   jv       jv    jv   jv        jv   \n");
		printf("      jvjv     jvjvjv   jvjvjv   jv    jv   jv        jv   \n");
   	    printf("\n");
        
	    _beep(y,100);
           
        if (c == 6){
		
            system("color F0");
        }
            else{
			
            system(cmd_MSDOS);
        }
        
    }
        
		y+=200;
   }
   
        system("pause");
        system("cls");
        
        system("color 6");
        _beep(400,400);
        
        printf("                ExplicaÃ§Ã£o do jogo: \n");
   		
 	    printf("\n");
	    printf("\n");
    
	    printf("  Jogo da velha Ã© um jogo de tabuleiro e sÃ³ participam duas pessoas por vez.\n");
		printf("\n");

		printf("  Cada jogador(a) escolhe uma marcaÃ§Ã£o, geralmente um cÃ­rculo ( O ) e um xis ( X ).\n");
 	    printf("\n");
   
	    printf("  As(Os) jogadoras(es) jogam uma marcaÃ§Ã£o por vez em uma lacuna que esteja vazia.\n");
 	    printf("\n");
		
		printf("  O objetivo Ã© conseguir 3 (trÃªs) cÃ­rculos ou trÃªs â€œxisâ€ em linha horizontal, vertical ou diagonal.\n ");
 	    printf("\n");
	
		printf("  E ao mesmo tempo, quando possÃ­vel, impedir a(o) adversÃ¡ria(o) de ganhar na prÃ³xima jogada.\n");
        printf("\n");
    
		printf("  Quando da empante a mensagem esibida Ã© 'Deu velha!!!'\n");
   	    printf("\n");
	
		printf("  O primerio jogador sempre serÃ¡ o 'x' e o segundo o 'o'\n");
		printf("\n");
    
	    system("pause");
 	    system("cls");
    
    do{
        
        system("color B");
        _beep(400,400);
        
	    printf("  Digite o nome do primeiro jogador, sabendo que seu simbolo serÃ¡ o xis ( X ):  ");
   	    scanf("%s",jogador1);
  	    printf("\n");
  	    
       
    
 	    printf("  Digite o nome do segundo jogador, sabendo que seu simbolo serÃ¡ o circulo ( O ): ");
     	scanf("%s",jogador2);
		printf("\n");
		
		system("pause");
 	    system("cls");
 	    
        _beep(400,400);
	
		printf(" E Agora, que comece o jogo!!! \n");
		printf("\n");
	
		printf("  Como Ã© o tabuleiro: \n");
   	    printf("\n");
	    printf("\n");
     
  	    ganhou=0;
        contador=0;
    
		for(i = 0; i < 3; i++){
	
			for(j = 0; j < 3; j++){
		
			matriz[i][j]= '.';
		    		
		}
	
		}
	
		
	do{
        	
        for(i = 0; i < 3; i++){
	
			for(j = 0; j < 3; j++){
				
			system("color B");
	     	
			printf("                   %c  ", matriz[i][j]);
		    		
		}
		
			printf("\n");
			printf("\n");
	
		}
		
		
		for (contador = 0; contador < 9; contador++){
			
		   printf("\n  Informe em qual linha deseja que seu simbolo seja posto: ");
		   scanf("%d", &linha);		
		   linha--;
		
	       printf("\n  Informe em qual columa deseja que seu simbolo seja posto: ");
		   scanf("%d", &coluna);
		   coluna--;
		
		   printf("\n");
		
		if(matriz[linha][coluna] == '.'){
		
			if(contador%2){
				
				matriz[linha][coluna] = 'O';
				
			} 
			
			else{
				
				matriz[linha][coluna] = 'X';
				
			}
			
			for(i = 0; i < 3; i++){
				
				printf("\n");
				
				for(j = 0; j < 3; j++){
					
					_beep(200,200);
				
				    printf("                  %c", matriz[i][j]);
				    
				}
				
				printf("\n");
				printf("\n");
				 
			}
			
				if(matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] && matriz[0][0] != '.'){
				
					ganhou=1;
					
					
					for(c = 1; c<= 6; c++){
		
                        system("cls");
        
                {
        
		                sprintf(cmd_MSDOS, "color %x", c);
				
					if(contador%2 + 1 == 1){
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
						
						printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
						printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador1);
                        printf("\n");
                        printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
	          		}
			
					else{
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
			
				  	   
				  	    printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
				  	    printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador2);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
                        
			      
				
					}		
					
					_beep(y,100);
           
                         if (c == 6){
		
                             system("color F0");
                        }
                         else{
			
                             system(cmd_MSDOS);
                        }
        
                }
        
	                       	y+=200;
                }	
						break;	 				
				}
			
				if(matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] && matriz[0][0] != '.'){
			    
						ganhou=1;	
			    
					for(c = 1; c<= 6; c++){
		
                        system("cls");
        
                {
        
		                sprintf(cmd_MSDOS, "color %x", c);
				
					if(contador%2 + 1 == 1){
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
						
						printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
						printf("\n");
						printf("\n");
                        printf("			            PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU         \n",jogador1);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
	          		}
			
					else{
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
			
				  	   
				  	    printf("		Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
				  	    printf("\n");
						printf("\n");
                        printf("		                 PARABÃ‰NS %s, VOCÃŠ VENCEUUU      \n",jogador2);
                        printf("\n");
						printf("\n");
                        printf("		Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
				
					}		
					
					_beep(y,100);
           
                         if (c == 6){
		
                             system("color F0");
                        }
                         else{
			
                             system(cmd_MSDOS);
                        }
        
                }
        
	                       	y+=200;
                }		
						 break;		 		
				}
			
				if(matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] && matriz[0][0] != '.'){
			
						ganhou=1;
			   
			 	    for(c = 1; c<= 6; c++){
		
                        system("cls");
        
                {
        
		                sprintf(cmd_MSDOS, "color %x", c);
				
					if(contador%2 + 1 == 1){
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
						
						printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
						printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador1);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
	          		}
			
					else{
			
				  	    printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    
				  	    printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
				  	    printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador2);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
				
					}		
					
					_beep(y,100);
           
                         if (c == 6){
		
                             system("color F0");
                        }
                         else{
			
                             system(cmd_MSDOS);
                        }
        
                }
        
	                       	y+=200;
                }	
						break;					
				}
			
				if(matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] && matriz[0][1] != '.'){
				
						ganhou=1;	
				
					for(c = 1; c<= 6; c++){
		
                        system("cls");
        
                {
        
		                sprintf(cmd_MSDOS, "color %x", c);
				
					if(contador%2 + 1 == 1){
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    
						printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
						printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador1);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
	          		}
			
					else{
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
			
				  	   
				  	    printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
				  	    printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador2);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
				
					}		
					
					_beep(y,100);
           
                         if (c == 6){
		
                             system("color F0");
                        }
                         else{
			
                             system(cmd_MSDOS);
                        }
        
                }
        
	                       	y+=200;
                }	
						break;	 				
				}
			
				if(matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] && matriz[0][2] != '.'){
			
						ganhou=1;
				        
				       
					for(c = 1; c<= 6; c++){
		
                        system("cls");
        
                {
        
		                sprintf(cmd_MSDOS, "color %x", c);
				
					if(contador%2 + 1 == 1){
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
						
						printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
						printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador1);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
	          		}
			
					else{
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
			
				  	   
				  	    printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
				  	    printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador2);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
				
					}		
					
					_beep(y,100);
           
                         if (c == 6){
		
                             system("color F0");
                        }
                         else{
			
                             system(cmd_MSDOS);
                        }
        
                }
        
	                       	y+=200;
                }			
						break;	 			
				}
			
				if(matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] && matriz[1][0] != '.'){
				
						ganhou=1;
				
					for(c = 1; c<= 6; c++){
		
                        system("cls");
        
                {
        
		                sprintf(cmd_MSDOS, "color %x", c);
				
					if(contador%2 + 1 == 1){
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    
						printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
						printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador1);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
	          		}
			
					else{
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
			
				  	   
				  	    printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
				  	    printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador2);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
				
					}		
					
					_beep(y,100);
           
                         if (c == 6){
		
                             system("color F0");
                        }
                         else{
			
                             system(cmd_MSDOS);
                        }
        
                }
        
	                       	y+=200;
                }	
						break;			
				}
			
				if(matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] && matriz[2][0] != '.'){
			
						ganhou=1;
			
					for(c = 1; c<= 6; c++){
		
                        system("cls");
        
                {
        
		                sprintf(cmd_MSDOS, "color %x", c);
				
					if(contador%2 + 1 == 1){
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
						
						printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
						printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador1);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
	          		}
			
					else{
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
			
				  	   
				  	    printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
				  	    printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador2);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
				
					}		
					
					_beep(y,100);
           
                         if (c == 6){
		
                             system("color F0");
                        }
                         else{
			
                             system(cmd_MSDOS);
                        }
        
                }
        
	                       	y+=200;
                }			
						break;						
				}
			
				if(matriz[2][0] == matriz[1][1] && matriz[2][0] == matriz[0][2] && matriz[2][0] != '.'){						
				
						ganhou=1;
				
					for(c = 1; c<= 6; c++){
		
                        system("cls");
        
                {
        
		                sprintf(cmd_MSDOS, "color %x", c);
				
					if(contador%2 + 1 == 1){
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
						
						printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
						printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador1);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
	          		}
			
					else{
						
						printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
			
				  	   
				  	    printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
				  	    printf("\n");
						printf("\n");
                        printf("			             PARABÃ‰NS %s, VOCÃŠ VENCEUUUUU        \n",jogador2);
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			      
				
					}		
					
					_beep(y,100);
           
                         if (c == 6){
		
                             system("color F0");
                        }
                         else{
			
                             system(cmd_MSDOS);
                        }
        
                }
        
	                       	y+=200;
                }			
						break;	
									
	    		}	
			 
        }
	
	    else{
	                    printf("\n");
	                    printf("\n");
	    	
			printf("\nO espaÃ§o escolhido jÃ¡ estÃ¡ ocupado, repita a operaÃ§Ã£o para um espaÃ§o vÃ¡lido\n");
			contador--;
			
	    }
				 
		}
		  
	}
	
	        while(ganhou == 0 && contador < 9);
	
	               printf("\n");
		           printf("\n");

        
            for(i = 0; i < 3; i++){
	
		        for(j = 0; j < 3; j++){
		
			    printf("                   %c  ", matriz[i][j]);
		    		
		   		}
		
		       	    printf("\n");
		            printf("\n");
	
	        }
	         
			 	if(ganhou==0){
				
				    for(c = 1; c<= 6; c++){
		
                        system("cls");
        
                {
        
		                sprintf(cmd_MSDOS, "color %x", c);
		                
		                printf("\n");
	                    printf("\n");
	                    printf("\n");
	                    printf("\n");
				    
						printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
						printf("\n");
						printf("\n");
                        printf("			                   DEU VELHA!!!                  \n");
                        printf("\n");
						printf("\n");
                        printf("			Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›Ã›\n");
			    
					    _beep(y,100);
           
                         if (c == 6){
		
                             system("color F0");
                        }
                         else{
			
                             system(cmd_MSDOS);
                        }
        
                }
        
	                       	y+=200;
                }	
                
		    	} 
	                printf("\n");
	                printf("\n");
	              
	                printf("\n  Deseja jogar novamente? \n");
	                printf("\n  1 para sim \n");
	                printf("\n  0 para nÃ£o \n");
	                printf("\n  Resposta:  ");
	                scanf("%d",&resposta);
	                
	                printf("\n");
	                printf("\n");
	                printf("\n");
	                printf("\n");
	                    
	                if(resposta==1){
	                	
	                	
					
					   printf("                <<<<<<<<<< COMEÃ‡ANDO OUTRA RODADA.... >>>>>>>>>>");
					   
					   printf("\n");
					   printf("\n");
	              	   system("pause");
                       system("cls");   
				    }
				    
				    else{
				    	
				    	printf("  <<<<<<<<<< Fechando o jogo,esero que joque mais na prÃ³xima.... >>>>>>>>>>");
				        
				        printf("\n");
						printf("\n");
				
					}
					
				
				
				
}

            while(resposta!=0);


        return 0;
				  
}