#pragma once

#include <string>

#include "Enums.h"

class TablePrinter;

class PCB
{
    public:
        PCB(const std::string& name, const std::string& id, int priority, State state, int jobLength);

        void reduceJob  ();
        void setState   (State newState) { m_state = newState;  }

        const auto& getName () { return m_name; }
        const auto& getID   () { return m_id;  }

        int getPriority     () { return m_priority; }
        int getJobLength    () { return m_jobLength; }
        State getState      () { return m_state; }

        void addToTable(TablePrinter& table);

    private:
        std::string m_name;
        std::string m_id;
        int m_priority;
        State m_state;
        int m_jobLength;
};