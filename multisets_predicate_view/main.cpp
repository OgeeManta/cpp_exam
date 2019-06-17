#include <iostream>
#include <set>
#include "msetsview.h"
#include <string>
#include <algorithm>
#include "msetsview.h"
#include <functional>

static int n = 1;

void print_ok(bool condition){
    if( condition ){
        std::cout << ::n << ". OK" << std::endl;
    }else{
        std::cout << ::n << ". NOT OK" << std::endl;
    }
    ::n++;
}


class unary_less: public std::unary_function<int, bool>
{

    int i;

public:

    unary_less( int s ): i ( s ) { }

    bool operator()( int x ) const
    {
        return x < i;
    }

};


class starts_with: public std::unary_function<std::string, bool>
{

    char ch;

public:

    starts_with( char c ): ch( c ) { }

    bool operator()( const std::string& s ) const
    {
        return s[ 0 ] == ch;
    }

};


struct is_good_language: std::unary_function<std::string, bool>
{

    bool operator()( const std::string& s ) const
    {
        return "C++" == s || "C" == s;
    }

};


struct string_size_less
{

    bool operator()( const std::string& lhs,
                     const std::string& rhs ) const
    {
        return lhs.size() < rhs.size();
    }

};

const int max = 1000;

int main()
{
    int your_mark = 1;
    // 2-es
    std::multiset<int> mia;
    std::multiset<int> mib;

    for( int i = 0; i < max; ++i )
    {
      if ( 0 == i % 2 )
      {
        mia.insert( i );
      }
      else
      {
        mib.insert( i );
      }
    }

    std::multiset<std::string> msa;
    msa.insert( "Ada" );
    msa.insert( "C++" );
    msa.insert( "Cobol" );
    std::multiset<std::string> msb;
    msb.insert( "C++" );
    msb.insert( "C" );
    msb.insert( "Brainfuck" );

    bool c = ( 1 == mia.size() );
    if ( !c )
    {
      multisets_predicate_view<int, unary_less> vi( mia, mib, unary_less( your_mark ) );
      multisets_predicate_view<std::string, starts_with> vs( msa, msb, starts_with( 'C' ) );

      print_ok(1 == mia.size());
      print_ok(1 == msa.count( "C" ));
      print_ok(2 == msa.count( "C++" ));
      print_ok(2 == msb.size());

      if ( 1 == mia.size() && 1 == msa.count( "C" ) && 2 == msa.count( "C++" ) && 2 == msb.size() )
      {
        c = ( 1 == mib.count( max / 2 ) );
      }
    }

    print_ok(c);
    print_ok(3 == msa.size());
    print_ok(1 == msa.count( "C++" ));
    print_ok(max / 2 == mia.size());

    if ( c && 3 == msa.size() && 1 == msa.count( "C++" ) && max / 2 == mia.size() )
    {
      your_mark = std::count_if( msb.begin(), msb.end(), starts_with( 'C' ) );
    }
    // 3-as

    std::cout << "3-as: " << std::endl;
    if ( c )
    {
      multisets_predicate_view<std::string, is_good_language> vs( msa, msb );
      multisets_predicate_view<int, unary_less> vi( mia, mib, unary_less( your_mark ) );

        print_ok(max == vi.size());
        print_ok(1 == vs.count( "Brainfuck" ));
        print_ok(2 == vs.count( "C++" ));
        print_ok(6 == vs.size());
        print_ok( 1 == vi.count( your_mark ));

      if ( max == vi.size() && 1 == vs.count( "Brainfuck" ) && 2 == vs.count( "C++" ) &&
           6 == vs.size() && 1 == vi.count( your_mark ) )
      {
        your_mark = msa.size();
      }
    }
    // 4-es
    std::cout << "4-es: " << std::endl;
    std::multiset<std::string> a;
    std::multiset<std::string, string_size_less> b;

    a.insert( "C++" );
    a.insert( "Cobol" );
    b.insert( "Fortran" );
    b.insert( "Prolog" );

    std::multiset<int, std::greater<int> > s;
    std::multiset<int> t;
    s.insert( 6 );
    t.insert( 1 );

    if ( c )
    {
      multisets_predicate_view<std::string, is_good_language, std::less<std::string>, string_size_less> vs( a, b );

      multisets_predicate_view<int, unary_less, std::greater<int> > vi( s, t, unary_less( 4 ) );

      print_ok(3==b.size());
      print_ok(0 == a.count( "Cobol" ));
      print_ok(1 == b.count( "Haskell" ));
      print_ok(1 == s.count( 1 ));

      if ( 3 == b.size() && 0 == a.count( "Cobol" ) && 1 == b.count( "Haskell" ) && 1 == s.count( 1 ) )
      {
        your_mark = vs.size();
      }
    }
    // 5-os
    std::cout << "5-os: " << std::endl;
    if ( c )
    {
      multisets_predicate_view<std::string, is_good_language, std::less<std::string>, string_size_less> vs( a, b );
      multisets_predicate_view<std::string, is_good_language, std::less<std::string>, string_size_less>::const_iterator it =
        std::find( vs.begin(), vs.end(), "Prolog" );
      multisets_predicate_view<std::string, is_good_language, std::less<std::string>, string_size_less>::const_iterator nit =
        std::find( vs.begin(), vs.end(), "Pascal" );

      print_ok("Prolog" == *it);
      print_ok(nit == vs.end());

      if ( "Prolog" == *it && nit == vs.end() )
      {
        your_mark = std::count_if( vs.begin(), vs.end(), starts_with( 'C' ) ) + vs.begin()->size();
      }
    }
    std::cout << "Your mark is " << your_mark;
    std::endl( std::cout );
}