#pragma once

#include <vector>


#include "Scene.h"
#include "Object.h"
#include "Enemy.h"
#include "Collision.h"
#include "Player.h"
#include "Background.h"
#include "CameraView.h"
#include "Animation.h"


#define ENEMY_COUNT 3
#define TEXTURE_ENEMY	"resources/enemy.png"
#define TEXTURE_PLAYER	"resources/player.png"
#define TEXTURE_BACKGROUND "resources/br.jpg"
#define TEXTURE_ANIMATION_DESTROY "resources/destroy.png"
#define TEXTURE_ANIMATION_ELECTRIC "resources/electric.png"
#define TEXTURE_CLOUD "resources/cloud.png"

using namespace std;

class GamePlayScene : public Scene
{
protected:
	CameraView camera;
	//Background v_gameBackground; //Old version
	/*vector<Enemy*> v_gameEnemy;
	Player v_gamePlayer;
	Animation m_animation;*/
	vector <ObjectRender*> v_gameObject;

public:
	GamePlayScene();
	~GamePlayScene();
	void OnInit();
	void OnUpdate(float deltaTime);
	void OnRender(sf::RenderWindow &window);
	void OnExit();
};

