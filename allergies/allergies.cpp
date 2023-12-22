/**
 * Given a person's allergy score, determine whether or not they're allergic to
 * a specific allergy and their full list of allergies.
 */

#include "allergies.h"

namespace allergies {
    string allergy_names[] {
        "eggs",
        "peanuts",
        "shellfish",
        "strawberries",
        "tomatoes",
        "chocolate",
        "pollen",
        "cats"
    };

    auto allergy_names_size = end(allergy_names) - begin(allergy_names);

    allergy_test::allergy_test(int score_value) {
        score = score_value;
    }

    bool allergy_test::is_allergic_to(string allergy_name) {
        for (auto i = 0; i < allergy_names_size; i++) {
            if (allergy_name == allergy_names[i])
                return score & (1 << i);
        }
        return false;
    }

    unordered_set<string> allergy_test::get_allergies() {
        unordered_set<string> allergy_set { };
        for (auto name : allergy_names) {
            if (is_allergic_to(name))
                allergy_set.emplace(name);
        }
        return allergy_set;
    }
}  // namespace allergies
