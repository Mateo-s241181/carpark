#include <catch2/catch_test_macros.hpp>

#include "carpark.h"

using namespace std;

TEST_CASE("Konstruktor", "[CarPark]")
{
    vector<string> ids_deck_a { "A01", "A02", "A03" };
    vector<string> ids_deck_b { "B01", "B02", "B03" };
    vector<string> ids_deck_c { "C01", "C02", "C03" };

    CarPark cp({ ids_deck_a, ids_deck_b, ids_deck_c });

    REQUIRE(cp.size() == 9);
}

TEST_CASE("has_id", "[CarPark]")
{
    vector<string> ids_deck_a { "A01", "A02", "A03" };
    vector<string> ids_deck_b { "B01", "B02", "B03" };
    vector<string> ids_deck_c { "C01", "C02", "C03" };

    CarPark cp({ ids_deck_a, ids_deck_b, ids_deck_c });

    REQUIRE(cp.hasId(0, "A01") == true);
    REQUIRE(cp.hasId(1, "B01") == true);
    REQUIRE(cp.hasId(2, "C01") == true);
    REQUIRE(cp.hasId(0, "B01") == false);
}
