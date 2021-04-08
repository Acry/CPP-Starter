// =======================================================
//  Chapter 2, Example 2
//  Summing an array of numbers using template classes
// =======================================================
#include <iostream>
using namespace std;

// -------------------------------------------------------
// Name:        IntAdder
// Description: maintains the sum of a collection of ints
// -------------------------------------------------------
class IntAdder
{
public:

    // constructor
    IntAdder()
    {
        // set the sum to 0.
        m_sum = 0;
    }

    // add function
    void Add( int p_number )
    {
        m_sum += p_number;
    }

    // get sum function.
    int Sum()
    {
        return m_sum;
    }

private:

    // sum variable.
    int m_sum;
};



// -------------------------------------------------------
// Name:        FloatAdder
// Description: maintains the sum of a collection of floats
// -------------------------------------------------------
class FloatAdder
{
public:

    // constructor
    FloatAdder()
    {
        m_sum = 0.0f;
    }

    // add function
    void Add( float p_number )
    {
        m_sum += p_number;
    }

    // get sum function.
    float Sum()
    {
        return m_sum;
    }

private:

    // sum variable.
    float m_sum;
};



// -------------------------------------------------------
// Name:        Adder
// Description: maintains the sum of a collection of data
// -------------------------------------------------------
template< class T >
class Adder
{
public:

    // constructor
    Adder()
    {
        m_sum = 0;
    }

    // add function
    void Add( T p_number )
    {
        m_sum += p_number;
    }

    // get sum function.
    T Sum()
    {
        return m_sum;
    }

private:

    // sum variable.
    T m_sum;
};



int main()
{
    IntAdder iadder1;
    Adder<int> iadder2;
    FloatAdder fadder1;
    Adder<float> fadder2;
    int i;
    float f;
    
    for( i = 0, f = 0.0f; i < 10; i++, f += 1.1f )
    {
        iadder1.Add( i );
        iadder2.Add( i );
        fadder1.Add( f );
        fadder2.Add( f );
    }
    
    cout << "The integer sum using an IntAdder: " << iadder1.Sum() << endl;
    cout << "The integer sum using an Adder: " << iadder2.Sum() << endl;
    cout << "The float sum using a FloatAdder: " << fadder1.Sum() << endl;
    cout << "The float sum using an Adder: " << fadder2.Sum() << endl;
}
