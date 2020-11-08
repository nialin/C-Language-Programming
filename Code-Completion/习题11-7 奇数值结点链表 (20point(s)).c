struct ListNode *readlist()
{
	int data;
	struct ListNode *head = NULL, **ptr;

	for(ptr = &head; scanf("%d", &data) && data != -1; ptr = &(*ptr)->next) {
		if(!(*ptr = malloc(sizeof(struct ListNode))))
			exit(1);

		(*ptr)->data = data;
		(*ptr)->next = NULL;
	}

	return head;
}

struct ListNode *getodd( struct ListNode **L )
{
	struct ListNode *odd_head = NULL, **ptr;

	for(ptr = &odd_head; *L; ) {
		if((*L)->data & 1) {
			*ptr = *L;
			*L = (*L)->next;

			(*ptr)->next = NULL;
			ptr = &(*ptr)->next;
		}
		else
			L = &(*L)->next;
	}

	return odd_head;
}
