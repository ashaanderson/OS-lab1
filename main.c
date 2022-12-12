#include <stdio.h>
#include "list.h"
#include <stdlib.h>

int main() 
{
  elem val;

  printf("Write your Tests for your linked list implementation\n");
  
  list_t *mylist = list_alloc();
  
  list_print(mylist);

  
  //printf("add in front of list \n");
  list_add_to_front(mylist,10);
  list_print(mylist);

  //printf("\n30 in front of list \n");
  list_add_to_front(mylist,500);
  list_print(mylist);

  //printf("\n20 in back of list \n");
  list_add_to_back(mylist,20);
  list_print(mylist);

  //printf("\n40 in back of list \n");
  list_add_to_back(mylist,70);
  list_add_to_front(mylist,600);
  list_add_to_front(mylist,700);
  list_add_to_back(mylist,900);
  list_add_to_front(mylist,500);
  list_add_to_back(mylist,9);
  list_print(mylist);

  /*
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  */




  /*
  printf("\nremove from front\n");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("\nremove from front\n");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("\nremove from front\n");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("\nremove from front\n");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("\nremove from front\n");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("\nremove from front\n");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("\nremove from front\n");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("\nremove from front\n");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("\nremove from front\n");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("\nremove from front\n");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("\nremove from front\n");
  list_remove_from_front(mylist);
  list_print(mylist);
  printf("\nremove from back\n");
  list_remove_from_back(mylist);
  list_print(mylist);
  printf("\nremove from back\n");
  list_remove_from_back(mylist);
  list_print(mylist);
  printf("\nremove from front\n");
  list_remove_from_front(mylist);
  list_print(mylist);

  */
  
  ///*
  printf("remove at index 0:\n");  
  list_remove_at_index(mylist,0);
  list_print(mylist);
  printf("remove at index 0:\n");  
  list_remove_at_index(mylist,0);
  list_print(mylist);
  list_is_in(mylist,900);
  list_is_in(mylist,30);
  list_is_in(mylist,50);
  list_is_in(mylist,20);
  list_is_in(mylist,10);
  list_is_in(mylist,9);
  list_is_in(mylist,999);
  list_print(mylist);
  //*/

  /*
  printf("remove at index 7:\n");  
  list_remove_at_index(mylist,7); 
  list_print(mylist);
  printf("remove at index 0:\n");  
  list_remove_at_index(mylist,0); 
  list_print(mylist);
  printf("remove at index 3:\n");  
  list_remove_at_index(mylist,3); 
  list_print(mylist);
  printf("remove at index 1:\n");  
  list_remove_at_index(mylist,1); 
  list_print(mylist);
  printf("remove at index 4:\n");  
  list_remove_at_index(mylist,4); 
  list_print(mylist);
  printf("remove at index 1:\n");  
  list_remove_at_index(mylist,1); 
  list_print(mylist);
  printf("remove at index 5:\n");  
  list_remove_at_index(mylist,5); 
  list_print(mylist);
  printf("remove at index 100:\n");  
  list_remove_at_index(mylist,100); 
  list_print(mylist);
  */
  
  /*
  list_get_elem_at(mylist,0);
  list_get_elem_at(mylist,1);
  list_get_elem_at(mylist,2);
  list_get_elem_at(mylist,3);
  list_get_elem_at(mylist,4);
  list_get_elem_at(mylist,5);
  list_get_elem_at(mylist,6);
  list_get_elem_at(mylist,9);
  list_print(mylist);

  list_add_at_index(mylist,555,0);
  list_print(mylist);
  list_add_at_index(mylist,999,1);
  list_print(mylist);
  list_add_at_index(mylist,444,9);
  list_print(mylist);
  list_add_at_index(mylist,666,20);
  list_print(mylist);
  list_add_at_index(mylist,777,4);
  list_print(mylist);
  list_length(mylist);
  */
  

  /*
  list_get_elem_at(mylist,-1);
  list_remove_at_index(mylist, 0);
  list_get_elem_at(mylist,0);
  list_print(mylist);
  list_get_elem_at(mylist,1);
  list_get_elem_at(mylist,4);
  list_get_elem_at(mylist,10000);
  list_free(mylist);
  list_get_elem_at(mylist,1);
  list_free(mylist);
  list_get_elem_at(mylist,0);
  list_free(mylist);
  list_get_elem_at(mylist,4);
  */
  
  /*
  list_print(mylist);
  list_get_index_of(mylist, 10);
  list_get_index_of(mylist, 9);
  list_get_index_of(mylist, 800);
  //list_free(mylist);
  list_get_index_of(mylist, 9);
  list_get_index_of(mylist, 200);
  list_get_index_of(mylist, -5);
  */

  /*
  list_print(mylist);
  list_remove_at_index(mylist, 0);
  list_print(mylist);
  list_remove_at_index(mylist, 10000);
  list_print(mylist);
  list_remove_at_index(mylist, 4);
  list_print(mylist);
  list_remove_at_index(mylist, 2);
  list_print(mylist);
  list_remove_at_index(mylist, 99999);
  list_print(mylist);
  list_free(mylist);
  list_remove_at_index(mylist, 2);
  list_print(mylist);
  list_remove_at_index(mylist, 99999);
  list_print(mylist);
  */
  
  
  
  /*

  list_free(mylist);


  list_print(mylist);
  list_add_at_index(mylist,999,1);
  list_print(mylist);
  list_add_at_index(mylist,444,9);
  list_print(mylist);
  list_add_at_index(mylist,69,1);
  list_print(mylist);

  list_length(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  list_remove_from_back(mylist);
  list_print(mylist);
  


  list_free(mylist);
  list_print(mylist);
  list_length(mylist);
  list_remove_from_back(mylist);

  printf("\nend.\n");

 */
}
