// =======================================================
//  Chapter 2, Example 3
//  Using Multiple template parameters
// =======================================================
#include <iostream>

using namespace std;
// -------------------------------------------------------
// Name:        Average
// Description: averages an array of data.
// -------------------------------------------------------
template< class Sumtype, class Averagetype >
Averagetype Average( Sumtype* p_array, Averagetype p_count )
{
    int index;
    Sumtype sum = 0;

    // loop through the array and add all the cells
    for( index = 0; p_count > index; index++ )
        sum += p_array[index];

    // divide the sum by the count and return it.
    return (Averagetype)sum / p_count;
}

int main()
{
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "Average( array, 10 ) = " << Average( array, 10 ) << endl;
    cout << "Average( array, 10.0f ) = " << Average( array, 10.0f ) << endl;
}
