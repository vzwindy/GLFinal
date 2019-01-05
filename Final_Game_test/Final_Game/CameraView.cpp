#include "CameraView.h"



void CameraView::InitView()
{
	view.reset(FloatRect(0, 0, WINDOWS_W, WINDOWS_H));
}

void CameraView::UpdateView(float deltaTime)
{
	view.move(Vector2f(400*deltaTime,0));
}

void CameraView::SetView(RenderWindow &window)
{
	window.setView(view);
}

Vector2f CameraView::getCenterPos()
{
	return view.getCenter();
}

CameraView::CameraView()
{
}


CameraView::~CameraView()
{
}