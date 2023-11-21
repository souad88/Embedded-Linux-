#!/bin/bash
if ! command -v speedtest-cli &>/dev/null
then
    echo "speedtest-cli command isnot installed"
    exit 1
fi
speedtest_result=$(speedtest-cli)
echo "speed test results:"
echo "$speedtest_result"