#pragma once
#include "data.h"

namespace WeatherNamespace {
    class Iobserver {
    public:
        virtual void update(const data& d) = 0;
        virtual ~Iobserver() = default;
    };
}

