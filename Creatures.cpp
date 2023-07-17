/** Please add a class description */
UCLASS(Blueprintable, BlueprintType)
class UCreature : public UObject
{
	GENERATED_BODY()
public:
	/** Please add a function description */
	UFUNCTION(BlueprintCallable)
		void Init();
public:
	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "����Ʈ")
		TObjectPtr<UCreature_C> Creatures;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "����Ʈ")
		int32 MaxHp;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "����Ʈ")
		int32 CurrentHp;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "����Ʈ")
		FName Name;
};
