#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct t_list
{
	int	cnt;
	struct t_list *next;  
}node;

node *ft_append(node *head, int value)
{
	node *temp;
	node *new;

	temp = head;
	new = malloc(sizeof(node));
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->cnt = value;
	new->next = NULL;
	return (new);
}

int ft_pirntnode(node *head)
{
	node *temp;
	int i;

	i = 0;
	temp = head;
	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}
	return i + 1;
}


int main(int argc, char const *argv[])
{
	node *head = malloc(sizeof(node));
	head->cnt = 0;
	head->next = NULL;

	ft_append(head, 55);
	ft_append(head, 46);
	printf("%d", ft_pirntnode(head));
	return 0;
}
