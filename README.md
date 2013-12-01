#combo
###Handle C arrays in various useful ways

####Installation

To install, simply clone the repository using `git clone https://github.com/dpwivagg/combo`

####Implementation

The `concat()` method contains the essence of combo.  Use this method with two or more arrays to concatenate them.  `concat()` creates an array with the contents of each array you fed into it called `concat` so you don't need to worry about allocating extra space in any of the arrays you feed it.
```c
  int first [2];
  
  first[0] = 15;
  first[1] = 4;
  
  int second [2];
  
  second[0] = 3;
  second[1] = 1;
  
  concat(first, second);
```
