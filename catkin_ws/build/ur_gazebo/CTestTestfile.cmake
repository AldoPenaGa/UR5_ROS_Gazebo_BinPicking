# CMake generated Testfile for 
# Source directory: /home/ap/UR5-Pick-and-Place-Simulation/catkin_ws/src/robot/universal_robot/ur_gazebo
# Build directory: /home/ap/UR5-Pick-and-Place-Simulation/catkin_ws/build/ur_gazebo
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_ur_gazebo_roslaunch-check_tests_roslaunch_test.xml "/home/ap/UR5-Pick-and-Place-Simulation/catkin_ws/build/ur_gazebo/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/ap/UR5-Pick-and-Place-Simulation/catkin_ws/build/ur_gazebo/test_results/ur_gazebo/roslaunch-check_tests_roslaunch_test.xml.xml" "--return-code" "/home/ap/.local/lib/python3.8/site-packages/cmake/data/bin/cmake -E make_directory /home/ap/UR5-Pick-and-Place-Simulation/catkin_ws/build/ur_gazebo/test_results/ur_gazebo" "/opt/ros/noetic/share/roslaunch/cmake/../scripts/roslaunch-check -o \"/home/ap/UR5-Pick-and-Place-Simulation/catkin_ws/build/ur_gazebo/test_results/ur_gazebo/roslaunch-check_tests_roslaunch_test.xml.xml\" \"/home/ap/UR5-Pick-and-Place-Simulation/catkin_ws/src/robot/universal_robot/ur_gazebo/tests/roslaunch_test.xml\" ")
set_tests_properties(_ctest_ur_gazebo_roslaunch-check_tests_roslaunch_test.xml PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslaunch/cmake/roslaunch-extras.cmake;66;catkin_run_tests_target;/home/ap/UR5-Pick-and-Place-Simulation/catkin_ws/src/robot/universal_robot/ur_gazebo/CMakeLists.txt;11;roslaunch_add_file_check;/home/ap/UR5-Pick-and-Place-Simulation/catkin_ws/src/robot/universal_robot/ur_gazebo/CMakeLists.txt;0;")
subdirs("gtest")
