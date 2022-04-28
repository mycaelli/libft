int ft_lstsize(t_list *lst)
{
	size_t i;

	i = 0;
	while(lst->next)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
