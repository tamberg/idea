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

> Idea: what you imagine, loosely sticking to constraints.

## IoT example
Check the predefined _iot_ categories.
```bash
$ ls iot
domain.txt	input.txt	output.txt	subject.txt
```

Generate an idea using these category files.
```bash
$ cd iot
$ ../idea subject.txt input.txt output.txt domain.txt
```

### Cat feeder
```bash
animal (cat, dog, cow, horse, ...)
brightness (LDR, light sensor)
power (relay for 12V or 230V, applicance, ...)
at school (classroom, hallway, mensa, ...)
```

> Idea: at school, if the cat wants food, switch on a dispenser.

### Weather warning
```bash
weather (sun, rain, wind, ...)
door/window state (magnetic switch)
indicator (LEDs on a board, discrete options)
when cooking (boiling, baking, ...)
```

> Idea: detect heavy rain, if any window is open, show a warning in the kitchen.
