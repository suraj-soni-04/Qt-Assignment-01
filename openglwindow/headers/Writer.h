#pragma once
#include <string>
#include <vector>
#include "Triangulation.h"

    class Writer
    {
    public:
        // Function to write geometry data to an STL file
        vector<double> write(Triangulation& triangulationObj);
    };
