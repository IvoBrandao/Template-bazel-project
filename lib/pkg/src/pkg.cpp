#include <glog/logging.h>

#include "pkg.hpp"
#include "pkg_internal.hpp"

namespace lib
{

    namespace pkg
    {

        Pkg::Pkg()
        {
            LOG(INFO) << "Entry Pkg::Pkg()";

            LOG(INFO) << "Exit Pkg::Pkg()";
        }

        Pkg::~Pkg()
        {
            LOG(INFO) << "Entry Pkg::~Pkg()";

            LOG(INFO) << "Exit Pkg::~Pkg()";
        }
    } // namespace pkg
} // namespace lib