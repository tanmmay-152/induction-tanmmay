// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from coordinate_follower:action/FollowTarget.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "coordinate_follower/action/detail/follow_target__struct.h"
#include "coordinate_follower/action/detail/follow_target__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FollowTarget_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_Goal_type_support_ids_t;

static const _FollowTarget_Goal_type_support_ids_t _FollowTarget_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coordinate_follower, action, FollowTarget_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coordinate_follower, action, FollowTarget_Goal)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace coordinate_follower

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, coordinate_follower, action, FollowTarget_Goal)() {
  return &::coordinate_follower::action::rosidl_typesupport_c::FollowTarget_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FollowTarget_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_Result_type_support_ids_t;

static const _FollowTarget_Result_type_support_ids_t _FollowTarget_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coordinate_follower, action, FollowTarget_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coordinate_follower, action, FollowTarget_Result)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace coordinate_follower

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, coordinate_follower, action, FollowTarget_Result)() {
  return &::coordinate_follower::action::rosidl_typesupport_c::FollowTarget_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FollowTarget_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_Feedback_type_support_ids_t;

static const _FollowTarget_Feedback_type_support_ids_t _FollowTarget_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coordinate_follower, action, FollowTarget_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coordinate_follower, action, FollowTarget_Feedback)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace coordinate_follower

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, coordinate_follower, action, FollowTarget_Feedback)() {
  return &::coordinate_follower::action::rosidl_typesupport_c::FollowTarget_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FollowTarget_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_SendGoal_Request_type_support_ids_t;

static const _FollowTarget_SendGoal_Request_type_support_ids_t _FollowTarget_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coordinate_follower, action, FollowTarget_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coordinate_follower, action, FollowTarget_SendGoal_Request)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace coordinate_follower

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, coordinate_follower, action, FollowTarget_SendGoal_Request)() {
  return &::coordinate_follower::action::rosidl_typesupport_c::FollowTarget_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FollowTarget_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_SendGoal_Response_type_support_ids_t;

static const _FollowTarget_SendGoal_Response_type_support_ids_t _FollowTarget_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coordinate_follower, action, FollowTarget_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coordinate_follower, action, FollowTarget_SendGoal_Response)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace coordinate_follower

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, coordinate_follower, action, FollowTarget_SendGoal_Response)() {
  return &::coordinate_follower::action::rosidl_typesupport_c::FollowTarget_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FollowTarget_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_SendGoal_type_support_ids_t;

static const _FollowTarget_SendGoal_type_support_ids_t _FollowTarget_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coordinate_follower, action, FollowTarget_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coordinate_follower, action, FollowTarget_SendGoal)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace coordinate_follower

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, coordinate_follower, action, FollowTarget_SendGoal)() {
  return &::coordinate_follower::action::rosidl_typesupport_c::FollowTarget_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FollowTarget_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_GetResult_Request_type_support_ids_t;

static const _FollowTarget_GetResult_Request_type_support_ids_t _FollowTarget_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coordinate_follower, action, FollowTarget_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coordinate_follower, action, FollowTarget_GetResult_Request)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace coordinate_follower

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, coordinate_follower, action, FollowTarget_GetResult_Request)() {
  return &::coordinate_follower::action::rosidl_typesupport_c::FollowTarget_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FollowTarget_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_GetResult_Response_type_support_ids_t;

static const _FollowTarget_GetResult_Response_type_support_ids_t _FollowTarget_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coordinate_follower, action, FollowTarget_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coordinate_follower, action, FollowTarget_GetResult_Response)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace coordinate_follower

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, coordinate_follower, action, FollowTarget_GetResult_Response)() {
  return &::coordinate_follower::action::rosidl_typesupport_c::FollowTarget_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FollowTarget_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_GetResult_type_support_ids_t;

static const _FollowTarget_GetResult_type_support_ids_t _FollowTarget_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coordinate_follower, action, FollowTarget_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coordinate_follower, action, FollowTarget_GetResult)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace coordinate_follower

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, coordinate_follower, action, FollowTarget_GetResult)() {
  return &::coordinate_follower::action::rosidl_typesupport_c::FollowTarget_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__struct.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace coordinate_follower
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FollowTarget_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FollowTarget_FeedbackMessage_type_support_ids_t;

static const _FollowTarget_FeedbackMessage_type_support_ids_t _FollowTarget_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coordinate_follower, action, FollowTarget_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coordinate_follower, action, FollowTarget_FeedbackMessage)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FollowTarget_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace coordinate_follower

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, coordinate_follower, action, FollowTarget_FeedbackMessage)() {
  return &::coordinate_follower::action::rosidl_typesupport_c::FollowTarget_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "coordinate_follower/action/follow_target.h"
// already included above
// #include "coordinate_follower/action/detail/follow_target__type_support.h"

static rosidl_action_type_support_t _coordinate_follower__action__FollowTarget__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, coordinate_follower, action, FollowTarget)()
{
  // Thread-safe by always writing the same values to the static struct
  _coordinate_follower__action__FollowTarget__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, coordinate_follower, action, FollowTarget_SendGoal)();
  _coordinate_follower__action__FollowTarget__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, coordinate_follower, action, FollowTarget_GetResult)();
  _coordinate_follower__action__FollowTarget__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _coordinate_follower__action__FollowTarget__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, coordinate_follower, action, FollowTarget_FeedbackMessage)();
  _coordinate_follower__action__FollowTarget__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_coordinate_follower__action__FollowTarget__typesupport_c;
}

#ifdef __cplusplus
}
#endif
