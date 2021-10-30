#include "libft.h"
#include <libc.h>
#include <ctype.h>
#include <stdio.h>

void	ft_print_lst(t_list *l)
{	
	int i = 0;

	while (l)
	{
		printf("element n%d : %s\n", i++, (char *) l->content);
		l = l->next;
	}
}

int main(void)
{	
	t_list	*l;

	printf("Creation liste :\n");
	l = ft_lstnew("element 0");
	ft_print_lst(l);
	printf("Nb element : %d\n", ft_lstsize(l));

	printf("\nAjout d un element (ft_lstadd_front) :\n");
	ft_lstadd_front(&l, ft_lstnew("element 1 (devrait apparaitre avant element 0)"));
	ft_print_lst(l);
	printf("Nb element : %d\n", ft_lstsize(l));

	printf("\nAjout d un element (ft_lstadd_back) :\n");
	ft_lstadd_back(&l, ft_lstnew("element 2 (devrait apparaitre en dernier)"));
	ft_print_lst(l);
	printf("Nb element : %d\n", ft_lstsize(l));
	
	return (0);
}