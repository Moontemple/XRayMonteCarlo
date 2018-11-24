//
// Created by ktulhu on 24/11/2018.
//

#ifndef XRAYMONTECARLO_PLOTTING_H
#define XRAYMONTECARLO_PLOTTING_H

#include <string>
#include <memory>
#include "FileParse.h"

namespace grph {
    void plot_file(const std::string &path, const std::string &save_path);

    void plot_data(FileData* fd, const std::string &save_pate);

    void plot_data(FileData* fd,    const std::string &title,
                                    const std::string &save_pate);

    void plot_data(FileData *fd,    const std::string &title,
                                    const std::string &xlabel,
                                    const std::string &ylabel,
                                    const std::string &save_pate);
};

#endif //XRAYMONTECARLO_PLOTTING_H