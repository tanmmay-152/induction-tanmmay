// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from coordinate_follower:action/FollowTarget.idl
// generated code does not contain a copyright notice

#ifndef COORDINATE_FOLLOWER__ACTION__DETAIL__FOLLOW_TARGET__BUILDER_HPP_
#define COORDINATE_FOLLOWER__ACTION__DETAIL__FOLLOW_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "coordinate_follower/action/detail/follow_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace coordinate_follower
{

namespace action
{

namespace builder
{

class Init_FollowTarget_Goal_y
{
public:
  explicit Init_FollowTarget_Goal_y(::coordinate_follower::action::FollowTarget_Goal & msg)
  : msg_(msg)
  {}
  ::coordinate_follower::action::FollowTarget_Goal y(::coordinate_follower::action::FollowTarget_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_Goal msg_;
};

class Init_FollowTarget_Goal_x
{
public:
  Init_FollowTarget_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_Goal_y x(::coordinate_follower::action::FollowTarget_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_FollowTarget_Goal_y(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coordinate_follower::action::FollowTarget_Goal>()
{
  return coordinate_follower::action::builder::Init_FollowTarget_Goal_x();
}

}  // namespace coordinate_follower


namespace coordinate_follower
{

namespace action
{

namespace builder
{

class Init_FollowTarget_Result_message
{
public:
  explicit Init_FollowTarget_Result_message(::coordinate_follower::action::FollowTarget_Result & msg)
  : msg_(msg)
  {}
  ::coordinate_follower::action::FollowTarget_Result message(::coordinate_follower::action::FollowTarget_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_Result msg_;
};

class Init_FollowTarget_Result_success
{
public:
  Init_FollowTarget_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_Result_message success(::coordinate_follower::action::FollowTarget_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_FollowTarget_Result_message(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coordinate_follower::action::FollowTarget_Result>()
{
  return coordinate_follower::action::builder::Init_FollowTarget_Result_success();
}

}  // namespace coordinate_follower


namespace coordinate_follower
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coordinate_follower::action::FollowTarget_Feedback>()
{
  return ::coordinate_follower::action::FollowTarget_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace coordinate_follower


namespace coordinate_follower
{

namespace action
{

namespace builder
{

class Init_FollowTarget_SendGoal_Request_goal
{
public:
  explicit Init_FollowTarget_SendGoal_Request_goal(::coordinate_follower::action::FollowTarget_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::coordinate_follower::action::FollowTarget_SendGoal_Request goal(::coordinate_follower::action::FollowTarget_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_SendGoal_Request msg_;
};

class Init_FollowTarget_SendGoal_Request_goal_id
{
public:
  Init_FollowTarget_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_SendGoal_Request_goal goal_id(::coordinate_follower::action::FollowTarget_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowTarget_SendGoal_Request_goal(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coordinate_follower::action::FollowTarget_SendGoal_Request>()
{
  return coordinate_follower::action::builder::Init_FollowTarget_SendGoal_Request_goal_id();
}

}  // namespace coordinate_follower


namespace coordinate_follower
{

namespace action
{

namespace builder
{

class Init_FollowTarget_SendGoal_Response_stamp
{
public:
  explicit Init_FollowTarget_SendGoal_Response_stamp(::coordinate_follower::action::FollowTarget_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::coordinate_follower::action::FollowTarget_SendGoal_Response stamp(::coordinate_follower::action::FollowTarget_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_SendGoal_Response msg_;
};

class Init_FollowTarget_SendGoal_Response_accepted
{
public:
  Init_FollowTarget_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_SendGoal_Response_stamp accepted(::coordinate_follower::action::FollowTarget_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FollowTarget_SendGoal_Response_stamp(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coordinate_follower::action::FollowTarget_SendGoal_Response>()
{
  return coordinate_follower::action::builder::Init_FollowTarget_SendGoal_Response_accepted();
}

}  // namespace coordinate_follower


namespace coordinate_follower
{

namespace action
{

namespace builder
{

class Init_FollowTarget_GetResult_Request_goal_id
{
public:
  Init_FollowTarget_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::coordinate_follower::action::FollowTarget_GetResult_Request goal_id(::coordinate_follower::action::FollowTarget_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coordinate_follower::action::FollowTarget_GetResult_Request>()
{
  return coordinate_follower::action::builder::Init_FollowTarget_GetResult_Request_goal_id();
}

}  // namespace coordinate_follower


namespace coordinate_follower
{

namespace action
{

namespace builder
{

class Init_FollowTarget_GetResult_Response_result
{
public:
  explicit Init_FollowTarget_GetResult_Response_result(::coordinate_follower::action::FollowTarget_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::coordinate_follower::action::FollowTarget_GetResult_Response result(::coordinate_follower::action::FollowTarget_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_GetResult_Response msg_;
};

class Init_FollowTarget_GetResult_Response_status
{
public:
  Init_FollowTarget_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_GetResult_Response_result status(::coordinate_follower::action::FollowTarget_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FollowTarget_GetResult_Response_result(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coordinate_follower::action::FollowTarget_GetResult_Response>()
{
  return coordinate_follower::action::builder::Init_FollowTarget_GetResult_Response_status();
}

}  // namespace coordinate_follower


namespace coordinate_follower
{

namespace action
{

namespace builder
{

class Init_FollowTarget_FeedbackMessage_feedback
{
public:
  explicit Init_FollowTarget_FeedbackMessage_feedback(::coordinate_follower::action::FollowTarget_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::coordinate_follower::action::FollowTarget_FeedbackMessage feedback(::coordinate_follower::action::FollowTarget_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_FeedbackMessage msg_;
};

class Init_FollowTarget_FeedbackMessage_goal_id
{
public:
  Init_FollowTarget_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTarget_FeedbackMessage_feedback goal_id(::coordinate_follower::action::FollowTarget_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowTarget_FeedbackMessage_feedback(msg_);
  }

private:
  ::coordinate_follower::action::FollowTarget_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::coordinate_follower::action::FollowTarget_FeedbackMessage>()
{
  return coordinate_follower::action::builder::Init_FollowTarget_FeedbackMessage_goal_id();
}

}  // namespace coordinate_follower

#endif  // COORDINATE_FOLLOWER__ACTION__DETAIL__FOLLOW_TARGET__BUILDER_HPP_
