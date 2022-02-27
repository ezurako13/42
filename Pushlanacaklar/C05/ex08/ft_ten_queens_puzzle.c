/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokturk <agokturk@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:20:08 by agokturk          #+#    #+#             */
/*   Updated: 2022/02/27 15:20:08 by agokturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	next_queen(int (*board)[10], int y, int x, int queen);
void	yazdirdahta(int (*board)[10]);
void	arraykopy(int (*source)[10], int (*destination)[10]);
void	one_board(int (*board)[10], int y, int x);

int	ft_ten_queens_puzzle(void)
{	
	int	r;
	int	c;
	int	queen;
	int	hasboard[10][10];

	r = -1;
	c = 0;
	while (++r < 100)
		hasboard[r / 10][r % 10] = 0;
	r = 0;
	queen = 0;
	next_queen(hasboard, r, c, queen);
	return (0);
}

void	one_board(int (*board)[10], int y, int x)
{
	int	r ;
	int	c;

	r = 0;
	c = 0;
	while (r < 10)
	{
		c = 0;
		while (c < 10)
		{
			if ((!(c == x && r == y)) && (y == r || x == c
					|| (((float)(r - y)) / (c - x) == 1)
				|| (((float)(r - y)) / (c - x) == -1)) && board[r][c] != 2)
			{
				board[r][c] = 1;
			}
			c++;
		}
		r++;
	}
}

void	next_queen(int (*board)[10], int y, int x, int queen)
{
	int	r;
	int	c;
	int	nextboard[10][10];

	if (queen == 10)
		yazdirdahta(board);
	arraykopy(board, nextboard);
	r = y - 1;
	c = x - 1;
	while (++r < 10 && queen < 10)
	{
		while (++c < 10 && queen < 10)
		{
			if (nextboard[r][c] == 0)
			{
				nextboard[r][c] = 2;
				queen++;
				one_board(nextboard, r, c);
				next_queen(nextboard, r, c, queen);
				queen--;
				arraykopy(board, nextboard);
			}
		}
		c = -1;
	}
}

void	yazdirdahta(int (*board)[10])
{
	int		c;
	int		r;
	char	wrt;

	c = -1;
	while (++c < 10)
	{
		r = -1;
		while (++r < 10)
		{
			if (board[c][r] == 2)
			{
				wrt = r + 48;
				write(1, &wrt, 1);
			}
		}
	}
	write(1, "\n", 1);
}

void	arraykopy(int (*source)[10], int (*destination)[10])
{
	int	i;
	int	o;

	i = -1;
	o = -1;
	while (++i < 10)
	{
		o = -1;
		while (++o < 10)
			destination[i][o] = source[i][o];
	}
}
