#ifndef STATISTICS_H
#define STATISTICS_H

#include "Scene.h"
#include <cstddef>

struct ProductionStats {
    std::size_t total = 0;
    std::size_t pending = 0;
    std::size_t scheduled = 0;
    std::size_t filmed = 0;
    double completionPercentage = 0.0;
};

class Statistics {
public:
    static ProductionStats calculate(
        Scene* const scenes[],
        std::size_t count
    );

    static void displayStatistics(
        const ProductionStats& stats
    );
};

#endif
