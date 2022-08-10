# C++ compiling instruction

## 1. IDEs
### 1.1. Window
- Visual Studio Code, C/C++ extension
- Microsoft Visual Studio
- CodeLite
    
### 1.2. Linux
- Visual Studio Code
- Qt Creator
- CodeLite
  
### 1.3. MacOS
- Visual Studio Code
- XCode
- CodeLite


## 2. Compilers

### 2.1. Window (Mingw, Clang llvm, MSVC)

#### 2.1.1. Mingw, Clang llvm
- Visit [WinLibs](https://winlibs.com/) to download the newest version of `GCC 12.1.0 + LLVM/Clang/...`
- Extract, copy all components to a newly created folder `C:\mingw64`
- All C++ compilers are in `C:\mingw64\bin`
- Edit the system environment variables, add the path `C:\mingw64\bin`
- Open cmd, `g++ --version`, `clang++ --version` to check
#### 2.1.2. MSVC
- MSVC is a Microsoft compiler, available via installing Visual Studio.
- To use MSVC in VS Code, open Developer Command Prompt for Visual Studio, `cl.exe` to check, cd to working folder, `code .` to open VS Code with cwd
- To see the path of the cl.exe, in VSC: View/Command Palette/ type <C/C++: Edit configuration (UI)

### 2.2. Linux (GCC, Clang llvm)
- `uname -a` to see the linux distribution.
- `sudo apt-get install gcc-11`, if unable to locate the package, install the lower version.
- `sudo apt-get install gcc-10`
- `sudo apt-get install g++-10`
- `sudo apt-get install gdb`
- `sudo apt-get install clang-12`

### 2.3. MacOS (GCC, Clang Apple, Clang llvm)
- `xcode-select --install`
- Install [Homebrew](https://brew.sh/), `brew --version` to check.
- `brew install gcc@12`, then `gcc-12 --version`
- `cd /opt/homebrew/bin`, make a soft/symbolic links: `ln -s gcc-12` and `ln -s g++-12 g++`
- `where gcc` to check `gcc` and `g++` priorities and location.
- Reinitiate the terminal, `gcc --version` to check.

### 2.4. Online compilers
- Wandbox
- Compiler Explorer
- Coliru
  
## 3. Connect VS Code editor to compilers
- In VS Code, `Terminal/Configure Tasks...` to configure each build option, result in the file `tasks.json` in the `.vscode` folder.
- _Note:_ In Linux and MacOS, should cd to cwd first, then hit `code .` to open VS Code.