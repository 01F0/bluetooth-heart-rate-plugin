This project involves creating a OBS Studio plugin for supporting the Bluetooth heart rate service.
I'm planning to use the Qt Bluetooth library. This will make things pretty easy since OBS Studio already uses Qt.

[This plugin](https://github.com/01F0/pulse-sensor-amped-plugin) sort-of does the same thing.
However, I would be nice to get the heart rate through a wireless connection and support more devices. 

Right now, I'm using **Polar H7** for debugging, but I think the Bluetooth protocol is generic enough to support other devices.

## Goals

* Version 1: Make the connection between OBS Studio and the Bluetooth heart rate service, show BPM on screen.

* Version 2: More fun stuff like.. max BPM, graphs, calorie count!
