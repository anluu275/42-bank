/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 23:31:11 by anluu             #+#    #+#             */
/*   Updated: 2019/11/13 20:25:15 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

// s1 is dest s2 is source.
char *ft_strcpy(char *s1, char *s2)
{
	while (*s1 || *s2)
		{
			*s1 = *s2;
			s1++;
			s2++;
		}
	*s1 = '\0';
	return (s1);
}

int main()
{
	char s1[] = "MyString";
	char s3[] = "MyString";

	char s2[] = "string";
	char s4[] = "string";

	strcpy(s1, s2);
	printf("%s", s1);	
	printf("%s", s2);

	ft_strcpy(s3, s4);
	printf("%s", s3);	
	printf("%s", s4);
	return (0);
}
