#!/usr/bin/expect

spawn ./install.sh
expect -exact "Input an existing directory path:\r"
send -- "/opt/eos\r"
expect eof
