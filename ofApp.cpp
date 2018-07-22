#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(255, 255, 255);


	ofSetCircleResolution(64);
	ofSetVerticalSync(true);
	ofSetFrameRate(60);


	 p_w=100;
	 p_h=200;

	 p_x=200;
	 p_y=250;


	 gui.setup();

	 gui.add(p1.setup("p1", 0, -3.14, 3.14));
	 gui.add(p2.setup("p2", 200, 00, 600));
	 gui.add(p3.setup("p3", 200, 00, 600));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	p_x = p2;
	p_y = p3;

	double xx1 =  + p_w / 2.0;
	double xx2 = -p_w / 2.0;
	double xx3 = -p_w / 2.0;
	double xx4 =  + p_w / 2.0;
	double yy1 =  -p_h / 2.0;
	double yy2 = -p_h / 2.0;
	double yy3 = +p_h / 2.0;
	double yy4 =  +p_h / 2.0;
	double p_r = p1;
	double xx1_r = xx1*cos(p_r) - yy1*sin(p_r);
	double yy1_r = xx1*sin(p_r) + yy1*cos(p_r);
	double xx2_r = xx2*cos(p_r) - yy2*sin(p_r);
	double yy2_r = xx2*sin(p_r) + yy2*cos(p_r);
	double xx3_r = xx3*cos(p_r) - yy3*sin(p_r);
	double yy3_r = xx3*sin(p_r) + yy3*cos(p_r);
	double xx4_r = xx4*cos(p_r) - yy4*sin(p_r);
	double yy4_r = xx4*sin(p_r) + yy4*cos(p_r);

	ofSetColor(242, 204, 47);
//	ofRect(xx1_r+ p_x, yy1_r+ p_y, xx2_r+ p_x, yy2_r+ p_y); //ŽlŠpŒ`‚ð•`‰æ
	ofTriangle(xx1_r + p_x, yy1_r + p_y, xx2_r + p_x, yy2_r + p_y, xx3_r + p_x, yy3_r + p_y);
	ofTriangle(xx1_r + p_x, yy1_r + p_y, xx4_r + p_x, yy4_r + p_y, xx3_r + p_x, yy3_r + p_y);


	gui.draw();
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
