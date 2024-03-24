// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SMCharacterAssetData.generated.h"

class UNiagaraSystem;
class USMPostureGaugeWidget;
class ASMRangedAttackProjectile;
class UInputAction;
class UInputMappingContext;
class UUserWidget;

/**
 * 
 */
UCLASS()
class STEREOMIXPROTOTYPE_API USMCharacterAssetData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<const UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<const UInputAction> MoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<const UInputAction> JumpAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<const UInputAction> HoldAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<const UInputAction> SmashAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<const UInputAction> RangedAttackAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<const UInputAction> FutureBaseTeamSelectAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<const UInputAction> RockTeamSelectAction;

public:
	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	TSubclassOf<ASMRangedAttackProjectile> RangedAttackProjectileClass;

public:
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<USMPostureGaugeWidget> PostureGauge;

public:
	UPROPERTY(EditDefaultsOnly, Category = "Material")
	TObjectPtr<UMaterialInterface> FutureBassTeamMaterial;
	
	UPROPERTY(EditDefaultsOnly, Category = "Material")
	TObjectPtr<UMaterialInterface> RockTeamMaterial;

public:
	UPROPERTY(EditDefaultsOnly, Category = "Effect")
	TObjectPtr<UNiagaraSystem> JumpEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Effect")
	TObjectPtr<UNiagaraSystem> ProjectileHitEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Effect")
	TObjectPtr<UNiagaraSystem> StunHitEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Effect")
	TObjectPtr<UNiagaraSystem> GrabEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Effect")
	TObjectPtr<UNiagaraSystem> MoveTrailEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Effect")
	TObjectPtr<UNiagaraSystem> CatchMoveTrailEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Effect")
	TObjectPtr<UNiagaraSystem> StunLoopEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Effect")
	TObjectPtr<UNiagaraSystem> StunEndEffect;
};
