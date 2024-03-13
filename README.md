# *Pipex*

<img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTYygTN-uE0Agn6yh0JKYs6EtEU7ROC80hle9qYhrlLIw&s" align="right"
     alt="libft" width="200" height="200">

Pipex is a project from the 42 curriculum that immerses you in the realm of Linux pipes. It involves replicating the functionality of pipes in Linux, providing a deeper understanding of their inner workings.<br>

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


## *How To Use*

### **Compilation**

```bash
# Clone this repository
$ git clone https://github.com/HaruSnak/libft.git

# Go into the repository
$ cd libft

# To compile the program
$ make

# Allows you to do a complete cleaning of your construction environment
$ make fclean

# Command prototype once compiled
 < file1 cmd1 | cmd2 > file2

# Example
$ ./pipex infile.txt "ls -l" "wc -l" outfile.txt
```

## Notes

### **SOON**
<!--<p align="left">
    <img src="https://image.noelshack.com/fichiers/2024/11/2/1710270009-125.png"
         alt="Sponsored by Evil Martians" width="216" height="164">
</p>-->



## Credits

Below you will find the links used for this project:

- [Norm 42](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf)
- [Holidaylvr | Pipe() tutorial for linux](https://www.youtube.com/watch?v=uHH7nHkgZ4w)
- [Processus pipe | FR](https://www.codequoi.com/pipe-une-methode-de-communication-inter-processus/)


