
# Bazel build template for cpp


<!-- PROJECT LOGO -->
<br />
<div align="center">
    <img src="https://www.gstatic.com/devrel-devsite/prod/v8330b7bdce12528ca95041e234ad065d24b70aaf6096876dac7cb56d8918f144/bazel/images/lockup.svg"
      alt="Project Logo"
      width="100"
      height="100"
    />
  <h3 align="center">Bazel CPP project template</h3>
  <p align="center">
    An awesome cpp project template with bazel build system to jumpstart your projects!
  </p>
</div>

---

![](https://img.shields.io/github/license/IvoBrandao/cpp_bazel_project) [![Build Bazel Project](https://github.com/IvoBrandao/Template-bazel-project/actions/workflows/main.yml/badge.svg)](https://github.com/IvoBrandao/Template-bazel-project/actions/workflows/main.yml)

## features
---

## Features

This project includes support for:

Frameworks:
* [x] Testing with [Google Test](https://github.com/google/googletest)
* [x] Mocking with [Google Mock](https://github.com/google/googletest)
* [x] Logging with [Google glog](https://github.com/google/glog)
* [x] Benchmarking with [Google Benchmark](https://github.com/google/benchmark)
* [x] Remote Procedure Call (RPC) with [gRPC](https://grpc.io/)

Libraries:
* [x] [Abseil C++](https://github.com/abseil/abseil-cpp)
* [x] [Protocol Buffers](https://github.com/protocolbuffers/protobuf)

## Bazel Installation

Please refer to the official Bazel installation guide for your platform:

* [Ubuntu Installation Guide](https://docs.bazel.build/versions/master/install-ubuntu.html)
* [macOS Installation Guide](https://docs.bazel.build/versions/master/install-macos.html)
* [Windows Installation Guide](https://docs.bazel.build/versions/master/install-windows.html)

## Project Setup

### Step 1: Clone the repository

``` bash
git clone git@github.com:IvoBrandao/template-bazel-project.git
```

### Step 2: Build the project

```bash
bazel build //app:main
```

### Step 3: Run the project

```bash
bazel run //app:main
```

### Step 4: Test the project

```bash
bazel test //app:main
# or for a specific platform:
bazel run  //app:main --platforms=//platforms:windows_platform
bazel run  //app:main --platforms=//platforms:macos_platform
bazel run  //app:main --platforms=//platforms:ubuntu_platform
```

### Step 5: Test individual libraries

To run tests for specific libraries (e.g., pkg library), use:

```bash
bazel test //lib/pkg:pkg_test --test_output=all
```

## Dependencies

The project uses Bazel’s module system (MODULE.bazel) to manage dependencies. The following libraries are included:

* [bazel_skylib](https://github.com/bazelbuild/bazel-skylib) for Bazel utility functions.
* [rules_platform](https://github.com/bazelbuild/platforms) for platform configurations.
* [rules_cc](https://github.com/bazelbuild/rules_cc) for C++ build rules.
* [rules_testing](https://github.com/bazelbuild/rules_testing) for testing utilities.
* [Google Test](https://github.com/google/googletest) for unit testing.
* [gRPC](https://grpc.io/) for RPC support.
* [Protocol Buffers](https://github.com/protocolbuffers/protobuf) for message serialization.
* [Abseil C++](https://github.com/abseil/abseil-cpp) for common utility libraries.
* [glog](https://github.com/google/glog) for logging.
* [Google Benchmark](https://github.com/google/benchmark) for benchmarking.







