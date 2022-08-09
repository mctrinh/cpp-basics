# cpp-samples

----------------------- A. C++ IDEs -----------------------------------------

  1. Window
    - Visual Studio Code, C/C++ extension
    - Microsoft Visual Studio
    - CodeLite
    
  2. Linux
    - Visual Studio Code
    - Qt Creator
    - CodeLite
  
  3. MacOS
    - Visual Studio Code
    - XCode
    - CodeLite


----------------------- B. C++ Compilers ------------------------------------

  1. Window (Mingw, Clang llvm, Msvc)
    - Go to winlibs.com
    - Download the newest version of GCC 12.1.0 + LLVM/Clang/...
    - Extract somewhere, copy all components to a newly created folder C:\mingw64
    - All c++ compilers are in C:\mingw64\bin
    - Edit the system environment variables/ Advanced: Environment Variables/ System variables: Path/Edit.../New and add the C:\mingw64\bin
    - Open cmd, type <g++ --version>, <clang++ --version> to see whether the system recognize the compilers
    
    - Msvc compiler (Microsoft compiler) is available when installing Visual Studio
    - To use Msvc compiler in VS Code, need to start VS Code from the Developer Command Prompt for Visual Studio
    - Type <cl.exe> to check, cwd to working folder, type <code .> to open VS Code
    - To see the path of the cl.exe, in VSC: View/Command Palette/ type <C/C++: Edit configuration (UI)>

  2. Linux (GCC, Clang llvm)
    - <uname -a> to see the linux distribution.
    - <sudo apt-get install gcc-11> 
  
  3. MacoS (GCC, Clang Apple, Clang llvm)
  
  
  -------------------- C. Connect VSC editors to compilers ------------------
  
  
  
  
