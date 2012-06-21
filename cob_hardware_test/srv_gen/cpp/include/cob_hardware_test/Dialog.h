/* Auto-generated by genmsg_cpp for file /u/fmw-ms/git/care-o-bot/cob_robots/cob_hardware_test/srv/Dialog.srv */
#ifndef COB_HARDWARE_TEST_SERVICE_DIALOG_H
#define COB_HARDWARE_TEST_SERVICE_DIALOG_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace cob_hardware_test
{
template <class ContainerAllocator>
struct DialogRequest_ {
  typedef DialogRequest_<ContainerAllocator> Type;

  DialogRequest_()
  : type(0)
  , message()
  {
  }

  DialogRequest_(const ContainerAllocator& _alloc)
  : type(0)
  , message(_alloc)
  {
  }

  typedef int8_t _type_type;
  int8_t type;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  message;


private:
  static const char* __s_getDataType_() { return "cob_hardware_test/DialogRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "4d1b00e5804ef4b599d862558e2d10eb"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "a01bcfd0fcb73d1ce9468534690c8d34"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "int8 type\n\
string message\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, type);
    ros::serialization::serialize(stream, message);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, type);
    ros::serialization::deserialize(stream, message);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(type);
    size += ros::serialization::serializationLength(message);
    return size;
  }

  typedef boost::shared_ptr< ::cob_hardware_test::DialogRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_hardware_test::DialogRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct DialogRequest
typedef  ::cob_hardware_test::DialogRequest_<std::allocator<void> > DialogRequest;

typedef boost::shared_ptr< ::cob_hardware_test::DialogRequest> DialogRequestPtr;
typedef boost::shared_ptr< ::cob_hardware_test::DialogRequest const> DialogRequestConstPtr;


template <class ContainerAllocator>
struct DialogResponse_ {
  typedef DialogResponse_<ContainerAllocator> Type;

  DialogResponse_()
  : answer(false)
  {
  }

  DialogResponse_(const ContainerAllocator& _alloc)
  : answer(false)
  {
  }

  typedef uint8_t _answer_type;
  uint8_t answer;


private:
  static const char* __s_getDataType_() { return "cob_hardware_test/DialogResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "00a50c1bd863054691f197c515f4e922"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "a01bcfd0fcb73d1ce9468534690c8d34"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "bool answer\n\
\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, answer);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, answer);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(answer);
    return size;
  }

  typedef boost::shared_ptr< ::cob_hardware_test::DialogResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_hardware_test::DialogResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct DialogResponse
typedef  ::cob_hardware_test::DialogResponse_<std::allocator<void> > DialogResponse;

typedef boost::shared_ptr< ::cob_hardware_test::DialogResponse> DialogResponsePtr;
typedef boost::shared_ptr< ::cob_hardware_test::DialogResponse const> DialogResponseConstPtr;

struct Dialog
{

typedef DialogRequest Request;
typedef DialogResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Dialog
} // namespace cob_hardware_test

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::cob_hardware_test::DialogRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::cob_hardware_test::DialogRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::cob_hardware_test::DialogRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4d1b00e5804ef4b599d862558e2d10eb";
  }

  static const char* value(const  ::cob_hardware_test::DialogRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4d1b00e5804ef4b5ULL;
  static const uint64_t static_value2 = 0x99d862558e2d10ebULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_hardware_test::DialogRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cob_hardware_test/DialogRequest";
  }

  static const char* value(const  ::cob_hardware_test::DialogRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::cob_hardware_test::DialogRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int8 type\n\
string message\n\
\n\
";
  }

  static const char* value(const  ::cob_hardware_test::DialogRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::cob_hardware_test::DialogResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::cob_hardware_test::DialogResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::cob_hardware_test::DialogResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "00a50c1bd863054691f197c515f4e922";
  }

  static const char* value(const  ::cob_hardware_test::DialogResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x00a50c1bd8630546ULL;
  static const uint64_t static_value2 = 0x91f197c515f4e922ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_hardware_test::DialogResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cob_hardware_test/DialogResponse";
  }

  static const char* value(const  ::cob_hardware_test::DialogResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::cob_hardware_test::DialogResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool answer\n\
\n\
\n\
";
  }

  static const char* value(const  ::cob_hardware_test::DialogResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::cob_hardware_test::DialogResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::cob_hardware_test::DialogRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.type);
    stream.next(m.message);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct DialogRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::cob_hardware_test::DialogResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.answer);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct DialogResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<cob_hardware_test::Dialog> {
  static const char* value() 
  {
    return "a01bcfd0fcb73d1ce9468534690c8d34";
  }

  static const char* value(const cob_hardware_test::Dialog&) { return value(); } 
};

template<>
struct DataType<cob_hardware_test::Dialog> {
  static const char* value() 
  {
    return "cob_hardware_test/Dialog";
  }

  static const char* value(const cob_hardware_test::Dialog&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<cob_hardware_test::DialogRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a01bcfd0fcb73d1ce9468534690c8d34";
  }

  static const char* value(const cob_hardware_test::DialogRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<cob_hardware_test::DialogRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cob_hardware_test/Dialog";
  }

  static const char* value(const cob_hardware_test::DialogRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<cob_hardware_test::DialogResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a01bcfd0fcb73d1ce9468534690c8d34";
  }

  static const char* value(const cob_hardware_test::DialogResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<cob_hardware_test::DialogResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cob_hardware_test/Dialog";
  }

  static const char* value(const cob_hardware_test::DialogResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // COB_HARDWARE_TEST_SERVICE_DIALOG_H

