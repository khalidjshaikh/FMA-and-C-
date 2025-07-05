AWS VM Intel(R) Xeon(R) Platinum 8259CL CPU @ 2.50GHz

yum update -y
yum upgrade -y
yum install g++

g++ print.c++ -std=c++23; ./a.out
g++ fma.c++; ./a.out 
g++ for.c++; time ./a.out
g++ for_fma.c++; time ./a.out

x = 1, i = 2, s = example
x =  1.00, i = 002, s =       example       
Using std::fma: 2.1 * 4.2 + 9.4 = 18.22
Performing separately: 2.1 * 4.2 + 9.4 = 18.22

High precision example (fma): 2.14159e+16
High precision example (separate): 2.14159e+16

real	0m7.547s
user	0m7.515s
sys	0m0.000s

real	0m15.972s
user	0m15.416s
sys	0m0.002s

---

WSL Ubuntu 24.04.1 LTS
13th Gen Intel(R) Core(TM) i3-1315U

g++ fma.c++; ./a.out
g++ for.c++; time ./a.out
g++ for_fma.c++; time ./a.out
Using std::fma: 2.1 * 4.2 + 9.4 = 18.22
Performing separately: 2.1 * 4.2 + 9.4 = 18.22

High precision example (fma): 2.14159e+16
High precision example (separate): 2.14159e+16

real    0m1.655s
user    0m1.654s
sys     0m0.000s

real    0m6.658s
user    0m6.658s
sys     0m0.000s
