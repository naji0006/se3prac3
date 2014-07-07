<div class=WordSection1>

<h1><span style='color:windowtext;background:white'>Introduction<o:p></o:p></span></h1>

<p style='margin-top:11.25pt;margin-right:0cm;margin-bottom:11.25pt;margin-left:
0cm;line-height:115%'><span style='font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-hansi-theme-font:major-latin;mso-bidi-font-family:
Helvetica;background:white'>The 2048 game is a game in which users can use all
possible major 4 directions to tilt a board integrated in the game to combine
values that are pre-matched, and/or generate value of 1 if they can’t combine
matching values by executing direction commands.<o:p></o:p></span></p>

<p style='margin-top:11.25pt;margin-right:0cm;margin-bottom:11.25pt;margin-left:
0cm;line-height:115%'><span style='font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-hansi-theme-font:major-latin;mso-bidi-font-family:
Helvetica;background:white'>This version of the game is implemented in C and
lacks a GUI-front and is fully text-based. The focus of this test plan is
predominantly on the cases provided in the test class to test various aspects
of this program in a rigorous manner. Consequently, the end-result of these
tests is to be certain that the level of functionality that enables users to
execute and play this game thoroughly is in place. </span><span
style='font-family:"Calibri Light","sans-serif";mso-ascii-theme-font:major-latin;
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Helvetica'><o:p></o:p></span></p>

<h1><span style='color:windowtext'>Testability<o:p></o:p></span></h1>

<p class=MsoNormal style='margin-top:11.25pt;margin-right:0cm;margin-bottom:
0cm;margin-left:0cm;margin-bottom:.0001pt;line-height:115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-hansi-theme-font:major-latin'>There are a
variety of files that are needed to be tested to identify possible defects that
are capable of stoping major functions of the game, and subsequently in
crippling it to be unplayable. The tests are conducted on the following files:<o:p></o:p></span></p>

<p class=MsoListParagraphCxSpFirst style='margin-bottom:0cm;margin-bottom:.0001pt;
mso-add-space:auto;text-indent:-18.0pt;line-height:115%;mso-list:l0 level1 lfo2;
tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><![if !supportLists]><span
style='font-size:12.0pt;line-height:115%;font-family:Symbol;mso-fareast-font-family:
Symbol;mso-bidi-font-family:Symbol'><span style='mso-list:Ignore'>·<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</span></span></span><![endif]><span dir=LTR></span><span class=SpellE><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-hansi-theme-font:major-latin'>tilt.c</span></span><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-hansi-theme-font:major-latin'><o:p></o:p></span></p>

<p class=MsoListParagraphCxSpLast style='margin-bottom:0cm;margin-bottom:.0001pt;
mso-add-space:auto;text-indent:-18.0pt;line-height:115%;mso-list:l0 level1 lfo2;
tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><![if !supportLists]><span
style='font-size:12.0pt;line-height:115%;font-family:Symbol;mso-fareast-font-family:
Symbol;mso-bidi-font-family:Symbol'><span style='mso-list:Ignore'>·<span
style='font:7.0pt "Times New Roman"'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</span></span></span><![endif]><span dir=LTR></span><span class=SpellE><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-hansi-theme-font:major-latin'>board.c</span></span><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-hansi-theme-font:major-latin'><o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-hansi-theme-font:major-latin'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>Furthermore, there are possible functions integrated from other files in
the above on a required-basis which are captured and tested via their parent
functions in the test class.<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>Functionalities are categorised based on their level of importance, and
are tested accordingly. For instance, shifting to 4 main directions with values
is captured with different test cases to make sure different scenarios are
taken into consideration. Another category with a critical level of importance
is the value matching process, in which identical values that are located in reachable
positions</span><span style='font-size:12.0pt;line-height:115%;font-family:
"Calibri Light","sans-serif";mso-ascii-theme-font:major-latin;mso-hansi-theme-font:
major-latin'> are joined and changed based on the result of their square root.<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-hansi-theme-font:major-latin'><o:p>&nbsp;</o:p></span></p>

<h1><span style='mso-fareast-font-family:"Times New Roman";color:windowtext;
mso-fareast-language:EN-AU'>Arithmetic tests <o:p></o:p></span></h1>

<p class=MsoNormal style='margin-top:11.25pt;margin-right:0cm;margin-bottom:
0cm;margin-left:0cm;margin-bottom:.0001pt;line-height:115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>As outlined earlier, the result of a matching pair in reachable
positions has to be calculated based on their square root.<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>Operation: Value 2 in position [0<span class=GramE>][</span>0] and value
2 in position [0][1] with a left shifting command.<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>Generated Result: generated 4 in position [0<span class=GramE>][</span>0].<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>Expected Result: generated 4 in position [0<span class=GramE>][</span>0].<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'><o:p>&nbsp;</o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>Operation: Value 32 in position [2<span class=GramE>][</span>0] and
value 32 in position [2][2] with a right shifting command.<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>Generated Result: generated 64 in position [2<span class=GramE>][</span>3].<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>Expected Result: generated 64 in position [2<span class=GramE>][</span>3].<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'><o:p>&nbsp;</o:p></span></p>

<h1><span style='mso-fareast-font-family:"Times New Roman";color:windowtext;
mso-fareast-language:EN-AU'>Integration Test<o:p></o:p></span></h1>

<p class=MsoNormal style='margin-top:11.25pt;margin-right:0cm;margin-bottom:
0cm;margin-left:0cm;margin-bottom:.0001pt;line-height:115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>As this program has been written in a modular/OO approach in which there
are different modules with various functions that are inter-connected via a
header file, test class has made use of them in a variety of test cases to
reach a minimum/safe certainty that all integrated functions are working
according to their specifications.<span style='mso-spacerun:yes'>  </span>This
test also has taken into consideration some factors of function testing,
therefore it is safe to consider this test as a hybrid approach in testing this
program.<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'><span style='mso-spacerun:yes'> </span><o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>Operation: tilting board to left and combining values.<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>Functions: <span class=SpellE>tilt_board_left</span> with
board_rotate_90 and board_rotate_270<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>Generated Result: for the following board<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>1, 0, 0, 1,<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>0, 0, 1, 1,<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>1, 1, 0, 1,<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>0, 1, 0, 1 <o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
class=GramE><span style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>shifting</span></span><span style='font-size:12.0pt;line-height:115%;
font-family:"Calibri Light","sans-serif";mso-ascii-theme-font:major-latin;
mso-fareast-font-family:"Times New Roman";mso-hansi-theme-font:major-latin;
mso-bidi-font-family:Consolas;mso-fareast-language:EN-AU'> to left has to
generated<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>2, 0, 0, 0,<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>2, 0, 0, 0,<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>2, 1, 0, 0,<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>2, 0, 0, 0.<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>Expected Result: shifting left on<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>1, 0, 0, 1, <o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>0, 0, 1, 1, <o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>1, 1, 0, 1,<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>0, 1, 0, 1 <o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
class=GramE><span style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>has</span></span><span style='font-size:12.0pt;line-height:115%;
font-family:"Calibri Light","sans-serif";mso-ascii-theme-font:major-latin;
mso-fareast-font-family:"Times New Roman";mso-hansi-theme-font:major-latin;
mso-bidi-font-family:Consolas;mso-fareast-language:EN-AU'> generated <o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>2, 0, 0, 0, <o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>2, 0, 0, 0, <o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>2, 1, 0, 0, <o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>2, 0, 0, 0.<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'><o:p>&nbsp;</o:p></span></p>

<h1><span style='mso-fareast-font-family:"Times New Roman";color:windowtext;
mso-fareast-language:EN-AU'>Graphical User Interface Testing<o:p></o:p></span></h1>

<p class=MsoNormal style='margin-top:11.25pt;margin-right:0cm;margin-bottom:
0cm;margin-left:0cm;margin-bottom:.0001pt;line-height:115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>As there is no graphical (in a modern sense of the term) existed for
this program, testing would only be conducted on textual commands, and further
testing and other aspects are not critically necessary, if they don’t violate
usability as is.<o:p></o:p></span></p>

<p class=MsoNormal style='margin-bottom:0cm;margin-bottom:.0001pt;line-height:
115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'><o:p>&nbsp;</o:p></span></p>

<h1><span style='mso-fareast-font-family:"Times New Roman";color:windowtext;
mso-fareast-language:EN-AU'>Summary<o:p></o:p></span></h1>

<p class=MsoNormal style='margin-top:11.25pt;margin-right:0cm;margin-bottom:
0cm;margin-left:0cm;margin-bottom:.0001pt;line-height:115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'>The major concern is to make this game as responsiveness as possible, so
that it is flawless and playable. Doing this would require testing on major
functionalise as outlined in the test plan, and as demonstrated, this has been
met to an expected level defined in the game spec. <o:p></o:p></span></p>

<p class=MsoNormal style='margin-top:11.25pt;margin-right:0cm;margin-bottom:
0cm;margin-left:0cm;margin-bottom:.0001pt;line-height:115%;tab-stops:45.8pt 91.6pt 137.4pt 183.2pt 229.0pt 274.8pt 320.6pt 366.4pt 412.2pt 458.0pt 503.8pt 549.6pt 595.4pt 641.2pt 687.0pt 732.8pt'><span
style='font-size:12.0pt;line-height:115%;font-family:"Calibri Light","sans-serif";
mso-ascii-theme-font:major-latin;mso-fareast-font-family:"Times New Roman";
mso-hansi-theme-font:major-latin;mso-bidi-font-family:Consolas;mso-fareast-language:
EN-AU'><o:p>&nbsp;</o:p></span></p>

</div>
