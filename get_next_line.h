#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	char			*string;
	struct s_list	*next;
}					t_list;

void	dealloc(t_list **list, t_list *clean_node, char *buf);
void	copy_content(t_list *list, char *new_string);
t_list	*lstlast(t_list *lst);
int		found_nl(t_list *list);
int		len_sum(t_list *list);

void	reset_list(t_list **str_list);
char	*get_line(t_list *str_list);
void	add_node(t_list **str_list, char *str_read);
void	create_list(t_list **str_list, int fd);
char	*get_next_line(int fd);

#endif