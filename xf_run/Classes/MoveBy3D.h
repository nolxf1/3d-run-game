#ifndef MOVEBY3D_H
#define MOVEBY3D_H
#include"cocos2d.h"
using namespace cocos2d;
/*
������������Ҫ��������һ��ʱ��Ķ����� ����һ������ʱ��ͽ���ʱ��
*/
class MoveBy3D:public ActionInterval
{
public:
	/** creates the action */
	static MoveBy3D* create(float duration, const Vec3& deltaPosition,bool is_relative=false);

	//
	// Overrides
	//
	virtual MoveBy3D* clone() const override;
	virtual MoveBy3D* reverse(void) const  override;
	virtual void startWithTarget(Node *target) override;
	virtual void update(float time) override;
	void setIsRelative(bool is_relative);
//protect
CC_CONSTRUCTOR_ACCESS:
	MoveBy3D() {}
	virtual ~MoveBy3D() {}

	/** initializes the action */
	bool initWithDuration(float duration, const Vec3& deltaPosition);

protected:
	Vec3 _positionDelta;
	Vec3 _startPosition;
	Vec3 _previousPosition;
	bool _isRelative;

private:
	//��ֹcopy��assign
	CC_DISALLOW_COPY_AND_ASSIGN(MoveBy3D);
};
#endif

