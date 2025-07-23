struct node {
    int value;
    struct node *next;
};

/******************************************************************
 * delete_from_list: Deletes a node with value n from the     *
 *                       list. Returns the list.                  *
 ******************************************************************/
struct node *delete_from_list(struct node *list, int n);
