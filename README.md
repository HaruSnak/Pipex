<img src="readme/pipex.png" alt="pipex" width="900"/>

<div align="center">

# Pipex
### A Program to Handle Pipes at 42 School

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![License][license-shield]][license-url]

</div>

---

## 🇬🇧 English

<details>
<summary><b>📖 Click to expand/collapse English version</b></summary>

### 📖 About

**Pipex** is a compulsory project for 42 School students. It consists of creating a program that reproduces the behavior of pipes in the shell. The program takes 4 arguments: a file1, cmd1, cmd2, file2, and behaves exactly like `< file1 cmd1 | cmd2 > file2`.

This project teaches:
- Process management with fork, execve, and wait
- Inter-process communication using pipes
- File descriptors redirection with dup2
- Path finding for commands in the environment
- Error handling and memory management

### 🧠 Skills Learned

By completing the Pipex project, students develop essential skills in C programming and Unix systems:

- **Process creation and management**: Using fork to create child processes and wait/waitpid to synchronize them.
- **Pipes**: Creating and using pipes for communication between processes.
- **File redirection**: Redirecting stdin and stdout using dup2.
- **Command execution**: Using execve to execute commands with their arguments.
- **Path resolution**: Searching for executable commands in the PATH environment variable.
- **Error handling**: Managing errors from system calls and providing appropriate messages.
- **Memory management**: Allocating and freeing memory for dynamic structures like arrays of strings.
- **Libft usage**: Leveraging a custom library for string manipulation and other utilities.
- **Code organization**: Structuring code into modular functions, adhering to 42 norms.

## Approach
The goal was to implement a program that mimics the shell's pipe behavior without using the shell itself. This involved creating two child processes connected by a pipe, redirecting inputs and outputs appropriately, and ensuring proper synchronization and error handling.<br>

The implementation uses fork to create children, pipe for communication, dup2 for redirection, and execve for command execution. Path finding is done by parsing the PATH variable and checking access to executables.<br>

### **Features**

**Pipe creation and management:** *Handles the creation of pipes and redirection of file descriptors.*<br>

**Command execution:** *Executes shell commands with arguments, finding them in the PATH.*<br>

**Error handling:** *Provides clear error messages for invalid files, commands not found, etc.*<br>

**Memory safety:** *Ensures no memory leaks and proper cleanup.*<br>

### **Key Components:**

- **Main function**: Parses arguments and orchestrates the process creation.
- **Child processes**: One for each command, with proper redirection.
- **Path finding**: Searches for commands in the system's PATH.
- **Error management**: Uses perror and custom error functions.

### 📋 Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Compilation](#compilation)
- [Function Reference](#function-reference)
- [Credits](#credits)

<a name="features"></a>

### ✨ Features

- **Pipe simulation** reproducing shell behavior
- **Argument parsing** for files and commands
- **Process synchronization** with waitpid
- **Path resolution** for command execution
- **Error handling** with appropriate messages
- **Memory management** without leaks
- **Libft integration** for utility functions

<a name="installation"></a>

### 🚀 Installation

```bash
# Clone the repository
git clone https://github.com/HaruSnak/42-pipex
cd 42-pipex
```

<a name="usage"></a>

### 💻 Usage

Compile and run the program:

```bash
make
./pipex file1 cmd1 cmd2 file2
```

Examples:
- `./pipex infile "ls -l" "wc -l" outfile`
- `./pipex infile "grep a1" "wc -w" outfile`

<a name="project-structure"></a>

### 📂 Project Structure

```
42-pipex/
├── Makefile                    # Build script
├── pipex.h                     # Main header file
├── LICENSE                     # License file
├── README.md                   # This file
├── README-Template.md          # Template for README
├── includes/
│   ├── pipex.h
│   └── libft/                  # Custom library
│       ├── Makefile
│       ├── libft.h
│       └── [various .c files]
├── readme/                     # README assets
└── srcs/                       # Source files
    ├── pipex.c                 # Main file
    ├── errors.c                # Error handling
    ├── find_path.c             # Path resolution
    └── input.txt               # Test input
```

<a name="compilation"></a>

### 🔧 Compilation

Compile the project using the Makefile:

```bash
make          # Compile the program
make clean    # Remove object files
make fclean   # Remove executable and object files
make re       # Recompile everything
```

<a name="function-reference"></a>

### 📚 Function Reference

#### Main Functions
- [`main`](srcs/pipex.c) - Program entry point, argument parsing
- [`ft_children1`](srcs/pipex.c) - Creates first child process
- [`ft_children2`](srcs/pipex.c) - Creates second child process
- [`ft_execve`](srcs/find_path.c) - Executes commands
- [`ft_errors`](srcs/errors.c) - Error handling

#### Key Features
- **Pipe Management**: Creates and manages pipes between processes
- **Redirection**: Uses dup2 for input/output redirection
- **Path Finding**: Parses PATH to locate executables

### 👨‍🎓 Note
<p align="left">
    <img src="https://image.noelshack.com/fichiers/2024/11/2/1710273269-100.png"
         alt="100/100" width="180" height="184">
</p>

<a name="credits"></a>

### 📖 Credits

- **42 School Norm**: [Official C Coding Standard](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf)
- **Pipe Tutorial**: [Holidaylvr on YouTube](https://www.youtube.com/watch?v=uHH7nHkgZ4w)
- **Process Pipes**: [CodeQuoi FR](https://www.codequoi.com/pipe-une-methode-de-communication-inter-processus/)

### 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

</details>

---

## 🇫🇷 Français

<details>
<summary><b>📖 Cliquez pour développer/réduire la version française</b></summary>

### 📖 À propos

**Pipex** est un projet obligatoire pour les étudiants de l'école 42. Il s'agit de créer un programme qui reproduit le comportement des pipes dans le shell. Le programme prend 4 arguments : file1, cmd1, cmd2, file2, et se comporte exactement comme `< file1 cmd1 | cmd2 > file2`.

Ce projet enseigne :
- La gestion des processus avec fork, execve et wait
- La communication inter-processus utilisant des pipes
- La redirection des descripteurs de fichiers avec dup2
- La recherche de chemin pour les commandes dans l'environnement
- La gestion d'erreurs et de la mémoire

### 🧠 Compétences acquises

En complétant le projet Pipex, les étudiants développent des compétences essentielles en programmation C et systèmes Unix :

- **Création et gestion de processus** : Utilisation de fork pour créer des processus enfants et wait/waitpid pour les synchroniser.
- **Pipes** : Création et utilisation de pipes pour la communication entre processus.
- **Redirection de fichiers** : Redirection de stdin et stdout en utilisant dup2.
- **Exécution de commandes** : Utilisation d'execve pour exécuter des commandes avec leurs arguments.
- **Résolution de chemin** : Recherche de commandes exécutables dans la variable d'environnement PATH.
- **Gestion d'erreurs** : Gestion des erreurs des appels système et fourniture de messages appropriés.
- **Gestion de la mémoire** : Allocation et libération de mémoire pour des structures dynamiques comme des tableaux de chaînes.
- **Utilisation de Libft** : Exploitation d'une bibliothèque personnalisée pour la manipulation de chaînes et autres utilitaires.
- **Organisation du code** : Structuration du code en fonctions modulaires, en respectant les normes 42.

## Approche
L'objectif était d'implémenter un programme qui imite le comportement des pipes du shell sans utiliser le shell lui-même. Cela impliquait de créer deux processus enfants connectés par un pipe, de rediriger les entrées et sorties de manière appropriée, et d'assurer une synchronisation et une gestion d'erreurs correctes.<br>

L'implémentation utilise fork pour créer des enfants, pipe pour la communication, dup2 pour la redirection, et execve pour l'exécution de commandes. La recherche de chemin se fait en analysant la variable PATH et en vérifiant l'accès aux exécutables.<br>

### **Fonctionnalités**

**Création et gestion de pipes :** *Gère la création de pipes et la redirection des descripteurs de fichiers.*<br>

**Exécution de commandes :** *Exécute des commandes shell avec arguments, en les trouvant dans le PATH.*<br>

**Gestion d'erreurs :** *Fournit des messages d'erreur clairs pour les fichiers invalides, commandes non trouvées, etc.*<br>

**Sécurité mémoire :** *Assure l'absence de fuites mémoire et un nettoyage correct.*<br>

### **Composants clés :**

- **Fonction principale** : Analyse les arguments et orchestre la création de processus.
- **Processus enfants** : Un pour chaque commande, avec redirection appropriée.
- **Recherche de chemin** : Recherche les commandes dans le PATH du système.
- **Gestion d'erreurs** : Utilise perror et des fonctions d'erreur personnalisées.

### 📋 Table des matières

- [Caractéristiques](#caractéristiques)
- [Installation](#installation-1)
- [Utilisation](#utilisation)
- [Structure du projet](#structure-du-projet)
- [Compilation](#compilation-1)
- [Référence des fonctions](#référence-des-fonctions)
- [Crédits](#crédits-1)

<a name="caractéristiques"></a>

### ✨ Caractéristiques

- **Simulation de pipes** reproduisant le comportement du shell
- **Analyse d'arguments** pour fichiers et commandes
- **Synchronisation de processus** avec waitpid
- **Résolution de chemin** pour l'exécution de commandes
- **Gestion d'erreurs** avec messages appropriés
- **Gestion de la mémoire** sans fuites
- **Intégration de Libft** pour les fonctions utilitaires

<a name="installation-1"></a>

### 🚀 Installation

```bash
# Cloner le dépôt
git clone https://github.com/HaruSnak/42-pipex
cd 42-pipex
```

<a name="utilisation"></a>

### 💻 Utilisation

Compilez et lancez le programme :

```bash
make
./pipex file1 cmd1 cmd2 file2
```

Exemples :
- `./pipex infile "ls -l" "wc -l" outfile`
- `./pipex infile "grep a1" "wc -w" outfile`

<a name="structure-du-projet"></a>

### 📂 Structure du projet

```
42-pipex/
├── Makefile                    # Script de build
├── pipex.h                     # Fichier d'en-tête principal
├── LICENSE                     # Fichier de licence
├── README.md                   # Ce fichier
├── README-Template.md          # Template pour README
├── includes/
│   ├── pipex.h
│   └── libft/                  # Bibliothèque personnalisée
│       ├── Makefile
│       ├── libft.h
│       └── [divers fichiers .c]
├── readme/                     # Ressources README
└── srcs/                       # Fichiers sources
    ├── pipex.c                 # Fichier principal
    ├── errors.c                # Gestion d'erreurs
    ├── find_path.c             # Résolution de chemin
    └── input.txt               # Entrée de test
```

<a name="compilation-1"></a>

### 🔧 Compilation

Compilez le projet en utilisant le Makefile :

```bash
make          # Compiler le programme
make clean    # Supprimer les fichiers objets
make fclean   # Supprimer l'exécutable et les fichiers objets
make re       # Recompiler tout
```

<a name="référence-des-fonctions"></a>

### 📚 Référence des fonctions

#### Fonctions principales
- [`main`](srcs/pipex.c) - Point d'entrée du programme, analyse des arguments
- [`ft_children1`](srcs/pipex.c) - Crée le premier processus enfant
- [`ft_children2`](srcs/pipex.c) - Crée le deuxième processus enfant
- [`ft_execve`](srcs/find_path.c) - Exécute les commandes
- [`ft_errors`](srcs/errors.c) - Gestion d'erreurs

#### Fonctionnalités clés
- **Gestion de pipes** : Crée et gère les pipes entre processus
- **Redirection** : Utilise dup2 pour la redirection entrée/sortie
- **Recherche de chemin** : Analyse PATH pour localiser les exécutables

### 👨‍🎓 Note
<p align="left">
    <img src="https://image.noelshack.com/fichiers/2024/11/2/1710273269-100.png"
         alt="100/100" width="180" height="184">
</p>

<a name="crédits-1"></a>

### 📖 Crédits

- **Norme 42** : [Standard C officiel](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf)
- **Tutoriel Pipe** : [Holidaylvr sur YouTube](https://www.youtube.com/watch?v=uHH7nHkgZ4w)
- **Pipes de processus** : [CodeQuoi FR](https://www.codequoi.com/pipe-une-methode-de-communication-inter-processus/)

### 📄 Licence

Ce projet est sous licence **MIT** - voir le fichier [LICENSE](LICENSE) pour plus de détails.

</details>

---

[contributors-shield]: https://img.shields.io/github/contributors/HaruSnak/42-pipex.svg?style=for-the-badge
[contributors-url]: https://github.com/HaruSnak/42-pipex/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/HaruSnak/42-pipex.svg?style=for-the-badge
[forks-url]: https://github.com/HaruSnak/42-pipex/network/members
[stars-shield]: https://img.shields.io/github/stars/HaruSnak/42-pipex.svg?style=for-the-badge
[stars-url]: https://github.com/HaruSnak/42-pipex/stargazers
[issues-shield]: https://img.shields.io/github/issues/HaruSnak/42-pipex.svg?style=for-the-badge
[issues-url]: https://github.com/HaruSnak/42-pipex/issues
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/shany-moreno-5a863b2aa
[license-shield]: https://img.shields.io/github/license/HaruSnak/42-pipex.svg?style=for-the-badge
[license-url]: https://github.com/HaruSnak/42-pipex/blob/master/LICENSE
