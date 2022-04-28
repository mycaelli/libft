void ft_lstadd_back(t_list **lst, t_list *new)
{
	//caso da lista estar vazia??
	while (*lst->next)
		*lst = *lst->next;
	*lst->next = new;
	new->next = NULL;
}
