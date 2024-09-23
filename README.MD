# Odyn AI Logging Library


## Basic Functions

## Adding the library

This is a one header library just copy the header found in the /src folder to your project include it and your set to start using the logging library.


## Different Logging levels

```c++
// Logging some information
Log::info("Example Information");
// Logging a note
Log::note("Example Note");
// Logging a warning
Log::warn("Example Warning");
// Logging an error
Log::error("Example Error");
// Logging a panic
Log::panic("Example Panic");
```

## Logging Options

This logging library allows you to log to a file this option can be set using the configuration option log_to_file.

```c++
// Logging to a file
Log::log_to_file = true; // will make the logger log to a file 
// The Default logfile name is log.log you can configure another name using the logfile option
Log::logfile = "test.log";
```

## Logging Colors

Colors are adaptive to the terminals colors meaning if ur terminal is using a theme like gruvbox it will use gruvbox colors.

## Note

This library is provided under the terms of the CC-NC-ND 4.0 Creative Commons License and credit must be provided if it is used in other open source projects.