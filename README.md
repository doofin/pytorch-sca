# pytorch-sca
scala bindings for pytorch ,utilizing the cpp api 


# Run 
gcc must be 8.2!

./build.sh , which gives a.out

./run.sh , which first exports lib path

files copy from commit 32777231730983aa38bb92624ca0b30fd75fb521,SO are built on my machine : linux x64

# c++ api
https://pytorch.org/cppdocs/frontend.html



# ffi,binding generation

https://github.com/java-native-access/jna

https://github.com/nativelibs4java/JNAerator/wiki 

# build from source

clone the official repo,

python setup.py build

then copy 

pytorch/build/lib.linux-x86_64-3.7/torch/lib

to lib
