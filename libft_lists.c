#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
    t_list	*tmp;						
	if ((tmp = (t_list *)malloc(sizeof(t_list))) == 0)
		return 0;										
    tmp->next = NULL;		
	tmp->content = content;					
	return (tmp);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

int ft_lstsize(t_list *lst)
{
    int i = 0;
    while (lst)
	{
		i++;
		lst = lst->next;
	}
    return i;
}

t_list *ft_lstlast(t_list *lst)
{
    /*while (lst)
	{
        //printf("%s ", (char *)lst->content);
        if(lst->next == NULL)
            return lst;
        lst = lst->next;
        //printf("%s ", (char *)lst->content);
	}
    return 0;*/
    while(lst->next)
        lst = lst->next;
    return lst;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;
    tmp = *lst;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
}

void	del(void *data)			
{
	free(data);							
}
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*dst;

	dst = malloc(ft_strlen(src) + 1);
	if (!dst)
		return ((void *)0);
	ft_strcpy(dst, src);
	return (dst);
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
    printf("%s ", (char *)(*lst)->content);
	if (*lst)
	{
		while (*lst)
		{
            printf("\nwe have%s \n", (char *)(*lst)->content);
			tmp = (*lst)->next;
			//ft_lstdelone(*lst, del);
            if ((*lst)->content)					
			    del((*lst)->content);	
            free(*lst);
			*lst = tmp;
            printf("up next\n");
		}
		*lst = 0;
	}
}

void	ft_putstr(void *s)
{
	while (*((char *)s))
    {
        write(1, s++, 1);
        //write(1, ' ', 1);
		//ft_putchar(*((char *)s++));
    }
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
	{
        f(lst->content);
		lst = lst->next;
	}
}

void *ft_toupper(void *s)
{
    char c; 
    char *ss;
    ss = malloc(strlen(s) + 1);
    
    while(*((char *)s))
    {
        c = *((char *)s);
        if (c >= 'a' && c <= 'z')
            c = c - 32;
        //write(1, &c, 1);
        *ss = c;
        s++;
        ss++;
    }
    //printf("%s", (char *)s);
    //printf("%s", ss);
    //printf("yes");
    return (char *)ss;
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*lst1 = NULL;
    //t_list	**lst0;

    while (lst)
	{
        printf("%s ", (char *)lst->content);
        lst->content=f(lst->content);
        printf("%s ", (char *)lst->content);
        ft_lstadd_back(&lst, lst1);
		lst = lst->next;
        if (!lst->content)					
			    del(lst->content);
	}
    return lst1;
}



int			main(void)
{
	t_list **list;
    t_list *node;
	node = ft_lstnew(ft_strdup("Hello"));
	node->next = ft_lstnew("My");
	node->next->next = ft_lstnew("Friend");
    list = &node;
    //printf("%d", ft_lstsize(node));
	/*while (node)
	{
		printf("%s ", (char *)node->content);
		node = node->next;
	}*/
    ft_lstadd_front(list, ft_lstnew("new"));
    ft_lstadd_back(list, ft_lstnew(ft_strdup("last")));
    //printf("%d", ft_lstsize(node));
    t_list *last_node = ft_lstlast(node);
    printf("%s\n ", (char *)last_node->content);
    //ft_lstdelone(last_node, del);
    //printf("%s ", (char *)node->content);
    //list = &last_node;
    //ft_lstclear(list, del);
    ft_lstiter(*list, ft_putstr);
    //ft_lstclear(&last_node, del);
    ft_lstdelone(&last_node, del);
    ft_lstiter(*list, ft_putstr);
    //ft_lstiter(node, ft_putstr);
    printf("\n");
    //t_list *newlist = ft_lstmap(node, ft_toupper, del);
    //ft_lstiter(newlist, ft_putstr);
    /*while (node)
	{
		printf("%s ", (char *)node->content);
		node = node->next;
	}
    char s[6] = "hello";
    char *out;
    out = ft_toupper(s);
    printf("%s", out);*/
	return 0;
}