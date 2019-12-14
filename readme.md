#Project Rethink
Welcome to the GitHub Repository for Project Rethink.

##Instructions to Run Project
1. Clone this repository to your workspace.
2. Check to make sure you have installed the following dependencies on your PC
```
sudo apt-get install libzbar0
pip install pyzbar
```
3. Run the following launch files, in order, on the ROSBot
```
roslaunch rosbot_ekf all.launch
roslaunch tutorial_pkg rethink_rosbot.launch
```
4. Run the following on your PC
```
roslaunch tutorial_pkg rethink_pc.launch
```

##Instructions to Explore Unknown Spaces
On the ROSBot, run
```
roslaunch rosbot_ekf all.launch
roslaunch tutorial_pkg rethink_explore.launch

##Contributors
* Wei Xu
* Yida Niu
* Theo Wiklund
* James Tyler