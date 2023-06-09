// Generated by gencpp from file gazebo_ros_link_attacher/AttachRequest.msg
// DO NOT EDIT!


#ifndef GAZEBO_ROS_LINK_ATTACHER_MESSAGE_ATTACHREQUEST_H
#define GAZEBO_ROS_LINK_ATTACHER_MESSAGE_ATTACHREQUEST_H


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
struct AttachRequest_
{
  typedef AttachRequest_<ContainerAllocator> Type;

  AttachRequest_()
    : model_name_1()
    , link_name_1()
    , model_name_2()
    , link_name_2()  {
    }
  AttachRequest_(const ContainerAllocator& _alloc)
    : model_name_1(_alloc)
    , link_name_1(_alloc)
    , model_name_2(_alloc)
    , link_name_2(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _model_name_1_type;
  _model_name_1_type model_name_1;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _link_name_1_type;
  _link_name_1_type link_name_1;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _model_name_2_type;
  _model_name_2_type model_name_2;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _link_name_2_type;
  _link_name_2_type link_name_2;





  typedef boost::shared_ptr< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AttachRequest_

typedef ::gazebo_ros_link_attacher::AttachRequest_<std::allocator<void> > AttachRequest;

typedef boost::shared_ptr< ::gazebo_ros_link_attacher::AttachRequest > AttachRequestPtr;
typedef boost::shared_ptr< ::gazebo_ros_link_attacher::AttachRequest const> AttachRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator1> & lhs, const ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator2> & rhs)
{
  return lhs.model_name_1 == rhs.model_name_1 &&
    lhs.link_name_1 == rhs.link_name_1 &&
    lhs.model_name_2 == rhs.model_name_2 &&
    lhs.link_name_2 == rhs.link_name_2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator1> & lhs, const ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gazebo_ros_link_attacher

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ff39d0bc8e054b10e21a2f298cb7fb05";
  }

  static const char* value(const ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xff39d0bc8e054b10ULL;
  static const uint64_t static_value2 = 0xe21a2f298cb7fb05ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_ros_link_attacher/AttachRequest";
  }

  static const char* value(const ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string model_name_1\n"
"string link_name_1\n"
"string model_name_2\n"
"string link_name_2\n"
;
  }

  static const char* value(const ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_name_1);
      stream.next(m.link_name_1);
      stream.next(m.model_name_2);
      stream.next(m.link_name_2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AttachRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_ros_link_attacher::AttachRequest_<ContainerAllocator>& v)
  {
    s << indent << "model_name_1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.model_name_1);
    s << indent << "link_name_1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.link_name_1);
    s << indent << "model_name_2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.model_name_2);
    s << indent << "link_name_2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.link_name_2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_ROS_LINK_ATTACHER_MESSAGE_ATTACHREQUEST_H
