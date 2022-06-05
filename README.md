# Bazel build template for cpp

This project contains a base template to start a cpp project with bazel.

## features

* [x]: Test: Support Google test framework
* [x]: mock: Support Google mock framework
* [x]: log: Support Google glog framework

## How to use

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


