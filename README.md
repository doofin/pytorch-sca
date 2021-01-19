# pytorch-sca
WIP!

scala bindings for pytorch ,utilizing the pytorch cpp api.

# How

use swig to generate jni from .h files : http://www.swig.org/Doc1.3/Java.html , then it will be similar with https://pytorch.org/tutorials/advanced/cpp_frontend.html and https://pytorch.org/tutorials/advanced/cpp_autograd.html


# libtorch

https://pytorch.org/get-started/locally/

# attention

-I/usr/lib/jvm/java-8-openjdk-amd64/include -I/usr/lib/jvm/java-8-openjdk-amd64/include/linux

# other projects

https://github.com/nazarblch/torch-scala

https://github.com/ctongfei/JTorch

https://github.com/ctongfei/nexus/tree/master/torch

# Run 
gcc must be 8.2!

./build.sh , which gives a.out

./run.sh , which first exports lib path

files copy from commit 32777231730983aa38bb92624ca0b30fd75fb521,SO are built on my machine : linux x64

# c++ api
https://pytorch.org/cppdocs/frontend.html


# Scala api (c++ api binding)

https://github.com/nazarblch/scorch (work in progress)

# ffi,binding generation

https://github.com/java-native-access/jna

https://github.com/nativelibs4java/JNAerator/wiki

https://github.com/bytedeco/javacpp

# build from source

clone the official repo,

python setup.py build

then copy 

pytorch/build/lib.linux-x86_64-3.7/torch/lib

to lib
