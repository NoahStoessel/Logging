#include <chrono>
#include <fstream>
#include <iostream>

namespace Log {
bool log_to_file = false;
std::string logfile = "";

static std::string timestamp()
{
    auto now = std::chrono::system_clock::now();
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);
    std::tm* now_tm = std::localtime(&now_time);

    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "%Y/%m/%d %H:%M:%S", now_tm);
    return std::string(buffer);
}
inline void info(std::string message)
{
    if (log_to_file == false) {
        std::cout << "\e[1;34m" << timestamp() << " [INFO] " << message << "\e[0m" << std::endl;
    } else {
        if (logfile == "") {
            logfile = "log.log";
        }
        std::ofstream log_file;
        log_file.open(logfile, std::ios_base::app);
        log_file << timestamp() << " [INFO] " << message << std::endl;
        log_file.close();
    }
}
inline void warn(std::string message)
{
    if (log_to_file == false) {
        std::cout << "\e[0;33m" << timestamp() << " [WARN] " << message << "\e[0m" << std::endl;
    } else {
        if (logfile == "") {
            logfile = "log.log";
        }
        std::ofstream log_file;
        log_file.open(logfile, std::ios_base::app);
        log_file << timestamp() << " [WARN] " << message << std::endl;
        log_file.close();
    }
}
inline void error(std::string message)
{
    if (log_to_file == false) {
        std::cout << "\e[0;31m" << timestamp() << " [ERROR] " << message << "\e[0m" << std::endl;
    } else {
        if (logfile == "") {
            logfile = "log.log";
        }
        std::ofstream log_file;
        log_file.open(logfile, std::ios_base::app);
        log_file << timestamp() << " [ERROR] " << message << std::endl;
        log_file.close();
    }
}
inline void note(std::string message)
{
    if (log_to_file == false) {
        std::cout << "\e[0;36m" << timestamp() << " [NOTE] " << message << "\e[0m" << std::endl;
    } else {
        if (logfile == "") {
            logfile = "log.log";
        }
        std::ofstream log_file;
        log_file.open(logfile, std::ios_base::app);
        log_file << timestamp() << " [NOTE] " << message << std::endl;
        log_file.close();
    }
}
inline void panic(std::string message)
{
    if (log_to_file == false) {
        std::cout << "\e[0;101m" << timestamp() << " [PANIC] " << message << "\e[0m" << std::endl;
    } else {
        if (logfile == "") {
            logfile = "log.log";
        }
        std::ofstream log_file;
        log_file.open(logfile, std::ios_base::app);
        log_file << timestamp() << " [PANIC] " << message << std::endl;
        log_file.close();
    }
}
}