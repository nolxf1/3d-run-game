#ifndef MAPCONTROL_H
#define MAPCONTROL_H
#include"cocos2d.h"
#include"XF.h"
#include"XFSAction.h"
using namespace cocos2d;
/*
����ฺ��չʾ��ͼ�Լ���ͼ�����Ԫ��
*/
class MapControl
{
public:
	MapControl(Node* node,XF* xf);
	~MapControl(void);
	void generateMap(float dt);
	void generateS();
	void generateC();
	void generateT();
	void generateO();
	void callback_S(Sprite3D* sprite, void* param);
	void callback_C(Sprite3D* sprite, void* param);
	void callback_T(Sprite3D* sprite, void* param);
	void callback_O(Sprite3D* o,void* param);
	void preS();
private:
	Node* node;
	XF* xf;

};
#endif

