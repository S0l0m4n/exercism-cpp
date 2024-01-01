/**
 * Doctor data exercise
 */

#include "doctor_data.h"

using heaven::Vessel;
using star_map::System;

Vessel Vessel::replicate(std::string name) {
    Vessel another {name, this->generation + 1, this->current_system};
    return another;
}

void Vessel::make_buster() {
    this->busters++;
}

bool Vessel::shoot_buster() {
    bool ret = false;

    if (this->busters > 0) {
        this->busters--;
        ret = true;
    }

    return ret;
}

std::string heaven::get_older_bob(Vessel v1, Vessel v2) {
    if (v1.generation < v2.generation)
        return v1.get_name();
    else
        return v2.get_name();
}

bool heaven::in_the_same_system(Vessel v1, Vessel v2) {
    return v1.current_system == v2.current_system;
}
