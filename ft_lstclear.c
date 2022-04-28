void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	temp = lst;
	while (*lst->next)
	{
		temp = *lst->next;
		(*del)(*lst);
		free(*lst);
		*lst = temp;
	}
}
