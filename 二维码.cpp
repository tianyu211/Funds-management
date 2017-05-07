#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#include"windows.h"
#define M 36
void main()
{
	//system("color 4F");
	int i,j,k;
	int x,y,z;
	char a[M][M];
	srand((unsigned)time(0));
	for (j = 0; j < M; j++)
	{
		if (j == 1||j==7)
		{
			for (i = 0; i < 7; i++)
				printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < M-16; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("  ");
			for (i = 0; i < 7; i++)
				printf("%c%c", 0xa8, 0x80);
			printf("\n");
		}
		if (j == 2||j==6)
		{
			printf("%c%c", 0xa8, 0x80);
			printf("          ");
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < M - 16; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("  ");
			printf("%c%c", 0xa8, 0x80);
			printf("          ");
			printf("%c%c", 0xa8, 0x80);
			printf("\n");
		}
		if (j == 3||j==5)
		{
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < 3;i++)
				printf("%c%c", 0xa8, 0x80);
			printf("  ");
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < M - 16; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("  ");
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < 3; i++)
				printf("%c%c", 0xa8, 0x80);
			printf("  ");
			printf("%c%c", 0xa8, 0x80);
			printf("\n");
		}
		if (j == 4)
		{
			for (i = 0; i < 4; i++)
			{
				printf("%c%c", 0xa8, 0x80);
				printf("  ");
			}
			for (i = 0; i < M - 16; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("  ");
			//printf("\n");
			for (i = 0; i < 3; i++)
			{
				printf("%c%c", 0xa8, 0x80);
				printf("  ");
			}
			printf("%c%c", 0xa8, 0x80);
			printf("\n");
		}
		if (j == 8)
		{
			for (i = 0; i < 8; i++)
				printf("  ");
			for (i = 0; i < M - 16; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			for (i = 0; i < 8; i++)
				printf("  ");
			printf("\n");
		}
		if (j == 22)
		{
			for (i = 0; i < 8;i++)
				printf("  ");
			for (i = 0; i < M - 8; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("\n");
		}
		if(j==23||j==29)
		{
			for (i = 0; i < 7; i++)
				printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < M - 8; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("\n");
		}
		if (j == 24 || j == 28)
		{
			printf("%c%c", 0xa8, 0x80);
			printf("          ");
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < M - 8; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("\n");
		}
		if (j == 25 || j == 27)
		{
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < 3; i++)
				printf("%c%c", 0xa8, 0x80);
			printf("  ");
			printf("%c%c", 0xa8, 0x80);
			printf("  ");
			for (i = 0; i < M - 8; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("\n");
		}
		if (j == 26)
		{
			for (i = 0; i < 4; i++)
			{
				printf("%c%c", 0xa8, 0x80);
				printf("  ");
			}
			for (i = 0; i < M - 8; i++)
			{
				k = rand() % 3;
				if (k == 1)
					printf("%c%c", 0xa8, 0x80);
				else
					printf("  ");
			}
			printf("\n");
		}
		for (x = 9; x < 22; x++)
		{
			if (j == x)                      
			{
				for (i = 0; i < M; i++)
				{
					k = rand() % 3;
					if (k == 1)
						printf("%c%c", 0xa8, 0x80);
					else
						printf("  ");
				}
				printf("\n");
			}
		}
	}
}