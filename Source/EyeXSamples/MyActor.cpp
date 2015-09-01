#include "EyeXSamples.h"
#include "MyActor.h"


AMyActor::AMyActor(const class FObjectInitializer& PCIP)
	: Super(PCIP)
{

}

void AMyActor::GotGazeFocus_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Someone is looking at me!"));
}

void AMyActor::LostGazeFocus_Implementation()
{
}
