#ifndef TOUCHCONTROL_H
#define TOUCHCONTROL_H
#include"cocos2d.h"
#include "XF.h"
using namespace cocos2d;
/*
�����ֻ���������е�touch
*/
class TouchControl
{
public:
	TouchControl(XF* xf);
	void touchBegin(Vec2 pos);
	void touchEnd(Vec2 pos);
private:
	XF* xf;
	Vec2 beginPos;
	Vec2 endPos;
};
#endif

