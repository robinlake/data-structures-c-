/*
An array has several characteristics. It:
 - is contained in a contiguous area of memory
 - consists of equal-size elements
 - the elements are indexed by contiguous integers 

Features of Arrays:

Arrays have constant time (O(1)) access to read any element
Arrays have constant time (O(1)) access to write to any element
Arrays require linear time (O(n)) to add or remove an element at the beginning,
as all elements will need to be moved over one position
Arrays require constant time (O(1)) to add or remove an element at the end

How to find element i:

Look for area in memory given by following formula:

array_addr + elem_size * (i - first_index)


*/

/*
Arrays in C++
*/

// an array in C++ is declared using the notation type, name, number of elements, as follows:

double mattress[10];

// this will create an array with ten elements of type double.

// arrays can be initially populated as follows:

double mattress[5] = {10.0, 5.3, 3.3, 3.2, 6.4};

// if no number of elements is given, the array will be exactly the size of the number of elements given

double mattress[] = {10.0, 5.3, 3.3, 3.2, 6.4};
