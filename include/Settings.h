#pragma once

class Settings : public Singleton<Settings> {
public:
    static void LoadSettings();

    inline static bool debug_logging = false;

    inline static bool coins_flag = false;
};
