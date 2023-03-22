#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float time = ofGetElapsedTimef()*7;
	string ImgArray[15] = { "MJ1.jpg", "MJ2.jpg", "MJ3.jpg", "MJ4.jpg", "MJ5.jpg", "MJ6.jpg", "MJ7.jpg", "MJ8.jpg", "MJ9.jpg", 
		"MJ10.jpg", "MJ11.jpg", "MJ12.jpg", "MJ13.jpg", "MJ14.jpg", "MJ15.jpg"};

	int inttime = int(time);
	int index;

	if (inttime % 2 == 0) {
		index = inttime / 2;
	}
	else
	{
		index = (inttime+1) / 2;
	}
	int loop = index / 15;
	index = index - loop * 15;


	img.load(ImgArray[index]);



		for (int i = 0; i < img.getWidth(); i += 10) {
			for (int j = 0; j < img.getHeight(); j += 10) {
				ofColor color = img.getColor(i, j);
				float brightness = color.getBrightness();
				if (brightness > 169) {
					//draw white pixels
					ofSetColor(230, 225, 220);
					ofDrawRectangle(i * 3, j * 3, 30, 30);
					//draw pattern on white pixels
					ofPushMatrix();
					ofTranslate(i * 3, j * 3);

					ofSetColor(0);
					ofSetLineWidth(4);

					for (int n = 1; n < 255 - brightness; n += 5) {

						ofSeedRandom(i*j + i * n + time);

						//horizontal lines
						if (n % int(ofRandom(1, 20)) == 0) {
							ofDrawLine(0, 0, 10, 0);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 0, 20, 0);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 0, 30, 0);
						}

						ofSeedRandom(i*j + i * n + 1 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(0, 10, 10, 10);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 10, 20, 10);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 10, 30, 10);
						}

						ofSeedRandom(i*j + i * n + 2 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(0, 20, 10, 20);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 20, 20, 20);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 20, 30, 20);
						}


						ofSeedRandom(i*j + i * n + 3 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(0, 30, 10, 30);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 30, 20, 30);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 30, 30, 30);
						}




						//vertical lines
						ofSeedRandom(i*j + i * n + 4 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(0, 0, 0, 10);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(0, 10, 0, 20);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(0, 20, 0, 30);
						}

						ofSeedRandom(i*j + i * n + 5 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 0, 10, 10);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 10, 10, 20);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 20, 10, 30);
						}

						ofSeedRandom(i*j + i * n + 6 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 0, 20, 10);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 10, 20, 20);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 20, 20, 30);
						}


						ofSeedRandom(i*j + i * n + 7 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(30, 0, 30, 10);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(30, 10, 30, 20);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(30, 20, 30, 30);
						}
					}


					ofPopMatrix();
				}
				else {
					ofPushMatrix();
					ofTranslate(i * 3, j * 3);

					//draw pattern on black pixels
					ofSetColor(230, 225, 220);
					ofSetLineWidth(4);
					for (int n = 1; n < brightness; n += 14) {

						ofSeedRandom(i*j + i * n + time);

						//horizontal lines
						if (n % int(ofRandom(1, 20)) == 0) {
							ofDrawLine(0, 0, 10, 0);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 0, 20, 0);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 0, 30, 0);
						}

						ofSeedRandom(i*j + i * n + 1 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(0, 10, 10, 10);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 10, 20, 10);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 10, 30, 10);
						}

						ofSeedRandom(i*j + i * n + 2 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(0, 20, 10, 20);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 20, 20, 20);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 20, 30, 20);
						}


						ofSeedRandom(i*j + i * n + 3 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(0, 30, 10, 30);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 30, 20, 30);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 30, 30, 30);
						}




						//vertical lines
						ofSeedRandom(i*j + i * n + 4 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(0, 0, 0, 10);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(0, 10, 0, 20);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(0, 20, 0, 30);
						}

						ofSeedRandom(i*j + i * n + 5 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 0, 10, 10);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 10, 10, 20);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(10, 20, 10, 30);
						}

						ofSeedRandom(i*j + i * n + 6 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 0, 20, 10);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 10, 20, 20);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(20, 20, 20, 30);
						}


						ofSeedRandom(i*j + i * n + 7 + time);
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(30, 0, 30, 10);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(30, 10, 30, 20);
						}
						if (n % int(ofRandom(15, 29)) == 0) {
							ofDrawLine(30, 20, 30, 30);
						}

					}
					ofPopMatrix();

				}

				
			}
	}
	

	//-----------------------------------------------Experiment-------------------------------------------------------
	/*
	for (int i = 0; i < img.getWidth(); i += 10) {
		for (int j = 0; j < img.getHeight(); j += 10) {
			ofColor color = img.getColor(i, j);
			float brightness = color.getBrightness();


			//float edge = ofMap(brightness, 0, 255, 1, 5);
			//ofSetColor(255);
			//ofDrawRectangle(i*3, j*3, edge*3, edge*3);


			ofPushMatrix();
			ofTranslate(i*3, j*3);
			float edge = ofMap(brightness, 0, 255, 1, 4);
			ofSetLineWidth(4);
			ofDrawLine(0 - edge*3, 0, 0 + edge*3, 0);
			ofDrawLine(0, 0 - edge*3, 0, 0 + edge*3);
			ofPopMatrix();
		}
	}
	ofSetColor(255);
	img.draw(1000, 0);

	for (int i = 0; i < img.getWidth(); i += 10) {
		for (int j = 0; j < img.getHeight(); j += 10) {
			ofSetColor(230, 225, 220);
			ofColor color = img.getColor(i, j);
			float brightness = color.getBrightness();
			if (brightness > 1100) {
				ofDrawRectangle(i * 3, j * 3, 30, 30);
			}
			ofPushMatrix();
			ofTranslate(-i * 3, j * 3);
			float edge = ofMap(brightness, 0, 255, 1, 4);
			ofSetLineWidth(4);
			ofDrawLine(0 - edge * 3, 0, 0 + edge * 3, 0);
			ofDrawCircle(0 - edge * 3, 0, 2);
			ofDrawCircle(0 + edge * 3, 0, 2);
			ofDrawLine(0, 0 - edge * 3, 0, 0 + edge * 3);
			ofDrawCircle(0 - edge * 3, 0, 2);
			ofDrawCircle(0 + edge * 3, 0, 2);
			ofPopMatrix();
		}
	}

	for (int i = 0; i < img.getWidth(); i += 10) {
		for (int j = 0; j < img.getHeight(); j += 10) {
			ofSetColor(0);
			ofColor color = img.getColor(i, j);
			float darkness = 255-color.getBrightness();
			if (darkness < 50) {
				ofPushMatrix();
				ofTranslate(i * 3, j * 3);
				float edge = ofMap(darkness, 0, 255, 1, 9);
				ofSetLineWidth(4);
				ofDrawLine(0 - edge * 3, 0, 0 + edge * 3, 0);
				ofDrawCircle(0 - edge * 3, 0, 2);
				ofDrawCircle(0 + edge * 3, 0, 2);
				ofDrawLine(0, 0 - edge * 3, 0, 0 + edge * 3);
				ofDrawCircle(0 - edge * 3, 0, 2);
				ofDrawCircle(0 + edge * 3, 0, 2);
				ofPopMatrix();
			}
		}
	}
	*/
	

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
