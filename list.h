
typedef struct node {
    void *val;
    struct node * next;
    struct node *prev;
    int index;

} Node;

typedef struct LIST {

    Node *head;
    Node *currentNode;
    Node *tail;
    int length;

    // if current pointer = -1 its before the list, if = 1 it is past the list
    int currentPointerStatus;

} LIST;


LIST *ListCreate();
int ListCount(LIST *list);
void *ListFirst(LIST *list);
void *ListLast(LIST *list);
void *ListNext(LIST *list);
void *ListPrev(LIST *list);
void *ListCurr(LIST *list);
void initalizeList(LIST * list, Node *newNode);
void nullCurrentPointer(LIST *list, Node *newNode);
Node* getNewNode();
int ListAdd(LIST *list, void *item);
int ListInsert(LIST *list, void *item);
int ListAppend(LIST *list, void *item);
int ListPrepend(LIST *list, void *item);
void *ListRemove(LIST *list);
void ListConcat(LIST *list1, LIST *list2);
void *ListTrim(LIST *list);
void ListFree(LIST *list, void (*itemFree)(Node*));
void displayForward(LIST *list);
