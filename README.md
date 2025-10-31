# Idea
A simple idea generator — picks a line each from n files with newline terminated lines to generate new combinations.

> Got a card deck to include? Get in touch! [@tamberg](https://quite.social/@tamberg)

- [Basic example](#basic-example)
- [FHNW IoT example](#fhnw-iot-example)
- [Tiles IoT example](#tiles-iot-example)

## Build the tool
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

## FHNW IoT example
Developed for [this course](https://github.com/tamberg/fhnw-iot) at [FHNW](https://fhnw.ch) and [this course](https://github.com/tamberg/mse-tsm-mobcom) at [MSE](https://www.msengineering.ch).

Check the predefined categories.
```bash
$ cat fhnw-iot/index.txt
...
```

Generate an idea using the [fhnw-iot](fhnw-iot) category files.
```bash
$ cd fhnw-iot
$ ../idea subject.txt input.txt output.txt domain.txt
```

### Cat feeder
```
Animal (cat, dog, cow, horse, ...)
Brightness (LDR, light sensor)
Power (relay for 12V or 230V, applicance, ...)
At school (classroom, hallway, mensa, ...)
```

> Idea: at school, if the cat wants food, switch on a dispenser.

### Weather warning
```
Weather (sun, rain, wind, ...)
Door/window state (magnetic switch)
Indicator (LEDs on a board, discrete options)
When cooking (boiling, baking, ...)
```

> Idea: detect heavy rain, if any window is open, show a warning in the kitchen.

## Tiles IoT example
Based on [this work](https://github.com/tilestoolkit/tiles-IoT-inventor-toolkit), (c) 2019 Tiles Technologies AS, licensed under [MIT License](https://github.com/tilestoolkit/tiles-IoT-inventor-toolkit/blob/master/LICENSE).

Check the predefined categories.
```
$ cat tiles-iot/index.txt
Things (Physical objects to be augmented with technology and interactivity.)
Sensors (Sensors that connect to a thing to register data from its surroundings.)
Feedback (Output feedback used by the object to communicate back to the user.)
Actions (Human gestures and object interactions to activate behaviors and routines.)
Services (Online services that exchange data with the objects, like web services, apps or remote sensors.)
Missions (The purpose, value or utility that your IoT idea provides to people.)
Criteria (Reflection criteria to help evaluate your IoT idea.)
Scenarios (Problems and challenges that your IoT idea is addressing.)
Personas (Target users for your IoT idea.)
```

Generate an idea using the [tiles-iot](tiles-iot) category files.
```bash
$ cd tiles-iot
$ ../idea things.txt sensors.txt feedback.txt
```

For details on their process, see [tilestoolkit.io](https://www.tilestoolkit.io) (or [buy the kit](https://www.tilestoolkit.io/buy-workshop-in-a-bag/)).
