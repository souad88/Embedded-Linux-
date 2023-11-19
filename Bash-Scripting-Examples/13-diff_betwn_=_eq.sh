#!/bin/bash
#"==" compare between two strings not numbers
#"-eq,-gt,...." compare between  two numbers
test 1 == 1 && echo "true" || echo "false"
test 001 == 1 && echo "true" || echo "false"
test 001 -eq 1 && echo "true" || echo "false"
echo "== sign is comparing between two strings, but "-eq" compare between two numberss"