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
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "디폴트")
		TObjectPtr<UCreature_C> Creatures;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "디폴트")
		int32 MaxHp;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "디폴트")
		int32 CurrentHp;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "디폴트")
		FName Name;
};
