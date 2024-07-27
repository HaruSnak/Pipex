<img src="readme/pipex.png" alt="pipex" width="900"/>

# Pipex
Pipex is a project from the 42 curriculum that immerses you in the realm of Linux pipes. It involves replicating the functionality of pipes in Linux, providing a deeper understanding of their inner workings.<br>

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

## 📒 Index

- [About](#about)
<!--- [Approach](#approach)-->
- [Installation](#installation)
- [Development](#development)
  <!--- [Pre-Requisites](#pre-requisites)-->
  - [File Structure](#file-structure)
  <!--- [Diagram Architecture](#diagram-architecture)  -->
- [Notes](#notes)
- [Credits](#credits)

## About

### **Pipex in Action:**
Picture a water pipeline: each command acts as a filter, processing data and sending the output to the next command in the pipeline. Pipex allows you to create a similar pipeline for computer data.<br>

* **User-Provided Commands**: *These commands can be basic Linux utilities like cat (displaying file contents), grep (filtering text), wc (counting lines/words/characters), or even your own custom C programs.*<br>
* **Connecting Commands with Pipes**: *Using pipes, Pipex establishes a communication channel between commands. The standard output of the first command becomes the standard input of the next. This way, data processed by one command is directly fed into the next for further processing.*<br>
* **Final Result**: *The data, transformed by the various commands in the pipeline, emerges from the last command and is displayed on the screen.*<br>

### **Key Concepts Learned by Building Pipex:**

* **Pipes and Standard Streams**: *You'll grasp how pipes redirect the standard output of one process (program) to the standard input of another. This enables you to create chains of data processing without storing intermediate results in temporary files.*<br>
* **Executing Commands from a C Program**: *You'll discover how to invoke Linux system commands directly from your C program. This allows Pipex to act as an intermediary between the user and Linux utilities.*<br>
* **Memory Management**: *You'll learn to efficiently allocate and deallocate memory during Pipex execution. This ensures your program utilizes system resources optimally.*<br>
* **Error Handling**: *You'll explore different techniques to handle potential errors during command execution. This enables Pipex to operate robustly and provide relevant error messages to the user in case of issues.*<br>

## Installation
```bash
# Clone this repository
$ git clone https://github.com/HaruSnak/Pipex.git

# Go into the repository
$ cd Pipex

# To compile the program
$ make

# Command prototype once compiled
 < file1 cmd1 | cmd2 > file2

# Example
$ ./pipex infile.txt "ls -l" "wc -l" outfile.txt

# Removes all generated files and the executable for a thorough cleanup.
$ make fclean

# Removes generated object files and the executable.
$ make clean
```

## Development
<!--### Pre-Requisites
```
```-->

### File Structure

```
.
└── 📁pipex
    └── Makefile
    └── 📁includes
        └── 📁libft
            └── Makefile
            └── 📁char
                └── ft_isalnum.c
                └── ft_isalpha.c
                └── ft_isascii.c
                └── ft_isdigit.c
                └── ft_isprint.c
                └── ft_tolower.c
                └── ft_toupper.c
            └── 📁conv
                └── ft_atoi.c
                └── ft_itoa.c
            └── 📁gnl
                └── get_next_line.c
            └── 📁includes
                └── libft.h
            └── 📁lst
                └── ft_lstadd_back_bonus.c
                └── ft_lstadd_front_bonus.c
                └── ft_lstclear_bonus.c
                └── ft_lstdelone_bonus.c
                └── ft_lstiter_bonus.c
                └── ft_lstlast_bonus.c
                └── ft_lstmap_bonus.c
                └── ft_lstnew_bonus.c
                └── ft_lstsize_bonus.c
            └── 📁mem
                └── ft_bzero.c
                └── ft_calloc.c
                └── ft_memchr.c
                └── ft_memcmp.c
                └── ft_memcpy.c
                └── ft_memmove.c
                └── ft_memset.c
            └── 📁printf
                └── ft_conv_primary.c
                └── ft_conv_specifies.c
                └── ft_conv_suit.c
                └── ft_printf.c
            └── 📁put
                └── ft_putchar.c
                └── ft_putchar_fd.c
                └── ft_putendl_fd.c
                └── ft_putnbr.c
                └── ft_putnbr_fd.c
                └── ft_putstr.c
                └── ft_putstr_fd.c
            └── 📁str
                └── ft_split.c
                └── ft_strchr.c
                └── ft_strdup.c
                └── ft_striteri.c
                └── ft_strjoin.c
                └── ft_strlcat.c
                └── ft_strlcpy.c
                └── ft_strlen.c
                └── ft_strmapi.c
                └── ft_strncmp.c
                └── ft_strnstr.c
                └── ft_strrchr.c
                └── ft_strtrim.c
                └── ft_substr.c
        └── pipex.h
    └── input
    └── 📁srcs
        └── 📁bonus
        └── errors.c
        └── find_path.c
        └── 📁input
        └── pipex.c
```

<!--### Diagram Architecture
Write the build Instruction here.-->

## Notes
<p align="left">
    <img src="https://image.noelshack.com/fichiers/2024/11/2/1710273269-100.png"
         alt="100/100" width="180" height="184">
</p>

## Credits

Below you will find the links used for this project:

- [Norm 42](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf)
- [Holidaylvr | Pipe() tutorial for linux](https://www.youtube.com/watch?v=uHH7nHkgZ4w)
- [Processus pipe | FR](https://www.codequoi.com/pipe-une-methode-de-communication-inter-processus/)

[contributors-shield]: https://img.shields.io/github/contributors/HaruSnak/Pipex.svg?style=for-the-badge
[contributors-url]: https://github.com/HaruSnak/Pipex/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/HaruSnak/Pipex.svg?style=for-the-badge
[forks-url]: https://github.com/HaruSnak/Pipex/network/members
[stars-shield]: https://img.shields.io/github/stars/HaruSnak/Pipex.svg?style=for-the-badge
[stars-url]: https://github.com/HaruSnak/Pipex/stargazers
[issues-shield]: https://img.shields.io/github/issues/HaruSnak/Pipex.svg?style=for-the-badge
[issues-url]: https://github.com/HaruSnak/Pipex/issues
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/shany-moreno-5a863b2aa
