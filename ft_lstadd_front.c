void ft_lstadd_front(t_list **lst, t_list *new)
{
	//tratar casos de NULL???
	new->next = *lst;
	*lst = new;
}
