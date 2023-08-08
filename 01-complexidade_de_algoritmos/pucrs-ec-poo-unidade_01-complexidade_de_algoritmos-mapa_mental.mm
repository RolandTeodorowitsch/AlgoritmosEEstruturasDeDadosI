<map version="1.0.1">
<!-- To view this file, download free mind mapping software FreeMind from http://freemind.sourceforge.net -->
<node CREATED="1690999231766" ID="ID_418765317" MODIFIED="1691157704578" TEXT="Ferramentas de An&#xe1;lise">
<node CREATED="1691157721350" ID="ID_1837481623" MODIFIED="1691157727882" POSITION="right" TEXT="Nota&#xe7;&#xe3;o assint&#xf3;tica">
<node CREATED="1691169943949" ID="ID_1150927143" MODIFIED="1691170128109" TEXT="Assint&#xf3;tico (Adj.)">
<node CREATED="1691170285024" ID="ID_21976959" MODIFIED="1691170291634" TEXT="Aquilo que est&#xe1; relativamente pr&#xf3;ximo"/>
<node CREATED="1691169989122" ID="ID_1590634768" MODIFIED="1691170133314" TEXT="Para todos os valores suficientemente grandes"/>
<node CREATED="1691170343790" ID="ID_1625184087" MODIFIED="1691170352899" TEXT="O comportamento a ser observado em uma fun&#xe7;&#xe3;o f(n), quando n tende ao infinito"/>
<node CREATED="1691170133781" ID="ID_990162167" MODIFIED="1691170139562" TEXT="Relativo &#xe0; Assintota">
<node CREATED="1691170159834" ID="ID_920072857" MODIFIED="1691170222798" TEXT="(Mat.) linha reta relacionada com uma curva, cuja dist&#xe2;ncia entre elas se torna infinitamente pequena, a partir de determinado ponto"/>
<node CREATED="1691170163299" ID="ID_660865828" MODIFIED="1691170255475" TEXT="(Fig.) Caminho que se aproxima continuamente de um ideal sem jamais o atingir"/>
</node>
</node>
<node CREATED="1691157742953" ID="ID_259040623" MODIFIED="1691157900136" TEXT="Passos em pseudoc&#xf3;digo ou em linguagem de alto n&#xed;vel correspondem a um pequeno n&#xfa;mero de opera&#xe7;&#xf5;es primitivas">
<node CREATED="1691157901214" ID="ID_1511420330" MODIFIED="1691157907844" TEXT="M&#xe9;todos s&#xe3;o uma exce&#xe7;&#xe3;o"/>
<node CREATED="1691157917914" ID="ID_50468657" MODIFIED="1691157948709" TEXT="Pode-se estimar o n&#xfa;mero de opera&#xe7;&#xf5;es primitivas"/>
</node>
<node CREATED="1691157957862" ID="ID_1139933785" MODIFIED="1691158017149" TEXT="Em an&#xe1;lise de algoritmos, o importante &#xe9; a taxa de crescimento do tempo de execu&#xe7;&#xe3;o">
<node CREATED="1691158025701" ID="ID_1364712919" MODIFIED="1691158160936" TEXT="Exemplo: valor m&#xe1;ximo em um arranjo de tamanho n">
<node CREATED="1691158082433" ID="ID_1544416476" MODIFIED="1691158187219" TEXT="O tempo de execu&#xe7;&#xe3;o cresce proporcionalmente a n"/>
<node CREATED="1691160373137" ID="ID_1297484763" MODIFIED="1691160426705" TEXT="Um fator constante, que depende de cada m&#xe1;quina, &#xe9; repetido n vezes"/>
</node>
</node>
<node CREATED="1691160298803" ID="ID_18436937" MODIFIED="1691160328827" TEXT="Consiste numa nota&#xe7;&#xe3;o matem&#xe1;tica para fun&#xe7;&#xf5;es que desconsidera fatores contantes">
<node CREATED="1691160558359" ID="ID_1618308753" MODIFIED="1691160581295" TEXT="Determina-se a fun&#xe7;&#xe3;o que representa a taxa de crescimento do desempenho em fun&#xe7;&#xe3;o de n"/>
<node CREATED="1691160585885" ID="ID_542455702" MODIFIED="1691160623995" TEXT="Foca-se nos aspectos gerais da fun&#xe7;&#xe3;o de tempo de execu&#xe7;&#xe3;o"/>
<node CREATED="1691160624583" ID="ID_302205281" MODIFIED="1691160670460" TEXT="Aspectos espec&#xed;ficos (constantes) n&#xe3;o s&#xe3;o considerados"/>
</node>
<node CREATED="1691174713468" ID="ID_64619452" MODIFIED="1691174719156" TEXT="Nota&#xe7;&#xf5;es">
<node CREATED="1691174720131" ID="ID_1594986032" MODIFIED="1691174749817" TEXT="Nota&#xe7;&#xe3;o O">
<node CREATED="1691185936555" ID="ID_980667774" MODIFIED="1691185939913" TEXT="Defini&#xe7;&#xe3;o">
<node CREATED="1691185941439" ID="ID_1318629624" MODIFIED="1691185966552" TEXT="f(n) e g(n) mapeiam inteiros n&#xe3;o negativos em reais"/>
<node CREATED="1691185969240" ID="ID_1089958617" MODIFIED="1691185992349" TEXT="f(n) &#xe9; O(g(n))">
<node CREATED="1691186058388" ID="ID_814018684" MODIFIED="1691186070934" TEXT="Ou: f(n) &#xe9; da ordem de g(n)"/>
<node CREATED="1691185993852" ID="ID_1505854322" MODIFIED="1691193672505" TEXT="Existe c (real) &gt; 0 e n_0 (inteiro) &gt;=1, tal que"/>
<node CREATED="1691186025697" ID="ID_1243271298" MODIFIED="1691193676056" TEXT="f(n) &lt;= c.g(n), para todo n &gt;= n_0"/>
</node>
<node CREATED="1691194846898" ID="ID_1839641274" MODIFIED="1691241780174" TEXT="g(x) usualmente &#xe9; definida usando uma das 7 fun&#xe7;&#xf5;es b&#xe1;sicas"/>
</node>
<node CREATED="1691193191932" ID="ID_1200464717" MODIFIED="1691193195264" TEXT="Propriedades">
<node CREATED="1691193196799" ID="ID_23155021" MODIFIED="1691193473990" TEXT="Constantes e termos de menor ordem podem ser ignorados">
<node CREATED="1691193503784" ID="ID_930673138" MODIFIED="1691193520313" TEXT="S&#xe3;o os fatores de maior ordem que mais afetam o crescimento"/>
</node>
<node CREATED="1691193532485" ID="ID_845530526" MODIFIED="1691193585508" TEXT="f(n) = a_0 + a_1.n + ... +a_d.n^d, com a_d &gt; 0">
<node CREATED="1691193629714" ID="ID_699647497" MODIFIED="1691193643796" TEXT="c = a_0 +  a_1 + ... + a_d"/>
<node CREATED="1691193644809" ID="ID_1491587616" MODIFIED="1691193648077" TEXT="n_0 = 1"/>
<node CREATED="1691193591320" ID="ID_1596198415" MODIFIED="1691193603886" TEXT="O(n^d)"/>
</node>
</node>
<node CREATED="1691186083768" ID="ID_346870920" MODIFIED="1691186093923" TEXT="Interpreta&#xe7;&#xe3;o">
<node CREATED="1691186094954" ID="ID_1986469740" MODIFIED="1691186272248" TEXT="g(n) ser&#xe1; a ordem de f(n) se a partir de determinado ponto (n0) a curva c.g(n) for sempre maior ou igual a f(n)"/>
<node CREATED="1691192147602" ID="ID_1883571250" MODIFIED="1691243982900" TEXT="f(n) &#xe9; &quot;menor ou igual&quot; a outra fun&#xe7;&#xe3;o g(n) at&#xe9; um fator constante e de uma maneira assint&#xf3;tica &#xe0; medida que n cresce para o infinito"/>
<node CREATED="1691242570540" ID="ID_1873429885" MODIFIED="1691242595171" TEXT="Pode ser usada para caracterizar">
<node CREATED="1691242596138" ID="ID_813954650" MODIFIED="1691242614935" TEXT="Tempo de execu&#xe7;&#xe3;o"/>
<node CREATED="1691242608757" ID="ID_803924739" MODIFIED="1691242612801" TEXT="Limites espaciais"/>
</node>
</node>
<node CREATED="1691186333687" ID="ID_510932812" MODIFIED="1691188833829" TEXT="Exemplos">
<node CREATED="1691186348491" ID="ID_1354403613" MODIFIED="1691186357876" TEXT="f(n) = 8n-2">
<node CREATED="1691186361194" ID="ID_909224120" MODIFIED="1691186364640" TEXT="O(n)"/>
<node CREATED="1691188853248" ID="ID_612047257" MODIFIED="1691193127232" TEXT="para c =  6, com n &gt;=1, f(n) &lt;= c.g(n)">
<node CREATED="1691193703805" ID="ID_872970419" MODIFIED="1691193711370" TEXT="n_0 = 1"/>
</node>
<node CREATED="1691192417809" ID="ID_291662584" MODIFIED="1691192420392" TEXT="g(n) = n"/>
</node>
<node CREATED="1691188834999" ID="ID_1365293943" MODIFIED="1691188840099" TEXT="f(n) = 8n+2">
<node CREATED="1691188841473" ID="ID_563500592" MODIFIED="1691188844557" TEXT="O(n)"/>
<node CREATED="1691191874422" ID="ID_1905952293" MODIFIED="1691192976316" TEXT="para c = 10, com n &gt;= 1, f(n) &lt;= c.g(n)">
<node CREATED="1691193714961" ID="ID_689773269" MODIFIED="1691193718879" TEXT="n_0 = 1"/>
</node>
<node CREATED="1691192412742" ID="ID_348830707" MODIFIED="1691192416561" TEXT="g(n) = n"/>
</node>
<node CREATED="1691192272671" ID="ID_743066441" MODIFIED="1691192285696" TEXT="Localizar o maior elemento de um arranjo de n elementos">
<node CREATED="1691192303271" ID="ID_1687000023" MODIFIED="1691192437751" TEXT="Tempo para localizar o m&#xe1;ximo de um arranjo n: n vezes um valor constante"/>
<node CREATED="1691192388807" ID="ID_197615627" MODIFIED="1691192390974" TEXT="O(n)"/>
</node>
<node CREATED="1691193755282" ID="ID_489615601" MODIFIED="1691193801328" TEXT="f(n) = 5n&#x2074;+3n&#xb3;+2n&#xb2;+4n+1">
<node CREATED="1691193935164" ID="ID_1178950419" MODIFIED="1691193940978" TEXT="c = 15, n_0 = 1"/>
<node CREATED="1691193841999" ID="ID_923759564" MODIFIED="1691193856718" TEXT="O(n&#x2074;)"/>
</node>
<node CREATED="1691194010005" ID="ID_1157777102" MODIFIED="1691194086350" TEXT="f(n) = 5n&#xb2;+3nlog n + 2n + 5 ">
<node CREATED="1691194088863" ID="ID_904921600" MODIFIED="1691194100942" TEXT="O(n&#xb2;)"/>
</node>
<node CREATED="1691195046055" ID="ID_1642271847" MODIFIED="1691195065618" TEXT="f(n) = 4n&#xb2;+nlog n">
<node CREATED="1691195076392" ID="ID_502044596" MODIFIED="1691195081498" TEXT="O(n&#xb2;)"/>
</node>
<node CREATED="1691195087651" ID="ID_1935976035" MODIFIED="1691195111390" TEXT="f(n) = 5n+20log n + 4">
<node CREATED="1691195118759" ID="ID_1442379213" MODIFIED="1691195120741" TEXT="O(n)"/>
</node>
<node CREATED="1691194107865" ID="ID_759555999" MODIFIED="1691194126730" TEXT="f(n) = 20n&#xb3; + 10nlog n + 5">
<node CREATED="1691194135327" ID="ID_1401740754" MODIFIED="1691194139610" TEXT="O(n&#xb3;)"/>
</node>
<node CREATED="1691194246956" ID="ID_1398861010" MODIFIED="1691194254449" TEXT="f(n) = 3log n + 2">
<node CREATED="1691194255441" ID="ID_421531556" MODIFIED="1691194262691" TEXT="O(log n)"/>
</node>
<node CREATED="1691194265797" ID="ID_1753275378" MODIFIED="1691194332709" TEXT="f(n) = 2^{n+2}">
<node CREATED="1691194333783" ID="ID_1180605075" MODIFIED="1691194374333" TEXT="f(n) = 2^n + 2^2 = 4.2^n"/>
<node CREATED="1691194375052" ID="ID_789996124" MODIFIED="1691194386821" TEXT="O(2^n)"/>
</node>
<node CREATED="1691194399358" ID="ID_665975795" MODIFIED="1691194411357" TEXT="f(n) = 2n+100log n">
<node CREATED="1691194413925" ID="ID_1976858277" MODIFIED="1691194419572" TEXT="O(n)"/>
</node>
<node CREATED="1691194470289" ID="ID_1915336218" MODIFIED="1691194481889" TEXT="f(n) = 4n^3 + 3n^2">
<node CREATED="1691194496992" ID="ID_1773206287" MODIFIED="1691194502970" TEXT="O(n^3)">
<node CREATED="1691194575040" ID="ID_1057614580" MODIFIED="1691194584800" TEXT="Caracteriza a fun&#xe7;&#xe3;o mais detalhadamente"/>
<node CREATED="1691194662434" ID="ID_1099174082" MODIFIED="1691194745938" TEXT="&quot;A dist&#xe3;ncia &#xe9; menor do que 3km&quot;"/>
</node>
<node CREATED="1691194505109" ID="ID_1257192425" MODIFIED="1691194563660" TEXT="O(n^5) ou O(n^4)">
<node CREATED="1691194566585" ID="ID_652923348" MODIFIED="1691194568701" TEXT="Serviriam, mas n&#xe3;o s&#xe3;o a melhor op&#xe7;&#xe3;o"/>
<node CREATED="1691194684219" ID="ID_1291927865" MODIFIED="1691194713742" TEXT="&quot;A dist&#xe2;ncia &#xe9; menor do que 4km&quot;"/>
<node CREATED="1691194700745" ID="ID_419080164" MODIFIED="1691194711127" TEXT="&quot;A dist&#xe2;ncia &#xe9; menor do que 5km&quot;"/>
</node>
</node>
</node>
<node CREATED="1691194989894" ID="ID_1360391178" MODIFIED="1691195001021" TEXT="Nomenclatura">
<node CREATED="1691195002067" ID="ID_446123788" MODIFIED="1691195010098" TEXT="O(n^2)">
<node CREATED="1691195011879" ID="ID_1768299980" MODIFIED="1691195018096" TEXT="Tempo quadr&#xe1;tico"/>
</node>
<node CREATED="1691195019257" ID="ID_95800861" MODIFIED="1691195028543" TEXT="O(n)">
<node CREATED="1691195029604" ID="ID_719174497" MODIFIED="1691195032909" TEXT="Tempo linear"/>
</node>
</node>
</node>
<node CREATED="1691174721896" ID="ID_999634064" MODIFIED="1691174729582" TEXT="Nota&#xe7;&#xe3;o &#xf4;mega">
<node CREATED="1691242634540" ID="ID_1949820092" MODIFIED="1691242851019" TEXT="Fornece uma maneira assint&#xf3;tica de dizer que uma fun&#xe7;&#xe3;o cresce a uma taxa que &#xe9; &quot;maior ou igual&quot; &#xe0; de outra fun&#xe7;&#xe3;o"/>
<node CREATED="1691242975074" ID="ID_1670588032" MODIFIED="1691242978984" TEXT="Defini&#xe7;&#xe3;o">
<node CREATED="1691242979912" ID="ID_415383670" MODIFIED="1691243013897" TEXT="f(n) e g(n) s&#xe3;o fun&#xe7;&#xf5;es mapeando inteiros em n&#xfa;meros reais"/>
<node CREATED="1691243017463" ID="ID_1148536557" MODIFIED="1691243638563" TEXT="f(n) &#xe9; &#x3a9;(g(n))">
<node CREATED="1691243070513" ID="ID_645940392" MODIFIED="1691243577688" TEXT="Ou: f(n) &#xe9; &#xf4;mega de g(n)"/>
<node CREATED="1691243696150" ID="ID_1207098782" MODIFIED="1691243714560" TEXT="g(n) &#xe9; O(f(n))"/>
<node CREATED="1691243717662" ID="ID_675860555" MODIFIED="1691243791112" TEXT="Existe c (real) &gt; 0 e n_0 (inteiro) &gt;=1, tal que "/>
<node CREATED="1691243830701" ID="ID_1903222780" MODIFIED="1691243843551" TEXT="f(n) &gt;= c.g(n), para todo n &gt;= n_0 "/>
</node>
</node>
<node CREATED="1691244012141" ID="ID_240403229" MODIFIED="1691244015712" TEXT="Interpreta&#xe7;&#xe3;o">
<node CREATED="1691244036087" ID="ID_750101455" MODIFIED="1691244058828" TEXT="Permite dizer que uma fun&#xe7;&#xe3;o &#xe9; assintoticamente maior ou igual a outra, exceto por um fator constante"/>
</node>
<node CREATED="1691244061071" ID="ID_1147677605" MODIFIED="1691244140648" TEXT="Exemplo(s)">
<node CREATED="1691244065053" ID="ID_1944209126" MODIFIED="1691244371157" TEXT="3nlog n + 2n">
<node CREATED="1691244095980" ID="ID_1948035533" MODIFIED="1691244107277" TEXT="&#x3a9;(nlog n)"/>
<node CREATED="1691244119607" ID="ID_1280298223" MODIFIED="1691244123573" TEXT="c  = 3"/>
<node CREATED="1691244124615" ID="ID_536868164" MODIFIED="1691244129983" TEXT="n_0 = 2"/>
</node>
</node>
</node>
<node CREATED="1691174730507" ID="ID_1105403593" MODIFIED="1691174744165" TEXT="Nota&#xe7;&#xe3;o theta"/>
</node>
<node CREATED="1691170486775" ID="ID_1263016837" MODIFIED="1691170550379" TEXT="Suponha que f e g s&#xe3;o duas fun&#xe7;&#xf5;es de uma vari&#xe1;vel inteira n">
<node CREATED="1691170553929" ID="ID_756420762" MODIFIED="1691170572270" TEXT="f &#xe9; assintoticamente igual a g se f(n) tende a g(n) quando n tende a infinito"/>
<node CREATED="1691170578264" ID="ID_1634236977" MODIFIED="1691170595782" TEXT="f &#xe9; assintoticamente menor que g se f(n) &lt; g(n) para todos os valores suficientemente grandes de n"/>
</node>
</node>
<node CREATED="1690999248681" ID="ID_1847744166" MODIFIED="1690999264878" POSITION="left" TEXT="7 fun&#xe7;&#xf5;es mais importantes usadas em An&#xe1;lise de algoritmos">
<node CREATED="1690999266299" ID="ID_8755232" MODIFIED="1690999544640" TEXT="Fun&#xe7;&#xe3;o constante">
<node CREATED="1690999278340" ID="ID_172443540" MODIFIED="1690999281309" TEXT="f(n) = c"/>
<node CREATED="1690999281915" ID="ID_768886459" MODIFIED="1690999317325" TEXT="A quantidade de dados n&#xe3;o influencia no desempenho"/>
<node CREATED="1690999318000" ID="ID_1891459930" MODIFIED="1690999370404" TEXT="Exemplos">
<node CREATED="1690999371341" ID="ID_1462491338" MODIFIED="1690999380843" TEXT="Retornar o primeiro elemento de um vetor"/>
<node CREATED="1690999381996" ID="ID_1467584838" MODIFIED="1690999404714" TEXT="Executar uma opera&#xe7;&#xe3;o b&#xe1;sica">
<node CREATED="1690999417515" ID="ID_417889754" MODIFIED="1690999422764" TEXT="Opera&#xe7;&#xe3;o entre dois valores"/>
<node CREATED="1690999423736" ID="ID_1508613935" MODIFIED="1690999427618" TEXT="Atribui&#xe7;&#xe3;o"/>
<node CREATED="1690999428086" ID="ID_1206349594" MODIFIED="1690999431371" TEXT="Compara&#xe7;&#xe3;o"/>
</node>
</node>
</node>
<node CREATED="1690999434002" ID="ID_1949261119" MODIFIED="1690999551558" TEXT="Fun&#xe7;&#xe3;o logaritmo">
<node CREATED="1690999558505" ID="ID_777951738" MODIFIED="1690999646868" TEXT="f(n) = log_{b} n">
<node CREATED="1690999712851" ID="ID_598082070" MODIFIED="1690999717509" TEXT="b &#xe9; a base"/>
<node CREATED="1690999655773" ID="ID_1856485929" MODIFIED="1690999697764" TEXT="b^{f(n)} = n"/>
<node CREATED="1690999771599" ID="ID_1995750459" MODIFIED="1690999783406" TEXT="Em computa&#xe7;&#xe3;o, a base 2 &#xe9; muito utilizada"/>
</node>
</node>
<node CREATED="1690999931397" ID="ID_1738875189" MODIFIED="1690999936791" TEXT="Fun&#xe7;&#xe3;o linear">
<node CREATED="1690999938062" ID="ID_787619366" MODIFIED="1690999942754" TEXT="f(n) = n"/>
<node CREATED="1690999960539" ID="ID_1812052473" MODIFIED="1690999989746" TEXT="Uma opera&#xe7;&#xe3;o b&#xe1;sica &#xe9; executada sobre cada elemento de um conjunto"/>
</node>
<node CREATED="1691000065107" ID="ID_486124260" MODIFIED="1691000073082" TEXT="Fun&#xe7;&#xe3;o n-log-n">
<node CREATED="1691000162577" ID="ID_408438151" MODIFIED="1691000167905" TEXT="f(n) = n log n"/>
</node>
<node CREATED="1691000073613" ID="ID_1353558351" MODIFIED="1691000087695" TEXT="Fun&#xe7;&#xe3;o quadr&#xe1;tica">
<node CREATED="1691000172013" ID="ID_1969521457" MODIFIED="1691000177090" TEXT="f(n) = n^2"/>
</node>
<node CREATED="1691000088218" ID="ID_45046183" MODIFIED="1691000096832" TEXT="Fun&#xe7;&#xe3;o c&#xfa;bica">
<node CREATED="1691000178820" ID="ID_996617637" MODIFIED="1691000184437" TEXT="f(n) = n ^3"/>
</node>
<node CREATED="1691000097293" ID="ID_1268678719" MODIFIED="1691000103250" TEXT="Fun&#xe7;&#xe3;o exponencial">
<node CREATED="1691000188954" ID="ID_1665287450" MODIFIED="1691000193982" TEXT="f(n) = a ^n"/>
</node>
</node>
<node CREATED="1691000382316" ID="ID_701393169" MODIFIED="1691000388111" POSITION="left" TEXT="An&#xe1;lise de algoritmos">
<node CREATED="1691000389205" ID="ID_721280610" MODIFIED="1691000410979" TEXT="Estrutura de dados">
<node CREATED="1691000411759" ID="ID_1177688009" MODIFIED="1691000430226" TEXT="Forma sistem&#xe1;tica de organizar e acessar dados"/>
</node>
<node CREATED="1691000431732" ID="ID_969036646" MODIFIED="1691000433661" TEXT="Algoritmo">
<node CREATED="1691000441151" ID="ID_135977195" MODIFIED="1691000461636" TEXT="Procedimento passo a passo para executar alguma tarefa em tempo finito"/>
</node>
<node CREATED="1691000490430" ID="ID_945539221" MODIFIED="1691000838767" TEXT="Envolve">
<node CREATED="1691000521908" ID="ID_910591052" MODIFIED="1691000552575" TEXT="Caracteriza&#xe7;&#xe3;o dos tempos de execu&#xe7;&#xe3;o dos algoritmos">
<node CREATED="1691000578563" ID="ID_56626384" MODIFIED="1691000584259" TEXT="Mais r&#xe1;pido, melhor"/>
<node CREATED="1691000605676" ID="ID_1800724363" MODIFIED="1691000615660" TEXT="Normalmente o tempo cresce de acordo com a quantidade de dados"/>
<node CREATED="1691000654509" ID="ID_479144276" MODIFIED="1691000659967" TEXT="Pode ser afetado por">
<node CREATED="1691000660925" ID="ID_1835951239" MODIFIED="1691000672874" TEXT="Ambiente de hardware">
<node CREATED="1691000678299" ID="ID_271544272" MODIFIED="1691000695421" TEXT="Processador"/>
<node CREATED="1691000697417" ID="ID_1567225118" MODIFIED="1691000704180" TEXT="Mem&#xf3;ria">
<node CREATED="1691000705039" ID="ID_625935131" MODIFIED="1691000716161" TEXT="Tecnologia"/>
<node CREATED="1691000717179" ID="ID_261881969" MODIFIED="1691000719192" TEXT="Cache"/>
</node>
<node CREATED="1691000720676" ID="ID_837776583" MODIFIED="1691000722130" TEXT="Disco"/>
</node>
<node CREATED="1691000673419" ID="ID_884585628" MODIFIED="1691000676831" TEXT="Ambiente de software">
<node CREATED="1691000730998" ID="ID_1841977022" MODIFIED="1691000736368" TEXT="Sistema Operacional"/>
<node CREATED="1691000737054" ID="ID_650618827" MODIFIED="1691000741706" TEXT="Linguagem de Programa&#xe7;&#xe3;o">
<node CREATED="1691000746263" ID="ID_1301126584" MODIFIED="1691000750129" TEXT="Compila&#xe7;&#xe3;o"/>
<node CREATED="1691000750654" ID="ID_29720627" MODIFIED="1691000753967" TEXT="Interpreta&#xe7;&#xe3;o"/>
</node>
</node>
</node>
<node CREATED="1691000925687" ID="ID_843416492" MODIFIED="1691000930014" TEXT="Estudos experimentais">
<node CREATED="1691000999859" ID="ID_1997271924" MODIFIED="1691001022538" TEXT="Testar a implementa&#xe7;&#xe3;o com v&#xe1;rias entradas medindo o tempo de execu&#xe7;&#xe3;o"/>
<node CREATED="1691001052990" ID="ID_1804023217" MODIFIED="1691001305604" TEXT="Gera-se um gr&#xe1;fico mostrando a varia&#xe7;&#xe3;o do tempo (s, ms, us, ns) para diferentes tamanhos de dados (n)"/>
<node CREATED="1691001138314" ID="ID_1161238998" MODIFIED="1691001154930" TEXT="Fun&#xe7;&#xf5;es de medi&#xe7;&#xe3;o de tempo s&#xe3;o usadas antes e depois do algoritmo">
<node CREATED="1691001155894" ID="ID_529412867" MODIFIED="1691001157859" TEXT="Em Java">
<node CREATED="1691001159651" ID="ID_996786082" MODIFIED="1691001203915" TEXT="System.currentTimeMillis()"/>
<node CREATED="1691001193740" ID="ID_977476667" MODIFIED="1691001195418" TEXT="System.nanoTime()"/>
</node>
<node CREATED="1691001209091" ID="ID_242780229" MODIFIED="1691001213410" TEXT="Em C (Unix)">
<node CREATED="1691001214412" ID="ID_616446161" MODIFIED="1691001240012" TEXT="struct timeval t;"/>
<node CREATED="1691001240678" ID="ID_1697432003" MODIFIED="1691001245757" TEXT="gettimeofday(&amp;t, NULL);"/>
</node>
</node>
<node CREATED="1691001369693" ID="ID_600494060" MODIFIED="1691001411286" TEXT="Deve-se escolher uma boa configura&#xe7;&#xe3;o, para tirar boas conclus&#xf5;es"/>
<node CREATED="1691001452108" ID="ID_946500768" MODIFIED="1691001455847" TEXT="Limita&#xe7;&#xf5;es">
<node CREATED="1691001457098" ID="ID_1384963885" MODIFIED="1691001467023" TEXT="O conjunto de dados testados &#xe9; limitado">
<node CREATED="1691001468237" ID="ID_197649885" MODIFIED="1691001478971" TEXT="Testes com dados importantes podem ficar de fora"/>
</node>
<node CREATED="1691001496930" ID="ID_357305025" MODIFIED="1691001523516" TEXT="Tempos de execu&#xe7;&#xe3;o de algortimos somente podem ser comparados no mesmo ambiente"/>
<node CREATED="1691001548853" ID="ID_1746080945" MODIFIED="1691001560699" TEXT="O algoritmo deve ser implementado e executado"/>
</node>
</node>
</node>
<node CREATED="1691000840328" ID="ID_969111475" MODIFIED="1691000887473" TEXT="Caracteriza&#xe7;&#xe3;o das opera&#xe7;&#xf5;es sobre as estruturas de dados">
<node CREATED="1691008431816" ID="ID_1951487179" MODIFIED="1691008436960" TEXT="Vantagens">
<node CREATED="1691008438407" ID="ID_1333373212" MODIFIED="1691008452701" TEXT="Considera todas as entradas poss&#xed;veis"/>
<node CREATED="1691008453379" ID="ID_1376006706" MODIFIED="1691008471952" TEXT="Avalia os algoritmos independentemente do ambiente"/>
<node CREATED="1691008482050" ID="ID_1352067465" MODIFIED="1691008612323" TEXT="N&#xe3;o exige implementa&#xe7;&#xe3;o nem execu&#xe7;&#xe3;o de experimentos, apenas pseudoc&#xf3;digo de alto n&#xed;vel"/>
</node>
<node CREATED="1691008522442" ID="ID_169754937" MODIFIED="1691008579422" TEXT="Busca associar a cada algoritmo uma fun&#xe7;&#xe3;o que caracteriza o tempo de execu&#xe7;&#xe3;o f(n) em fun&#xe7;&#xe3;o do tamanho da entrada n"/>
<node CREATED="1691008799318" ID="ID_638694456" MODIFIED="1691010477140" TEXT="Opera&#xe7;&#xf5;es primitivas">
<node CREATED="1691008835248" ID="ID_602043919" MODIFIED="1691008857995" TEXT="Correspondem a instru&#xe7;&#xf5;es de baixo n&#xed;vel"/>
<node CREATED="1691008858471" ID="ID_1538242380" MODIFIED="1691008878136" TEXT="T&#xea;m tempo de execu&#xe7;&#xe3;o constante"/>
<node CREATED="1691008630922" ID="ID_191927063" MODIFIED="1691008893253" TEXT="Tipos">
<node CREATED="1691008639825" ID="ID_469718168" MODIFIED="1691008685699" TEXT="Atribuic&#x327;a&#x303;o de valores a varia&#x301;veis"/>
<node CREATED="1691008686809" ID="ID_1139485248" MODIFIED="1691008699695" TEXT="Chamadas de me&#x301;todos"/>
<node CREATED="1691008700460" ID="ID_795393167" MODIFIED="1691008711677" TEXT="Operac&#x327;o&#x303;es aritme&#x301;ticas (por exemplo, adic&#x327;a&#x303;o de dois nu&#x301;meros)"/>
<node CREATED="1691008712588" ID="ID_1371726013" MODIFIED="1691008728997" TEXT="Comparac&#x327;a&#x303;o de dois nu&#x301;meros"/>
<node CREATED="1691008731119" ID="ID_1916107664" MODIFIED="1691008740407" TEXT="Acesso a um arranjo"/>
<node CREATED="1691008741588" ID="ID_492969964" MODIFIED="1691008757146" TEXT="Seguimento de uma refere&#x302;ncia para um objeto"/>
<node CREATED="1691008757902" ID="ID_1196239787" MODIFIED="1691008761332" TEXT="Retorno de um me&#x301;todo"/>
</node>
</node>
<node CREATED="1691010466326" ID="ID_667235771" MODIFIED="1691010473144" TEXT="Contagem de opera&#xe7;&#xf5;es primitivas">
<node CREATED="1691008921635" ID="ID_1468051753" MODIFIED="1691008951072" TEXT="Em vez de contar o tempo, conta-se o n&#xfa;mero de opera&#xe7;&#xf5;es"/>
<node CREATED="1691010835121" ID="ID_1575687336" MODIFIED="1691010873767" TEXT="Cada opera&#xe7;&#xe3;o  corresponde a uma execu&#xe7;&#xe3;o de instru&#xe7;&#xe3;o com tempo constante"/>
<node CREATED="1691010743545" ID="ID_112357944" MODIFIED="1691010780488" TEXT="Assume-se que o tempo de execu&#xe7;&#xe3;o de opera&#xe7;&#xf5;es primitivas diferentes s&#xe3;o similares"/>
<node CREATED="1691010883450" ID="ID_522349713" MODIFIED="1691010899731" TEXT="O n&#xfa;mero de opera&#xe7;&#xf5;es primitivas ser&#xe1; proporcional ao tempo de execu&#xe7;&#xe3;o"/>
<node CREATED="1691010968321" ID="ID_1893235602" MODIFIED="1691011004103" TEXT="O n&#xfa;mero de opera&#xe7;&#xf5;es pode variar dependendo da entrada">
<node CREATED="1691011036505" ID="ID_413623229" MODIFIED="1691011056349" TEXT="O caso m&#xe9;dio seria o ideal, mas &#xe9; dif&#xed;cil de determinar"/>
<node CREATED="1691011057434" ID="ID_177060614" MODIFIED="1691011080166" TEXT="A solu&#xe7;&#xe3;o &#xe9; considear o pior caso"/>
</node>
</node>
</node>
</node>
</node>
</node>
</map>
