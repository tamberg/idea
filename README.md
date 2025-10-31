# Idea
A simple idea generator — picks a random line each from n files.

> Got a card deck to include? [Add an issue](../../issues/new).

- [Basic example](#basic-example)
- [FHNW IoT example](#fhnw-iot-example)
- [Tiles IoT example](#tiles-iot-example)

## Build the tool
On Mac or Linux.

```console
$ gcc -o idea idea.c
$ ./idea
```

```
usage: ./idea file-1 file-2 ... file-n
```

## Basic example
Create a file for each category.
```console
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
Developed for [this course](https://github.com/tamberg/fhnw-iot) at [FHNW](https://fhnw.ch) and [this course](https://github.com/tamberg/mse-tsm-mobcom) at [MSE](https://www.msengineering.ch), based on [this hardware](https://github.com/fhnw-imvs/fhnw-iot-library/tree/main).

Check the predefined categories.
```console
$ cat fhnw-iot/index.txt
```

```
Domain (Application domain, field.)
Input (Sensor input, trigger.)
Output (Actuator output, action.)
Subject (Who is subjected to it.)
```

Generate an idea using the [fhnw-iot](fhnw-iot) category files.
```console
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
```console
$ cat tiles-iot/index.txt
```

```
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
```console
$ cd tiles-iot
$ ../idea sensors.txt things.txt feedback.txt
```

For details on their process, see [tilestoolkit.io](https://www.tilestoolkit.io).

### Wearable thermometer
```
Temperature (Temperature of the object or the ambient in its surroundings.)
Jewelry (A piece of jewelry, for example a ring, an armlet or a necklace.)
Custom feedback (Sketch or describe your new feedback here.)
```
> Idea: Something like the [Ava fertility tracker](https://www.avawomen.com).
