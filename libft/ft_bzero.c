/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:50:23 by inunes-o          #+#    #+#             */
/*   Updated: 2022/03/11 14:30:32 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// NAME         top
//        bzero, explicit_bzero - zero a byte string
// SYNOPSIS         top
//        #include <strings.h>

//        void bzero(void *s, size_t n);

//        #include <string.h>

//        void explicit_bzero(void *s, size_t n);
// DESCRIPTION         top
//        The bzero() function erases the data in the n bytes of the memory
//        starting at the location pointed to by s, by writing zeros (bytes
//        containing '\0') to that area.

//        The explicit_bzero() function performs the same task as bzero().
//        It differs from bzero() in that it guarantees that compiler
//        optimizations will not remove the erase operation if the compiler
//        deduces that the operation is "unnecessary".
// RETURN VALUE         top
//        None.
// VERSIONS         top
//        explicit_bzero() first appeared in glibc 2.25.
// ATTRIBUTES         top
//        For an explanation of the terms used in this section, see
//        attributes(7).

//        ┌──────────────────────────────────────┬───────────────┬─────────┐
//        │Interface                             │ Attribute     │ Value   │
//        ├──────────────────────────────────────┼───────────────┼─────────┤
//        │bzero(), explicit_bzero()             │ Thread safety │ MT-Safe │
//        └──────────────────────────────────────┴───────────────┴─────────┘
// CONFORMING TO         top
//        The bzero() function is deprecated (marked as LEGACY in
//        POSIX.1-2001); use memset(3) in new programs.  POSIX.1-2008
//        removes the specification of bzero().  The bzero() function first
//        appeared in 4.3BSD.

//        The explicit_bzero() function is a nonstandard extension that is
//        also present on some of the BSDs.  Some other implementations
//        have a similar function, such as memset_explicit() or memset_s().

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
