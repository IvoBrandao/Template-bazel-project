#include <glog/logging.h>

#include "pkg.hpp"
#include "pkg_internal.hpp"

namespace lib
{

    namespace pkg
    {

        PkgInternal::PkgInternal()
        {
            LOG(INFO) << "Entry PkgInternal::PkgInternal()";

            LOG(INFO) << "Exit PkgInternal::PkgInternal()";
        }

        PkgInternal::~PkgInternal()
        {
            LOG(INFO) << "Entry PkgInternal::~PkgInternal()";


            LOG(INFO) << "Exit PkgInternal::~PkgInternal()";
        }
    } // namespace pkg
} // namespace lib