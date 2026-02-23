#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/where.hpp"
#include <string>
using namespace std;



TEST_CASE( "Searches the characters")
{
    StringObj search;
    string text = "The quick brown fox";

    REQUIRE( search.find( text, 'e' )  == 2 );
    REQUIRE( search.find( text, ' ' ) == 3 );

}

TEST_CASE( "Finds the string" )
{

    StringObj search;

    string text = "The quick brown fox";
    string e = "e";
    string quick = "quick";
    string quiet = "quiet";

    REQUIRE( search.find( text, e ) == 2 );
    REQUIRE( search.find( text, quick ) == 4);
    REQUIRE( search.find( text, quiet ) == -1 );

}

