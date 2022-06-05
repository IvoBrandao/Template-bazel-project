load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")


cc_library(
    name        = "pkg",
    linkstatic  = 1,
    visibility  = ["//visibility:public"],
    srcs        = glob(["src/*.cpp", "inc/*.hpp"]),
    hdrs        = glob(["api/*.hpp"]),
    includes    = ["api", "inc"],
    deps        = ["@com_github_google_glog//:glog"]
)

cc_test(
  name          = "pkg_test",
  size          = "small",
  srcs          = glob(["tst/*.cpp"]),  
  deps          = ["//lib/pkg:pkg", "@com_google_googletest//:gtest_main"]
)

