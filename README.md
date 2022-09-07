# Dynamic-Array-and-Single-Linked-Lists

Implements dynamic array and single linked lists.

1. Dynamic Array
  dynarray_create() - Function allocates, initilize and returns pinter to new dynamic array structure

  dynarray_free() - Function frees memory held within dynamic array sctructure though dynarray_create().

  dynarray_size() - Function retuns number of elements stored in dynamic array.

  dynarray_insert() - Function inserts new element at the end of a dynamic array. If the array currently contains n elements, then the new element would be n+1.

  dynarray_remove() - Function should remove element at the specified index from a dynamic array.

  dynarray_get() - Function should return the element value stored at a specified index in a dynamic array.

  dynarray_set() - Function should update value of the element at specified index in a dynamic array.

2. Single Linked List
  struct link - Represents a single link in the linked list. It has one field in which to store the data element associated with the link and one field that will point to the next link in the list.

  struct list - Represents an entire list and contains a single field to represent the head of the list. This structure with which the user of your list implementation will interact.

  list_create() - Function should allocate, initialize, and return a pointer to a new linked list structure.

  list_free() - Function should free the memory held within a linked list structure created by list_create(), including any memory allocated to theindiviual links themselves.

  list_insert() - Function sould insert a new elemnt at the end of a dynamic array. If the array currently contians n elements, then the newelement sould be always be inserted at index n.

  list_remove() - Function should remove the first instance of a specified value from a linked list. If multiple instance of the specified value exist in the list, only the first should be removed.

  list_position() - Function should return the list of the first instance of a specified value within a linked list. If multiple instances of the specified vlaue exist in the list, the "index" of the first one should be returned. If no instances of the specified value exist in the list, this function should return the special value -1. This function will be passed a function pointer that can be used to determine whether the value to be located matches any of the values stored in the list.

  list_reverse() - Function should reverse a linked list in place, that is whitin the memory of the exisiting list, without allocating new memory.
