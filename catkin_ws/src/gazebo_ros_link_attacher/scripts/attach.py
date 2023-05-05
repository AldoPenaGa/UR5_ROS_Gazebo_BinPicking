#!/usr/bin/env python
import sys
import rospy
from gazebo_ros_link_attacher.srv import Attach, AttachRequest, AttachResponse
class_to_attach=""
if len(sys.argv) != 1:
    class_to_attach=sys.argv[1]
else:
    class_to_attach='lego_X1-Y2-Z2-CHAMFER'     
   
if __name__ == '__main__':
    rospy.init_node('demo_attach_links')
    attach_srv = rospy.ServiceProxy('/link_attacher_node/attach',
                                    Attach)
    attach_srv.wait_for_service()
    
    # Link them
    rospy.loginfo("Acoplando objeto y pinzas")
    req = AttachRequest()
    req.model_name_1 = class_to_attach
    req.link_name_1 = "link"
    req.model_name_2 = "robot"
    req.link_name_2 = "wrist_3_link"

    attach_srv.call(req)
    # From the shell:
    """
rosservice call /link_attacher_node/attach "model_name_1: 'cube1'
link_name_1: 'link'
model_name_2: 'cube2'
link_name_2: 'link'"
    """
'''
    rospy.loginfo("Attaching cube2 and cube3")
    req = AttachRequest()
    req.model_name_1 = "cube2"
    req.link_name_1 = "link"
    req.model_name_2 = "cube3"
    req.link_name_2 = "link"

    attach_srv.call(req)

    rospy.loginfo("Attaching cube3 and cube1")
    req = AttachRequest()
    req.model_name_1 = "cube3"
    req.link_name_1 = "link"
    req.model_name_2 = "cube1"
    req.link_name_2 = "link"

    attach_srv.call(req)
'''
