#include "lists.h"

/**
* insert_node - A number is inserted into a sorted singly list that are linked
* @head: linked-list head
* @number: number we are inserting
* Return: If function fails, return a NULL else address of new node
*/

listint_t *insert_node(listint_t **head, int number)
{
listint_t *node = *head, *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = number;

if (node == NULL || node->n >= number)
{
new->next = node;
*head = new;
return (new);
}
while (node && node->next && node->next->n < number)
node = node->next;
new->next = node->next;
node->next = new;

return (new);
}
