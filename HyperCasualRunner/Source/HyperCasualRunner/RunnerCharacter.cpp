// Fill out your copyright notice in the Description page of Project Settings.


#include "RunnerCharacter.h"

#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "spikes.h"
#include "Wall.h"
#include "Engine.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ARunnerCharacter::ARunnerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap);

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	side_cam = CreateDefaultSubobject<UCameraComponent>(TEXT("Side view camera"));
	side_cam->bUsePawnControlRotation = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;

	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);

	GetCharacterMovement()->GravityScale = 2.0f;
	GetCharacterMovement()->AirControl = 0.8f;
	GetCharacterMovement()->JumpZVelocity = 1000.0f;
	GetCharacterMovement()->GroundFriction = 3.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->MaxFlySpeed = 600.0f;

	temp_pos = GetActorLocation();

	z_pos = temp_pos.Z + 300.0f;
}

// Called when the game starts or when spawned
void ARunnerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ARunnerCharacter::OnOverlapBegin);

	can_move = true;
}

// Called every frame
void ARunnerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	temp_pos = GetActorLocation();

	temp_pos.X -= 850.0f;
	temp_pos.Z = z_pos;
	side_cam->SetWorldLocation(temp_pos);
}

// Called to bind functionality to input
void ARunnerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	
	PlayerInputComponent->BindAxis("MoveRight", this, &ARunnerCharacter::MoveRight);
}

void ARunnerCharacter::MoveRight(float value)
{
	if (can_move)
	{
		AddMovementInput(FVector(0.0f, 1.0f, 0.0f), value);
	}
}

void ARunnerCharacter::RestartLevel()
{
	UGameplayStatics::OpenLevel(this, *GetWorld()->GetName());

}

void ARunnerCharacter::OnOverlapBegin(UPrimitiveComponent* overlapped, AActor* actor, UPrimitiveComponent* other_comp, int32 other_index, bool sweep_result, const FHitResult& hit)
{
	if (actor != nullptr)
	{
		Aspikes* Wallspike = Cast<AWall>(actor);
		Aspikes* spikes = Cast<Aspikes>(actor);

		if (Wallspike || spikes)
		{
			GetMesh()->Deactivate();
			GetMesh()->SetVisibility(false);

			can_move = false;


			FTimerHandle unused_handle;

			GetWorldTimerManager().SetTimer(unused_handle, this, &ARunnerCharacter::RestartLevel, 2.0f, false);
		}
	}

}

