/**
 * Data structures
*/

typedef int boolean;

typedef struct list list;

typedef boolean (*filter)(void* ptr);

typedef struct map map;

typedef int better_int;

list* alloc_list();

void free_list(list* list);

void list_add_element(list* list, void* element);

void* list_pop(list* list);


void list_filter(list* list, filter f);
