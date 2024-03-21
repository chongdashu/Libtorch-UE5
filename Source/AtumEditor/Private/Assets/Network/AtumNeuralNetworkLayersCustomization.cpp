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

    for (TWeakObjectPtr<UObject> Object : Objects)
    {
        if (UAtumNeuralNetworkLayers* Layers = Cast<UAtumNeuralNetworkLayers>(Object.Get()))
        {
            IDetailCategoryBuilder& LayerObjectsCategory = DetailBuilder.EditCategory("LayerObjects", FText::GetEmpty(), ECategoryPriority::Important);

            const TArray<const UObject*>& LayerObjects = Layers->GetLayerObjects();
            
            for (int32 Index = 0; Index < LayerObjects.Num(); ++Index)
            {
                if (const ULlamaUnreal* LlamaUnreal = Cast<ULlamaUnreal>(LayerObjects[Index]))
                {
                    FString RowName = FString::Printf(TEXT("LayerObject_%d"), Index);
gi
                    // Add a button to the row
                    LayerObjectsCategory.AddCustomRow(FText::FromString(RowName))
                    .ValueContent()
                    [
                        SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                        .AutoWidth()
                        [
                            SNew(SButton)
                            .Text(FText::FromString("Load JSON"))
                            .OnClicked_Lambda([this, &DetailBuilder, LlamaUnreal]() -> FReply {
                                return FReply::Handled();
                            })
                        ]
                        + SHorizontalBox::Slot()
                        .FillWidth(1.f)
                    ];
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

