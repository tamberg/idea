# Idea
A simple idea generator — picks a line each from n files with newline terminated lines to generate new combinations.

## Build
```bash
$ gcc -o idea idea.c
$ ./idea
usage: ./idea file-1 file-2 ... file-n
```

## Basic example
Create a file for each category.
```bash
$ echo "cat\ncow\ndog" > animal.txt
$ echo "walk\nrun\ndance" > activity.txt
```

Generate an idea using the category files.
```bash
$ ./idea animal.txt activity.txt
```

Result: one random line was picked from each file.
```bash
cow
dance
```

## IoT example
Use the predefined _iot_ category files.
```bash
$ ls iot
domain.txt	input.txt	output.txt	subject.txt
```

Generate an idea using these category files.
```bash
$ cd iot
$ ../idea subject.txt input.txt output.txt domain.txt
```
