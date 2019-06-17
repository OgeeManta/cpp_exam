#include <iostream>
#include "mapalign.h"
#include <string>
#include <algorithm>
#include <map>
#include "mapalign.h"

struct string_size_less
{

    bool operator()( const std::string& a,
                     const std::string& b ) const
    {
        return a.size() < b.size();
    }

};

const int max = 1000;

int main()
{
    int your_mark = 1;
//2-es
    std::map<std::string, int> sma;
    std::map<std::string, int> smb;
    std::map<std::string, int> smc;

    map_aligner<std::string, int> sa;
    sa.add( sma );
    sa.add( smb );
    sa.add( smc );

    sma[ "C++" ] = 1;
    smb[ "Ada" ] = 2;
    smc[ "C" ] = 3;
    smc[ "Python" ] = 4;
    smc[ "Ada"] = 5;

    sa.align();

    std::map<int, double> ima;
    std::map<int, double> imb;
    for( int i = 0; i < max; ++i )
    {
      if ( 0 == i % 2 )
      {
        ima[ i ] = max - i;
      }
      else
      {
        imb[ i ] = max;
      }
    }

    map_aligner<int, double> ia;
    ia.add( ima );
    ia.add( imb );

    ia.align();

    if(4 == sma.size()){
        std::cout << "1. OK" << std::endl;
    }else{
        std::cout << "1. NOT OK"<< std::endl;
    }
    if(1 == imb.count( 0 )){
        std::cout << "2. OK" << std::endl;
    }else{
        std::cout << "2. NOT OK" << std::endl;
    }
    if(1 == smc.count( "C++" )){
        std::cout << "3. OK" << std::endl;
    }else{
        std::cout << "3. NOT OK" << std::endl;
    };
    if("Ada" == sma.begin()->first){
        std::cout << "4. OK" << std::endl;
    }else{
        std::cout << "4. NOT OK" << std::endl;
    }
    if(0 == sma.begin()->second){
        std::cout << "5. OK" << std::endl;
    }else{
        std::cout << "5. NOT OK" << std::endl;
    }
    if(4 == smc.size()){
        std::cout << "6. OK" << std::endl;
    }else{
        std::cout << "6. NOT OK" << std::endl;
    }
    if(1 == smb.count( "Python" )){
        std::cout << "7. OK" << std::endl;
    }else{
        std::cout << "7. NOT OK" << std::endl;
    }
    if(0 == imb.begin()->first){
        std::cout << "8. OK" << std::endl;
    }else{
        std::cout << "8. NOT OK" << std::endl;
    }
    if(0.8 > imb.begin()->second){
        std::cout << "9. OK" << std::endl;
    }else{
        std::cout << "9. NOT OK" << std::endl;
    }
    if(1 == imb.count( max / 2 )){
        std::cout << "10. OK" << std::endl;
    }else{
        std::cout << "10. NOT OK" << std::endl;
    }

    if ( 4 == sma.size() && 1 == imb.count( 0 ) && max * 1U == ima.size() &&
         1 == smc.count( "C++" ) && "Ada" == sma.begin()->first &&
         0 == sma.begin()->second &&  4 == smc.size() &&
         1 == smb.count( "Python" ) && 0 == imb.begin()->first &&
         0.8 > imb.begin()->second && 1 == imb.count( max / 2 ) )
    {
      your_mark = smc[ "C" ] - sma[ "C++" ];
    }
//3-as
    sma[ "Pascal" ] = 5;
    sa.set_filler( max );
    sa.align();

    std::map<std::string, std::string> langsa;
    langsa[ "C++" ] = "<3";
    langsa[ "Python" ] = ":|";
    std::map<std::string, std::string> langsb;
    langsb[ "Brainfuck" ] = ":S";
    langsb[ "Python" ] = ":/";
    langsb[ "C" ] = ":)";

    map_aligner<std::string, std::string> lsa;
    lsa.add( langsa );
    lsa.add( langsb );

    lsa.align();
    lsa.erase( "Python" );

    if ( 0 == langsa.count( "Python" ) && max == smc[ "Pascal" ] &&
         langsa.begin()->second.empty() && max == smb[ "Pascal" ] &&
         your_mark * 1U == langsb.begin()->second.size() &&
         0 == langsb.count( "Python" ) && 1 == langsb.count( "C++" ) )
    {
      your_mark = langsa.size();
    }

    //4-es
    std::map<std::string, std::string, string_size_less> lma;
    std::map<std::string, std::string, string_size_less> lmb;
    std::map<std::string, std::string, string_size_less> lmc;

    lma[ "C++" ] = ":D";
    lmb[ "Eiffel" ] = ":P";
    lmc[ "C" ] = "8-)";
    lmc[ "Ada" ] = "!";

    map_aligner<std::string, std::string, string_size_less> ls;
    ls.add( lma );
    (ls += lmb) += lmc;

    ls.align();

    if ( your_mark == ls.count() && 1 == lmc.count( "Ada" ) &&
         your_mark * 1U == lmb.size() && 1 == lma.count( "Python" ) &&
         2 == lsa.count() && 2 == ia.count() )
    {
      your_mark = lma[ "SQL" ].size() + lmb.count( "TeX" ) + lmc.count( "Tcl" );
    }


    //5-os


    langsa[ "Python" ] = ":|";
    langsb[ "Python" ] = ":/";
    lsa.erase( ":/" );
    ia.erase( max );
    ls.erase( ":P" );

    if(0 == langsa.count( "Python" )){
        std::cout << "11. OK" << std::endl;
    }else{
        std::cout << "11. NOT OK" << std::endl;
    }
    if(0 == langsb.count( "Python" )){
        std::cout << "12. OK" << std::endl;
    }else{
        std::cout << "12. NOT OK" << std::endl;
    }
    if(max * 1U == imb.size()){
        std::cout << "13. OK" << std::endl;
    }else{
        std::cout << "13. NOT OK" << std::endl;
    }
    if( max * 1U == ima.size()){
        std::cout << "14. OK" << std::endl;
    }else{
        std::cout << "14. NOT OK" << std::endl;
    }
    if( 0 == lmb.count( "Python" )){
        std::cout << "15. OK" << std::endl;
    }else{
        std::cout << "15. NOT OK" << std::endl;
    }

    if ( 0 == langsa.count( "Python" ) && 0 == langsb.count( "Python" ) &&
         max * 1U == imb.size() && max * 1U == ima.size() && 0 == lmb.count( "Python" ) )
    {
      your_mark = ls.count() + lma["C++"].size();
    }


    std::cout << "Your mark is " << your_mark;
    std::endl( std::cout );
}