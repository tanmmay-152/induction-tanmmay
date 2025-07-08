// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from coordinate_follower:action/FollowTarget.idl
// generated code does not contain a copyright notice

#ifndef COORDINATE_FOLLOWER__ACTION__DETAIL__FOLLOW_TARGET__STRUCT_HPP_
#define COORDINATE_FOLLOWER__ACTION__DETAIL__FOLLOW_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__coordinate_follower__action__FollowTarget_Goal __attribute__((deprecated))
#else
# define DEPRECATED__coordinate_follower__action__FollowTarget_Goal __declspec(deprecated)
#endif

namespace coordinate_follower
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTarget_Goal_
{
  using Type = FollowTarget_Goal_<ContainerAllocator>;

  explicit FollowTarget_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit FollowTarget_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_Goal
    std::shared_ptr<coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_Goal
    std::shared_ptr<coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTarget_Goal_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTarget_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTarget_Goal_

// alias to use template instance with default allocator
using FollowTarget_Goal =
  coordinate_follower::action::FollowTarget_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace coordinate_follower


#ifndef _WIN32
# define DEPRECATED__coordinate_follower__action__FollowTarget_Result __attribute__((deprecated))
#else
# define DEPRECATED__coordinate_follower__action__FollowTarget_Result __declspec(deprecated)
#endif

namespace coordinate_follower
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTarget_Result_
{
  using Type = FollowTarget_Result_<ContainerAllocator>;

  explicit FollowTarget_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit FollowTarget_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coordinate_follower::action::FollowTarget_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const coordinate_follower::action::FollowTarget_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_Result
    std::shared_ptr<coordinate_follower::action::FollowTarget_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_Result
    std::shared_ptr<coordinate_follower::action::FollowTarget_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTarget_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTarget_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTarget_Result_

// alias to use template instance with default allocator
using FollowTarget_Result =
  coordinate_follower::action::FollowTarget_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace coordinate_follower


#ifndef _WIN32
# define DEPRECATED__coordinate_follower__action__FollowTarget_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__coordinate_follower__action__FollowTarget_Feedback __declspec(deprecated)
#endif

namespace coordinate_follower
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTarget_Feedback_
{
  using Type = FollowTarget_Feedback_<ContainerAllocator>;

  explicit FollowTarget_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit FollowTarget_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_Feedback
    std::shared_ptr<coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_Feedback
    std::shared_ptr<coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTarget_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTarget_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTarget_Feedback_

// alias to use template instance with default allocator
using FollowTarget_Feedback =
  coordinate_follower::action::FollowTarget_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace coordinate_follower


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "coordinate_follower/action/detail/follow_target__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__coordinate_follower__action__FollowTarget_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__coordinate_follower__action__FollowTarget_SendGoal_Request __declspec(deprecated)
#endif

namespace coordinate_follower
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTarget_SendGoal_Request_
{
  using Type = FollowTarget_SendGoal_Request_<ContainerAllocator>;

  explicit FollowTarget_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit FollowTarget_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const coordinate_follower::action::FollowTarget_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coordinate_follower::action::FollowTarget_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const coordinate_follower::action::FollowTarget_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_SendGoal_Request
    std::shared_ptr<coordinate_follower::action::FollowTarget_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_SendGoal_Request
    std::shared_ptr<coordinate_follower::action::FollowTarget_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTarget_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTarget_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTarget_SendGoal_Request_

// alias to use template instance with default allocator
using FollowTarget_SendGoal_Request =
  coordinate_follower::action::FollowTarget_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace coordinate_follower


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__coordinate_follower__action__FollowTarget_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__coordinate_follower__action__FollowTarget_SendGoal_Response __declspec(deprecated)
#endif

namespace coordinate_follower
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTarget_SendGoal_Response_
{
  using Type = FollowTarget_SendGoal_Response_<ContainerAllocator>;

  explicit FollowTarget_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit FollowTarget_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coordinate_follower::action::FollowTarget_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const coordinate_follower::action::FollowTarget_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_SendGoal_Response
    std::shared_ptr<coordinate_follower::action::FollowTarget_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_SendGoal_Response
    std::shared_ptr<coordinate_follower::action::FollowTarget_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTarget_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTarget_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTarget_SendGoal_Response_

// alias to use template instance with default allocator
using FollowTarget_SendGoal_Response =
  coordinate_follower::action::FollowTarget_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace coordinate_follower

namespace coordinate_follower
{

namespace action
{

struct FollowTarget_SendGoal
{
  using Request = coordinate_follower::action::FollowTarget_SendGoal_Request;
  using Response = coordinate_follower::action::FollowTarget_SendGoal_Response;
};

}  // namespace action

}  // namespace coordinate_follower


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__coordinate_follower__action__FollowTarget_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__coordinate_follower__action__FollowTarget_GetResult_Request __declspec(deprecated)
#endif

namespace coordinate_follower
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTarget_GetResult_Request_
{
  using Type = FollowTarget_GetResult_Request_<ContainerAllocator>;

  explicit FollowTarget_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit FollowTarget_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coordinate_follower::action::FollowTarget_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const coordinate_follower::action::FollowTarget_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_GetResult_Request
    std::shared_ptr<coordinate_follower::action::FollowTarget_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_GetResult_Request
    std::shared_ptr<coordinate_follower::action::FollowTarget_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTarget_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTarget_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTarget_GetResult_Request_

// alias to use template instance with default allocator
using FollowTarget_GetResult_Request =
  coordinate_follower::action::FollowTarget_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace coordinate_follower


// Include directives for member types
// Member 'result'
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__coordinate_follower__action__FollowTarget_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__coordinate_follower__action__FollowTarget_GetResult_Response __declspec(deprecated)
#endif

namespace coordinate_follower
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTarget_GetResult_Response_
{
  using Type = FollowTarget_GetResult_Response_<ContainerAllocator>;

  explicit FollowTarget_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit FollowTarget_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    coordinate_follower::action::FollowTarget_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const coordinate_follower::action::FollowTarget_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coordinate_follower::action::FollowTarget_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const coordinate_follower::action::FollowTarget_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_GetResult_Response
    std::shared_ptr<coordinate_follower::action::FollowTarget_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_GetResult_Response
    std::shared_ptr<coordinate_follower::action::FollowTarget_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTarget_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTarget_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTarget_GetResult_Response_

// alias to use template instance with default allocator
using FollowTarget_GetResult_Response =
  coordinate_follower::action::FollowTarget_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace coordinate_follower

namespace coordinate_follower
{

namespace action
{

struct FollowTarget_GetResult
{
  using Request = coordinate_follower::action::FollowTarget_GetResult_Request;
  using Response = coordinate_follower::action::FollowTarget_GetResult_Response;
};

}  // namespace action

}  // namespace coordinate_follower


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__coordinate_follower__action__FollowTarget_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__coordinate_follower__action__FollowTarget_FeedbackMessage __declspec(deprecated)
#endif

namespace coordinate_follower
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTarget_FeedbackMessage_
{
  using Type = FollowTarget_FeedbackMessage_<ContainerAllocator>;

  explicit FollowTarget_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit FollowTarget_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const coordinate_follower::action::FollowTarget_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coordinate_follower::action::FollowTarget_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const coordinate_follower::action::FollowTarget_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coordinate_follower::action::FollowTarget_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coordinate_follower::action::FollowTarget_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coordinate_follower::action::FollowTarget_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coordinate_follower::action::FollowTarget_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_FeedbackMessage
    std::shared_ptr<coordinate_follower::action::FollowTarget_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coordinate_follower__action__FollowTarget_FeedbackMessage
    std::shared_ptr<coordinate_follower::action::FollowTarget_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTarget_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTarget_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTarget_FeedbackMessage_

// alias to use template instance with default allocator
using FollowTarget_FeedbackMessage =
  coordinate_follower::action::FollowTarget_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace coordinate_follower

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace coordinate_follower
{

namespace action
{

struct FollowTarget
{
  /// The goal message defined in the action definition.
  using Goal = coordinate_follower::action::FollowTarget_Goal;
  /// The result message defined in the action definition.
  using Result = coordinate_follower::action::FollowTarget_Result;
  /// The feedback message defined in the action definition.
  using Feedback = coordinate_follower::action::FollowTarget_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = coordinate_follower::action::FollowTarget_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = coordinate_follower::action::FollowTarget_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = coordinate_follower::action::FollowTarget_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct FollowTarget FollowTarget;

}  // namespace action

}  // namespace coordinate_follower

#endif  // COORDINATE_FOLLOWER__ACTION__DETAIL__FOLLOW_TARGET__STRUCT_HPP_
