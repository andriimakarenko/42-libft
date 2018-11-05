/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakaren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:51:03 by amakaren          #+#    #+#             */
/*   Updated: 2018/11/05 19:51:06 by amakaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
TODO: Replace this bs with a proper navigation
*/

#include <stdio.h>

int	main(int argc, char** argv)
{
	switch (argv[1])
	{
		case "memalloc":
			ftest_memalloc();
			break;
		case "memdel":
			ftest_memdel();
			break;
		case "strnew":
			ftest_strnew();
			break;
		case "strdel":
			ftest_strdel();
			break;
		case "strclr":
			ftest_strclr();
			break;
		case "striter":
			ftest_striter();
			break;
		case "striteri":
			ftest_striteri();
			break;
		case "strmap":
			ftest_strmap();
			break;
		case "strmapi":
			ftest_strmapi();
			break;
		case "strequ":
			ftest_strequ();
			break;
		case "strnequ":
			ftest_strnequ();
			break;
		case "strsub":
			ftest_strsub();
			break;
		case "strjoin":
			ftest_strjoin();
			break;
		case "strtrim":
			ftest_strtrim();
			break;
		case "strsplit":
			ftest_strsplit();
			break;
		case "itoa":
			ftest_itoa();
			break;
		case "putchar":
			ftest_putchar();
			break;
		case "putstr":
			ftest_putstr();
			break;
		case "putendl":
			ftest_putendl();
			break;
		case "putnbr":
			ftest_putnbr();
			break;
		case "putchar_fd":
			ftest_putchar_fd();
			break;
		case "putstr_fd":
			ftest_putstr_fd();
			break;
		case "putendl_fd":
			ftest_putendl_fd();
			break;
		case "putnbr_fd":
			ftest_putnbr_fd();
			break;
	}
}
