// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: control.proto

#include "control.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR WRAMByteRange::WRAMByteRange(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.bytes_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.bank_)*/0u
  , /*decltype(_impl_.byte_offset_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct WRAMByteRangeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR WRAMByteRangeDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~WRAMByteRangeDefaultTypeInternal() {}
  union {
    WRAMByteRange _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 WRAMByteRangeDefaultTypeInternal _WRAMByteRange_default_instance_;
PROTOBUF_CONSTEXPR WatchedWRAM::WatchedWRAM(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.ranges_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct WatchedWRAMDefaultTypeInternal {
  PROTOBUF_CONSTEXPR WatchedWRAMDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~WatchedWRAMDefaultTypeInternal() {}
  union {
    WatchedWRAM _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 WatchedWRAMDefaultTypeInternal _WatchedWRAM_default_instance_;
PROTOBUF_CONSTEXPR WatchedWRAMRange::WatchedWRAMRange(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.bank_)*/0u
  , /*decltype(_impl_.byte_offset_)*/0u
  , /*decltype(_impl_.byte_length_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct WatchedWRAMRangeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR WatchedWRAMRangeDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~WatchedWRAMRangeDefaultTypeInternal() {}
  union {
    WatchedWRAMRange _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 WatchedWRAMRangeDefaultTypeInternal _WatchedWRAMRange_default_instance_;
static ::_pb::Metadata file_level_metadata_control_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_control_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_control_2eproto = nullptr;

const uint32_t TableStruct_control_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::WRAMByteRange, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::WRAMByteRange, _impl_.bank_),
  PROTOBUF_FIELD_OFFSET(::WRAMByteRange, _impl_.byte_offset_),
  PROTOBUF_FIELD_OFFSET(::WRAMByteRange, _impl_.bytes_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::WatchedWRAM, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::WatchedWRAM, _impl_.ranges_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::WatchedWRAMRange, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::WatchedWRAMRange, _impl_.bank_),
  PROTOBUF_FIELD_OFFSET(::WatchedWRAMRange, _impl_.byte_offset_),
  PROTOBUF_FIELD_OFFSET(::WatchedWRAMRange, _impl_.byte_length_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::WRAMByteRange)},
  { 9, -1, -1, sizeof(::WatchedWRAM)},
  { 16, -1, -1, sizeof(::WatchedWRAMRange)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_WRAMByteRange_default_instance_._instance,
  &::_WatchedWRAM_default_instance_._instance,
  &::_WatchedWRAMRange_default_instance_._instance,
};

const char descriptor_table_protodef_control_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rcontrol.proto\032\033google/protobuf/empty.p"
  "roto\"A\n\rWRAMByteRange\022\014\n\004bank\030\001 \001(\r\022\023\n\013b"
  "yte_offset\030\002 \001(\r\022\r\n\005bytes\030\003 \001(\014\"0\n\013Watch"
  "edWRAM\022!\n\006ranges\030\001 \003(\0132\021.WatchedWRAMRang"
  "e\"J\n\020WatchedWRAMRange\022\014\n\004bank\030\001 \001(\r\022\023\n\013b"
  "yte_offset\030\002 \001(\r\022\023\n\013byte_length\030\003 \001(\r2\306\001"
  "\n\016ControlService\0229\n\rListenSetWRAM\022\026.goog"
  "le.protobuf.Empty\032\016.WRAMByteRange0\001\0229\n\017L"
  "istenWatchWRAM\022\026.google.protobuf.Empty\032\014"
  ".WatchedWRAM0\001\022>\n\024WatchedWRAMDidChange\022\016"
  ".WRAMByteRange\032\026.google.protobuf.Emptyb\006"
  "proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_control_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::_pbi::once_flag descriptor_table_control_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_control_2eproto = {
    false, false, 446, descriptor_table_protodef_control_2eproto,
    "control.proto",
    &descriptor_table_control_2eproto_once, descriptor_table_control_2eproto_deps, 1, 3,
    schemas, file_default_instances, TableStruct_control_2eproto::offsets,
    file_level_metadata_control_2eproto, file_level_enum_descriptors_control_2eproto,
    file_level_service_descriptors_control_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_control_2eproto_getter() {
  return &descriptor_table_control_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_control_2eproto(&descriptor_table_control_2eproto);

// ===================================================================

class WRAMByteRange::_Internal {
 public:
};

WRAMByteRange::WRAMByteRange(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:WRAMByteRange)
}
WRAMByteRange::WRAMByteRange(const WRAMByteRange& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  WRAMByteRange* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.bytes_){}
    , decltype(_impl_.bank_){}
    , decltype(_impl_.byte_offset_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.bytes_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.bytes_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_bytes().empty()) {
    _this->_impl_.bytes_.Set(from._internal_bytes(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.bank_, &from._impl_.bank_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.byte_offset_) -
    reinterpret_cast<char*>(&_impl_.bank_)) + sizeof(_impl_.byte_offset_));
  // @@protoc_insertion_point(copy_constructor:WRAMByteRange)
}

inline void WRAMByteRange::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.bytes_){}
    , decltype(_impl_.bank_){0u}
    , decltype(_impl_.byte_offset_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.bytes_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.bytes_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

WRAMByteRange::~WRAMByteRange() {
  // @@protoc_insertion_point(destructor:WRAMByteRange)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void WRAMByteRange::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.bytes_.Destroy();
}

void WRAMByteRange::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void WRAMByteRange::Clear() {
// @@protoc_insertion_point(message_clear_start:WRAMByteRange)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.bytes_.ClearToEmpty();
  ::memset(&_impl_.bank_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.byte_offset_) -
      reinterpret_cast<char*>(&_impl_.bank_)) + sizeof(_impl_.byte_offset_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* WRAMByteRange::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 bank = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.bank_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 byte_offset = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.byte_offset_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes bytes = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_bytes();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* WRAMByteRange::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:WRAMByteRange)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 bank = 1;
  if (this->_internal_bank() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_bank(), target);
  }

  // uint32 byte_offset = 2;
  if (this->_internal_byte_offset() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_byte_offset(), target);
  }

  // bytes bytes = 3;
  if (!this->_internal_bytes().empty()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_bytes(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:WRAMByteRange)
  return target;
}

size_t WRAMByteRange::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:WRAMByteRange)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes bytes = 3;
  if (!this->_internal_bytes().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_bytes());
  }

  // uint32 bank = 1;
  if (this->_internal_bank() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_bank());
  }

  // uint32 byte_offset = 2;
  if (this->_internal_byte_offset() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_byte_offset());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData WRAMByteRange::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    WRAMByteRange::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*WRAMByteRange::GetClassData() const { return &_class_data_; }


void WRAMByteRange::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<WRAMByteRange*>(&to_msg);
  auto& from = static_cast<const WRAMByteRange&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:WRAMByteRange)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_bytes().empty()) {
    _this->_internal_set_bytes(from._internal_bytes());
  }
  if (from._internal_bank() != 0) {
    _this->_internal_set_bank(from._internal_bank());
  }
  if (from._internal_byte_offset() != 0) {
    _this->_internal_set_byte_offset(from._internal_byte_offset());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void WRAMByteRange::CopyFrom(const WRAMByteRange& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:WRAMByteRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WRAMByteRange::IsInitialized() const {
  return true;
}

void WRAMByteRange::InternalSwap(WRAMByteRange* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.bytes_, lhs_arena,
      &other->_impl_.bytes_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(WRAMByteRange, _impl_.byte_offset_)
      + sizeof(WRAMByteRange::_impl_.byte_offset_)
      - PROTOBUF_FIELD_OFFSET(WRAMByteRange, _impl_.bank_)>(
          reinterpret_cast<char*>(&_impl_.bank_),
          reinterpret_cast<char*>(&other->_impl_.bank_));
}

::PROTOBUF_NAMESPACE_ID::Metadata WRAMByteRange::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_control_2eproto_getter, &descriptor_table_control_2eproto_once,
      file_level_metadata_control_2eproto[0]);
}

// ===================================================================

class WatchedWRAM::_Internal {
 public:
};

WatchedWRAM::WatchedWRAM(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:WatchedWRAM)
}
WatchedWRAM::WatchedWRAM(const WatchedWRAM& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  WatchedWRAM* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.ranges_){from._impl_.ranges_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:WatchedWRAM)
}

inline void WatchedWRAM::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.ranges_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

WatchedWRAM::~WatchedWRAM() {
  // @@protoc_insertion_point(destructor:WatchedWRAM)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void WatchedWRAM::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.ranges_.~RepeatedPtrField();
}

void WatchedWRAM::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void WatchedWRAM::Clear() {
// @@protoc_insertion_point(message_clear_start:WatchedWRAM)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.ranges_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* WatchedWRAM::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .WatchedWRAMRange ranges = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_ranges(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* WatchedWRAM::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:WatchedWRAM)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .WatchedWRAMRange ranges = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_ranges_size()); i < n; i++) {
    const auto& repfield = this->_internal_ranges(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:WatchedWRAM)
  return target;
}

size_t WatchedWRAM::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:WatchedWRAM)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .WatchedWRAMRange ranges = 1;
  total_size += 1UL * this->_internal_ranges_size();
  for (const auto& msg : this->_impl_.ranges_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData WatchedWRAM::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    WatchedWRAM::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*WatchedWRAM::GetClassData() const { return &_class_data_; }


void WatchedWRAM::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<WatchedWRAM*>(&to_msg);
  auto& from = static_cast<const WatchedWRAM&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:WatchedWRAM)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.ranges_.MergeFrom(from._impl_.ranges_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void WatchedWRAM::CopyFrom(const WatchedWRAM& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:WatchedWRAM)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WatchedWRAM::IsInitialized() const {
  return true;
}

void WatchedWRAM::InternalSwap(WatchedWRAM* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.ranges_.InternalSwap(&other->_impl_.ranges_);
}

::PROTOBUF_NAMESPACE_ID::Metadata WatchedWRAM::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_control_2eproto_getter, &descriptor_table_control_2eproto_once,
      file_level_metadata_control_2eproto[1]);
}

// ===================================================================

class WatchedWRAMRange::_Internal {
 public:
};

WatchedWRAMRange::WatchedWRAMRange(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:WatchedWRAMRange)
}
WatchedWRAMRange::WatchedWRAMRange(const WatchedWRAMRange& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  WatchedWRAMRange* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.bank_){}
    , decltype(_impl_.byte_offset_){}
    , decltype(_impl_.byte_length_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.bank_, &from._impl_.bank_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.byte_length_) -
    reinterpret_cast<char*>(&_impl_.bank_)) + sizeof(_impl_.byte_length_));
  // @@protoc_insertion_point(copy_constructor:WatchedWRAMRange)
}

inline void WatchedWRAMRange::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.bank_){0u}
    , decltype(_impl_.byte_offset_){0u}
    , decltype(_impl_.byte_length_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

WatchedWRAMRange::~WatchedWRAMRange() {
  // @@protoc_insertion_point(destructor:WatchedWRAMRange)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void WatchedWRAMRange::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void WatchedWRAMRange::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void WatchedWRAMRange::Clear() {
// @@protoc_insertion_point(message_clear_start:WatchedWRAMRange)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.bank_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.byte_length_) -
      reinterpret_cast<char*>(&_impl_.bank_)) + sizeof(_impl_.byte_length_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* WatchedWRAMRange::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 bank = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.bank_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 byte_offset = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.byte_offset_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 byte_length = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.byte_length_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* WatchedWRAMRange::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:WatchedWRAMRange)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 bank = 1;
  if (this->_internal_bank() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_bank(), target);
  }

  // uint32 byte_offset = 2;
  if (this->_internal_byte_offset() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_byte_offset(), target);
  }

  // uint32 byte_length = 3;
  if (this->_internal_byte_length() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_byte_length(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:WatchedWRAMRange)
  return target;
}

size_t WatchedWRAMRange::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:WatchedWRAMRange)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 bank = 1;
  if (this->_internal_bank() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_bank());
  }

  // uint32 byte_offset = 2;
  if (this->_internal_byte_offset() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_byte_offset());
  }

  // uint32 byte_length = 3;
  if (this->_internal_byte_length() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_byte_length());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData WatchedWRAMRange::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    WatchedWRAMRange::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*WatchedWRAMRange::GetClassData() const { return &_class_data_; }


void WatchedWRAMRange::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<WatchedWRAMRange*>(&to_msg);
  auto& from = static_cast<const WatchedWRAMRange&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:WatchedWRAMRange)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_bank() != 0) {
    _this->_internal_set_bank(from._internal_bank());
  }
  if (from._internal_byte_offset() != 0) {
    _this->_internal_set_byte_offset(from._internal_byte_offset());
  }
  if (from._internal_byte_length() != 0) {
    _this->_internal_set_byte_length(from._internal_byte_length());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void WatchedWRAMRange::CopyFrom(const WatchedWRAMRange& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:WatchedWRAMRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WatchedWRAMRange::IsInitialized() const {
  return true;
}

void WatchedWRAMRange::InternalSwap(WatchedWRAMRange* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(WatchedWRAMRange, _impl_.byte_length_)
      + sizeof(WatchedWRAMRange::_impl_.byte_length_)
      - PROTOBUF_FIELD_OFFSET(WatchedWRAMRange, _impl_.bank_)>(
          reinterpret_cast<char*>(&_impl_.bank_),
          reinterpret_cast<char*>(&other->_impl_.bank_));
}

::PROTOBUF_NAMESPACE_ID::Metadata WatchedWRAMRange::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_control_2eproto_getter, &descriptor_table_control_2eproto_once,
      file_level_metadata_control_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::WRAMByteRange*
Arena::CreateMaybeMessage< ::WRAMByteRange >(Arena* arena) {
  return Arena::CreateMessageInternal< ::WRAMByteRange >(arena);
}
template<> PROTOBUF_NOINLINE ::WatchedWRAM*
Arena::CreateMaybeMessage< ::WatchedWRAM >(Arena* arena) {
  return Arena::CreateMessageInternal< ::WatchedWRAM >(arena);
}
template<> PROTOBUF_NOINLINE ::WatchedWRAMRange*
Arena::CreateMaybeMessage< ::WatchedWRAMRange >(Arena* arena) {
  return Arena::CreateMessageInternal< ::WatchedWRAMRange >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
