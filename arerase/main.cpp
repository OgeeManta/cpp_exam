#include <iostream>
#include <numeric>
#include <algorithm>
#include <string>
#include "arerase.h"

struct is_even: std::unary_function<int, bool>
{

    bool operator()( int x ) const
    {
        return 0 == x % 2;
    }

};

struct too_long: std::unary_function<std::string, bool>
{

    bool operator()( const std::string& s ) const
    {
        return s.length() > 4;
    }

};

const int max = 1000;

int main()
{
    int your_mark = 1;
//2-es
    std::string langs[] = { "C++", "Haskell", "Ada", "Python", "Ada" };
    array_eraser<std::string> le( langs, sizeof( langs ) / sizeof( langs[ 0 ] ) );

    le.erase( "Ada" );

    int d[] = { 7, 4 };
    const array_eraser<int> cd( d, sizeof( d ) / sizeof( d[ 0 ] ) );

    int a[ max ];
    for( int i = 0; i < max; ++i )
    {
      a[ i ] = 0 == i % 2 ? max / 2 : i;
    }

    array_eraser<int> ae( a, max );
    ae.erase( max / 2 );


    int x[] = { 3, 2, 3, 3, 2 };
    array_eraser<int> xe( x, sizeof( x ) / sizeof( x[ 0 ] ) );

    xe.erase( 2 );
    xe.erase( 3 );
    if(3 == le.size()){
        std::cout << "1. OK" << std::endl;
    }else{
        std::cout << "1. NOT OK"<< std::endl;
    }
    if(langs[ 3 ] == langs[ 4 ]){
        std::cout << "2. OK" << std::endl;
    }else{
        std::cout << "2. NOT OK" << std::endl;
    }
    if("Python" == langs[ 2 ]){
        std::cout << "3. OK" << std::endl;
    }else{
        std::cout << "3. NOT OK" << std::endl;
    };
    if(max / 2 == ae.size()){
        std::cout << "4. OK" << std::endl;
    }else{
        std::cout << "4. NOT OK" << std::endl;
    }
    if(0 == xe.size()){
        std::cout << "5. OK" << std::endl;
    }else{
        std::cout << "5. NOT OK" << std::endl;
    }
    if(max / 2 == a[ max - 1 ]){
        std::cout << "6. OK" << std::endl;
    }else{
        std::cout << "6. NOT OK" << std::endl;
    }
    if(3 == a[ 1 ]){
        std::cout << "7. OK" << std::endl;
    }else{
        std::cout << "7. NOT OK" << std::endl;
    }
    if(std::count( x, x + sizeof( x ) / sizeof( x[ 0 ] ), 3 )){
        std::cout << "8. OK" << std::endl;
    }else{
        std::cout << "8. NOT OK" << std::endl;
    }

    if ( 3 == le.size() && langs[ 3 ] == langs[ 4 ]  && "Python" == langs[ 2 ] &&
         max / 2 == ae.size() && 0 == xe.size() && max / 2 == a[ max - 1 ] &&
         3 == a[ 1 ] && 3 == std::count( x, x + sizeof( x ) / sizeof( x[ 0 ] ), 3 ) )
    {
      your_mark = cd.size();
    }

//3-as
std::cout << "3-as: " << std::endl;
    le.erase_index( 1 );
    ae.erase_index( 0 );

    if("Python" == langs[ 1 ]){
        std::cout << "9. OK" << std::endl;
    }else{
        std::cout << "9. NOT OK"<< std::endl;
    }
    if(2 == le.size()){
        std::cout << "10. OK" << std::endl;
    }else{
        std::cout << "10. NOT OK" << std::endl;
    }
    if(1 == cd.count( 7 )){
        std::cout << "11. OK" << std::endl;
    }else{
        std::cout << "11. NOT OK" << std::endl;
    };
    if(1 == std::count( langs, langs + sizeof( langs ) / sizeof( langs[ 0 ] ), "Haskell")){
        std::cout << "12. OK" << std::endl;
    }else{
        std::cout << "12. NOT OK" << std::endl;
    }
    if(0 == le.count( "Haskell" )){
        std::cout << "13. OK" << std::endl;
    }else{
        std::cout << "14. NOT OK" << std::endl;
    }
    if(0 == ae.count( 1 )){
        std::cout << "15. OK" << std::endl;
    }else{
        std::cout << "15. NOT OK" << std::endl;
    }
    if(1 == ae.count( 5 )){
        std::cout << "16. OK" << std::endl;
    }else{
        std::cout << "16. NOT OK" << std::endl;
    }
    if(0 == le.count( "Ada")){
        std::cout << "17. OK" << std::endl;
    }else{
        std::cout << "17. NOT OK" << std::endl;
    }
    if(ae.count( max / 2 ) == 0){
        std::cout << "18. OK" << std::endl;
    }else{
        std::cout << "18. NOT OK" << std::endl;
    }

    if ( "Python" == langs[ 1 ] && 2 == le.size() && 1 == cd.count( 7 ) &&
         1 == std::count( langs, langs + sizeof( langs ) / sizeof( langs[ 0 ] ), "Haskell" ) &&
         0 == le.count( "Haskell" ) && 0 == ae.count( 1 ) && 1 == ae.count( 5 ) &&
         0 == le.count( "Ada") && 0 == ae.count( max / 2 ) )
    {
      your_mark = a[ 0 ];
    }
//4-es
std::cout << "4-es: " << std::endl;
    int s[] = { 3, 1, 2 };
    array_eraser<int> se( s, sizeof( s ) / sizeof( s[ 0 ] ) );
    se.erase_index( 2 );

    array_eraser<std::string>::iterator i =
      std::find( le.begin(), le.end(), "C++" );


    if(0 == std::count( se.begin(), se.end(), 2 )){
        std::cout << "19. OK" << std::endl;
    }else{
        std::cout << "19. NOT OK" << std::endl;
    }
    if(i != le.end()){
        std::cout << "20. OK" << std::endl;
    }else{
        std::cout << "20. NOT OK" << std::endl;
    }


    if ( 0 == std::count( se.begin(), se.end(), 2 ) &&
         i != le.end() )
    {
      your_mark = std::accumulate( se.begin(), se.end(), 0 );
    }

//5-os
    std::cout << "5-os: " << std::endl;
    int t[] = { 7, 8, 1, 2 };
    std::string ls[] = { "C", "C++", "Forth", "Cobol" };

    array_eraser<std::string> lse( ls );
    lse.erase_if( too_long() );
    lse.erase_index( 0 );

    array_eraser<int> te( t );
    te.erase_if( is_even() );

    ae.erase_if( is_even() );

    if("C++" == ls[ 0 ]){
        std::cout << "21. OK" << std::endl;
    }else{
        std::cout << "21. NOT OK" << std::endl;
    }
    if(0 == lse.count( "Cobol" )){
        std::cout << "22. OK" << std::endl;
    }else{
        std::cout << "22. NOT OK" << std::endl;
    }
    if(1 ==lse.size()){
        std::cout << "22. OK" << std::endl;
    }else{
        std::cout << "22. NOT OK" << std::endl;
    }

    if ( "C++" == ls[ 0 ] && 0 == lse.count( "Cobol" ) &&
         1 ==lse.size() )
    {
      your_mark = t[ 0 ] - te.size();
    }

    std::cout << "Your mark is " << your_mark;
    std::endl( std::cout );

}