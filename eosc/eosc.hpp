#pragma once

/**
* @file eosc_command.hpp
* @copyright defined in resources/LICENSE.txt
* @brief Tool for sending transactions and querying state from EOS blockchain
*
* Defines base classes of the project, and helper methods.
*
* `eosc` is a command line tool that interfaces with the REST api exposed by @ref eosd. In order to use `eosc` you will need to
* have a local copy of `eosd` running and configured to load the 'eosio::chain_api_plugin'.
* 
* eosc contains documentation for all of its commands. For a list of all commands known to eosc, simply run it with no arguments:
* ```
* $ ./eosc
* Command Line Interface to Eos Daemon
* Usage: ./eosc [OPTIONS] SUBCOMMAND

* Options:
* -h,--help                   Print this help message and exit
* -H,--host TEXT=localhost    the host where eosd is running
* -p,--port UINT=8888         the port where eosd is running
* --wallet-host TEXT=localhost
*                             the host where eos-walletd is running
* --wallet-port UINT=8888     the port where eos-walletd is running

* Subcommands:
* create                      Create various items, on and off the blockchain
* get                         Retrieve various items and information from the blockchain
* set                         Set or update blockchain state
* transfer                    Transfer EOS from account to account
* wallet                      Interact with local wallet
* benchmark                   Configure and execute benchmarks
* push                        Push arbitrary transactions to the blockchain
*
* ```
* To get help with any particular subcommand, run it with no arguments as well:
* ```
* $ ./eosc create
* Create various items, on and off the blockchain
* Usage: ./eosc create SUBCOMMAND
*
* Subcommands:
* key                         Create a new keypair and print the public and private keys
* account                     Create a new account on the blockchain
*
* $ ./eosc create account
* Create a new account on the blockchain
* Usage: ./eosc create account [OPTIONS] creator name OwnerKey ActiveKey
*
* Positionals:
* creator TEXT                The name of the account creating the new account
* name TEXT                   The name of the new account
* OwnerKey TEXT               The owner public key for the account
* ActiveKey TEXT              The active public key for the account
*
* Options:
* -s,--skip-signature         Specify that unlocked wallet keys should not be used to sign transaction
*
*/