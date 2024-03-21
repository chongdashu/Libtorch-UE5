#pragma once

#include "Assets/Network/AtumNeuralNetworkLayersCustomization.h"

#include "DesktopPlatformModule.h"
#include "DetailLayoutBuilder.h"
#include "Models/Llama/LlamaUnreal.h"
#include "DetailWidgetRow.h"
#include "IDesktopPlatform.h"
#include "Dom/JsonObject.h"
#include "Layers/Network/AtumNeuralNetworkLayers.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SFilePathPicker.h"

TSharedRef<IDetailCustomization> FAtumNeuralNetworkLayersCustomization::MakeInstance()
{
    return MakeShareable(new FAtumNeuralNetworkLayersCustomization());
}

void FAtumNeuralNetworkLayersCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
   TArray<TWeakObjectPtr<UObject>> Objects;
    DetailBuilder.GetObjectsBeingCustomized(Objects);

    // Loop over each object being customized
    for (const TWeakObjectPtr<UObject>& Object : Objects)
    {
        if (UAtumNeuralNetworkLayers* Layers = Cast<UAtumNeuralNetworkLayers>(Object.Get()))
        {
            // Get the property handles for LayerTypes and LayerObjects
            TSharedPtr<IPropertyHandle> LayerTypesPropertyHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UAtumNeuralNetworkLayers, LayerTypes), UAtumNeuralNetworkLayers::StaticClass());
            TSharedPtr<IPropertyHandle> LayerObjectsPropertyHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UAtumNeuralNetworkLayers, LayerObjects), UAtumNeuralNetworkLayers::StaticClass());

            // Create a category for LayerTypes and display its default property widget
            IDetailCategoryBuilder& LayerTypesCategory = DetailBuilder.EditCategory("Layer Types", FText::GetEmpty(), ECategoryPriority::Important);
            LayerTypesCategory.AddProperty(LayerTypesPropertyHandle);

            if (LayerObjectsPropertyHandle.IsValid())
            {
                uint32 NumChildren;
                LayerObjectsPropertyHandle->GetNumChildren(NumChildren);

                for (uint32 i = 0; i < NumChildren; i++)
                {
                    TSharedPtr<IPropertyHandle> ChildHandle = LayerObjectsPropertyHandle->GetChildHandle(i);
                    if (ChildHandle.IsValid())
                    {
                        UObject* LayerObject = nullptr;
                        ChildHandle->GetValue(LayerObject);

                        if (ULlamaUnreal* LlamaUnreal = Cast<ULlamaUnreal>(LayerObject))
                        {
                            // Create a new category for each LlamaUnreal object
                            FString CategoryName = FString::Printf(TEXT("Layer Object %d"), i);
                            IDetailCategoryBuilder& LayerObjectCategory = DetailBuilder.EditCategory(*CategoryName, FText::GetEmpty(), ECategoryPriority::Important);

                            // Add a custom row for the 'Load JSON' button at the top of the category
                            LayerObjectCategory.AddCustomRow(FText::FromString("Load JSON"))
                                .WholeRowContent()
                                [
                                    SNew(SHorizontalBox)
                                    + SHorizontalBox::Slot()
                                    .AutoWidth()
                                    [
                                        SNew(SButton)
                                        .Text(FText::FromString("Load JSON"))
                                        .OnClicked(FOnClicked::CreateLambda([this, LlamaUnreal]() -> FReply {
                                            // Implement the logic to load the JSON file and set the values in the LlamaUnreal object
                                            // You can use the existing SetFromFile function or create a new one specifically for this purpose
                                            // LlamaUnreal->SetFromFile(FilePath);
                                            if (LlamaUnreal)
                                            {
                                                LoadConfigurationFromFile(LlamaUnreal);
                                            }
                                            return FReply::Handled();
                                        }))
                                    ]
                                ];

                            // Add the default property widget for this LlamaUnreal object
                            LayerObjectCategory.AddProperty(ChildHandle);
                        }
                    }
                }
            }
        }
    }
}

void FAtumNeuralNetworkLayersCustomization::OnJsonFilePathPicked(const FString& FilePath, ULlamaUnreal* LlamaUnreal)
{
    // Implement the logic to load the JSON file and set the values in the LlamaUnreal object
    // You can use the existing SetFromFile function or create a new one specifically for this purpose
    // LlamaUnreal->SetFromFile(FilePath);
}

void FAtumNeuralNetworkLayersCustomization::LoadConfigurationFromFile(ULlamaUnreal* LlamaUnreal)
{
    IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
    if (DesktopPlatform)
    {
        TArray<FString> OpenFilenames;
        DesktopPlatform->OpenFileDialog(
            nullptr, // Parent window handle
            TEXT("Load JSON"), // Dialog title
            TEXT(""), // Default path
            TEXT(""), // Default file name
            TEXT("JSON files (*.json)|*.json"), // File types
            EFileDialogFlags::None,
            OpenFilenames
        );

        // if (OpenFilenames.Num() > 0)
        // {
        //     const FString& FilePath = OpenFilenames[0];
        //     FString JsonRaw;
        //     if (FFileHelper::LoadFileToString(JsonRaw, *FilePath))
        //     {
        //         TSharedPtr<FJsonObject> JsonObject;
        //         TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonRaw);
        //
        //         if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
        //         {
        //             // Logic to create a LlamaConfig instance from JsonObject
        //             // and apply it to the passed LlamaUnreal instance.
        //             // This is where you parse the JSON and apply settings,
        //             // similar to the previous example.
        //             
        //             // Note: Adjust this part according to your actual JSON structure and LlamaUnreal methods.
        //             LlamaConfig config;
        //             // Set config fields from JsonObject...
        //             FAtumLlamaOptions NewOptions;
        //             NewOptions.SetFrom(config);
        //             // LlamaUnreal->ApplyNewOptions(NewOptions); // Ensure this method exists in ULlamaUnreal.
        //         }
        //     }
        // }
    }
}
