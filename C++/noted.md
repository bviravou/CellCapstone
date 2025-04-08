## TO DO:
- possibly find more helpful cell attributes for model input 
    - check sphere.hpp or sphere.cpp 
    - check cell.hpp or cell.cpp
    - research what other attributes should be helpful 

## intructions to run
(from CellUniverse github!)
### GETTING STARTED (ICS OPENLAB (NOT MACOS)):
- after ssh into openlab server and cloning the repo
- cd CellUniverse/C++
- **Add the external YAML-CPP library**
    - mkdir lib && cd lib
    - git clone https://github.com/jbeder/yaml-cpp
- **compile the code**
    - cd .. (should be in CellUniverse/C++)
    -  mkdir build && cd build
    - cmake ..
    - cmake --build . -j $(nproc)
- **execute code**
    - cd .. (should be in CellUniverse/C++)
    - cd examples
    - ./runcpp.sh

### AFTER SETTING EVERYTHING UP
- within /build 
    - cmake ..
    - cmake --build . -j $(nproc)
- within /examples 
    - ./runcpp.sh

### notes
**runcpp.sh**: 
>    if  ../C++/build/celluniverse 1 19 $dir/input/frame%03d.tif $dir/output $dir/config.yaml $dir/initial.csv

uses frame001.tif to frame019.tif, this takes me an hour to run on openlab :-) 
if you wanna just do a test run change the numbers to 1 and 2