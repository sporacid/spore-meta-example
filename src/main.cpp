#include "spore/examples/header.hpp"

#include <iostream>

int main()
{
    using namespace spore;
    using namespace spore::examples;

    key_value_pair<int, std::string> kvp {1, "value"};
    meta::for_each_field<key_value_pair<int, std::string>>([&]<meta_field field_v> {
        std::cout << field_v.name << ": " << field_v.get(kvp) << std::endl;
    });

    return 0;
}
