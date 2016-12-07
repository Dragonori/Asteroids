#include "GameState.hpp"

//=========================================================================================================================

GameState::GameState() {
}

//=========================================================================================================================

GameState::~GameState() {
}

//=========================================================================================================================

bool GameState::Load() {
	// pure virtual
	return false;
}

//=========================================================================================================================

void GameState::OnEvent(SDL_Event& event) {
	Event::OnEvent(event);
}

//=========================================================================================================================

void GameState::Update(int dt) {
	// pure virtual
}

//=========================================================================================================================

void GameState::Draw() {
	// pure virtual
}

//=========================================================================================================================

void GameState::UnLoad() {
	// pure virtual
}

//=========================================================================================================================

void GameState::Pause() {
	// pure virtual
}

//=========================================================================================================================

void GameState::Resume() {
	// pure virtual
}

//=========================================================================================================================