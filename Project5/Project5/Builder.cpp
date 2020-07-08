#include "Builder.h"

void main()
{
	ChefManager manager;
	Builder* builder1 = new StoneBuilder();
	Builder* builder2 = new WoodBuilder();

	manager.CreateBigVilla(builder2);
	manager.CreateLittleHouse(builder1);


	House* house = builder2->GetHouse();
	house->BuildOrder();

    House* house2=builder1->GetHouse();
	house2->BuildOrder();


	delete house;
	delete house2;
	delete builder1;
	delete builder2;
	
}

	
	