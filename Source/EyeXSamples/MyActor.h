#pragma once

#include "EyeXActorBase.h"
#include "MyActor.generated.h"

/**
 * Simple example of a class deriving from the EyeXActorBase class to receive notifications when
 * the actor receives and loses the player's attention.
 */
UCLASS()
class EYEXSAMPLES_API AMyActor : public AEyeXActorBase
{
	GENERATED_UCLASS_BODY()

public:

	virtual void GotGazeFocus_Implementation() override;
	virtual void LostGazeFocus_Implementation() override;

};
