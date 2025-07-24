struct node {
    int value;
    struct node *next;
};

/************************************************************
 * delete_form_list: Deletes a node from the list.          *
 ************************************************************/
void delete_from_list(struct node **list, int n);
