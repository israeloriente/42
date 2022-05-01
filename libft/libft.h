/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunes-o <inunes-o@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:09:06 by inunes-o          #+#    #+#             */
/*   Updated: 2022/04/30 17:30:46 by inunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H 

# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * Verificar se é alpha.
 * @param c Char.
 * @return Boolean
 */
int				ft_isalpha(int c);

/**
 * The isdigit() function tests for a decimal digit character.
 * @param i Number to check.
 * @return Boolean.
 */
int				ft_isdigit(int i);

/**
 * Verifica se o parametro "i" é numero.
 * @param i Number to check.
 * @return Boolean.
 */
int				ft_isalnum(int i);

/**
 * Verifica se faz parte da ascii.
 * @param i Value to check.
 * @return Boolean.
 */
int				ft_isascii(int value);

/**
 * Verifica se argumento é printável.
 * @param arg
 * @return Boolean
 */
int				ft_isprint(int arg);

/**
 * Busca o comprimento da string
 * @param str String para medir
 * @return size_t
 */
size_t			ft_strlen(const char *str);

/**
 * Escreve "n" de bytes de "c" (convertivo em "unsigned char") para a string "b"
 * 
 * @param str String que vai receber.
 * @param c Valor que será escrito.
 * @param n Quantidade de vezes que vamos escrever.
 * @return void* 
 */
void			*ft_memset(void *str, int c, size_t n);

/**
 * Escreve "n" vezes o valor "0" na string "s".
 * @param s String que será escrita.
 * @param n Quantidade de vezes que será escrita.
 */
void			ft_bzero(void *s, size_t n);

/**
 * Copia "n" vezes da string "src" para a string "dst".
 * @param dst String destino.
 * @param src String Source.
 * @param n Quantidade de vezes que vamos copiar.
 * @return void* 
 */
void			*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * Copia "src" para "dst" "len" vezes, as duas strings podem se sobrepor.
 * @param dst Destino.
 * @param src Origem
 * @param len Quantidade de vezes
 * @return void* 
 */
void			*ft_memmove(void *dst, const void *src, size_t len);

/**
 * Copia e concatena as string com o mesmo parametros de entrada e saida.
 * @param dst Destino.
 * @param src Origem.
 * @param dstsize Qtd.
 * @return O tamanho do "src"
 */
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * Copia de "src" para "dst" ate o "dstsize".
 * @param dst Destino.
 * @param src Origem.
 * @param dstsize Quantidade de caracteres.
 * @return Retorna o tamanha do length de "dst" + "src".
 */
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * Passa o char para maiúsculo.
 * 
 * @param c Letra que será convertida
 * @return Letra que será modificada
 */
int				ft_toupper(int c);

/**
 * Passa argumento para minúsculo.
 * @param arg Argumento precisa ser letra.
 * @return arg.
 */
int				ft_tolower(int arg);

/**
 * Encontra a primeira ocorrência de "c" na string "s" e retorna dela em diante.
 * @param s String para buscar
 * @param c Caractere
 * @return char* String da parte encontrada
 */
char			*ft_strchr(const char *s, int c);

/**
 * Encontra a ultima ocorrência de "c" na string "s" e retorna dela em diante.
 * @param s String para buscar
 * @param c Caractere
 * @return char* String da parte encontrada
 */
char			*ft_strrchr(const char *s, int c);

/**
 * Compara "s1" com "s2" até "n" caracteres.
 * @param s1 Primeira string para comparação.
 * @param s2 Segunda string para comparação.
 * @param n Quantidades de caracteres para comparar.
 * @return int Boolean.
 */
int				ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * Encontra a primeira ocorrência de "c" na string "s".
 * @param s String.
 * @param c Caracter.
 * @param n Quantidade de vezes que deve pecorrer.
 * @return void* 
 */
void			*ft_memchr(const void *s, int c, size_t n);

/**
 * Compara o byte string s1 com o byte string s2.
 * Presume-se que as duas strings devem ter "n" de comprimento.
 * @param s1 Primeira string para comparação.
 * @param s2 Segunda string para comparação.
 * @param n Quantidades de caracteres para comparar.
 * @return int Boolean
 */
int				ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * Encontra a primeira ocorrência até o comprimento len.
 * Após "\0" não será pesquisado.
 * @param palhe Palheiro.
 * @param agulha Agulha.
 * @param len Comprimento da pesquisa.
 * @return char* Se "agulha" for vazia o palheiro é devolvido,
 * Se agulha não for achada NULL é devolvido. Caso contrário é retornado
 * o ponteiro para o primeiro char.
 */
char			*ft_strnstr(const char *palhe, const char *agulha, size_t len);

/**
 * Converte string em número.
 * @param str String que será convertida.
 * @return int 
 */
int				ft_atoi(const char *str);

/**
 * Faz malloc e inicializa tudo para zero.
 * @param count Quantida de coisas.
 * @param size Tamanho das coisas.
 * @return void* Devolve um ponteiro à memória alocada.
 */
void			*ft_calloc(size_t count, size_t size);

/**
 * Aloca memória suficiente para uma cópia da string "s1".
 * @param s1 String que sera copiada.
 * @return char* Retorna a copia.
 */
char			*ft_strdup(const char *s1);

/* @@@@@@@@@@	Second Part	@@@@@@@@@@ */

/**
 * Aloca com malloc e devolve a substring e começa no índice 'start'
 * e vai até 'len'.
 * @param s String que será copiada.
 * @param start Index de onde a substring começa.
 * @param len Quantos caracteres a substring terá.
 * @return char* Nova substring.
 */
char			*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * Aloca com malloc e retorna a concatenação de "s1" com "s2" em uma nova string.
 * @param s1 Primeira string.
 * @param s2 Segunda string.
 * @return char* Nova string concatenada.
 */
char			*ft_strjoin(char const *s1, char const *s2);

/**
 * Aloca com malloc, faz a copia de "s1" e retorna ela com as coisas entre
 * o "set" do inicio e do fim.
 * @param s1 String que será copiada.
 * @param set Identificador para recortar a string.
 * @return char* Copia da string recortada.
 */
char			*ft_strtrim(char const *s1, char const *set);

/**
 * Separa a string onde for encontrado o "c".
 * @param s  String que sera separada.
 * @param c  Caracter que tomará a decisão de separar.
 * @return char** Lista de strings separadas.
 */
char			**ft_split(char const *s, char c);

/**
 * Transforma os números em string.
 * @param n Número que será convertivo.
 * @return char* String convertida. 
 */
char			*ft_itoa(int n);

/**
 * Aplica o ponteiro de função para cada caractere da string "s".
 * @param s String que será pecorrida.
 * @param f Ponteiro de função.
 * @return char* String criada com as modificaçōes de "f".
 * ou NULL se a alocação falhar.
 */
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * Aplica o ponteiro de função para cada caractere da string "s"
 * passando o index como primeiro argumento para criar a nova string.
 * Cada caractere é passado por endereço para "f" para ser modificado.
 * @param s String que será pecorrida.
 * @param f Ponteiro de função.
 * @return void.
 */
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * 
 * @param c 
 * @param fd 
 */
void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
int				ft_strcmp(const char *s1, const char *s2);

/* Bonus Part */

/**
 * Adds the node ’new’ at the beginning of the list.
 * @param lst The address of a pointer to the first link of
a list.
 * @param new The address of a pointer to the node to be
added to the list.
 * @return None
 */
void			ft_lstadd_front(t_list **lst, t_list *new);

void			ft_lstadd_back(t_list **lst, t_list *new);

/**
 * Allocates (with malloc(3)) and returns a new node. 
 *  The member variable ’content’ is initialized with
 the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
 * @param content The content to create the node with.
 * @return The new node.
 */
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *));

// Finalizando
#endif
