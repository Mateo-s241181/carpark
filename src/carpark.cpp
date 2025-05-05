#include "carpark.h"

CarPark::CarPark(std::vector<std::vector<std::string>> const& ids)
{
    //Durch die Parkdecks rangen
    for(auto i = ids.begin(); i < ids.end(); i++){

        Parkdecks.push_back({});

        //Durch die Parkplatz-Ids rangen
        for(auto id_elem : *i){

            Parkdecks[i-ids.begin()].insert(std::pair<std::string, bool>(id_elem, true));
        }
    }
}

bool CarPark::hasId(size_t deck_no, std::string const& id) const
{

   return Parkdecks[deck_no].contains(id);
}

bool CarPark::isOccupied(size_t deck_no, std::string const& id) const
{
    return CarPark::hasId(deck_no, id) ? !Parkdecks[deck_no].find(id)->second : true;
}

bool CarPark::occupy(size_t deck_no, std::string const& id)
{
    if(CarPark::hasId(deck_no, id) && !CarPark::isOccupied(deck_no, id)){
        Parkdecks[deck_no].find(id)->second = false;
        return true;
    }

    return false;
}

bool CarPark::release(size_t deck_no, std::string const& id)
{
    if(CarPark::hasId(deck_no, id) && CarPark::isOccupied(deck_no, id)){
        Parkdecks[deck_no].find(id)->second = true;
        return true;
    }

    return false;
}

size_t CarPark::vacant() const
{
    int sum = 0;

    for(auto deck_el : Parkdecks){

        for(auto pair_el : deck_el){

            if (pair_el.second == true){
                sum++;
            }
        }
    }

    return sum;
}

size_t CarPark::occupied() const
{
    // TODO
    return 0;
}

size_t CarPark::size() const
{   
    int sum = 0;

    for(auto deck_elem : Parkdecks){

        sum += deck_elem.size();
    }

    return sum;
}

int CarPark::parkingFee() const
{
    return CarPark::size() - CarPark::vacant();
}




/*

Neues Projekt erstellen:

    git repo erstellen


*/