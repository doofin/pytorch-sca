# pytorch-sca
WIP of scala bindings for pytorch ,utilizing the pytorch cpp api.

# How

update: It seems that the most promissing method is to use javaCpp: https://github.com/wmeddie/javacpp-presets/commits/master/libtorch/src/main/java/org/bytedeco/libtorch/presets/libtorch.java

use swig to generate jni from .h files : http://www.swig.org/Doc1.3/Java.html , then it will be similar with https://pytorch.org/tutorials/advanced/cpp_frontend.html and https://pytorch.org/tutorials/advanced/cpp_autograd.html


# download,docs

docs : https://pytorch.org/cppdocs/

download : https://pytorch.org/get-started/locally/

javacpp : https://github.com/bytedeco/javacpp-presets/wiki
# other projects & progress

use javaCpp :  https://github.com/bytedeco/javacpp-presets/issues/623

use javaCpp,but with custom pre-process :  https://github.com/nazarblch/torch-scala

based on swig : https://github.com/ctongfei/JTorch

also based on swig,newer : https://github.com/ctongfei/nexus/tree/master/torch

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
