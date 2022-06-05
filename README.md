
# Bazel build template for cpp

This project contains a base template to start a cpp project with bazel.

![](https://img.shields.io/github/license/IvoBrandao/cpp_bazel_project)


## features

Frameworks:

* [x]: Test Support : [Google test](https://github.com/google/googletest) framework
* [x]: Mock Support : [Google mock](https://google.github.io/googletest) framework
* [x]: Logging Support : [Google glog](https://github.com/google/glog) framework
* [x]: Benchmarking Support : [Google benchmark](https://github.com/google/benchmark) framework 
* [x]: Reponse Procedure Call Support : [Google Grpc](https://grpc.io/) framework

Libraries:
* [x]: Support [Google Abseil](https://github.com/abseil/abseil-cpp) library
* [x]: Support [Google Protobuf](https://github.com/protocolbuffers/protobuf) library

## bazel Installation 

The instalation guide can be found int the following link: 
    * Ubuntu - [bazel](https://docs.bazel.build/versions/master/install-ubuntu.html)
    * MacOS - [bazel](https://docs.bazel.build/versions/master/install-macos.html)
    * Windows - [bazel](https://docs.bazel.build/versions/master/install-windows.html)

## How to use this repository

**Step 1:** Clone the project

``` bash
git clone git@github.com:IvoBrandao/cpp_bazel_project.git
```

**Step 2:** Build the project

``` bash
cd cpp_bazel_project
bazel build //app:main
```
**Step 3:** Run the project

``` bash
bazel run //app:main
```
**Step 4:** Test the project

``` bash
bazel test //app:main
``` 
**Step 5:** Test each library individually

``` bash
bazel test //lib/pkg:pkg --test_output=all
```


