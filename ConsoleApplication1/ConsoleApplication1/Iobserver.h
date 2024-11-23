#pragma once
#include "dataplus.h"

namespace WeatherNamespace {
    class Iobserver {
    public:
        virtual void update(const dataplus& d) = 0;
        virtual ~Iobserver() = default;
    };
}

