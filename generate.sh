#!/bin/bash

SCRIPT_DIR_ABSOLUTE="$( cd -- "$( dirname -- "${BASH_SOURCE[0]:-$0}"; )" &> /dev/null && pwd 2> /dev/null; )";
SCRIPT_DIR_RELATIVE="$(dirname "$0")"

PROTOS_DIR=$SCRIPT_DIR_ABSOLUTE/src/protos
OUTPUT_DIR=$SCRIPT_DIR_ABSOLUTE/src/generated
NANOPB_DIR=$SCRIPT_DIR_ABSOLUTE/third-party/nanopb

PROTOC=$NANOPB_DIR/generator/protoc

# generate protos
$PROTOC $PROTOC_OPTS --proto_path=$PROTOS_DIR --nanopb_out=$OUTPUT_DIR $PROTOS_DIR/shard.proto $PROTOS_DIR/system.proto
