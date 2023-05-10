# Search Algorithms
1. Linear search

Write a function that searches for a value in an array of integers using the Linear search algorithm

Prototype : int linear_search(int *array, size_t size, int value);
Where array is a pointer to the first element of the array to search in
size is the number of elements in array
And value is the value to search for
Your function must return the first index where value is located
If value is not present in array or if array is NULL, your function must return -1

2.  Binary search

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

Prototype : int binary_search(int *array, size_t size, int value);
Where array is a pointer to the first element of the array to search in
size is the number of elements in array
And value is the value to search for
Your function must return the index where value is located
You can assume that array will be sorted in ascending order
You can assume that value won’t appear more than once in array
If value is not present in array or if array is NULL, your function must return -1

3. Big O #0
mandatory
What is the time complexity (worst case) of a linear search in an array of size n?

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x1E-search_algorithms
File: 2-O
  
4. Big O #1
mandatory
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x1E-search_algorithms
File: 3-O
  
5. Big O #2
mandatory
What is the time complexity (worst case) of a binary search in an array of size n?

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x1E-search_algorithms
File: 4-O
  
6. Big O #3
mandatory
What is the space complexity (worst case) of a binary search in an array of size n?

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x1E-search_algorithms
File: 5-O
  
7. Big O #4
mandatory
What is the space complexity of this function / algorithm?

int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x1E-search_algorithms
File: 6-O

Article prepared by: Brian Kipkemboi <briankipkemboi47@gmail.com>