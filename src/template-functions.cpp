#include <iostream>

using namespace std;

// -------------------------------------------------------
// Name:        Sum
// Description: returns the sum of an array of datatypes
// Arguments:   - p_array: the array
//              - p_count: the number of items in the array
// -------------------------------------------------------
template< class T >
T Sum( T* p_array, int p_count )
{
    T sum = 0;

    for( int index = 0; index < p_count; index++ )
        sum += p_array[index];

    return sum;
}
// function declaration
int SumIntegers( int *, int );
float SumFloats( float *, int );

int main()
{
    int intarray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    float floatarray[9] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 
                            6.6f, 7.7f, 8.8f, 9.9f };
    
    // first sum the two arrays using the non-templated functions.
    cout << "Using SumIntegers, the sum of intarray is: ";
    cout << SumIntegers( intarray, 10 ) << endl;
    cout << "Using SumFloats, the sum of floatarray is: ";
    cout << SumFloats( floatarray, 9 ) << endl;
 
    // now sum the two arrays using the templated function.
    cout << "Using Sum, the sum of intarray is: ";
    cout << Sum( intarray, 10 ) << endl;
    cout << "Using Sum, the sum of floatarray is: ";
    cout << Sum( floatarray, 9 ) << endl;
}

int SumIntegers( int *p_array, int p_count )
{
    // declare the index and the sum variables.
    int sum = 0;

    // loop through the array and add every cell.
    for( int index = 0; index < p_count; index++ )
        sum += p_array[index];

    // return the sum.
    return sum;
}

float SumFloats( float *p_array, int p_count )
{
    float sum = 0;
    for( int index = 0; index < p_count; index++ )
        sum += p_array[index];
    return sum;
}
