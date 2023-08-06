Hello World, etc.

The purpose of this project is as a bit of a dummy check to make sure I still know how to use clion and its debugger and to practice
the c++ syntax for some standard things like file input/output, etc. 


**********NOTES & CHEATSHEET**********
 - Note: creating new file in windows cmd is "type nul > filename.txt"
 - File Input
    1. #include <fstream>
    2. ifstream/ofstream streamVarName
    3. streamVarName.open("filename.txt")
     4. check for error = if (streamVarName.fail()) { cout an error message }
     5. input stuff
     6. streamVarName.close()
        Note: file must be in cmake-build-debug or else change the project working directory
