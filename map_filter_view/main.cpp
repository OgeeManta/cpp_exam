#include <iostream>
#include <map>
#include <string>
#include "map_filt.h"
#include <algorithm>
#include "map_filt.h"
#include <numeric>

struct string_size_less: std::binary_function<std::string, std::string, bool>
{

    bool operator()( const std::string& lhs, const std::string& rhs ) const
    {
        return lhs.size() < rhs.size();
    }

};

struct lang_pred: std::unary_function<std::pair<std::string, std::string>, bool>
{

bool operator()( const std::pair<std::string, std::string>& p ) const
{
    return "Cobol" == p.first || ":-(" == p.second;
}

};

const int max = 1000;

struct maxpred: std::unary_function<std::pair<int, int>, bool>
{

bool operator()( const std::pair<int, int>& p ) const
{
    return max / 2 > p.first || max / 2 < p.second;
}

};

int main()
{
    int your_mark = 1;
    std::map<int, int> id;
    map_filter_view<int, int, maxpred> fid( id );

    for( int i = 0; i < max; ++i )
    {
        id[ i ] = i;
    }

    std::map<std::string, std::string> langs;
    const map_filter_view<std::string, std::string, lang_pred> flangs( langs );

    langs[ "C++" ] = "<3";
    langs[ "Haskell" ] = ":-o";
    langs[ "Cobol" ] = ":-S";
    langs[ "PHP" ] = ":-(";

    if(1 == fid.size()){
        std::cout << "1. OK" << std::endl;
    }else{
        std::cout << "1. NOT OK"<< std::endl;
    }
    if(0 == flangs.count( "PHP" )){
        std::cout << "2. OK" << std::endl;
    }else{
        std::cout << "2. NOT OK" << std::endl;
    }
    if(0 == fid.count( 2 )){
        std::cout << "3. OK" << std::endl;
    }else{
        std::cout << "3. NOT OK" << std::endl;
    };
    if(1 == fid.count( max / 2 )){
        std::cout << "4. OK" << std::endl;
    }else{
        std::cout << "4. NOT OK" << std::endl;
    }
    if(0 == fid.count( max - 1 )){
        std::cout << "5. OK" << std::endl;
    }else{
        std::cout << "5. NOT OK" << std::endl;
    }
    if(0 == flangs.count( "D" )){
        std::cout << "6. OK" << std::endl;
    }else{
        std::cout << "6. NOT OK" << std::endl;
    }

    if ( 1 == fid.size() && 0 == flangs.count( "PHP" ) && 0 == fid.count( 2 ) &&
         1 == fid.count( max / 2 ) && 0 == fid.count( max - 1 ) && 0 == flangs.count( "D" ) )
    {
        your_mark = flangs.size();
    }
//3-as
std::cout << "3-as" << std::endl;

    if ( fid.count( max / 2 ) != 0 )
    {
      id[ max / 2 ]++;
    }

    if("<3" == flangs[ "C++" ]){
        std::cout << "7. OK" << std::endl;
    }else{
        std::cout << "7. NOT OK" << std::endl;
    }
    if(max / 2 + 1 == id[ max / 2 ]){
        std::cout << "8. OK" << std::endl;
    }else{
        std::cout << "8. NOT OK" << std::endl;
    }
    if(0 == fid.size()){
        std::cout << "9. OK" << std::endl;
    }else{
        std::cout << "9. NOT OK" << std::endl;
    }

    if ( "<3" == flangs[ "C++" ] && max / 2 + 1 == id[ max / 2 ] && 0 == fid.size() )
    {
      your_mark = flangs[ "Haskell" ].size();
    }
/*
    std::map<std::string, std::string, string_size_less> lc;
    map_filter_view<std::string, std::string, lang_pred, string_size_less> flc( lc );

    lc[ "C++" ] = ":-)";
    lc[ "Forth" ] = ":-S";

    std::cout << flc.count("Clean");

    if ( 1 == flc.count( "Clean" ) )
    {
      flc[ "Clean" ] = ":-o";
    }

    if ( ":-o" == lc[ "C++++" ] && 1 == flc.count( "SQL" ) )
    {
      your_mark = flc.size() + lc.size();
    }
    */
    /* 5-os
    id[ max / 2 ] = max / 2;
    map_filter_view<int, int, maxpred>::iterator i = fid.begin();

    map_filter_view<std::string, std::string, lang_pred, string_size_less>::iterator n = flc.begin();
    ++n;

    if ( max / 2 == i->first && 2 == std::distance( flc.begin(), flc.end() ) &&
         0 == std::count_if( flc.begin(), flc.end(), lang_pred() ) )
    {
      your_mark = n->first.size();
    }
    */
    std::cout << "Your mark is " << your_mark;
    std::endl( std::cout );
}