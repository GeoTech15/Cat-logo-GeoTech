#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream html("index.html");
	if(!html){
		cout<<"No se pudo crear el archivo."<<endl;
		return 1;
	}
	html << "<html>\n";
    html << "<head><title>Cat&aacute;logo de Productos GeoStore</title></head>\n";
    html << "<style>\n";
    html << "body { font-family: Arial; }\n";
    html << ".producto { margin-bottom: 25px; }\n";
    html << ".buscador { margin-bottom: 20px; padding: 10px; width: 300px; }\n";
    html << "</style>\n";

    // ----- Script para la barra de búsqueda -----
    html << "<script>\n";
    html << "function buscar() {\n";
    html << "  let texto = document.getElementById('search').value.toLowerCase();\n";
    html << "  let productos = document.getElementsByClassName('producto');\n";
    html << "  for (let p of productos) {\n";
    html << "    let nombre = p.getElementsByTagName('h2')[0].innerText.toLowerCase();\n";
    html << "    let desc = p.getElementsByTagName('p')[0].innerText.toLowerCase();\n";
    html << "    if (nombre.includes(texto) || desc.includes(texto)) p.style.display = 'block';\n";
    html << "    else p.style.display = 'none';\n";
    html << "  }\n";
    html << "}\n";
    html << "</script>\n";

    html << "</head>\n<body>\n";
    html << "<h1>Cat&aacute;logo de Productos GeoStore</h1>\n";

 html << "<input type='text' id='search' class='buscador' placeholder='Buscar producto...' onkeyup='buscar()'>\n";

    html << "<div class='producto'>\n";
    html << "<h2>Protector de Privacidad para Monitor 19.5 pulgadas</h2>\n";
    html << "<p><b>Precio:</b> L.400</p>\n";
    html << "<img src=\"Privacidad_Monitor.jpeg\" alt=\"Producto 1\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"Privacidad_Monitor2.jpeg\" alt=\"Producto 1\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<p>Filtro de privacidad para monitor que bloquea hasta un 60% de la visibilidad lateral, evitando que otras personas vean tu pantalla.<br>Reduce reflejos, protege tus datos y brinda una experiencia de uso m&aacute;s segura. Ideal para oficinas, clases y trabajo remoto.</p>\n";
    html << "</div>\n";

    html << "<div class='producto'>\n";
    html << "<h2>Protector de Privacidad para Monitor 21.5 pulgadas</h2>\n";
    html << "<p><b>Precio:</b> L.500</p>\n";
    html << "<img src=\"Privacidad_Monitor.jpeg\" alt=\"Producto 2\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"Privacidad_Monitor_21.jpeg\" alt=\"Producto 2\" width=\"200\" onclick=\"window.open(this.src)\">\n"; 
    html << "<p>Filtro de privacidad para monitor que bloquea hasta un 60% de la visibilidad lateral, evitando que otras personas vean tu pantalla.<br>Reduce reflejos, protege tus datos y brinda una experiencia de uso m&aacute;s segura. Ideal para oficinas, clases y trabajo remoto.</p>\n";
    html << "</div>\n";
    
    html << "<div class='producto'>\n";
    html << "<h2>Cargador de Apple de 10W de USB-A a Lightning para Iphone e Ipad</h2>\n";
    html << "<p><b>Precio:</b> L.450</p>\n";
    html << "<img src=\"cargador_iphone2.jpeg\" alt=\"Producto 3\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"cargador_iphone.jpeg\" alt=\"Producto 3\" width=\"200\" onclick=\"window.open(this.src)\">\n"; 
    html << "<p>Cargador de 10&nbsp;W con conexi&oacute;n USB-A a Lightning para iPhone y iPad.<br> Ofrece carga estable y r&aacute;pida, protecci&oacute;n contra sobrecalentamiento y dise&ntilde;o port&aacute;til ideal para viajes y uso diario.</p>\n";
    html << "</div>\n";

    html << "<div class='producto'>\n";
    html << "<h2>Cable DisplayPort Ultra HD 4k Argom Tech de 1.8m </h2>\n";
    html << "<p><b>Precio:</b> L.300</p>\n";
    html << "<img src=\"dp.jpeg\" alt=\"Producto 4\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<p>Cable DisplayPort Ultra HD 4K de 1.8m con conectores dorados, compatible con monitores y tarjetas gr&aacute;ficas 4K.<br> Garantiza una conexi&oacute;n estable, imagen n&iacute;tida y transferencia de datos r&aacute;pida. Ideal para oficinas, gaming y producci&oacute;n de contenido multimedia.</p>\n";
    html << "</div>\n";
    
    html << "<div class='producto'>\n";
    html << "<h2>Cable HDMI FULL HD 3D Argom Tech de 1.8m</h2>\n";
    html << "<p><b>Precio:</b> L.300</p>\n";
    html << "<img src=\"hdmi1.jpeg\" alt=\"Producto 5\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"hdmi2.jpeg\" alt=\"Producto 5\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<p>Cable HDMI Full HD 3D de 1.8 metros con conectores dorados de alta calidad,<br>soporte 3D y transmisi&oacute;n de audio y video sin interferencias,<br>ideal para home theater y gaming.</p>\n";
    html << "</div>\n";
    
    html << "<div class='producto'>\n";
    html << "<h2>Adaptador VGA a DisplayPort Nylon Braided de 74 pulgadas</h2>\n";
    html << "<p><b>Precio:</b> L.300</p>\n";
    html << "<img src=\"vga-dp.jpeg\" alt=\"Producto 6\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"vga-dp2.jpeg\" alt=\"Producto 6\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<p>Adaptador VGA a DisplayPort con cable trenzado de nylon de 74 pulgadas,<br>alta durabilidad, excelente calidad de transmisi&oacute;n de video,<br>compatible con PCs y monitores modernos.</p>\n";
    html << "</div>\n";
    
    html << "<div class='producto'>\n";
    html << "<h2>Adaptador DisplayPort a VGA Tripp-Lite</h2>\n";
    html << "<p><b>Precio:</b> L.500</p>\n";
    html << "<img src=\"dp-vga.jpeg\" alt=\"Producto 7\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"dp-vga2.jpeg\" alt=\"Producto 7\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"dp-vga3.jpeg\" alt=\"Producto 7\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<p>Adaptador DisplayPort a VGA Tripp Lite P134-06N-VGA,<br>permite conectar computadoras con salida DisplayPort a monitores VGA,<br>alta compatibilidad y fiabilidad en transmisiones de video.</p>\n";
    html << "</div>\n";
    
    html << "<div class='producto'>\n";
    html << "<h2>FIFA 20-Xbox One (Disco)</h2>\n";
    html << "<p><b>Precio:</b> L.400</p>\n";
    html << "<img src=\"fifaxbox.jpeg\" alt=\"Producto 8\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"fifaxbox2.jpeg\" alt=\"Producto 8\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"fifaxbox3.jpeg\" alt=\"Producto 8\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"fifaxbox4.jpeg\" alt=\"Producto 8\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<p>Disco original de FIFA 20 para Xbox One.<br>Incluye modo carrera, online y todos los equipos oficiales.</p>\n";
    html << "</div>\n";
   
    html << "<div class='producto'>\n";
    html << "<h2>Monitor Dell E2220H 22 pulgadas</h2>\n";
    html << "<p><b>Precio:</b> L.1,800</p>\n";
    html << "<img src=\"monitor.jpeg\" alt=\"Producto 9\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"monitor2.jpeg\" alt=\"Producto 9\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"monitor3.jpeg\" alt=\"Producto 9\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<p>Monitor LED de 22 pulgadas, 60Hz de refresco.<br>Entradas: VGA y DisplayPort (DP). Ideal para oficina, juegos y uso diario.</p>\n";
    html << "</div>\n";
    
    html << "<div class='producto'>\n";
    html << "<h2>C&aacute;mara Web Logitech 720p</h2>\n";
    html << "<p><b>Precio:</b> L.600</p>\n";
    html << "<img src=\"camara.jpeg\" alt=\"Producto 10\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"camara2.jpeg\" alt=\"Producto 10\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<p>C&aacute;mara web HD 720p con conexi&oacute;n USB-A, compatible con PC de escritorio y port&aacute;tiles (Windows, macOS, ChromeOS).<br>Ideal para videollamadas, clases en l&iacute;nea, conferencias, streaming y teletrabajo.</p>\n";
    html << "</div>\n";
    
    html << "<div class='producto'>\n";
    html << "<h2>Cable Adaptador DisplayPort a HDMI Argom Tech 4K UltraHD</h2>\n";
    html << "<p><b>Precio:</b> L.400</p>\n";
    html << "<img src=\"hdmi-dp.jpeg\" alt=\"Producto 10\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"hdmi-dp2.jpeg\" alt=\"Producto 10\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"hdmi-dp3.jpeg\" alt=\"Producto 10\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<p>Cable adaptador DisplayPort a HDMI 4K UltraHD con conectores dorados, longitud 1.8m, compatible con monitores, proyectores y TVs con entrada HDMI.<br>Permite transmitir video y audio en alta definici&oacute;n de manera estable y sin interferencias.</p>\n";
    html << "</div>\n";
    
    // --- Paginación ---
    html << "<button onclick='anterior()'>Anterior</button>\n";
    html << "<button onclick='siguiente()'>Siguiente</button>\n";
    html << "<script>\n";
    html << "let productos = document.getElementsByClassName('producto');\n";
    html << "let pagina = 0;\n";
    html << "let porPagina = 10;\n";
    html << "function mostrarPagina(p) {\n";
    html << "  for (let i = 0; i < productos.length; i++) {\n";
    html << "    productos[i].style.display = (i >= p*porPagina && i < (p+1)*porPagina) ? 'block' : 'none';\n";
    html << "  }\n";
    html << "}\n";
    html << "function siguiente() {\n";
    html << "  if ((pagina+1)*porPagina < productos.length) { pagina++; mostrarPagina(pagina); }\n";
    html << "}\n";
    html << "function anterior() {\n";
    html << "  if (pagina > 0) { pagina--; mostrarPagina(pagina); }\n";
    html << "}\n";
    html << "mostrarPagina(pagina);\n";
    html << "</script>\n";
    
    html << "</body>\n";
    html << "</html>\n";

    html.close();
    cout << "Catalogo HTML generado." << endl;
	return 123;
}
