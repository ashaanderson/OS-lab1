#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
  list_t * linked_list = list_alloc();
  
  list_add_to_back(linked_list, 7);
  printf("Expects 7\n");
  list_print(linked_list);
  
  list_add_to_back(linked_list, 6);
  printf("Added 6 to back of list, Expects list to be 7, 6\n");
  list_print(linked_list);
 
  list_add_to_front(linked_list, 1);
  printf("Added 1 to front of list, Expects list to be 1, 7, 6\n");
  list_print(linked_list);
  
  list_remove_from_back(linked_list);
  printf("removed last element of list, Expects list to be 1, 7,\n");
  list_print(linked_list);
  
  list_remove_from_front(linked_list);
  printf("removed first element of list, Expects list to be  7,\n");
  list_print(linked_list);
 
  int arr[4] = {1, 2, 4, 5};
  int i;
  for (i = 0; i<4; i++) {
    list_add_to_back(linked_list, arr[i]);
  }
  printf("New list is ");
  list_print(linked_list);
 
  printf("the element at index 0 is %d\n", list_get_elem_at(linked_list, 0));
  
  printf("the element at index 2 is %d\n", list_get_elem_at(linked_list, 2));
    
  printf("the index of the element 4 is %d\n", list_get_index_of(linked_list, 4));
  
  printf("Is 2 in list?, %s\n",  list_is_in(linked_list, 2)?"true":"false");
  
  printf("Is 100 in list?, %s\n",  list_is_in(linked_list, 100)?"true":"false");
    
  list_remove_at_index(linked_list, 2);
  printf("removed element at index 2, Expects list to be 7, 1, 4, 5  ,\n");
  list_print(linked_list);
    
  list_add_at_index(linked_list, 3, 1);
  printf("added 3 at index 1, Expects list to be  7, 3, 1, 4, 5 \n");
  list_print(linked_list);
    
  printf("the length of list is %d\n ", list_length(linked_list));
  list_free(linked_list);
  return 0;
}
