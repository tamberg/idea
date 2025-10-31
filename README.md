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
$ cat index.txt
...
```

Generate an idea using these category files.
```bash
$ cd iot
$ ../idea subject.txt input.txt output.txt domain.txt
```

## Tiles example
Based on [this work](https://github.com/tilestoolkit/tiles-IoT-inventor-toolkit), (c) 2019 Tiles Technologies AS, licensed under [MIT License](https://github.com/tilestoolkit/tiles-IoT-inventor-toolkit/blob/master/LICENSE), see 
[www.tilestoolkit.io](https://www.tilestoolkit.io) for details and buy their kit.

Use the predefined _tiles_ category files.
```bash
$ ls tiles
actions.txt	feedback.txt	missions.txt	scenarios.txt	services.txt
criteria.txt	index.txt	personas.txt	sensors.txt	things.txt
$ cat index.txt
...
```

