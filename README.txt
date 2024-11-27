Ezzybot ARM MK2
	Site oficial do projeto:
		http://www.eezyrobots.it/eba_mk2.html

	Arquivos 3D do projeto:
		https://cad.onshape.com/documents/eb6eac15e3f68718c52d3cac/w/2b8e59d1698d09b06440ab07/e/c11caf264884cee4298c28f7

Instruções para Montagem e Uso do Robô com Controle por Potenciômetros

	Definições dos Movimentos do Robô
		Giro: Movimento de rotação no próprio eixo.
		Distância: Movimento para aproximar ou afastar a garra em relação à base.
		Altura: Movimento para elevar ou abaixar a garra.
		Garra: Movimento para abrir ou fechar a garra.

	Estrutura dos Arquivos
		Esquema Elétrico: Localize o arquivo "Esquema Elétrico.png". Ele contém as instruções para conectar o robô ao Arduino.
		Código Arduino: Na pasta "Codigo_Arduino___Controle", você encontrará o arquivo com o código necessário para controlar o robô usando potenciômetros.

	Instruções de Montagem
		Conexão dos Servo Motores:
   			-Verifique cuidadosamente as conexões dos servos conforme descrito abaixo:
     			Giro: Porta digital D3 → Porta analógica A0.
     			Distância: Porta digital D4 → Porta analógica A1.
     			Altura: Porta digital D5 → Porta analógica A2.
     			Garra: Porta digital D6 → Porta analógica A3.

	Observações Importantes
		Certifique-se de conectar todos os componentes exatamente como indicado no esquema elétrico.
		Qualquer erro na ligação dos servo motores pode comprometer o funcionamento do robô.
