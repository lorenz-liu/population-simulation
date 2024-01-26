#include "AutomatonGameModeBase.h"
#include "CellularAutomatonHUD.h"


AAutomatonGameModeBase::AAutomatonGameModeBase()
{
	HUDClass = ACellularAutomatonHUD::StaticClass();
}
