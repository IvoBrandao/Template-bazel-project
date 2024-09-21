load("@bazel_rules_cc//cc:defs.bzl", "cc_toolchain")

cc_toolchain(
    name = "macos_arm64_toolchain",
    toolchain_identifier = "macos_arm64",
    cpp_compiler = "@bazel_tools//tools/cpp:clang",
    linker = "@bazel_tools//tools/cpp:ld",
    cpp_include_directories = [
        "/usr/local/include",
        "/usr/include",
    ],
    lib_directory = "/usr/local/lib",
    compiler_flag = [
        "-std=c++11",
        "-arch", "arm64",
    ],
    cpu = "arm64",
    cpu_name = "arm64-apple-darwin",
    toolchain_outputs = {
        "static_library": "lib${target}.a",
        "shared_library": "lib${target}.dylib",
    },
)

register_toolchains(":macos_arm64_toolchain")

cc_toolchain(
    name = "ubuntu_x86_64_toolchain",
    toolchain_identifier = "ubuntu_x86_64",
    cpp_compiler = "@bazel_tools//tools/cpp:clang",
    linker = "@bazel_tools//tools/cpp:ld",
    cpp_include_directories = [
        "/usr/local/include",
        "/usr/include",
    ],
    lib_directory = "/usr/local/lib",
    compiler_flag = [
        "-std=c++11",
        "-m64", 
    ],
    cpu = "x86_64",
    cpu_name = "x86_64-linux-gnu",
    toolchain_outputs = {
        "static_library": "lib${target}.a",
        "shared_library": "lib${target}.so",
    },
)

register_toolchains(":ubuntu_x86_64_toolchain")

cc_toolchain(
    name = "windows_x86_64_toolchain",
    toolchain_identifier = "windows_x86_64",
    cpp_compiler = "@bazel_tools//tools/cpp:clang",
    linker = "@bazel_tools//tools/cpp:ld",
    cpp_include_directories = [
        "C:/local/include",
        "C:/Program Files (x86)/Windows Kits/10/Include/10.0.18362.0/ucrt",
    ],
    lib_directory = "C:/local/lib",
    compiler_flag = [
        "-std=c++11",
        "-m64", 
    ],
    cpu = "x86_64",
    cpu_name = "x86_64-w64-mingw32",
    toolchain_outputs = {
        "static_library": "lib${target}.a",
        "shared_library": "${target}.dll",
    },
)

register_toolchains(":windows_x86_64_toolchain")