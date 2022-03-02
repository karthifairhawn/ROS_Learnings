# Robot Operating System

### Build
From root dir -  `colcon build`

### To run packages from workspace
1. `. install/build.bash`

### Parameters 

`1. ros2 param list`  - List all active parameters
`2. ros2 param list /my_node` - Particular nodes paramter list
`3. ros param get /my_node use_sim_time` - Get particular nodes paramter infrmation.`
`4. os2 param set turtlesim background_g 100` - Set Parameter Information
`5. ros param delete /my_node my_string` - To delete a nodes paramter (Conditional)`
`6. ros2 param describe turtlesim background_g - Describe paramter information.
`7. ros param dump /my_node` - This command will print out all of the parameters on a particular node in a YAML file format. The output of this command can then be used to re-run the node with the same parameters later:
`8. ros param load /my_node my_node.yaml` - This command will load the values of the parameters from a YAML file into a particular node. That is, this command can reload values at runtime that were dumped out by ros2 param dump:


### Topic

`1. ros2 topic list` - List all topics
`2. ros2 topic type /turtle1/cmd_vel` - Types on a particular topic.
`3. ros2 topic pub  /turtle1/cmd_vel geometry_msgs/msg/Twist "linear:`
  `x: 2.0`
  `y: 0.0`
  `z: 0.0`
`angular:`
 ` x: 0.0`
  `y: 0.0`
  `z: 2.0" ` - To publish to a topic.
`4.ros2 topic echo /turtle1/pose` - Echo topic published info
`5 ros2 topic hz /turtle1/pose` - To get publish rate of particular topic


### Service
`1. ros2 service call /clear std_srvs/srv/Empty` - Calling a service
`2. ros2 service list` - List all Services


### Interfaces

1. `ros2 interface show turtlesim/msg/MainBG` - To view a msg interface

 2. Creating new interace example
  - In the tutorial_interfaces/msg directory you just created, make a new file called Num.msg with one line of code     declaring its data structure:
  `int64 num`
- Back in the tutorial_interfaces/srv directory you just created, make a new file called AddThreeInts.srv with the following request and response structure:
    ```
    int64 a

    int64 b

    int64 c

    ---

    int64 sum

    ```
- To convert the interfaces you defined into language-specific code (like C++ and Python) so that they can be used in those languages, add the following lines to CMakeLists.txt:
 
   ```
   find_package(rosidl_default_generators REQUIRED)

  rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/Num.msg"
    "srv/AddThreeInts.srv"
  )
  ```
- Because the interfaces rely on rosidl_default_generators for generating language-specific code, you need to declare a dependency on it. Add the following lines to package.xml
  ```
  <build_depend>rosidl_default_generators</build_depend>

  <exec_depend>rosidl_default_runtime</exec_depend>

  <member_of_group>rosidl_interface_packages</member_of_group>
  ```
---


