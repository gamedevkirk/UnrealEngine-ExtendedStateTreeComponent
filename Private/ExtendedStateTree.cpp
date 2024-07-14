#include "ExtendedStateTreeComponent.h"

#define STATETREE_LOG(Verbosity, Format, ...) UE_VLOG(GetOwner(), LogStateTree, Verbosity, Format, ##__VA_ARGS__)

void UExtendedStateTreeComponent::SetStateTree(UStateTree* InStateTree)
{
	bool bShouldRestartLogic = false;

	if (!StateTreeRef.IsValid())
	{
		STATETREE_LOG(Error, TEXT("%s: Unable to assign StateTree. Invalid StateTreeRef is invalid."), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	if (GetStateTreeRunStatus() == EStateTreeRunStatus::Running)
	{
		StopLogic("State Tree Changed");
		bShouldRestartLogic = true;
	}

	StateTreeRef.SetStateTree(InStateTree);

	if (bShouldRestartLogic)
	{
		StartLogic();
	}
}