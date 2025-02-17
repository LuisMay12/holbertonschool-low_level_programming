# **holbertonschool-low_level_programming**

## **📌 Description**
Welcome to the **Low-Level Programming** repository! This repository contains various projects and exercises related to **C programming**, an essential language for systems programming, memory management, and understanding how computers work at a lower level.  
These projects follow the **Betty coding style** and are compiled using **gcc** on Ubuntu 20.04 LTS.

### **🔍 Useful Commands**
- `man gcc`
- `man printf`
- `man puts`
- `man putchar`

## **🎯 Learning Objectives**
- Why **C programming** is widely used.
- Who **Dennis Ritchie**, **Brian Kernighan**, and **Linus Torvalds** are.
- What happens when you type `gcc main.c`
- How to print using `printf`, `puts`, and `putchar`.
- How to check code style with `betty`.

## **📋 Project Requirements**
### **C Requirements**
- Allowed editors: `vi`, `vim`, `emacs`
- Compilation:  
  ```
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename>.c -o <output>
  ```
- No compilation **errors or warnings** allowed.
- **No `system` function** usage.
- Code must follow **Betty coding style**.

### **Shell Script Requirements**
- Allowed editors: `vi`, `vim`, `emacs`
- Scripts must be **exactly 2 lines long**.
- Must start with:
  ```
  #!/bin/bash
  ```

## **✅ Betty Linter Installation**
1. Clone Betty:
   ```
   git clone https://github.com/holbertonschool/Betty.git
   ```
2. Install:
   ```
   sudo ./install.sh
   ```
3. Create shortcut:
   ```
   sudo nano /usr/local/bin/betty
   ```
   Paste this:
   ```
   #!/bin/bash
   BIN_PATH="/usr/local/bin"
   BETTY_STYLE="betty-style"
   BETTY_DOC="betty-doc"

   if [ "$#" = "0" ]; then
       echo "No arguments passed."
       exit 1
   fi

   for argument in "$@"; do
       echo -e "\n========== $argument =========="
       ${BIN_PATH}/${BETTY_STYLE} "$argument"
       ${BIN_PATH}/${BETTY_DOC} "$argument"
   done
   ```
4. Save and make executable:
   ```
   chmod a+x /usr/local/bin/betty
   ```
5. Now check your code with:
   ```
   betty <filename>.c
   ```

## **📂 Repository Structure**
```
holbertonschool-low_level_programming/
│── 0x00-hello_world/
│── 0x01-variables_if_else_while/
│── 0x02-functions_nested_loops/
│── 0x03-debugging/
│── README.md
```
