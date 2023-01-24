// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSGameState.h"
#include "FPSPlayerController.h"

void AFPSGameState::MulticastOnMissionComplete_Implementation(APawn* InstigatorPawn, bool bMissionSuccess)
{
 

	for (FConstPlayerControllerIterator IT = GetWorld()->GetPlayerControllerIterator(); IT; IT++)
	{
		AFPSPlayerController* PC = Cast<AFPSPlayerController>(IT->Get());
		if (PC && PC->IsLocalController())
		{
			PC->OnMissionCompleted(InstigatorPawn, bMissionSuccess);

			//Disable Input
			APawn* MyPAwn = PC->GetPawn();
			if (MyPAwn)
			{
				MyPAwn->DisableInput(PC);
			}
		}
	}
}
