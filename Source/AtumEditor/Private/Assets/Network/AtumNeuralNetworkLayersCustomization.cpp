#pragma once

#include "Assets/Network/AtumNeuralNetworkLayersCustomization.h"

#include "DetailLayoutBuilder.h"
#include "Models/Llama/LlamaUnreal.h"
#include "DetailWidgetRow.h"
#include "Layers/Network/AtumNeuralNetworkLayers.h"
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
            // Use the property handle to access LayerObjects property
            TSharedPtr<IPropertyHandle> LayerObjectsPropertyHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UAtumNeuralNetworkLayers, LayerObjects), UAtumNeuralNetworkLayers::StaticClass());
            
            if (LayerObjectsPropertyHandle.IsValid())
            {
                // Customize the widget for the LayerObjects property
                IDetailCategoryBuilder& LayerObjectsCategory = DetailBuilder.EditCategory("LayerObjects");

                LayerObjectsPropertyHandle->MarkHiddenByCustomization();

                // Add a custom row for the 'Load JSON' button
                LayerObjectsCategory.AddCustomRow(FText::FromString("Load JSON"))
                    .ValueContent()
                    [
                        SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                        .AutoWidth()
                        [
                            SNew(SButton)
                            .Text(FText::FromString("Load the JSON"))
                            // Your OnClicked event binding here
                        ]
                    ];

                // Generate default widgets for each element in the LayerObjects array
                uint32 NumChildren;
                LayerObjectsPropertyHandle->GetNumChildren(NumChildren);

                for (uint32 i = 0; i < NumChildren; i++)
                {
                    TSharedPtr<IPropertyHandle> ChildHandle = LayerObjectsPropertyHandle->GetChildHandle(i);
                    if (ChildHandle.IsValid())
                    {
                        // Add the default property widget for this child
                        LayerObjectsCategory.AddProperty(ChildHandle);
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

