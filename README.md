# Integer sequences from the "Online Encyclopedia of Integer Sequences" ([OEIS](https://oeis.org/))
[![CodeFactor](https://www.codefactor.io/repository/github/pzanettid/oeis-integer-sequences/badge)](https://www.codefactor.io/repository/github/pzanettid/oeis-integer-sequences)

This repository is where I'll share the code that I made to generate some of the sequences in the OEIS.

### Table of Contents
+ **[A000010](https://oeis.org/A000010)** **Euler's totient function phi(n)**: counts numbers <= n and prime to n.
   - Currently available in **Python** / **C** / **C++**. Demonstration with 0.1 delay:
   <p align="center">
      <img src="https://media.giphy.com/media/LRZWOzi1JKhYd9V4KP/giphy.gif">
   </p>

---

+ **[A000032](https://oeis.org/A000032)** **Lucas numbers** beginning at 2: L(n) = L(n-1) + L(n-2), L(0) = 2, L(1) = 1.
   - Currently available in **Python** / **C** / **C++** (containing both a recursive and bottom-up approach).

---

+ **[A000040](https://oeis.org/A000040)** **The prime numbers**.
   - Currently available in **Python** / **C** / **C++** (using [Sieve of Eratosthenes](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes) algorithm). Demonstration with 0.1 delay:
   <p align="center">
      <img src="https://media.giphy.com/media/RgzKjn78GsdWGenYt8/giphy.gif">
   </p>

---

+ **[A000043](https://oeis.org/A000043)** **Mersenne exponents**: primes p such that 2^p - 1 is prime. Then 2^p - 1 is called a Mersenne prime.
   - Currently available in **Python** (using [Lucas-Lehmer primality test](https://en.wikipedia.org/wiki/Lucas%E2%80%93Lehmer_primality_test)).

---

+ **[A000045](https://oeis.org/A000045)** **Fibonacci numbers**: F(n) = F(n-1) + F(n-2) with F(0) = 0 and F(1) = 1.
   - Currently available in **Python** / **C** / **C++** (containing both a recursive and a bottom-up approach). Demonstration with 0.1 delay:
   <p align="center">
      <img src="https://media.giphy.com/media/UpDraH9RuxjXyz5qy4/giphy.gif">
   </p>
---

+ **[A000108](https://oeis.org/A000108)** **Catalan numbers**: C(n) = binomial(2n,n)/(n+1) = (2n)!/(n!(n+1)!). Also called Segner numbers.
   - Currently available in **Python** / **C** / **C++** (containing both a recursive and a bottom-up approach).

---

+ **[A000201](https://oeis.org/A000201)** **Lower Wythoff sequence**: a(n) = floor(n x phi), where phi = (1+sqrt(5))/2.
	- Currently available in **Python** / **C** / **C++**.

---

+ **[A000217](https://oeis.org/A000217)** **Triangular numbers**: a(n) = binomial(n+1,2) = n(n+1)/2 = 0 + 1 + 2 + ... + n.
   - Currently available in **Python** (containing both a arithmetic and a binomial method) / **C** / **C++**. Demonstration with 0.1 delay:
   <p align="center">
      <img src="https://media.giphy.com/media/dVbo5vn5ktHLJig3nu/giphy.gif">
   </p>

---

+ **[A005132](https://oeis.org/A005132)** **Recamán's sequence**: a(0) = 0; for n > 0, a(n) = a(n-1) - n if positive and not already in the sequence, otherwise a(n) = a(n-1) + n.
   - Currently available in **Python**/ **C** / **C++**.

---

+ **[A007318](https://oeis.org/A007318)** **Pascal's triangle** read by rows: C(n,k) = binomial(n,k) = n!/(k!(n-k)!), 0 <= k <= n.
   - Currently available in **Python** / **C** (with some memory leakage to be fixed) / **C++**.

---

+ **[A035513](https://oeis.org/A035513)** **Wythoff array** read by antidiagonals.
   - Currently available in **Python** / **C++** (using Construction(1), from [this](https://oeis.org/classic.html))

---
