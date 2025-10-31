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
$ echo "cat\ncow\ndog" > animal
$ echo "walk\nrun\ndance" > activity
```

Generate an idea using the category files.
```bash
$ ./idea animal activity
```

Result: one random line was picked from each file.
```
cow
dance
```

> Idea: what you imagine, loosely related to these terms.

## IoT example
Check the predefined _iot_ categories.
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

### Cat feeder
```
animal (cat, dog, cow, horse, ...)
brightness (LDR, light sensor)
power (relay for 12V or 230V, applicance, ...)
at school (classroom, hallway, mensa, ...)
```

> Idea: at school, if the cat wants food, switch on a dispenser.

### Weather warning
```
weather (sun, rain, wind, ...)
door/window state (magnetic switch)
indicator (LEDs on a board, discrete options)
when cooking (boiling, baking, ...)
```

> Idea: detect heavy rain, if any window is open, show a warning in the kitchen.

## Tiles example
Based on [this work](https://github.com/tilestoolkit/tiles-IoT-inventor-toolkit), (c) 2019 Tiles Technologies AS, licensed under [MIT License](https://github.com/tilestoolkit/tiles-IoT-inventor-toolkit/blob/master/LICENSE). For details, and to buy their kit, see [tilestoolkit.io](https://www.tilestoolkit.io).

Check the predefined _tiles_ category files.
```bash
$ ls tiles
actions.txt	feedback.txt	missions.txt	scenarios.txt	services.txt
criteria.txt	index.txt	personas.txt	sensors.txt	things.txt
$ cat index.txt
...
```

Generate an idea using these category files.
```bash
$ cd iot
$ ../idea things.txt sensors.txt feedback.txt
```
