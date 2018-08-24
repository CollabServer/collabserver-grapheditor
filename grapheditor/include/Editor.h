#pragma once

#include <map>
#include <string>

#include "Command.h"
#include "collabclient/Client.h"


/**
 * \brief
 * The Editor class that manage le lifeCycle of the program
 */
class Editor {
    public:
        typedef std::map<std::string, Command*> MapCommands;
    private:
        bool        _running = false;
        MapCommands _commands;

    public:
        Editor();
        ~Editor();

    public:
        void start();
        void stop();

    public:
        const MapCommands& getCommands() const { return _commands; }
};


