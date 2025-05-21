#!/bin/sh
ifconfig | grep -o -E '[[:xdigit:]]{1,2}(:[[:xdigit:]]{1,2}){5}'
