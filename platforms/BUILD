# platforms/BUILD
load("@rules_cc//cc:defs.bzl", "cc_toolchain")

# Define a platform for Ubuntu (Linux)
platform(
    name = "ubuntu_platform",
    constraint_values = [
        "@platforms//os:linux",
        "@platforms//cpu:x86_64",
        # Add additional constraints if needed
    ],
)

# Define a platform for Windows
platform(
    name = "windows_platform",
    constraint_values = [
        "@platforms//os:windows",
        "@platforms//cpu:x86_64",
    ],
)

platform(
    name = "macos_platform",
    constraint_values = [
        "@platforms//os:macos",
        "@platforms//cpu:arm64",
    ],
)
