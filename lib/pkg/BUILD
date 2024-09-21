load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

cc_library(
    name = "pkg",
    linkstatic = True,
    visibility = ["//visibility:public"],
    srcs = glob(["src/*.cpp", "inc/*.hpp"]),
    hdrs = glob(["api/*.hpp"]),
    includes = ["api", "inc"],
    deps = [
        "@com_github_google_glog//:glog",
    ],
    copts = select({
        "@platforms//os:linux": ["-DLINUX_SPECIFIC_FLAG", "-fPIC"],
        "@platforms//os:windows": ["-DWINDOWS_SPECIFIC_FLAG", "/EHsc"],
        "@platforms//os:macos": ["-DMACOS_SPECIFIC_FLAG"],
        "//conditions:default": [],
    }),

    linkopts = select({
        "@platforms//os:linux": ["-pthread"],
        "@platforms//os:windows": ["/SUBSYSTEM:CONSOLE"],
        "@platforms//os:macos": ["-DEBUG"],
        "//conditions:default": [],
    }),
)

cc_test(
    name = "pkg_test",
    size = "small",
    srcs = glob(["tst/*.cpp"]),
    deps = [
        "//lib/pkg:pkg",
        "@com_google_googletest//:gtest_main",
    ],
    copts = select({
        "@platforms//os:linux": ["-DLINUX_SPECIFIC_FLAG", "-fPIC"],
        "@platforms//os:windows": ["-DWINDOWS_SPECIFIC_FLAG", "/EHsc"],
        "@platforms//os:macos": ["-DMACOS_SPECIFIC_FLAG"],
        "//conditions:default": [],
    }),
    linkopts = select({
        "@platforms//os:linux": ["-pthread"],
        "@platforms//os:windows": [],
        "@platforms//os:macos": [],
        "//conditions:default": [],
    }),
)
