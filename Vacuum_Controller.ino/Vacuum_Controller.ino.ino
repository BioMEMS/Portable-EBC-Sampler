/*

A vacuum pump was controlled with an Arduino Uno microcontroller at the duty cycle of 10 s, reoccurring every 30 s to extract condensing fluid on a hydrophilic surface.

Two sets of experiments were performed to characterize the engineered surface in condensation. The setup included a thermoelectric plate 
(Custom Thermoelectric, Part # 07111-5L31- 03CL), a heat sink (Digikey, Part # 294-1155-ND), and a brushless fan (Digikey, Part # 259-1541-ND).
A reusable nebulizer (LC Plus® by PARI, Part #: 022F81) was used to imitate the saturated air conditions (mass flow rate 440 mg min−1 , droplet
median diameter 3.8 μm). The condenser surface was placed in proximity to the nebulizer outlet nozzle but was not contained in any enclosure with
the nebulizer. The saturated air flow was positioned tangentially to the condenser surface to reduce the effect of direct droplet deposition. In
this experiment, all condensation tests were purposefully carried out under uncontrolled ambient conditions (∼22 °C, ∼60% RH) to test the 
robustness and applicability of the condenser for use in portable medical devices. This setup provided the benefit of direct visual observation
and mass measurement. The experiments were captured on video for timescale observation and comparison. The mass transfer in condensation was 
evaluated as the difference in the mass of the surface before and after the condensation experiment. The mass of the dry surface before the 
experiment and the surface with condensate on it, after the experiment, was measured with an analytical balance (Denver Instruments, Part #: PI-225D).

Journal Citation:
K. O. Zamuruyev, A. J. Schmidt, E. Borras, M. M. Mccartney, M. Schivo, N. J. Kenyon, J.-P. Delplanque, and C. E. Davis, 
“Power-efficient self-cleaning hydrophilic condenser surface for portable exhaled breath condensate (EBC) metabolomic sampling,” 
Journal of Breath Research, vol. 12, no. 3, p. 036020, Aug. 2018.

*/

void setup() {
  
// Initialize digital pin 9 as the output.
pinMode(9, OUTPUT);

}

void loop() {
  
delay(30000); //delay 30 seconds

for (int i = 0; i < 100; i++) {
  digitalWrite(9, HIGH);           // turn the vacuum pump ON
  delay(10000);                    // keep vacuum on for 10 seconds
  digitalWrite(9, LOW);            // turn the vacuum pump OFF
  delay(30000);                    // keep vacuum off for 30 seconds
}

}

/*

The Portable Exhaled Breath Condensate Sampler is the proprietary property of The Regents of the University of California (“The Regents.”)
Copyright © 2018 The Regents of the University of California, Davis campus. All Rights Reserved.  

Redistribution and use in source and binary forms, with or without modification, are permitted by nonprofit, research institutions for research use only, provided that the following conditions are met:
• Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer. 
• Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution. 
• The name of The Regents may not be used to endorse or promote products derived from this software without specific prior written permission. 

The end-user understands that the program was developed for research purposes and is advised not to rely exclusively on the program for any reason.
THE SOFTWARE PROVIDED IS ON AN "AS IS" BASIS, AND THE REGENTS HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS. THE REGENTS SPECIFICALLY DISCLAIMS ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, EXEMPLARY OR CONSEQUENTIAL DAMAGES, INCLUDING BUT NOT LIMITED TO  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES, LOSS OF USE, DATA OR PROFITS, OR BUSINESS INTERRUPTION, HOWEVER CAUSED AND UNDER ANY THEORY OF LIABILITY WHETHER IN CONTRACT, STRICT LIABILITY OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
If you do not agree to these terms, do not download or use the software.  This license may be modified only in a writing signed by authorized signatory of both parties.
For commercial license information please contact copyright@ucdavis.edu.

 */
