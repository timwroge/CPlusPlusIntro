# CPlusPlusIntro
Just a short intro to C++
## Basics
Syntax is more or less the same as C except, if you want to use standard library objects, like 
the traditional input (cin) or output (cout). To relay to these objects you use the shift (>>
or <<) operator. These denote bitwise shifts. In the case of cin and cout, they denote transfer of data. 
If you would like to perform the hello world program (without the surrounding function headers), you write
```cpp
std::cout<<"Hello World!"<<endl;
```
The traditional variable types should all be the same, (int, double, long, etc.) For strings, 
import the `#include <string>`. 

`if` statements are the same as C, for instance

```cpp
if ()
  statement ;
else 
  statement;
```
or, for multiline statements: 
```cpp
if (){
  statement;
  statement;
  }
else {
  statement;
  statement;
  }
```
The keyword `const` also comes up a lot. This keyword just makes makes the compiler raise an error if the value 
of the `const` variable is changed. `constexpr` is a more focused version of `const`, in which the variable must 
not change and also be interprettable during compilation of the program (no variablility like user input).





## Files and Pointers

## Object Oriented 

## Advanced Standard Library
