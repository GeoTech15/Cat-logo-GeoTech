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
    html << "<img src=\"cargador_iphone2.jpeg\" alt=\"Producto 2\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<img src=\"cargador_iphone.jpeg\" alt=\"Producto 2\" width=\"200\" onclick=\"window.open(this.src)\">\n"; 
    html << "<p>Cargador de 10&nbsp;W con conexi&oacute;n USB-A a Lightning para iPhone y iPad.<br> Ofrece carga estable y r&aacute;pida, protecci&oacute;n contra sobrecalentamiento y dise&ntilde;o port&aacute;til ideal para viajes y uso diario.</p>\n";
    html << "</div>\n";

    html << "<div class='producto'>\n";
    html << "<h2>Cable DisplayPort Ultra HD 4k Argom Tech </h2>\n";
    html << "<p><b>Precio:</b> L.300</p>\n";
    html << "<img src=\"dp.jpeg\" alt=\"Producto 2\" width=\"200\" onclick=\"window.open(this.src)\">\n";
    html << "<p>Cable DisplayPort Ultra HD 4K de 1.8m con conectores dorados, compatible con monitores y tarjetas gr&aacute;ficas 4K.<br> Garantiza una conexi&oacute;n estable, imagen n&iacute;tida y transferencia de datos r&aacute;pida. Ideal para oficinas, gaming y producci&oacute;n de contenido multimedia.</p>\n";
    html << "</div>\n";
    
    html << "</body>\n";
    html << "</html>\n";

    html.close();
    cout << "Catalogo HTML generado." << endl;
	return 123;
}
