/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:47:00 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/21 11:45:17 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	iter(T const *arr, int length, void (*f)( T const & arr_i))
{
	int i = 0;

	for (; i < length; i++)
		(f)(arr[i]);
	return ;
}

template <typename T>
void	iter(T *arr, int length, void (*f)(T & arr_i))
{
	int i = 0;

	for (; i < length; i++)
		(f)(arr[i]);
	return ;
}

