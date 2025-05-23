# motion_Tracker_Data_Transmission
Code to spin up Ros Nodes based on data received from motion tracking system

Instructions:
Useful:
Github link to optitrack:
https://github.com/OptiTrack/mocap4ros2_optitrack  	

Set up motion on camera pc, ensure streaming settings match .yaml file

cd into workspace (mocap_ws for now)
Setup two terminals
Both terminals:
source /opt/ros/jazzy/setup.bash (or respective ros2 version)

Terminal 1:
Colcon build –symlink-Install
ros2 launch mocap4r2_optitrack_driver optitrack2.launch.py

Terminal 2:
ros2 lifecycle set /mocap4r2_optitrack_driver_node activate
ros2 topic echo /rigid_bodies
This will display the objects name, x,y,z and orientation on the terminal 2 screen





