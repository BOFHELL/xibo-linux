#pragma once

#include "Media.hpp"
#include "adaptors/IWebViewAdaptor.hpp"

class WebView : public Media<IVisibleMedia>
{
public:
    WebView(std::unique_ptr<IWebViewAdaptor>&& handler);

    void scale(double, double) override;
    int width() const override;
    int height() const override;

    IWidgetAdaptor& handler() override;
    void apply(MediaVisitor& visitor) override;

protected:
    void doStop() override;
    void doStart() override;

private:
    std::unique_ptr<IWebViewAdaptor> m_handler;

};
