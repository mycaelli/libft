t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp;
	t_list *lst_f;
	size_t size;

	temp = lst;
	size = 0;
	
	while (temp->next)
	{
		size++;
		temp = temp->next;
	}
	lst_f = (t_list *)malloc(size * sizeof(t_list));
	if (!lst_f)
		return (NULL);
	temp = lst;
	while (temp->next)
	{
		lst_f->content = (*f)(lst->content);
		lst_f = lst_f->next;
		temp = temp->next;
		(*del)(lst->content);
		free(lst);
	}
	return (lst_f);
}
