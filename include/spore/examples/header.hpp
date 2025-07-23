#pragma once

#include "spore/meta.hpp"

#include SPORE_META_GENERATED("spore/examples/header.meta.hpp")

namespace spore::examples
{
    template <typename key_t, typename value_t>
    struct SPORE_META_TYPE() key_value_pair
    {
        SPORE_META_FIELD()
        key_t key;

        SPORE_META_FIELD()
        value_t value;
    };
}

#include SPORE_META_GENERATED("spore/examples/header.meta.inl")