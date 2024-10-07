//#include <iostream>
//#include "GraphicsManager.h"	
//
////Ignore this!!
//Room* room;
//Robot* robby;
//GraphicsManager* picture;
////
//
//int main()
//{
//	//declare the room, robby and picture objects here
//	room = new Room(0);
//	robby = new Robot();
//	picture = new GraphicsManager(room, robby);
//
//	for (int i = 0; i < 3; i++)
//	{
//
//		// walk to first obstacle (until obstacle_ahead)
//		while (!robby->obstacle_ahead(room))
//		{
//			robby->move();
//		}
//		std::cout << "1st corner\n";
//		robby->right();
//		picture->draw();
//
//		// walk to second obstacle (until obstacle_ahead)
//		while (!robby->obstacle_ahead(room))
//		{
//			robby->move();
//		}
//		std::cout << "2nd corner\n";
//		robby->right();
//		picture->draw();
//
//		// walk to first obstacle (until obstacle_ahead)
//		while (!robby->obstacle_ahead(room))
//		{
//			robby->move();
//		}
//		std::cout << "3rd corner\n";
//		robby->right();
//		picture->draw();
//
//		// walk to second obstacle (until obstacle_ahead)
//		while (!robby->obstacle_ahead(room))
//		{
//			robby->move();
//		}
//		std::cout << "4th corner\n";
//		robby->right();
//		picture->draw();
//
//	}
//
//
//	//we need system pause so that we can see where robby ends up
//	system("Pause");
//}