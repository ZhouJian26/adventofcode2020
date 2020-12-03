
echo "Preparing Working Space"
mkdir -p Output

echo "Compile file"
g++ ./$1/main.cpp -o ./Output/$1 -std=c++17 -Wall -O3 

echo "Running command: cat ./$1/input.in | ./Output/$1 > Output/$1.out.txt"
time cat ./$1/input.in | ./Output/$1 > Output/$1.out.txt

rm -rf ./Output/$1