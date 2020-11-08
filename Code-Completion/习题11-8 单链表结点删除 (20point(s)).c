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

struct ListNode *deletem( struct ListNode *L, int m )
{
	struct ListNode **ptr = &L, *del;

	for(ptr = &L; *ptr; ) {
		if((*ptr)->data == m) {
			del = *ptr;
			(*ptr) = (*ptr)->next;

			free(del);
		}
		else
			ptr = &(*ptr)->next;
	}

	return L;
}
