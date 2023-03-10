# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: utilities/variable.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x18utilities/variable.proto\"\xc4\x05\n\x08Variable\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x13\n\x0b\x64\x65scription\x18\x02 \x01(\t\x12(\n\x0b\x62oolean_var\x18\x04 \x01(\x0b\x32\x11.Variable.BooleanH\x00\x12)\n\x0cinterger_var\x18\x05 \x01(\x0b\x32\x11.Variable.IntegerH\x00\x12&\n\ndouble_var\x18\x06 \x01(\x0b\x32\x10.Variable.DoubleH\x00\x12&\n\noption_var\x18\x07 \x01(\x0b\x32\x10.Variable.OptionH\x00\x1aN\n\x07\x42oolean\x12\r\n\x05value\x18\x01 \x01(\x08\x12\x0f\n\x07initial\x18\x02 \x01(\x08\x12\x10\n\x08true_val\x18\x03 \x01(\t\x12\x11\n\tfalse_val\x18\x04 \x01(\t\x1a\xac\x01\n\x07Integer\x12\r\n\x05value\x18\x01 \x01(\x05\x12\x0f\n\x07initial\x18\x02 \x01(\x05\x12.\n\rdefault_range\x18\x04 \x01(\x0b\x32\x17.Variable.Integer.Range\x12.\n\rallowed_range\x18\x05 \x01(\x0b\x32\x17.Variable.Integer.Range\x1a!\n\x05Range\x12\x0b\n\x03min\x18\x01 \x01(\x05\x12\x0b\n\x03max\x18\x02 \x01(\x05\x1a\xa9\x01\n\x06\x44ouble\x12\r\n\x05value\x18\x01 \x01(\x01\x12\x0f\n\x07initial\x18\x02 \x01(\x01\x12-\n\rdefault_range\x18\x04 \x01(\x0b\x32\x16.Variable.Double.Range\x12-\n\rallowed_range\x18\x05 \x01(\x0b\x32\x16.Variable.Double.Range\x1a!\n\x05Range\x12\x0b\n\x03min\x18\x01 \x01(\x01\x12\x0b\n\x03max\x18\x02 \x01(\x01\x1a\x39\n\x06Option\x12\r\n\x05value\x18\x01 \x01(\r\x12\x0f\n\x07initial\x18\x02 \x01(\r\x12\x0f\n\x07options\x18\x03 \x03(\tB\n\n\x08variableb\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'utilities.variable_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _VARIABLE._serialized_start=29
  _VARIABLE._serialized_end=737
  _VARIABLE_BOOLEAN._serialized_start=241
  _VARIABLE_BOOLEAN._serialized_end=319
  _VARIABLE_INTEGER._serialized_start=322
  _VARIABLE_INTEGER._serialized_end=494
  _VARIABLE_INTEGER_RANGE._serialized_start=461
  _VARIABLE_INTEGER_RANGE._serialized_end=494
  _VARIABLE_DOUBLE._serialized_start=497
  _VARIABLE_DOUBLE._serialized_end=666
  _VARIABLE_DOUBLE_RANGE._serialized_start=633
  _VARIABLE_DOUBLE_RANGE._serialized_end=666
  _VARIABLE_OPTION._serialized_start=668
  _VARIABLE_OPTION._serialized_end=725
# @@protoc_insertion_point(module_scope)
