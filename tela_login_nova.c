#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <conio.h>

void telalogin()
{
	char login[32], senha[32], ch;
	int i;

    setlocale(LC_ALL, "Portuguese");
    printf("|+_____________________________________________________________________+|\n");
	printf("|                                 LOGIN                                 |\n");                                                                                                                  
	printf("|                                                                       |\n");  
	printf("|+_____________________________________________________________________+|\n");
	
	printf("Email ou Usuário: ");
	fflush(stdin);
	gets(login);
	printf("\nSenha: ");
	fflush(stdin);

	do
	{
		senha[ch] = getch();
		printf("*");
		senha[ch] = ' ';
		
	} while ((ch = getch())!= 0xd);
	system("pause");
}
