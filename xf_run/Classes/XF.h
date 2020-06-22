#ifndef XF_H
#define XF_H
#include"cocos2d.h"
using namespace cocos2d;
class XF
{
public:
  XF();
  Sprite3D* getXF();
  int getXFSkill();
  void setSkill(int skill);
  float getSkillTime();
  void setSkillTime(float time);
  void runSkill();
  void stopSkill();
private:
	Sprite3D* xf;
	int skill;//Ĭ��Ϊ0������û�м��ܣ������Ϊ1��ʱ����Ǳ�ʾ�м���
	float skillTime;
	RepeatForever* r;
};
#endif

