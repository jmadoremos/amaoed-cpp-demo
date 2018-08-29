# C++ Programming Language | VS Code Demo

This repository contains all source codes previewed during the demo of each corresponding modules for C++ Programming Language of AMA Online Education.

## Installation

1. Download [MinGW - Minimalistic GNU for Windows](https://sourceforge.net/projects/mingw) and install to **C:/MinGW** directory. Leave the default settings as is.

2. The _MinGW Installation Manager_ window will appear. In the window, tick the following checkboxes and select the "Mark for Installation" option. After ticking them, click the **Installation** menu then click the **Apply Changes** option. Finally, in the dialog blox, click **Apply** button to continue. After installation, close both the dialog box and _MinGW Installation Manager_.

    * mingw32-base

    * mingw32-gcc-g++
  
    * mingw32-gcc-objc

3. Download and install [git](https://git-scm.com/downloads). Leave the default settings as is.

4. Clone this repository using _command prompt_ for Windows or _terminal_ for Mac and Linux using:

    ```dos
    mkdir C:/git
    cd C:/git
    git clone https://github.com/jmadoremos/amaoed-cpp-demo
    ```

5. Download and install [Visual Studio Code](https://code.visualstudio.com/). Leave the default settings as is.

6. Open _Visual Studio Code_ and install the following _extensions_ ( Mac: <kbd>&#8984;</kbd>+<kbd>P</kbd>, Windows: <kbd>CTRL</kbd>+<kbd>P</kbd> ):

    * EditorConfig for VS Code by EditorConfig:

          ext install EditorConfig.editorconfig

    * C/C++ by Microsoft:

          ext install ms-vscode.cpptools

## Reminders

* It currently supports only **Windows** operating system.

* In general, there should be no reason to modify and/or delete any of the following:

  * **/.vscode** directory and contained files

  * **/src/_pause.h** library

  * **.editorconfig** file

  * **.gitignore** file

  * [**README**](/README.md)
