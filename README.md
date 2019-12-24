# Integer sequences from the "Online Encyclopedia of Integer Sequences" ([OEIS](https://oeis.org/))

This repository is where I'll the code that I made to generate some sequences in the OEIS, I'll try to do in multiple programming languages.

### Table of Contents
+ **[A000010](https://oeis.org/A000010)** **Euler's totient function phi(n)**: counts numbers <= n and prime to n.
  - Currently available in Python / C / C++. Demonstration with 0.1 delay: 
  <p align="center">
    <img src="https://media.giphy.com/media/LRZWOzi1JKhYd9V4KP/giphy.gif">
  </p>

---

+ **[A000040](https://oeis.org/A000040)** **The prime numbers**.
  - Currently available in Python / C / C++ (using [Sieve of Eratosthenes](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes) algorithm). Demonstration with 0.1 delay:
  <p align="center">
    <img src="https://media.giphy.com/media/RgzKjn78GsdWGenYt8/giphy.gif">
  </p>
  
---

+ **[A000045](https://oeis.org/A000045)** **Fibonacci numbers**: F(n) = F(n-1) + F(n-2) with F(0) = 0 and F(1) = 1.
  - Currently available in Python / C / C++ (containing both a recursive and a bottom-up approach). Demonstration with 0.1 delay:
  <p align="center">
    <img src="https://media.giphy.com/media/UpDraH9RuxjXyz5qy4/giphy.gif">
  </p>
  
---

+ **[A000217](https://oeis.org/A000217)** **Triangular numbers**: a(n) = binomial(n+1,2) = n(n+1)/2 = 0 + 1 + 2 + ... + n.
  - Currently available in Python (containing both a arithmetic and a binomial method) / C.
