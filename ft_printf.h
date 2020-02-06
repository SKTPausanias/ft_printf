/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 11:49:15 by mlaplana          #+#    #+#             */
/*   Updated: 2019/12/02 16:10:55 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_flags
{
	int point;
	int ast;
	int ast2;
	int zero;
	int number;
	int number2;
	int plus;
	int space;
	int hashtag;
	int com;
	int dev;
	int astval1;
	int astval2;
}				t_flags;

int				print_spaces(t_flags *iflags, int len);
char			*fill_zeros(t_flags *iflags, int len);
void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_itoa_unsigned(unsigned int n);
char			*ft_itoa_lowhex(unsigned long n);
char			*ft_itoa_uphex(unsigned long n);
int				print_c(va_list argptr, t_flags *iflags);
int				print_s(va_list argptr, t_flags *iflags);
int				print_p(va_list argptr, t_flags *iflags);
int				print_di(va_list argptr, t_flags *iflags);
int				print_u(va_list argptr, t_flags *iflags);
int				print_x(va_list argptr, t_flags *iflags);
int				print_mayusx(va_list argptr, t_flags *iflags);
void			print_n(va_list argptr, t_flags *iflags);
int				check_flags(char *src, int i, t_flags *iflags);
int				print_else(t_flags *iflags, char c);
char			*cond_aux(t_flags *iflags, char *s);
int				fill_zeros2(t_flags *iflags, int len);
int				printear(t_flags *iflags, char *s);

#endif
