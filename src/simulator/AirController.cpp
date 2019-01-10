/*
 * AirController.cpp
 *
 *  Created on: 21/07/2014
 *      Author: paco
 *
 *  Copyright 2014 Francisco Martín
 *
 *  This file is part of ATCSim.
 *
 *  ATCSim is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ATCSim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with ATCSim.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AirController.h"
#include "Airport.h"
#include "Flight.h"
#include "Position.h"
#include <list>
#include <fstream>

namespace atcsim{

AirController::AirController() {
	// TODO Auto-generated constructor stub

}

AirController::~AirController() {
	// TODO Auto-generated destructor stub
}

void
AirController::doWork()
{
  std::list<Flight*> flights = Airport::getInstance()->getFlights();
  std::list<Flight*>::iterator it;

  Position pos11(2000.0, 16000.0, 3000.0);
  Position pos12(4000.0, 16000.0, 3000.0);
  Position pos13(4000.0, 10000.0, 3000.0);
  Position pos14(2000.0, 10000.0, 1500.0);
  Position pos15(2000.0, 16000.0, 1000.0);
  Position pos16(4000.0, 16000.0, 1000.0);
  Position pos17(4000.0, 10000.0, 1000.0);

  Position pos21(6000.0, 16000.0, 3000.0);
  Position pos22(10000.0, 16000.0, 3000.0);
  Position pos23(10000.0, 10000.0, 3000.0);
  Position pos24(6000.0, 10000.0, 1500.0);
  Position pos25(6000.0, 16000.0, 1000.0);
  Position pos26(10000.0, 16000.0, 1000.0);
  Position pos27(10000.0, 10000.0, 1000.0);

  Position pos31(12000.0, 16000.0, 3000.0);
  Position pos32(16000.0, 16000.0, 3000.0);
  Position pos33(16000.0, 10000.0, 3000.0);
  Position pos34(12000.0, 10000.0, 1500.0);
  Position pos35(12000.0, 16000.0, 1000.0);
  Position pos36(16000.0, 16000.0, 1000.0);
  Position pos37(16000.0, 10000.0, 1000.0);

  Position pos41(4000.0, 8000.0, 2000.0);
  Position pos42(2000.0, 8000.0, 2000.0);
  Position pos43(2000.0, 4000.0, 2000.0);
  Position pos44(4000.0, 4000.0, 2000.0);
  Position pos45(4000.0, 8000.0, 1000.0);
  Position pos46(2000.0, 8000.0, 1000.0);

  Position pos51(10000.0, 8000.0, 2000.0);
  Position pos52(6000.0, 8000.0, 2000.0);
  Position pos53(6000.0, 4000.0, 2000.0);
  Position pos54(10000.0, 4000.0, 2000.0);
  Position pos55(6000.0, 8000.0, 1000.0);
  Position pos56(6000.0, 8000.0, 1000.0);

  Position pos61(16000.0, 8000.0, 2000.0);
  Position pos62(12000.0, 8000.0, 2000.0);
  Position pos63(12000.0, 4000.0, 2000.0);
  Position pos64(16000.0, 4000.0, 2000.0);
  Position pos65(12000.0, 8000.0, 1000.0);
  Position pos66(12000.0, 8000.0, 1000.0);

  Position pos71(2000.0, 2000.0, 2000.0);
  Position pos72(4000.0, 2000.0, 2000.0);
  Position pos73(4000.0, 0.0, 2000.0);
  Position pos74(2000.0, 0.0, 2000.0);
  Position pos75(2000.0, 2000.0, 1000.0);
  Position pos76(4000.0, 2000.0, 1000.0);
  Position pos77(4000.0, 0.0, 500.0);
  Position pos78(2000.0, 0.0, 500.0);
//tiro al aeropuerto

  Position pos81(6000.0, 2000.0, 2000.0);
  Position pos82(10000.0, 2000.0, 2000.0);
  Position pos83(10000.0, 0.0, 2000.0);
  Position pos84(6000.0, 0.0, 2000.0);
  Position pos85(6000.0, 2000.0, 1000.0);
  Position pos86(10000.0, 2000.0, 1000.0);
  Position pos87(10000.0, 0.0, 500.0);
  Position pos88(6000.0, 0.0, 500.0);

  Position pos91(12000.0, 2000.0, 2000.0);
  Position pos92(16000.0, 2000.0, 2000.0);
  Position pos93(16000.0, 0.0, 2000.0);
  Position pos94(12000.0, 0.0, 2000.0);
  Position pos95(12000.0, 2000.0, 1000.0);
  Position pos96(16000.0, 2000.0, 1000.0);
  Position pos97(16000.0, 0.0, 500.0);
  Position pos98(12000.0, 0.0, 500.0);


  //Position pos01(8000.0, -8000.0, 2000.0);
//  Position pos11(5000.0, -8000.0, 1500.0);
//  Position pos21(5000.0, -5000.0, 1000.0);
//Position pos31(8000.0, -5000.0, 500.0);
Position npos11(2000.0, -16000.0, 3000.0);
Position npos12(4000.0, -16000.0, 3000.0);
Position npos13(4000.0, -10000.0, 3000.0);
Position npos14(2000.0, -10000.0, 1500.0);
Position npos15(2000.0, -16000.0, 1000.0);
Position npos16(4000.0, -16000.0, 1000.0);
Position npos17(4000.0, -10000.0, 1000.0);

Position npos21(6000.0, -16000.0, 3000.0);
Position npos22(10000.0, -16000.0, 3000.0);
Position npos23(10000.0, -10000.0, 3000.0);
Position npos24(6000.0, -10000.0, 1500.0);
Position npos25(6000.0, -16000.0, 1000.0);
Position npos26(10000.0, -16000.0, 1000.0);
Position npos27(10000.0, -10000.0, 1000.0);

Position npos31(12000.0, -16000.0, 3000.0);
Position npos32(16000.0, -16000.0, 3000.0);
Position npos33(16000.0, -10000.0, 3000.0);
Position npos34(12000.0, -10000.0, 1500.0);
Position npos35(12000.0, -16000.0, 1000.0);
Position npos36(16000.0, -16000.0, 1000.0);
Position npos37(16000.0, -10000.0, 1000.0);

  Position pos4(4000.0, 4000.0, 40.0);
  Position pos5(3000.0, 0.0, 30.0);
  Position pos6(2000.0, 0.0, 30.0);

  Position pos7(200.0, 0.0, 30.0);
  Position pos8(50.0, 0.0, 30.0);
  Position pos9(-500.0, 0.0, 25.0);

  Route
  r11, r12, r13, r14,r15, r16,r17,
  r21, r22, r23, r24,r25, r26,r27,
  r31, r32, r33, r34,r35, r36,r37,

  r51, r52, r53, r54,r55, r56,
  r61, r62, r63, r64,r65, r66,

  nr11, nr12, nr13, nr14,nr15, nr16,nr17,
  nr21, nr22, nr23, nr24,nr25, nr26,nr27,
  nr31, nr32, nr33, nr34,nr35, nr36,nr37,
   r1 ,r2, r3, r4 ,r5 ,r6 ,r7, r8, r9;

  r11.pos = pos11;
  r11.speed = 200.0;
  r12.pos = pos12;
  r12.speed = 200.0;
  r13.pos = pos13;
  r13.speed = 200.0;
  r14.pos = pos14;
  r14.speed = 200.0;
  r15.pos = pos15;
  r15.speed = 200.0;
  r16.pos = pos16;
  r16.speed = 200.0;
  r17.pos = pos17;
  r17.speed = 200.0;

  r21.pos = pos21;
  r21.speed = 200.0;
  r22.pos = pos22;
  r22.speed = 200.0;
  r23.pos = pos23;
  r23.speed = 200.0;
  r24.pos = pos24;
  r24.speed = 200.0;
  r25.pos = pos25;
  r25.speed = 200.0;
  r26.pos = pos26;
  r26.speed = 200.0;
  r27.pos = pos27;
  r27.speed = 200.0;

  r31.pos = pos31;
  r31.speed = 200.0;
  r32.pos = pos32;
  r32.speed = 200.0;
  r33.pos = pos33;
  r33.speed = 200.0;
  r34.pos = pos34;
  r34.speed = 200.0;
  r35.pos = pos35;
  r35.speed = 200.0;
  r36.pos = pos36;
  r36.speed = 200.0;
  r37.pos = pos37;
  r37.speed = 200.0;

  nr11.pos = npos11;
  nr11.speed = 200.0;
  nr12.pos = npos12;
  nr12.speed = 200.0;
  nr13.pos = npos13;
  nr13.speed = 200.0;
  nr14.pos = npos14;
  nr14.speed = 200.0;
  nr15.pos = npos15;
  nr15.speed = 200.0;
  nr16.pos = npos16;
  nr16.speed = 200.0;
  nr17.pos = npos17;
  nr17.speed = 200.0;

  nr21.pos = npos21;
  nr21.speed = 200.0;
  nr22.pos = npos22;
  nr22.speed = 200.0;
  nr23.pos = npos23;
  nr23.speed = 200.0;
  nr24.pos = npos24;
  nr24.speed = 200.0;
  nr25.pos = npos25;
  nr25.speed = 200.0;
  nr26.pos = npos26;
  nr26.speed = 200.0;
  nr27.pos = npos27;
  nr27.speed = 200.0;

  nr31.pos = npos31;
  nr31.speed = 200.0;
  nr32.pos = npos32;
  nr32.speed = 200.0;
  nr33.pos = npos33;
  nr33.speed = 200.0;
  nr34.pos = npos34;
  nr34.speed = 200.0;
  nr35.pos = npos35;
  nr35.speed = 200.0;
  nr36.pos = npos36;
  nr36.speed = 200.0;
  nr37.pos = npos37;
  nr37.speed = 200.0;

  r61.pos = pos61;
  r61.speed = 250.0;
  r62.pos = pos62;
  r62.speed = 250.0;
  r63.pos = pos63;
  r63.speed = 250.0;
  r64.pos = pos64;
  r64.speed = 250.0;
  r65.pos = pos65;
  r65.speed = 250.0;
  r66.pos = pos66;
  r66.speed = 250.0;

  r51.pos = pos51;
  r51.speed = 250.0;
  r52.pos = pos52;
  r52.speed = 250.0;
  r53.pos = pos53;
  r53.speed = 250.0;
  r54.pos = pos54;
  r54.speed = 250.0;
  r55.pos = pos55;
  r55.speed = 250.0;
  r56.pos = pos56;
  r56.speed = 250.0;

/*
  r01.pos = pos01;
  r01.speed = 100.0;
  r11.pos = pos11;
  r11.speed = 100.0;
  r21.pos = pos21;
  r21.speed = 100.0;
  r31.pos = pos31;
  r31.speed = 100.0;

  r4.pos=pos4;
  r4.speed=100.0;
  r5.pos=pos5;
  r5.speed = 100.0;
  r6.pos = pos6;
  r6.speed = 100.0;
*/
r1.pos = pos97;
r1.speed = 200.0;
r2.pos = pos98;
r2.speed = 200.0;
r3.pos=pos87;
r3.speed=200.0;
r4.pos = pos88;
r4.speed = 200.0;
r5.pos = pos77;
r5.speed = 200.0;
r6.pos=pos78;
r6.speed=200.0;


  r7.pos = pos7;
  r7.speed = 150.0;
  r8.pos = pos8;
  r8.speed = 19.9;
  r9.pos=pos9;
  r9.speed=19.0;

  for(it = flights.begin(); it!=flights.end(); ++it)
  {
    if((*it)->getRoute()->empty())
    {
      if(flights.size()<7){
        (*it)->getRoute()->push_back(r9);
        (*it)->getRoute()->push_front(r8);
        (*it)->getRoute()->push_front(r7);
      }else{
        if((*it)->getPosition().get_y() > 0.0){
          if ((*it)->getPosition().get_x() < 5000.0){
            (*it)->getRoute()->push_back(r9);
            (*it)->getRoute()->push_front(r8);
            (*it)->getRoute()->push_front(r7);
            (*it)->getRoute()->push_front(r6);
          }else if((*it)->getPosition().get_x() < 9000.0){
            (*it)->getRoute()->push_back(r9);
            (*it)->getRoute()->push_front(r8);
            (*it)->getRoute()->push_front(r7);
            (*it)->getRoute()->push_front(r3);
            (*it)->getRoute()->push_front(r54);
            (*it)->getRoute()->push_front(r53);
            (*it)->getRoute()->push_front(r52);
            (*it)->getRoute()->push_front(r51);
          }else{
            (*it)->getRoute()->push_back(r9);
            (*it)->getRoute()->push_front(r8);
            (*it)->getRoute()->push_front(r7);
            (*it)->getRoute()->push_front(r3);
            (*it)->getRoute()->push_front(r1);
            (*it)->getRoute()->push_front(r64);
            (*it)->getRoute()->push_front(r63);
            (*it)->getRoute()->push_front(r62);
            (*it)->getRoute()->push_front(r61);
          }
        }else{
          if ((*it)->getPosition().get_x() < 5000.0) {
            (*it)->getRoute()->push_back(r9);
            (*it)->getRoute()->push_front(r8);
            (*it)->getRoute()->push_front(r7);
            (*it)->getRoute()->push_front(r6);
          }else if ((*it)->getPosition().get_x() < 9000.0) {
            (*it)->getRoute()->push_back(r9);
            (*it)->getRoute()->push_front(r8);
            (*it)->getRoute()->push_front(r7);
            (*it)->getRoute()->push_front(r3);
            (*it)->getRoute()->push_front(nr27);
            (*it)->getRoute()->push_front(nr26);
            (*it)->getRoute()->push_front(nr25);
            (*it)->getRoute()->push_front(nr24);
            (*it)->getRoute()->push_front(nr23);
            (*it)->getRoute()->push_front(nr22);
            (*it)->getRoute()->push_front(nr21);
          }else{
            (*it)->getRoute()->push_back(r9);
            (*it)->getRoute()->push_front(r8);
            (*it)->getRoute()->push_front(r7);
            (*it)->getRoute()->push_front(r2);
            (*it)->getRoute()->push_front(nr37);
            (*it)->getRoute()->push_front(nr36);
            (*it)->getRoute()->push_front(nr35);
            (*it)->getRoute()->push_front(nr34);
            (*it)->getRoute()->push_front(nr33);
            (*it)->getRoute()->push_front(nr32);
            (*it)->getRoute()->push_front(nr31);
          }
        }
      }
		}
	}
}

}  // namespace atcsim
