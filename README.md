<p align="center">
  <h2 align="center">UR5 Bin Picking in Gazebo using ROS</h2>

  <p align="center">
  Improvements made to pietrolechthaler's and his group project titled: "UR5 Pick and Place Simulation in Ros/Gazebo". This project has been modified to serve as evaluation in the subject Robot Kinematics and Dynamics taught in University of Americas Puebla
  <br>University of the Americas Puebla - Prof. Dr. César Martínez Torres. "https://www.linkedin.com/in/c%C3%A9sar-martinez-torres-617b5347/?originalSubdomain=mx>" 
  </p>
</p>
<br>

<img src="https://github.com/AldoPenaGa/UR5_ROS_Gazebo_BinPicking/blob/main/intro.gif">

## Table of contents
- [Credits](#credits)
- [Description](#description)
- [GIF's](#gifs)
- [Requirements](#requirements)
- [Folder](#folder)
- [Setup](#setup)
- [Instructions](#instructions)
- [Contributors](#contributors)

### Credits
It is vital to mention the importance and influence of the project developed by students Davice Cerpelloni, Leonardo Collizzolli, Pietro Lechthaler and Stefano Rizzi from the University of Trento, who were under the tutelage of Dr. Luigi Palopoli and Dr. Niculae Sebe, titled "UR5 Pick and Place Simulation in Ros/Gazebo". This project is available at https://github.com/pietrolechthaler/UR5-Pick-and-Place-Simulation. It is crucial to note that our project is largely based on theirs, however, there are some variations and advances. Likewise, we appreciate their contribution and give due credit to their work.

### Description
This repository demonstrates UR5 bin-picking in ROS and Gazebo. The UR5 uses a Xbox Kinect camera to detect eleven types of LEGO Bricks, once this is done, it publishes its position and orientation. 

The goals of this project are:
- Detect through a model pre-trained in YOLO v5, the position and orientation of the LEGO bricks.
- Pick, from a space previously designated that could be seen as a bin (named: "Área de generación de piezas"), the pieces and place them in the storage area (named: "Área de almacenamiento").
- The robotic arm must be able to perform the place of the pieces nevertheless the configuration of the pieces located in the bin. 

<img src="https://github.com/AldoPenaGa/UR5_ROS_Gazebo_BinPicking/blob/main/orientation.gif">

### Folder
```
UR5-Pick-and-Place-Simulation/catkin_ws/
├── levelManager
├── vision
├── motion_planning
├── gazebo_ros_link_attacher
├── robot
```
- `levelManager:` this package launches the world and sets up the bricks, there are different levels depending on the needs of the user.
- `vision:` this package recognizes the object type, the position and the orientation of each brick displayed.
- `motion_planning:` the task performed by this package is focused on planning the trajectories and with so, moving the LEGO bricks with the UR5 arm manipulator.
- `gazebo_ros_link_attacher:` A gazebo plugin definable from URDF to inform a client of a collision with an object and responsible of the attach and dettach of the grip.
- `robot:` this package defines the robot and its structure with the appropiate PID settings.


### Requirements

For running each sample code:
- `ROS Noetic:` http://wiki.ros.org/noetic/Installation
- `Gazebo:` https://classic.gazebosim.org/tutorials?tut=ros_installing&cat=connect_ros
- `Yolov5` https://github.com/ultralytics/yolov5
- `Catkin` https://catkin-tools.readthedocs.io/en/latest/

### Setup

After installing the libraries and programs listed above:

1- Clone this repo:
```
git clone https://github.com/pietrolechthaler/UR5-Pick-and-Place-Simulation/
```

2- Setup the project:
```
cd UR5-Pick-and-Place-Simulation/catkin_ws
source /opt/ros/noetic/setup.bash
catkin build
source devel/setup.bash
echo "source $PWD/devel/setup.bash" >> $HOME/.bashrc
sudo apt-get install ros-noetic-effort-controllers
```

3- Clone and install [YoloV5](https://github.com/ultralytics/yolov5):
```
cd ~
git clone https://github.com/ultralytics/yolov5
cd yolov5
pip3 install -r requirements.txt
```
### Instructions

Launch the world:
```
roslaunch levelManager lego_world.launch
```
Choose the level (from 1 to 4):
```
rosrun levelManager levelManager.py -l [level]
```
Start the planning of the trajectories and the kinematics:
```
rosrun motion_planning motion_planning.py
```
Start the vision algorithm:
```
rosrun vision lego-vision.py -show
```
- `-show` : It is extremely important to write the -show if the figure showing the orientation of the pieces is needed.

### Contributors

| Name                          | ID'S   | Github                               |
|-------------------------------|--------|--------------------------------------|
| Aldo Oziel Peña Gamboa        | 169382 | https://github.com/davidecerpelloni  |
| Abner Zapién García           | 160262 | https://github.com/AbnerZapien       |
| Jesús Eduardo Ávila Maldonado | 170423 | https://github.com/Eduardoam12       |
| Henry Antonio Gamas Mijango   | 170964 | https://github.com/HenriGM           |
