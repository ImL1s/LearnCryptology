#define _CRT_SECURE_NO_WARNINGS
#define CHAR_LENGTH 100

#include <stdio.h>
#include <stdlib.h>


// ���ĸѱK
void decode(char* c)
{
	for (int i = 0; i < CHAR_LENGTH; i++)
	{
		if (c[i] == '\0') break;
		c[i] --;
	}

	puts("�ѱK���G: \n");
	printf("%s \n", c);
}

// ���ĥ[�K
void encrypt(char* c)
{
	for (int i = 0; i < CHAR_LENGTH; i++)
	{
		if (c[i] == '\0') break;
		c[i] ++;
	}

	puts("�[�K���G: \n");
	printf("%s \n", c);
}


void enterSystem()
{
	puts("********** �w��ϥγ��ĥ[�K�t�� ********** \n");
	puts("�аݧA�n�[�K(0)�٬O�ѱK(1)? (�п�J 0 �άO 1) \n");

	char option[100];
	scanf("%s", &option);

	puts("�п�J�n�[�K/�ѱK������: \n");
	char ch[CHAR_LENGTH];
	int succ = scanf("%s", &ch);

	switch (option[0])
	{
	case '0':
		encrypt(ch);
		break;

	case '1':
		decode(ch);
		break;

	default:
		puts("��J���~... �Э��s��J");
		enterSystem();
		break;
	}
}

int main()
{
	enterSystem();


	system("pause");
}
