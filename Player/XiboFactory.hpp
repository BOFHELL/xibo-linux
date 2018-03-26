#pragma once

#include "XlfParser.hpp"

class MainLayout;
class Region;
class Media;

class XlfFactory
{
public:
    static std::unique_ptr<MainLayout> create_layout(const Params& params);
    static std::unique_ptr<Region> create_region(const Params& params);
    static std::unique_ptr<Media> create_media(const Size& size, const Params& params);

private:
    static std::unique_ptr<Media> create_image(const Size& size, const Params& params);
    static std::unique_ptr<Media> create_video(const Size& size, const Params& params);
    static std::unique_ptr<Media> create_webview(const Size& size, const Params& params);

};
