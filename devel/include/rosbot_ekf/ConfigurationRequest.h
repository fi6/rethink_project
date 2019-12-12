// Generated by gencpp from file rosbot_ekf/ConfigurationRequest.msg
// DO NOT EDIT!


#ifndef ROSBOT_EKF_MESSAGE_CONFIGURATIONREQUEST_H
#define ROSBOT_EKF_MESSAGE_CONFIGURATIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosbot_ekf
{
template <class ContainerAllocator>
struct ConfigurationRequest_
{
  typedef ConfigurationRequest_<ContainerAllocator> Type;

  ConfigurationRequest_()
    : command()
    , data()  {
    }
  ConfigurationRequest_(const ContainerAllocator& _alloc)
    : command(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigurationRequest_

typedef ::rosbot_ekf::ConfigurationRequest_<std::allocator<void> > ConfigurationRequest;

typedef boost::shared_ptr< ::rosbot_ekf::ConfigurationRequest > ConfigurationRequestPtr;
typedef boost::shared_ptr< ::rosbot_ekf::ConfigurationRequest const> ConfigurationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosbot_ekf

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'rosbot_ekf': ['/home/husarion/husarion_workspace/src/rosbot_ekf/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b116973260063b7b02b501a288810d3d";
  }

  static const char* value(const ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb116973260063b7bULL;
  static const uint64_t static_value2 = 0x02b501a288810d3dULL;
};

template<class ContainerAllocator>
struct DataType< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosbot_ekf/ConfigurationRequest";
  }

  static const char* value(const ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string command\n\
string data\n\
";
  }

  static const char* value(const ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigurationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosbot_ekf::ConfigurationRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSBOT_EKF_MESSAGE_CONFIGURATIONREQUEST_H
