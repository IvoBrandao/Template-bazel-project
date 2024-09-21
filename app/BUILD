load("@rules_cc//cc:defs.bzl", "cc_library", "cc_binary")

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    copts = select({
        "@platforms//os:windows": ["-DWINDOWS_BUILD", "/EHsc"],
        "@platforms//os:linux": ["-DLINUX_BUILD", "-fPIC"],
        "@platforms//os:macos": ["-DMACOS_BUILD"],
        "//conditions:default": [],
    }),
    linkopts = select({
        "@platforms//os:windows": ["-static-libgcc",
                                   "-static-libstdc++"],
        "@platforms//os:linux": ["-pthread"],
        "@platforms//os:macos": [],
        "//conditions:default": [],
    }),
    deps = [
        "@com_github_google_glog//:glog",
        "//lib/pkg:pkg",
    ],
)
