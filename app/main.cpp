#include <iostream>
#include <glog/logging.h>

#include "pkg.hpp"

static void Error_Handler()
{
    // Reports something...
    LOG(ERROR) << "Something went wrong...";
    exit(1);
}

int main(int argc, char *argv[])
{
    (void)argc;
    // Initialize Google’s logging library.
    google::InitGoogleLogging(argv[0]);
    google::SetStderrLogging(google::INFO);
    google::InstallFailureFunction(&Error_Handler);

    LOG(INFO) << "Entry main()";
    LOG(INFO) << "StartUp Application";
    // Create an instance of the Pkg class.
    lib::pkg::Pkg pkg;

    LOG(INFO) << "Exit main()";
    return 0;
}
