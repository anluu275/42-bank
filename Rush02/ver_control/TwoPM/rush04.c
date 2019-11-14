/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:52:48 by tmarston          #+#    #+#             */
/*   Updated: 2019/11/10 14:03:39 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_horiz_first(int horiz);
void	print_horiz_second(int horiz);
void	print_vert(int vert, int horiz);
char 	ft_strcat(char* dest, char *src); //Make a strcat!!!

//We need to make a string concatination function.
//We want to store all the result in to one line right?
//SOOOOO.... I need to malloc enough space for example "o--o\n|  |\no--o\n" so basicly... box = (char *)malloc(strlen = 15 * sizeof(char))

char	*rush04(int a, int b) //Concat all of the Lines Top -> Middle -> Bottom into one long string. (Called finalbox)
{
	int 	horiz;
	int 	vert;
	char	*top;
	char	*middle;
	char	*bottom;
	char	*finalbox;

	if (a > 0 && b > 0)
	{
		horiz = a;
		vert = b;
		top = print_horiz_first(horiz);
		middle =  print_vert(vert, horiz);
		if (vert > 1)
			bottom = print_horiz_second(horiz);
	}
	
	//Also need to free the boxes inside the other functions Horiz_first/second/vertical
	free()
	free()



}

char	*print_horiz_first(int horiz) //Top line ONLY 
{
	int 	i;  
	char	*box;

	box = (char *)malloc(sizeof(char) * horiz + 1);
	i = 1;
	while (i <= horiz)
	{
		if (i == 1)
			box[i - 1] = 'A';
		else if (i == horiz && horiz > 1)
			box[i - 1] = 'C';
		else
			box[i - 1] = 'B';
		i++;
	}
	box[i - 1] = '\n'; 
	return (box);
}

char	*print_horiz_second(int horiz) //bottom Line ONLY
{
	int 	i;  
	char	*box;

	box = (char *)malloc(sizeof(char) * horiz + 1);
	i = 1;
	while (i <= horiz)
	{
		if (i == 1)
			box[i - 1] = 'C';
		else if (i == horiz && horiz > 1)
			box[i - 1] = 'A';
		else
			box[i - 1] = 'B';
		i++;
	}
	box[i - 1] = '\n';
	return (box);
}

char	*print_vert(int vert, int horiz) //Prints middle ONLY
{
	int 	height; // Height
	int 	width; // width
	int 	b; 
	char	*box;

	box = (char *)malloc(sizeof(char) * (horiz + 1) * vert);
	height = 0;
	b = 0;
	while (height <= vert - 3)
	{
		box[b++] = 'B';
		width = 0;
		while (width < horiz - 2)
		{
			box[b++] = ' ';
			width++;
		}
		if (horiz > 1)
			box[b++] = 'B';
		box[b++] = '\n';
		height++;
	}
}
