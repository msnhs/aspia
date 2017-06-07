// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: file_transfer_session.proto

#ifndef PROTOBUF_file_5ftransfer_5fsession_2eproto__INCLUDED
#define PROTOBUF_file_5ftransfer_5fsession_2eproto__INCLUDED

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
#include "file_transfer_session_message.pb.h"
#include "status.pb.h"
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
class DirectoryList;
class DirectoryListDefaultTypeInternal;
extern DirectoryListDefaultTypeInternal _DirectoryList_default_instance_;
class DirectoryListItem;
class DirectoryListItemDefaultTypeInternal;
extern DirectoryListItemDefaultTypeInternal _DirectoryListItem_default_instance_;
class DirectoryListRequest;
class DirectoryListRequestDefaultTypeInternal;
extern DirectoryListRequestDefaultTypeInternal _DirectoryListRequest_default_instance_;
class DriveList;
class DriveListDefaultTypeInternal;
extern DriveListDefaultTypeInternal _DriveList_default_instance_;
class DriveListItem;
class DriveListItemDefaultTypeInternal;
extern DriveListItemDefaultTypeInternal _DriveListItem_default_instance_;
class DriveListRequest;
class DriveListRequestDefaultTypeInternal;
extern DriveListRequestDefaultTypeInternal _DriveListRequest_default_instance_;
class File;
class FileDefaultTypeInternal;
extern FileDefaultTypeInternal _File_default_instance_;
class FileRequest;
class FileRequestDefaultTypeInternal;
extern FileRequestDefaultTypeInternal _FileRequest_default_instance_;
namespace file_transfer {
class ClientToHost;
class ClientToHostDefaultTypeInternal;
extern ClientToHostDefaultTypeInternal _ClientToHost_default_instance_;
class HostToClient;
class HostToClientDefaultTypeInternal;
extern HostToClientDefaultTypeInternal _HostToClient_default_instance_;
}  // namespace file_transfer
}  // namespace proto
}  // namespace aspia

namespace aspia {
namespace proto {
namespace file_transfer {

namespace protobuf_file_5ftransfer_5fsession_2eproto {
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
}  // namespace protobuf_file_5ftransfer_5fsession_2eproto

// ===================================================================

class HostToClient : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.file_transfer.HostToClient) */ {
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

  // .aspia.proto.DriveList drive_list = 2;
  bool has_drive_list() const;
  void clear_drive_list();
  static const int kDriveListFieldNumber = 2;
  const ::aspia::proto::DriveList& drive_list() const;
  ::aspia::proto::DriveList* mutable_drive_list();
  ::aspia::proto::DriveList* release_drive_list();
  void set_allocated_drive_list(::aspia::proto::DriveList* drive_list);

  // .aspia.proto.DirectoryList directory_list = 3;
  bool has_directory_list() const;
  void clear_directory_list();
  static const int kDirectoryListFieldNumber = 3;
  const ::aspia::proto::DirectoryList& directory_list() const;
  ::aspia::proto::DirectoryList* mutable_directory_list();
  ::aspia::proto::DirectoryList* release_directory_list();
  void set_allocated_directory_list(::aspia::proto::DirectoryList* directory_list);

  // .aspia.proto.File file = 4;
  bool has_file() const;
  void clear_file();
  static const int kFileFieldNumber = 4;
  const ::aspia::proto::File& file() const;
  ::aspia::proto::File* mutable_file();
  ::aspia::proto::File* release_file();
  void set_allocated_file(::aspia::proto::File* file);

  // .aspia.proto.Status status = 1;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::aspia::proto::Status status() const;
  void set_status(::aspia::proto::Status value);

  // @@protoc_insertion_point(class_scope:aspia.proto.file_transfer.HostToClient)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::aspia::proto::DriveList* drive_list_;
  ::aspia::proto::DirectoryList* directory_list_;
  ::aspia::proto::File* file_;
  int status_;
  mutable int _cached_size_;
  friend struct protobuf_file_5ftransfer_5fsession_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ClientToHost : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.file_transfer.ClientToHost) */ {
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

  // .aspia.proto.DriveListRequest drive_list_request = 1;
  bool has_drive_list_request() const;
  void clear_drive_list_request();
  static const int kDriveListRequestFieldNumber = 1;
  const ::aspia::proto::DriveListRequest& drive_list_request() const;
  ::aspia::proto::DriveListRequest* mutable_drive_list_request();
  ::aspia::proto::DriveListRequest* release_drive_list_request();
  void set_allocated_drive_list_request(::aspia::proto::DriveListRequest* drive_list_request);

  // .aspia.proto.DirectoryListRequest directory_list_request = 2;
  bool has_directory_list_request() const;
  void clear_directory_list_request();
  static const int kDirectoryListRequestFieldNumber = 2;
  const ::aspia::proto::DirectoryListRequest& directory_list_request() const;
  ::aspia::proto::DirectoryListRequest* mutable_directory_list_request();
  ::aspia::proto::DirectoryListRequest* release_directory_list_request();
  void set_allocated_directory_list_request(::aspia::proto::DirectoryListRequest* directory_list_request);

  // .aspia.proto.FileRequest file_request = 3;
  bool has_file_request() const;
  void clear_file_request();
  static const int kFileRequestFieldNumber = 3;
  const ::aspia::proto::FileRequest& file_request() const;
  ::aspia::proto::FileRequest* mutable_file_request();
  ::aspia::proto::FileRequest* release_file_request();
  void set_allocated_file_request(::aspia::proto::FileRequest* file_request);

  // .aspia.proto.File file = 4;
  bool has_file() const;
  void clear_file();
  static const int kFileFieldNumber = 4;
  const ::aspia::proto::File& file() const;
  ::aspia::proto::File* mutable_file();
  ::aspia::proto::File* release_file();
  void set_allocated_file(::aspia::proto::File* file);

  // @@protoc_insertion_point(class_scope:aspia.proto.file_transfer.ClientToHost)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::aspia::proto::DriveListRequest* drive_list_request_;
  ::aspia::proto::DirectoryListRequest* directory_list_request_;
  ::aspia::proto::FileRequest* file_request_;
  ::aspia::proto::File* file_;
  mutable int _cached_size_;
  friend struct protobuf_file_5ftransfer_5fsession_2eproto::TableStruct;
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
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.HostToClient.status)
  return static_cast< ::aspia::proto::Status >(status_);
}
inline void HostToClient::set_status(::aspia::proto::Status value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.file_transfer.HostToClient.status)
}

// .aspia.proto.DriveList drive_list = 2;
inline bool HostToClient::has_drive_list() const {
  return this != internal_default_instance() && drive_list_ != NULL;
}
inline void HostToClient::clear_drive_list() {
  if (GetArenaNoVirtual() == NULL && drive_list_ != NULL) delete drive_list_;
  drive_list_ = NULL;
}
inline const ::aspia::proto::DriveList& HostToClient::drive_list() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.HostToClient.drive_list)
  return drive_list_ != NULL ? *drive_list_
                         : *::aspia::proto::DriveList::internal_default_instance();
}
inline ::aspia::proto::DriveList* HostToClient::mutable_drive_list() {
  
  if (drive_list_ == NULL) {
    drive_list_ = new ::aspia::proto::DriveList;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.HostToClient.drive_list)
  return drive_list_;
}
inline ::aspia::proto::DriveList* HostToClient::release_drive_list() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.HostToClient.drive_list)
  
  ::aspia::proto::DriveList* temp = drive_list_;
  drive_list_ = NULL;
  return temp;
}
inline void HostToClient::set_allocated_drive_list(::aspia::proto::DriveList* drive_list) {
  delete drive_list_;
  drive_list_ = drive_list;
  if (drive_list) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.HostToClient.drive_list)
}

// .aspia.proto.DirectoryList directory_list = 3;
inline bool HostToClient::has_directory_list() const {
  return this != internal_default_instance() && directory_list_ != NULL;
}
inline void HostToClient::clear_directory_list() {
  if (GetArenaNoVirtual() == NULL && directory_list_ != NULL) delete directory_list_;
  directory_list_ = NULL;
}
inline const ::aspia::proto::DirectoryList& HostToClient::directory_list() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.HostToClient.directory_list)
  return directory_list_ != NULL ? *directory_list_
                         : *::aspia::proto::DirectoryList::internal_default_instance();
}
inline ::aspia::proto::DirectoryList* HostToClient::mutable_directory_list() {
  
  if (directory_list_ == NULL) {
    directory_list_ = new ::aspia::proto::DirectoryList;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.HostToClient.directory_list)
  return directory_list_;
}
inline ::aspia::proto::DirectoryList* HostToClient::release_directory_list() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.HostToClient.directory_list)
  
  ::aspia::proto::DirectoryList* temp = directory_list_;
  directory_list_ = NULL;
  return temp;
}
inline void HostToClient::set_allocated_directory_list(::aspia::proto::DirectoryList* directory_list) {
  delete directory_list_;
  directory_list_ = directory_list;
  if (directory_list) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.HostToClient.directory_list)
}

// .aspia.proto.File file = 4;
inline bool HostToClient::has_file() const {
  return this != internal_default_instance() && file_ != NULL;
}
inline void HostToClient::clear_file() {
  if (GetArenaNoVirtual() == NULL && file_ != NULL) delete file_;
  file_ = NULL;
}
inline const ::aspia::proto::File& HostToClient::file() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.HostToClient.file)
  return file_ != NULL ? *file_
                         : *::aspia::proto::File::internal_default_instance();
}
inline ::aspia::proto::File* HostToClient::mutable_file() {
  
  if (file_ == NULL) {
    file_ = new ::aspia::proto::File;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.HostToClient.file)
  return file_;
}
inline ::aspia::proto::File* HostToClient::release_file() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.HostToClient.file)
  
  ::aspia::proto::File* temp = file_;
  file_ = NULL;
  return temp;
}
inline void HostToClient::set_allocated_file(::aspia::proto::File* file) {
  delete file_;
  file_ = file;
  if (file) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.HostToClient.file)
}

// -------------------------------------------------------------------

// ClientToHost

// .aspia.proto.DriveListRequest drive_list_request = 1;
inline bool ClientToHost::has_drive_list_request() const {
  return this != internal_default_instance() && drive_list_request_ != NULL;
}
inline void ClientToHost::clear_drive_list_request() {
  if (GetArenaNoVirtual() == NULL && drive_list_request_ != NULL) delete drive_list_request_;
  drive_list_request_ = NULL;
}
inline const ::aspia::proto::DriveListRequest& ClientToHost::drive_list_request() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.drive_list_request)
  return drive_list_request_ != NULL ? *drive_list_request_
                         : *::aspia::proto::DriveListRequest::internal_default_instance();
}
inline ::aspia::proto::DriveListRequest* ClientToHost::mutable_drive_list_request() {
  
  if (drive_list_request_ == NULL) {
    drive_list_request_ = new ::aspia::proto::DriveListRequest;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.ClientToHost.drive_list_request)
  return drive_list_request_;
}
inline ::aspia::proto::DriveListRequest* ClientToHost::release_drive_list_request() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.ClientToHost.drive_list_request)
  
  ::aspia::proto::DriveListRequest* temp = drive_list_request_;
  drive_list_request_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_drive_list_request(::aspia::proto::DriveListRequest* drive_list_request) {
  delete drive_list_request_;
  drive_list_request_ = drive_list_request;
  if (drive_list_request) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.ClientToHost.drive_list_request)
}

// .aspia.proto.DirectoryListRequest directory_list_request = 2;
inline bool ClientToHost::has_directory_list_request() const {
  return this != internal_default_instance() && directory_list_request_ != NULL;
}
inline void ClientToHost::clear_directory_list_request() {
  if (GetArenaNoVirtual() == NULL && directory_list_request_ != NULL) delete directory_list_request_;
  directory_list_request_ = NULL;
}
inline const ::aspia::proto::DirectoryListRequest& ClientToHost::directory_list_request() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.directory_list_request)
  return directory_list_request_ != NULL ? *directory_list_request_
                         : *::aspia::proto::DirectoryListRequest::internal_default_instance();
}
inline ::aspia::proto::DirectoryListRequest* ClientToHost::mutable_directory_list_request() {
  
  if (directory_list_request_ == NULL) {
    directory_list_request_ = new ::aspia::proto::DirectoryListRequest;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.ClientToHost.directory_list_request)
  return directory_list_request_;
}
inline ::aspia::proto::DirectoryListRequest* ClientToHost::release_directory_list_request() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.ClientToHost.directory_list_request)
  
  ::aspia::proto::DirectoryListRequest* temp = directory_list_request_;
  directory_list_request_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_directory_list_request(::aspia::proto::DirectoryListRequest* directory_list_request) {
  delete directory_list_request_;
  directory_list_request_ = directory_list_request;
  if (directory_list_request) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.ClientToHost.directory_list_request)
}

// .aspia.proto.FileRequest file_request = 3;
inline bool ClientToHost::has_file_request() const {
  return this != internal_default_instance() && file_request_ != NULL;
}
inline void ClientToHost::clear_file_request() {
  if (GetArenaNoVirtual() == NULL && file_request_ != NULL) delete file_request_;
  file_request_ = NULL;
}
inline const ::aspia::proto::FileRequest& ClientToHost::file_request() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.file_request)
  return file_request_ != NULL ? *file_request_
                         : *::aspia::proto::FileRequest::internal_default_instance();
}
inline ::aspia::proto::FileRequest* ClientToHost::mutable_file_request() {
  
  if (file_request_ == NULL) {
    file_request_ = new ::aspia::proto::FileRequest;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.ClientToHost.file_request)
  return file_request_;
}
inline ::aspia::proto::FileRequest* ClientToHost::release_file_request() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.ClientToHost.file_request)
  
  ::aspia::proto::FileRequest* temp = file_request_;
  file_request_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_file_request(::aspia::proto::FileRequest* file_request) {
  delete file_request_;
  file_request_ = file_request;
  if (file_request) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.ClientToHost.file_request)
}

// .aspia.proto.File file = 4;
inline bool ClientToHost::has_file() const {
  return this != internal_default_instance() && file_ != NULL;
}
inline void ClientToHost::clear_file() {
  if (GetArenaNoVirtual() == NULL && file_ != NULL) delete file_;
  file_ = NULL;
}
inline const ::aspia::proto::File& ClientToHost::file() const {
  // @@protoc_insertion_point(field_get:aspia.proto.file_transfer.ClientToHost.file)
  return file_ != NULL ? *file_
                         : *::aspia::proto::File::internal_default_instance();
}
inline ::aspia::proto::File* ClientToHost::mutable_file() {
  
  if (file_ == NULL) {
    file_ = new ::aspia::proto::File;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.file_transfer.ClientToHost.file)
  return file_;
}
inline ::aspia::proto::File* ClientToHost::release_file() {
  // @@protoc_insertion_point(field_release:aspia.proto.file_transfer.ClientToHost.file)
  
  ::aspia::proto::File* temp = file_;
  file_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_file(::aspia::proto::File* file) {
  delete file_;
  file_ = file;
  if (file) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.file_transfer.ClientToHost.file)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace file_transfer
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_file_5ftransfer_5fsession_2eproto__INCLUDED
