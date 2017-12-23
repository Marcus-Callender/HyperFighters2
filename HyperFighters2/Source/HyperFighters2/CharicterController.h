// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CharicterController.generated.h"

UCLASS()
class HYPERFIGHTERS2_API ACharicterController : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACharicterController();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	///UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Charicter, meta = (AllowPrivateAccess = "true"))
	class AHyperFighters2Character* m_charicters[2];

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<class APaperCharacter> m_charicter1;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<class APaperCharacter> m_charicter2;

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;
	
	
};
