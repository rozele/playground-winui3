#pragma once

#include "App.xaml.g.h"

#include <CppWinRTIncludes.h>

namespace winrt::playground_winui3::implementation
{
    struct App : AppT<App>
    {
        App();

        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&);

    private:
        winrt::Microsoft::UI::Xaml::Window window{ nullptr };
    };
}
