#include <iostream>
#include <numeric>
#include "ifvec.h"
#include <vector>
#include <algorithm>
#include "ifvec.h"
#include <string>
#include <functional>

struct is_even: std::unary_function<unsigned int, bool>
{

    bool operator()( unsigned int i ) const
    {
        return 0 == i % 2;
    }

};


struct weird_index: std::unary_function<unsigned int, bool>
{

    bool operator()( unsigned int i ) const
    {
        return 13 == i;
    }

};

const int max = 1000;

int main()
{
//2-es
    int your_mark = 1;
    std::vector<int> a;
    a.push_back( 7 );
    a.push_back( 2 );
    a.push_back( 4 );
    index_filtering_vector<int, is_even> fa( a );

    std::vector<int> b;
    b.reserve( max );
    for( int i = 0; i < max; ++i )
    {
      b.push_back( i );
    }

    std::vector<int> c = b;

    index_filtering_vector<int, weird_index> fb( b );
    index_filtering_vector<int, weird_index> fc( c );
    fc.set_off();

    std::vector<std::string> d;
    d.push_back( "Hello" );
    d.push_back( "World" );
    const index_filtering_vector<std::string, is_even> fd( d );

    if ( fd.at( 0 ) == d[ 1 ] && fc.at( max / 2 ) != fb.at( max / 2 ) &&
         fc.at( max - 1 ) == c[ max - 1 ] && 0 == fb.at( 0 ) &&
         max - 1 == fb.at( max - 2 ) )
    {
      your_mark = fa.at( 0 );
    }
//3-as
    fc.set_on();
    fb.set_off();

    fa[ 0 ] = 3;

    index_filtering_vector<std::string, is_even> mfd( d );
    mfd[ 0 ] += "!";

    if ( max - 1 == fc.size() && max * 1U == fb.size() && 1 == fd.size() &&
         6 == d[ 1 ].size() && max / 2 != fc[ max / 2 ] )
    {
      your_mark = a[ 1 ];
    }
//4-es
    std::vector<bool> e;
    e.push_back( true );
    e.push_back( false );
    e.push_back( true );
    index_filtering_vector<bool, is_even> fe( e );
    e[ 0 ] = true;
    !fe;
    e[ 0 ] = false;

    !fa;

    if ( 2 == fe.size() && 2 == fa.size() )
    {
      your_mark = fa[ 1 ];
    }
//5-os
    mfd.set_off();

    index_filtering_vector<int, is_even>::iterator i =
      std::find( fa.begin(), fa.end(), 7 );

    for(auto c = fa.begin();c  != fa.end();c++ ){
        std::cout << *c;
    }

    if ( i != fa.end() )
    {
      *i = 1;
      ++i;
    }

    //std::cout << *i;

    if ( ( max * ( max - 1 ) ) / 2  == std::accumulate( fb.begin(), fb.end(), 0 ) &&
         1 == a[ 0 ] && 4 == *i )
    {
      your_mark = mfd.begin()->size();
    }
    std::cout << "Your mark is " << your_mark;
    std::endl( std::cout );
}