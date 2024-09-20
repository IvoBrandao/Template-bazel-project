#include <iostream>
#include <glog/logging.h>

#include "pkg.hpp"

// Define the function as [[noreturn]]
[[noreturn]] static void Error_Handler()
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

    // Cast Error_Handler to logging_fail_func_t to match the function signature
    google::InstallFailureFunction(reinterpret_cast<google::logging_fail_func_t>(Error_Handler));

    LOG(INFO) << "Entry main()";
    LOG(INFO) << "StartUp Application";
    // Create an instance of the Pkg class.
    lib::pkg::Pkg pkg;

    LOG(INFO) << "Exit main()";
    return 0;
}
