/*
MULTIDIMENSIONAL ARRAYS

Two main types of multidimensional arrays:
 - Row-major
 - Column-major

Row-major:

In row-major arrays, every element of the first row occurs in contiguous order, 
then every element of the second, and so on.
Every element of row i is given contiguously before every element of row i + 1.

Column-major:

In column-major arrays, every element of column i occurs in contiguous order,
followed by every element of column i + 1, until all columns are completed.


To find an element in a row-major array, apply the following arithmetic:
array_address = beginning of array in memory
element_size = amount of memory allocated to every element in array

array_address + element_size * ((row - 1)*row_length + (column - 1) )

*/

// multidimensional arrays in C++ follow the convention type, array name, indexes, as follows:

double myArray[3][4];

// they can be populated as follows:

double myArray[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}};

// elements can be accessed by applying both indexes

// myArray[1][2] is 6