// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: auth_session.proto

#ifndef PROTOBUF_auth_5fsession_2eproto__INCLUDED
#define PROTOBUF_auth_5fsession_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "auth_session_message.pb.h"
#include "status.pb.h"
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
namespace auth {
class ClientToHost;
class ClientToHostDefaultTypeInternal;
extern ClientToHostDefaultTypeInternal _ClientToHost_default_instance_;
class HostToClient;
class HostToClientDefaultTypeInternal;
extern HostToClientDefaultTypeInternal _HostToClient_default_instance_;
}  // namespace auth
}  // namespace proto
}  // namespace aspia

namespace aspia {
namespace proto {
namespace auth {

namespace protobuf_auth_5fsession_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_auth_5fsession_2eproto

// ===================================================================

class HostToClient : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.auth.HostToClient) */ {
 public:
  HostToClient();
  virtual ~HostToClient();

  HostToClient(const HostToClient& from);

  inline HostToClient& operator=(const HostToClient& from) {
    CopyFrom(from);
    return *this;
  }

  static const HostToClient& default_instance();

  static inline const HostToClient* internal_default_instance() {
    return reinterpret_cast<const HostToClient*>(
               &_HostToClient_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(HostToClient* other);

  // implements Message ----------------------------------------------

  inline HostToClient* New() const PROTOBUF_FINAL { return New(NULL); }

  HostToClient* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const HostToClient& from);
  void MergeFrom(const HostToClient& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(HostToClient* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .aspia.proto.Status status = 1;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::aspia::proto::Status status() const;
  void set_status(::aspia::proto::Status value);

  // @@protoc_insertion_point(class_scope:aspia.proto.auth.HostToClient)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  int status_;
  mutable int _cached_size_;
  friend struct protobuf_auth_5fsession_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ClientToHost : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.auth.ClientToHost) */ {
 public:
  ClientToHost();
  virtual ~ClientToHost();

  ClientToHost(const ClientToHost& from);

  inline ClientToHost& operator=(const ClientToHost& from) {
    CopyFrom(from);
    return *this;
  }

  static const ClientToHost& default_instance();

  static inline const ClientToHost* internal_default_instance() {
    return reinterpret_cast<const ClientToHost*>(
               &_ClientToHost_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(ClientToHost* other);

  // implements Message ----------------------------------------------

  inline ClientToHost* New() const PROTOBUF_FINAL { return New(NULL); }

  ClientToHost* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ClientToHost& from);
  void MergeFrom(const ClientToHost& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ClientToHost* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string username = 3;
  void clear_username();
  static const int kUsernameFieldNumber = 3;
  const ::std::string& username() const;
  void set_username(const ::std::string& value);
  #if LANG_CXX11
  void set_username(::std::string&& value);
  #endif
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  ::std::string* mutable_username();
  ::std::string* release_username();
  void set_allocated_username(::std::string* username);

  // bytes password = 4;
  void clear_password();
  static const int kPasswordFieldNumber = 4;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  #if LANG_CXX11
  void set_password(::std::string&& value);
  #endif
  void set_password(const char* value);
  void set_password(const void* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // .aspia.proto.SessionType session_type = 1;
  void clear_session_type();
  static const int kSessionTypeFieldNumber = 1;
  ::aspia::proto::SessionType session_type() const;
  void set_session_type(::aspia::proto::SessionType value);

  // .aspia.proto.AuthMethod method = 2;
  void clear_method();
  static const int kMethodFieldNumber = 2;
  ::aspia::proto::AuthMethod method() const;
  void set_method(::aspia::proto::AuthMethod value);

  // @@protoc_insertion_point(class_scope:aspia.proto.auth.ClientToHost)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  int session_type_;
  int method_;
  mutable int _cached_size_;
  friend struct protobuf_auth_5fsession_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// HostToClient

// .aspia.proto.Status status = 1;
inline void HostToClient::clear_status() {
  status_ = 0;
}
inline ::aspia::proto::Status HostToClient::status() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.HostToClient.status)
  return static_cast< ::aspia::proto::Status >(status_);
}
inline void HostToClient::set_status(::aspia::proto::Status value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.auth.HostToClient.status)
}

// -------------------------------------------------------------------

// ClientToHost

// .aspia.proto.SessionType session_type = 1;
inline void ClientToHost::clear_session_type() {
  session_type_ = 0;
}
inline ::aspia::proto::SessionType ClientToHost::session_type() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.ClientToHost.session_type)
  return static_cast< ::aspia::proto::SessionType >(session_type_);
}
inline void ClientToHost::set_session_type(::aspia::proto::SessionType value) {
  
  session_type_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.auth.ClientToHost.session_type)
}

// .aspia.proto.AuthMethod method = 2;
inline void ClientToHost::clear_method() {
  method_ = 0;
}
inline ::aspia::proto::AuthMethod ClientToHost::method() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.ClientToHost.method)
  return static_cast< ::aspia::proto::AuthMethod >(method_);
}
inline void ClientToHost::set_method(::aspia::proto::AuthMethod value) {
  
  method_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.auth.ClientToHost.method)
}

// string username = 3;
inline void ClientToHost::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ClientToHost::username() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.ClientToHost.username)
  return username_.GetNoArena();
}
inline void ClientToHost::set_username(const ::std::string& value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.auth.ClientToHost.username)
}
#if LANG_CXX11
inline void ClientToHost::set_username(::std::string&& value) {
  
  username_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.auth.ClientToHost.username)
}
#endif
inline void ClientToHost::set_username(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.auth.ClientToHost.username)
}
inline void ClientToHost::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.auth.ClientToHost.username)
}
inline ::std::string* ClientToHost::mutable_username() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.auth.ClientToHost.username)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClientToHost::release_username() {
  // @@protoc_insertion_point(field_release:aspia.proto.auth.ClientToHost.username)
  
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClientToHost::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.auth.ClientToHost.username)
}

// bytes password = 4;
inline void ClientToHost::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ClientToHost::password() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.ClientToHost.password)
  return password_.GetNoArena();
}
inline void ClientToHost::set_password(const ::std::string& value) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.auth.ClientToHost.password)
}
#if LANG_CXX11
inline void ClientToHost::set_password(::std::string&& value) {
  
  password_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.auth.ClientToHost.password)
}
#endif
inline void ClientToHost::set_password(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.auth.ClientToHost.password)
}
inline void ClientToHost::set_password(const void* value, size_t size) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.auth.ClientToHost.password)
}
inline ::std::string* ClientToHost::mutable_password() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.auth.ClientToHost.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClientToHost::release_password() {
  // @@protoc_insertion_point(field_release:aspia.proto.auth.ClientToHost.password)
  
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClientToHost::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    
  } else {
    
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.auth.ClientToHost.password)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace auth
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_auth_5fsession_2eproto__INCLUDED
