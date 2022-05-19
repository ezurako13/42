#include <stdio.h>
#include <unistd.h>

#define nth 10

int say= 0;

int hasboard[nth][nth];

int ft_ten_queens_puzzle(void);
void next_queen(int (*board)[nth], int y, int x, int queen);
void yazdirdahta(int (*board)[nth]);
void arraykopy(int (*source)[nth], int (*destination)[nth]);
void one_board(int (*board)[nth], int y, int x);
int koyabiliyonmu(int (*board)[nth], int y, int x, int queen);

int main()
{
	ft_ten_queens_puzzle();
	
	//int destination[nth][nth]= {};
	//int source[nth][nth]= {1, 2, 4, 6, 5, 3, 31};
	
	//destination[4][6]= 2;
	//destination[0][2]= 2;
	//one_board(destination, 4, 6);
	//yazdirdahta(destination);

	//	arraykopy(source, destination);
	////	yazdirdahta(destination);
	//	for (int a= 0; a<nth0; a++)
	//{
	//	printf("%d ", destination[a / nth][a % nth]);
	//	if (a%nth == 0 && a != 0)
	//
	//		printf("\n");
	//}
	printf("\nsayac= %d\n", say);
	return (0);
}

int ft_ten_queens_puzzle(void)
{	
	int r;
	int c;
	int queen;
	
	r = -1;
	c = 0;
	while (++r < nth)
		hasboard[r / nth][r % nth] = 0;

	r = 0;
	queen = 0;
	next_queen(hasboard, r, c, queen);
	return (0);
	
}

void one_board(int (*board)[nth], int y, int x)
{
	int r ;
	int c;
	
	r=0;
	c=0;
	while(r<nth)
	{
		c = 0;
		while(c<nth)
		{
			if ((!(c==x && r==y)) && ( y==r || x==c
			 ||	(((float)(r-y))/(c-x)==1) || (((float)(r-y))/(c-x)==-1) )
			 && board[r][c] != 2)
			{
				//printf("hamza\n");
				board[r][c]=1;
				//printf("%d",board[c][r]);
			}
			c++;
		}
		r++;
	}
	//yazdirdahta(board);
}

void next_queen(int (*board)[nth], int y, int x, int queen)
{
	int r;
	int c;
	int nextboard[nth][nth];
	int flag;

	if(queen == nth)
	{
		//arraykopy(board, hasboard);
		arraykopy(board, nextboard);
		yazdirdahta(board);
		say++;
	}
	else
		arraykopy(board, nextboard);
	r = y;
	c = x;
	while(r < nth && queen < nth)
	{
		while(c < nth && queen < nth)
		{
			//flag = 0;
			//if (koyabiliyonmu(nextboard, r, c, queen) == 1)
			//{
			//	flag = 1;
			//	
			//}
			if (nextboard[r][c] == 0)
			{
				nextboard[r][c] = 2;
				queen++;
				one_board(nextboard, r, c);
				//yazdirdahta(board);
				next_queen(nextboard, r, c, queen);
				queen--;
				arraykopy(board, nextboard);
			}
			
			c++;
		}
		c = 0;
		r++;
	}
	//yazdirdahta(board);
}

int koyabiliyonmu(int (*board)[nth], int y, int x, int queen)
{
	int r;
	int c;
	int nextboard[nth][nth];

	if(queen == 11)
	{
		printf("xd");
		return (1);
	}
	arraykopy(board, nextboard);
	
	r = y;
	c = x;
	while(r < nth)
	{
		while(c < nth)
		{
			if (nextboard[r][c] == 0)
			{
				nextboard[r][c] = 2;
				queen++;
				one_board(nextboard, r, c);
				//yazdirdahta(board);
				koyabiliyonmu(nextboard, r, c, queen);
			}
			c++;
		}
		c = 0;
		r++;
		if (r == nth)
		{
			r = 0;
		}
		if (r == y)
			break;
	}
	//printf("Q= %d, ", queen);
	return (0);
}

void yazdirdahta(int (*board)[nth])
{
	int c;
	int r;
	
	//c = -1;
	//while (++c < nth)
	//{
	//	r = -1;
	//	while (++r < nth)
	//		if (board[c][r] == 2)
	//			printf("%d ", r);
	//}
	//printf("\n");
	c = 0;
	while (c<nth)
	{
		r = 0;
		while (r<nth)
		{
			if (board[r][c] == 2)
			{
				printf("\033[1;31m");
				printf("%d ", board[r][c]);
				printf("\033[0m");
			}
			else if (board[r][c] == 1)
			{
				printf("\033[1;34m");
				printf("%d ", board[r][c]);
				printf("\033[0m");
			}
			else
				printf("%d ", board[r][c]);
			r++;
		}
		printf("\n");
		c++;
	}
	write(1, "\n\n", 2);
}

void arraykopy(int (*source)[nth], int (*destination)[nth])
{
	int i;
	int o;
	
	i = -1;
	o = -1;
	while (++i < nth)
	{
		o = -1;
		while (++o < nth)
			destination[i][o] = source[i][o];
	}
	//yazdirdahta(destination);
	//yazdirdahta(source);
}
