t_list *ft_lstnew(void *content)
{
	t_list *lst;
	
	lst = (t_list *)malloc(1 * sizeof(*t_list));
	if (!lst)
	 return (NULL);
	lst->content = content;
	lst->next = NULL;	
}
