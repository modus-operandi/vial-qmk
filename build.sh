#!/bin/bash
keyboard="${1}"
layout="${2}"
docker run --rm -v "$(pwd):/qmk_firmware" qmk_build:latest make ${keyboard}:${layout}
