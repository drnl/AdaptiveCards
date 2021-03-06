#pragma once

#include "AdaptiveCards.Rendering.Uwp.h"
#include "Enums.h"
#include "HostConfig.h"

namespace AdaptiveNamespace
{
    class AdaptiveFontStyleDefinition
        : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>, ABI::AdaptiveNamespace::IAdaptiveFontStyleDefinition>
    {
        AdaptiveRuntime(AdaptiveFontStyleDefinition);

    public:
        HRESULT RuntimeClassInitialize() noexcept;
        HRESULT RuntimeClassInitialize(FontStyleDefinition styleDefinition) noexcept;

        IFACEMETHODIMP get_FontFamily(_Out_ HSTRING* value);
        IFACEMETHODIMP put_FontFamily(_In_ HSTRING value);

        IFACEMETHODIMP get_FontWeights(_Out_ ABI::AdaptiveNamespace::IAdaptiveFontWeightsConfig** weightsConfig);
        IFACEMETHODIMP put_FontWeights(_In_ ABI::AdaptiveNamespace::IAdaptiveFontWeightsConfig* weightsConfig);

        IFACEMETHODIMP get_FontSizes(_Out_ ABI::AdaptiveNamespace::IAdaptiveFontSizesConfig** sizesConfig);
        IFACEMETHODIMP put_FontSizes(_In_ ABI::AdaptiveNamespace::IAdaptiveFontSizesConfig* sizesConfig);

    private:
        Microsoft::WRL::Wrappers::HString m_fontFamily;
        Microsoft::WRL::ComPtr<ABI::AdaptiveNamespace::IAdaptiveFontWeightsConfig> m_fontWeights;
        Microsoft::WRL::ComPtr<ABI::AdaptiveNamespace::IAdaptiveFontSizesConfig> m_fontSizes;
    };

    ActivatableClass(AdaptiveFontStyleDefinition);
}
