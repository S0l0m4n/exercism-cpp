/**
 * Doctor data exercise
 */

#pragma once

#include <string>

namespace star_map {

    enum class System {
        AlphaCentauri,
        BetaHydri,
        DeltaEridani,
        EpsilonEridani,
        Omicron2Eridani,
        Sol,
    };

}

namespace heaven {

    class Vessel {
    private:
        std::string name {};
    public:
        int generation {1};
        star_map::System current_system {star_map::System::Sol};
        int busters {0};

    public:
        Vessel(std::string name, int number) : name {name}, generation {number} {};
        Vessel(std::string name, int number, star_map::System star)
            : name {name}, generation {number}, current_system {star} {};
        Vessel replicate(std::string name);

        void make_buster();
        bool shoot_buster();

        std::string get_name() {return name;}
    };

    std::string get_older_bob(Vessel v1, Vessel v2);
    bool in_the_same_system(Vessel v1, Vessel v2);
}
