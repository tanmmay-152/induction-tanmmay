// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from coordinate_follower:action/FollowTarget.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "coordinate_follower/action/detail/follow_target__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowTarget_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_Goal_type_support_ids_t;

static const _FollowTarget_Goal_type_support_ids_t _FollowTarget_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowTarget_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowTarget_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowTarget_Goal_type_support_symbol_names_t _FollowTarget_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coordinate_follower, action, FollowTarget_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coordinate_follower, action, FollowTarget_Goal)),
  }
};

typedef struct _FollowTarget_Goal_type_support_data_t
{
  void * data[2];
} _FollowTarget_Goal_type_support_data_t;

static _FollowTarget_Goal_type_support_data_t _FollowTarget_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowTarget_Goal_message_typesupport_map = {
  2,
  "coordinate_follower",
  &_FollowTarget_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_FollowTarget_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_FollowTarget_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowTarget_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coordinate_follower

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coordinate_follower::action::FollowTarget_Goal>()
{
  return &::coordinate_follower::action::rosidl_typesupport_cpp::FollowTarget_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coordinate_follower, action, FollowTarget_Goal)() {
  return get_message_type_support_handle<coordinate_follower::action::FollowTarget_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowTarget_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_Result_type_support_ids_t;

static const _FollowTarget_Result_type_support_ids_t _FollowTarget_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowTarget_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowTarget_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowTarget_Result_type_support_symbol_names_t _FollowTarget_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coordinate_follower, action, FollowTarget_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coordinate_follower, action, FollowTarget_Result)),
  }
};

typedef struct _FollowTarget_Result_type_support_data_t
{
  void * data[2];
} _FollowTarget_Result_type_support_data_t;

static _FollowTarget_Result_type_support_data_t _FollowTarget_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowTarget_Result_message_typesupport_map = {
  2,
  "coordinate_follower",
  &_FollowTarget_Result_message_typesupport_ids.typesupport_identifier[0],
  &_FollowTarget_Result_message_typesupport_symbol_names.symbol_name[0],
  &_FollowTarget_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowTarget_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coordinate_follower

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coordinate_follower::action::FollowTarget_Result>()
{
  return &::coordinate_follower::action::rosidl_typesupport_cpp::FollowTarget_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coordinate_follower, action, FollowTarget_Result)() {
  return get_message_type_support_handle<coordinate_follower::action::FollowTarget_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowTarget_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_Feedback_type_support_ids_t;

static const _FollowTarget_Feedback_type_support_ids_t _FollowTarget_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowTarget_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowTarget_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowTarget_Feedback_type_support_symbol_names_t _FollowTarget_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coordinate_follower, action, FollowTarget_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coordinate_follower, action, FollowTarget_Feedback)),
  }
};

typedef struct _FollowTarget_Feedback_type_support_data_t
{
  void * data[2];
} _FollowTarget_Feedback_type_support_data_t;

static _FollowTarget_Feedback_type_support_data_t _FollowTarget_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowTarget_Feedback_message_typesupport_map = {
  2,
  "coordinate_follower",
  &_FollowTarget_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_FollowTarget_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_FollowTarget_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowTarget_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coordinate_follower

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coordinate_follower::action::FollowTarget_Feedback>()
{
  return &::coordinate_follower::action::rosidl_typesupport_cpp::FollowTarget_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coordinate_follower, action, FollowTarget_Feedback)() {
  return get_message_type_support_handle<coordinate_follower::action::FollowTarget_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowTarget_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_SendGoal_Request_type_support_ids_t;

static const _FollowTarget_SendGoal_Request_type_support_ids_t _FollowTarget_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowTarget_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowTarget_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowTarget_SendGoal_Request_type_support_symbol_names_t _FollowTarget_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coordinate_follower, action, FollowTarget_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coordinate_follower, action, FollowTarget_SendGoal_Request)),
  }
};

typedef struct _FollowTarget_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _FollowTarget_SendGoal_Request_type_support_data_t;

static _FollowTarget_SendGoal_Request_type_support_data_t _FollowTarget_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowTarget_SendGoal_Request_message_typesupport_map = {
  2,
  "coordinate_follower",
  &_FollowTarget_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FollowTarget_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FollowTarget_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowTarget_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coordinate_follower

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coordinate_follower::action::FollowTarget_SendGoal_Request>()
{
  return &::coordinate_follower::action::rosidl_typesupport_cpp::FollowTarget_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coordinate_follower, action, FollowTarget_SendGoal_Request)() {
  return get_message_type_support_handle<coordinate_follower::action::FollowTarget_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowTarget_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_SendGoal_Response_type_support_ids_t;

static const _FollowTarget_SendGoal_Response_type_support_ids_t _FollowTarget_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowTarget_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowTarget_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowTarget_SendGoal_Response_type_support_symbol_names_t _FollowTarget_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coordinate_follower, action, FollowTarget_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coordinate_follower, action, FollowTarget_SendGoal_Response)),
  }
};

typedef struct _FollowTarget_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _FollowTarget_SendGoal_Response_type_support_data_t;

static _FollowTarget_SendGoal_Response_type_support_data_t _FollowTarget_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowTarget_SendGoal_Response_message_typesupport_map = {
  2,
  "coordinate_follower",
  &_FollowTarget_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FollowTarget_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FollowTarget_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowTarget_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coordinate_follower

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coordinate_follower::action::FollowTarget_SendGoal_Response>()
{
  return &::coordinate_follower::action::rosidl_typesupport_cpp::FollowTarget_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coordinate_follower, action, FollowTarget_SendGoal_Response)() {
  return get_message_type_support_handle<coordinate_follower::action::FollowTarget_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowTarget_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_SendGoal_type_support_ids_t;

static const _FollowTarget_SendGoal_type_support_ids_t _FollowTarget_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowTarget_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowTarget_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowTarget_SendGoal_type_support_symbol_names_t _FollowTarget_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coordinate_follower, action, FollowTarget_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coordinate_follower, action, FollowTarget_SendGoal)),
  }
};

typedef struct _FollowTarget_SendGoal_type_support_data_t
{
  void * data[2];
} _FollowTarget_SendGoal_type_support_data_t;

static _FollowTarget_SendGoal_type_support_data_t _FollowTarget_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowTarget_SendGoal_service_typesupport_map = {
  2,
  "coordinate_follower",
  &_FollowTarget_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_FollowTarget_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_FollowTarget_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FollowTarget_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coordinate_follower

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<coordinate_follower::action::FollowTarget_SendGoal>()
{
  return &::coordinate_follower::action::rosidl_typesupport_cpp::FollowTarget_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, coordinate_follower, action, FollowTarget_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<coordinate_follower::action::FollowTarget_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowTarget_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_GetResult_Request_type_support_ids_t;

static const _FollowTarget_GetResult_Request_type_support_ids_t _FollowTarget_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowTarget_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowTarget_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowTarget_GetResult_Request_type_support_symbol_names_t _FollowTarget_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coordinate_follower, action, FollowTarget_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coordinate_follower, action, FollowTarget_GetResult_Request)),
  }
};

typedef struct _FollowTarget_GetResult_Request_type_support_data_t
{
  void * data[2];
} _FollowTarget_GetResult_Request_type_support_data_t;

static _FollowTarget_GetResult_Request_type_support_data_t _FollowTarget_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowTarget_GetResult_Request_message_typesupport_map = {
  2,
  "coordinate_follower",
  &_FollowTarget_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FollowTarget_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FollowTarget_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowTarget_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coordinate_follower

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coordinate_follower::action::FollowTarget_GetResult_Request>()
{
  return &::coordinate_follower::action::rosidl_typesupport_cpp::FollowTarget_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coordinate_follower, action, FollowTarget_GetResult_Request)() {
  return get_message_type_support_handle<coordinate_follower::action::FollowTarget_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowTarget_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_GetResult_Response_type_support_ids_t;

static const _FollowTarget_GetResult_Response_type_support_ids_t _FollowTarget_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowTarget_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowTarget_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowTarget_GetResult_Response_type_support_symbol_names_t _FollowTarget_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coordinate_follower, action, FollowTarget_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coordinate_follower, action, FollowTarget_GetResult_Response)),
  }
};

typedef struct _FollowTarget_GetResult_Response_type_support_data_t
{
  void * data[2];
} _FollowTarget_GetResult_Response_type_support_data_t;

static _FollowTarget_GetResult_Response_type_support_data_t _FollowTarget_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowTarget_GetResult_Response_message_typesupport_map = {
  2,
  "coordinate_follower",
  &_FollowTarget_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FollowTarget_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FollowTarget_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowTarget_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coordinate_follower

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coordinate_follower::action::FollowTarget_GetResult_Response>()
{
  return &::coordinate_follower::action::rosidl_typesupport_cpp::FollowTarget_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coordinate_follower, action, FollowTarget_GetResult_Response)() {
  return get_message_type_support_handle<coordinate_follower::action::FollowTarget_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowTarget_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_GetResult_type_support_ids_t;

static const _FollowTarget_GetResult_type_support_ids_t _FollowTarget_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowTarget_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowTarget_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowTarget_GetResult_type_support_symbol_names_t _FollowTarget_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coordinate_follower, action, FollowTarget_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coordinate_follower, action, FollowTarget_GetResult)),
  }
};

typedef struct _FollowTarget_GetResult_type_support_data_t
{
  void * data[2];
} _FollowTarget_GetResult_type_support_data_t;

static _FollowTarget_GetResult_type_support_data_t _FollowTarget_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowTarget_GetResult_service_typesupport_map = {
  2,
  "coordinate_follower",
  &_FollowTarget_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_FollowTarget_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_FollowTarget_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FollowTarget_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coordinate_follower

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<coordinate_follower::action::FollowTarget_GetResult>()
{
  return &::coordinate_follower::action::rosidl_typesupport_cpp::FollowTarget_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, coordinate_follower, action, FollowTarget_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<coordinate_follower::action::FollowTarget_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _FollowTarget_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_FeedbackMessage_type_support_ids_t;

static const _FollowTarget_FeedbackMessage_type_support_ids_t _FollowTarget_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _FollowTarget_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FollowTarget_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FollowTarget_FeedbackMessage_type_support_symbol_names_t _FollowTarget_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coordinate_follower, action, FollowTarget_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coordinate_follower, action, FollowTarget_FeedbackMessage)),
  }
};

typedef struct _FollowTarget_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _FollowTarget_FeedbackMessage_type_support_data_t;

static _FollowTarget_FeedbackMessage_type_support_data_t _FollowTarget_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FollowTarget_FeedbackMessage_message_typesupport_map = {
  2,
  "coordinate_follower",
  &_FollowTarget_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_FollowTarget_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_FollowTarget_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FollowTarget_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coordinate_follower

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coordinate_follower::action::FollowTarget_FeedbackMessage>()
{
  return &::coordinate_follower::action::rosidl_typesupport_cpp::FollowTarget_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, coordinate_follower, action, FollowTarget_FeedbackMessage)() {
  return get_message_type_support_handle<coordinate_follower::action::FollowTarget_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t FollowTarget_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace coordinate_follower

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<coordinate_follower::action::FollowTarget>()
{
  using ::coordinate_follower::action::rosidl_typesupport_cpp::FollowTarget_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  FollowTarget_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::coordinate_follower::action::FollowTarget::Impl::SendGoalService>();
  FollowTarget_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::coordinate_follower::action::FollowTarget::Impl::GetResultService>();
  FollowTarget_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::coordinate_follower::action::FollowTarget::Impl::CancelGoalService>();
  FollowTarget_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::coordinate_follower::action::FollowTarget::Impl::FeedbackMessage>();
  FollowTarget_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::coordinate_follower::action::FollowTarget::Impl::GoalStatusMessage>();
  return &FollowTarget_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, coordinate_follower, action, FollowTarget)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<coordinate_follower::action::FollowTarget>();
}

#ifdef __cplusplus
}
#endif
