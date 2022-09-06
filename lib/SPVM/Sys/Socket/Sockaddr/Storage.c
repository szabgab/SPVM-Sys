#include "spvm_native.h"

#include <assert.h>

#ifdef _WIN32
# include <ws2tcpip.h>
# include <io.h>
#else
# include <sys/socket.h>
# include <netinet/in.h>
#endif

const char* FILE_NAME = "Sys/Socket/Sockaddr/Storage.c";

int32_t SPVM__Sys__Socket__Sockaddr__Storage__new(SPVM_ENV* env, SPVM_VALUE* stack) {
  
  int32_t e = 0;
  
  struct sockaddr_storage* socket_address = env->new_memory_stack(env, stack, sizeof(struct sockaddr_storage));

  void* obj_socket_address = env->new_pointer_by_name(env, stack, "Sys::Socket::Sockaddr::Storage", socket_address, &e, FILE_NAME, __LINE__);
  if (e) { return e; }
  
  stack[0].oval = obj_socket_address;
  
  return 0;
}

int32_t SPVM__Sys__Socket__Sockaddr__Storage__DESTROY(SPVM_ENV* env, SPVM_VALUE* stack) {
  
  void* obj_socket_address = stack[0].oval;
  
  struct sockaddr_storage* socket_address = env->get_pointer(env, stack, obj_socket_address);
  
  if (socket_address) {
    env->free_memory_stack(env, stack, socket_address);
    env->set_pointer(env, stack, obj_socket_address, NULL);
  }
  
  return 0;
}

int32_t SPVM__Sys__Socket__Sockaddr__Storage__ss_family(SPVM_ENV* env, SPVM_VALUE* stack) {
  
  void* obj_self = stack[0].oval;
  
  struct sockaddr_storage* socket_address = env->get_pointer(env, stack, obj_self);
  
  if (socket_address) {
    stack[0].ival = socket_address->ss_family;
  }
  else {
    assert(0);
  }
  
  return 0;
}

int32_t SPVM__Sys__Socket__Sockaddr__Storage__set_ss_family(SPVM_ENV* env, SPVM_VALUE* stack) {
  
  void* obj_self = stack[0].oval;
  
  struct sockaddr_storage* socket_address = env->get_pointer(env, stack, obj_self);
  
  if (socket_address) {
    socket_address->ss_family = stack[1].ival;
  }
  else {
    assert(0);
  }
  
  return 0;
}

