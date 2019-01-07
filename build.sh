gcc -I lib/include/torch/csrc/api/include -I lib/include -L lib -lstdc++ -lc10 -lcaffe2 -lshm -ltorch  torchcppExample/example.cpp
echo "build ok"
export LD_LIBRARY_PATH
./a.out
