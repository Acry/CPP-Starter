// =======================================================
//  Chapter 2, Example 4
//  Using Values as template parameters
// =======================================================
#include <iostream>

using namespace std;
// -------------------------------------------------------
// Name:        Array
// Description: A simple static array class
// -------------------------------------------------------
template< class Datatype, int size >
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

    private:
        // the array.
        Datatype m_array[size];
};


int main()
{
    Array<int, 5> i_array5;
    Array<int, 10> i_array10;
    Array<float, 15> f_array15;

    // set various indexes in the arrays
    i_array5.Set( 10, 0 );
    i_array5.Set( 3, 1 );
    i_array10.Set( 11, 9 );
    i_array10.Set( 2, 4 );
    f_array15.Set( 10.1f, 3 );
    f_array15.Set( 3.1415f, 14 );

    // retrieve the indexes again.
    cout << "i_array5.Get( 0 ) = " << i_array5.Get( 0 ) << endl;
    cout << "i_array5.Get( 1 ) = " << i_array5.Get( 1 ) << endl;
    cout << "i_array10.Get( 9 ) = " << i_array10.Get( 9 ) << endl;
    cout << "i_array10.Get( 4 ) = " << i_array10.Get( 4 ) << endl;
    cout << "f_array15.Get( 3 ) = " << f_array15.Get( 3 ) << endl;
    cout << "f_array15.Get( 14 ) = " << f_array15.Get( 14 ) << endl;
}
