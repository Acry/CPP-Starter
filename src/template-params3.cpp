// =======================================================
//  Chapter 2, Example 5
//  Using values of template parameters.
// =======================================================
#include <iostream>

using namespace std;


// -------------------------------------------------------
// Name:        Array
// Description: A simple static array class
// -------------------------------------------------------
template< class Datatype, int size, Datatype zero >
class Array
{
    public:

        // set function, sets an index
        void Set( Datatype p_item, int p_index )
        {
            m_array[p_index] = p_item;
        }

        // get function, gets an index
        Datatype Get( int p_index )
        {
            return m_array[p_index];
        }


        void Clear( int p_index )
        {
            m_array[p_index] = zero;
        }

        
    private:

        // the array.
        Datatype m_array[size];
};


void main()
{
    Array< int, 5, 0 > array1;
    Array< int, 10, 42 > array2;
    Array< float, 5, 0.5f > array3;

    array1.Clear( 0 );
    array2.Clear( 0 );
    array3.Clear( 0 );

    cout << "array1.Get( 0 ) = " << array1.Get( 0 ) << endl;
    cout << "array2.Get( 0 ) = " << array2.Get( 0 ) << endl;
    cout << "array3.Get( 0 ) = " << array3.Get( 0 ) << endl;
}
