#pragma once

#include "CoreMinimal.h"
#include "Components/StateTreeComponent.h"
#include "ExtendedStateTreeComponent.generated.h"

UCLASS(BlueprintType, meta = (BlueprintSpawnableComponent))
class YOURPROJECT_API UExtendedStateTreeComponent : public UStateTreeComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Extended State Tree")
	void SetStateTree(UStateTree* InStateTree);

	UFUNCTION(BlueprintCallable, Category = "Extended State Tree")
	const UStateTree* GetStateTree() const { return StateTreeRef.GetStateTree(); }
};