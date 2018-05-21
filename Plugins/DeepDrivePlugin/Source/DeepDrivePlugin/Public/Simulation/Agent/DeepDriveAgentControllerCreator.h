
#pragma once

#include "GameFramework/Actor.h"
#include "Public/Simulation/DeepDriveSimulationDefines.h"

#include "DeepDriveAgentControllerCreator.generated.h"

class ADeepDriveAgentControllerBase;

UCLASS()
class DEEPDRIVEPLUGIN_API ADeepDriveAgentControllerCreator	:	public AActor
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "Controller")
	ADeepDriveAgentControllerBase* CreateController(const FDeepDriveControllerData &ControllerData);

	UFUNCTION(BlueprintImplementableEvent, Category = "Controller")
	ADeepDriveAgentControllerBase* CreateAgentController(int32 ConfigurationSlot, int32 StartPositionSlot);


};
