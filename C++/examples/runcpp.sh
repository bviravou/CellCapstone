dir=$(pwd)
cd ..
if  ../C++/build/celluniverse 1 19 $dir/input/frame%03d.tif $dir/output $dir/config.yaml $dir/initial.csv 0
#if ../C++/build/celluniverse 1 19 $dir/input/frame%03d.tif $dir/output $dir/config.yaml $dir/initial.csv

    then
    :
else
    echo "Cell Universe quit unexpectedly!"
fi
