// Generated by gencpp from file gazebo_ros_link_attacher/SetStaticResponse.msg
// DO NOT EDIT!


#ifndef GAZEBO_ROS_LINK_ATTACHER_MESSAGE_SETSTATICRESPONSE_H
#define GAZEBO_ROS_LINK_ATTACHER_MESSAGE_SETSTATICRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_ros_link_attacher
{
template <class ContainerAllocator>
struct SetStaticResponse_
{
  typedef SetStaticResponse_<ContainerAllocator> Type;

  SetStaticResponse_()
    : ok(false)  {
    }
  SetStaticResponse_(const ContainerAllocator& _alloc)
    : ok(false)  {
  (void)_alloc;
    }



   typedef uint8_t _ok_type;
  _ok_type ok;





  typedef boost::shared_ptr< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetStaticResponse_

typedef ::gazebo_ros_link_attacher::SetStaticResponse_<std::allocator<void> > SetStaticResponse;

typedef boost::shared_ptr< ::gazebo_ros_link_attacher::SetStaticResponse > SetStaticResponsePtr;
typedef boost::shared_ptr< ::gazebo_ros_link_attacher::SetStaticResponse const> SetStaticResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator1> & lhs, const ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator2> & rhs)
{
  return lhs.ok == rhs.ok;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator1> & lhs, const ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gazebo_ros_link_attacher

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f6da3883749771fac40d6deb24a8c02";
  }

  static const char* value(const ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f6da3883749771fULL;
  static const uint64_t static_value2 = 0xac40d6deb24a8c02ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_ros_link_attacher/SetStaticResponse";
  }

  static const char* value(const ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ok\n"
"\n"
;
  }

  static const char* value(const ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ok);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetStaticResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_ros_link_attacher::SetStaticResponse_<ContainerAllocator>& v)
  {
    s << indent << "ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ok);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_ROS_LINK_ATTACHER_MESSAGE_SETSTATICRESPONSE_H
