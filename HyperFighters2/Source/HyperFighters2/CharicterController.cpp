// Fill out your copyright notice in the Description page of Project Settings.

#include "CharicterController.h"

#include "HyperFighters2Character.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


// Sets default values
ACharicterController::ACharicterController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	///m_charicters[0] = CreateDefaultSubobject<AHyperFighters2Character>(TEXT("Player 1"));
	///m_charicters[1] = CreateDefaultSubobject<AHyperFighters2Character>(TEXT("Player 2"));

	///m_charicters[0]->GetActorTransform().SetLocation(FVector(-550.0f, -13.0f, 272.0f));
	///m_charicters[1]->GetActorTransform().SetLocation(FVector(0.0f, -13.0f, 272.0f));

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraBoom->bAbsoluteRotation = true;
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->RelativeRotation = FRotator(0.0f, -90.0f, 0.0f);

	// Create an orthographic camera (no perspective) and attach it to the boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	SideViewCameraComponent->OrthoWidth = 2048.0f;
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Prevent all automatic rotation behavior on the camera, character, and camera component
	CameraBoom->bAbsoluteRotation = true;
	SideViewCameraComponent->bUsePawnControlRotation = false;
	SideViewCameraComponent->bAutoActivate = true;

}

// Called when the game starts or when spawned
void ACharicterController::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld* const world = GetWorld();

	FActorSpawnParameters params;
	params.Owner = this;
	params.Instigator = Instigator;
	FVector SpawnVector = FVector(-550.0f, -13.0f, 272.0f);
	FRotator SpawnRotation = FRotator::ZeroRotator;

	m_charicters[0] = world->SpawnActor<AHyperFighters2Character>(m_charicter1, SpawnVector, SpawnRotation, params);

	SpawnVector = FVector(0.0f, -13.0f, 272.0f);
	m_charicters[1] = world->SpawnActor<AHyperFighters2Character>(m_charicter2, SpawnVector, SpawnRotation, params);
	
}

// Called every frame
void ACharicterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharicterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

