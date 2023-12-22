#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>
#include <unordered_set>

using std::string;
using std::unordered_set;

namespace allergies {
    class allergy_test {
        public:
            allergy_test(int score_value);
            bool is_allergic_to(string allergy_name);
            unordered_set<string> get_allergies();

        private:
            int score;
            unordered_set<string> allergy_set;
    };
}  // namespace allergies

#endif // ALLERGIES_H
