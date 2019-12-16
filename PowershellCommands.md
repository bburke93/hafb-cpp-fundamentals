## C++ Environment in Windows
- VsCode        // editor
- git           // for source control
- cmake         // to work with project
- g++ (mingw)   // compiler for windows. Add binaries to PATH
- github        // for cloud service

## Terminal Commands 
Note: ($ means terminal prompt):
```bash
$   ls          # list folder 
$ cd  <dest>  	# change directories
$ cd   ..		# .. parent directory 
$ pwd           # show present working directory
$ rm <name>     # remove/delete file/directory
```

## File System
``` bash
.    # (one dot) present working directory
..   # (two dots) parent directory
```

## C++ Basics
- File extension: `.cpp`

## g++ Compiler for 1 file
```bash
# To compile
# -o for output file name
$ g++ main.cpp -o main
# To run
$ ./main.exe
```

## g++ Compiler for 2 files
For example, if you have a library under the `functions.cpp`
and `functions.h` files, and you have 
a driver under `run_functions.cpp` 
you need to compile as follows:
```bash
# To compile, list ALL source (cpp) files
# -o for output file name
$ g++ functions.cpp run_functions.cpp
-o run_functions
# To run
$ ./run_functions.exe
```

## C++ File Template
```cpp
#include <iostream>
using namespace std;

int main()
{
    return 0;
}
```

## Plugins and Doxygen documentation
```cpp
// Add C/C++ extension
// Add Code Spell Extension
// Add Doxygen Documentation Generator
```

```cpp
To generate Doxygen documentation:
// Run /** and <Enter>
```