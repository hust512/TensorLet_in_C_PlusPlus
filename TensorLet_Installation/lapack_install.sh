sudo apt-get install libopenblas-dev
sudo apt-get install liblapack-dev
sudo apt-get install libarpack2-dev
sudo apt-get install libsuperlu-dev



cmake .

make

sudo make install

g++ example1.cpp -o example1 -O2 -larmadillo








