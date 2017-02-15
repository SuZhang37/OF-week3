#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);
    int mouseX=0;
    int mouseY=0;
   

    
}

//--------------------------------------------------------------
void ofApp::update(){

    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int deltaX=ofMap(mouseX,0,ofGetWidth(),0,20);
    int deltaY = ofMap(mouseY,0,ofGetHeight(),0,20);
    
    
    for(int x=0; x<ofGetWidth(); x+=20+deltaX){
      
      for(int y=0;y<ofGetHeight();y+=20+deltaY){
     
        int mouseDistX = abs(x-mouseX);
        int mouseDistY = abs(y-mouseY);
        int colorOffset =0;
          
        if((mouseX>300 && mouseX<700)&&(mouseY>200 && mouseY<500)){
          if (mouseDistX<80 && mouseDistY<80){
            colorOffset = 30+mouseDistX;
          }
        }
          
          
          ofSetColor(221,136+colorOffset,30+x/5);
          ofDrawCircle(x,y,5);
     }
    
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
//    if(key == 'l'){
//        ofLog(OF_LOG_NOTICE,"Char Pressed:l");
//    } else if(key=='o'){
//        ofLog(OF_LOG_NOTICE,"Char Pressed:o");
//        
//    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
//    if(key=='t'){
//        ofLog(OF_LOG_NOTICE,"Char Released:t");
//    } else if(key=='q'){
//        ofLog(OF_LOG_NOTICE,"Char Released:q");
//    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    mouseX=x;
    mouseY=y;
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
