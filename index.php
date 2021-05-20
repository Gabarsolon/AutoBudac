<!DOCTYPE html>
<html lang="ro">
<head>
	<title>Test mesagerie PHP</title>
	<meta charset="utf-8">
</head>
<body>
	<h1>Lăsați un mesaj!</h1>
	<!-- formular -->
	<form action="index.php" method="post">
		Nume: <input type="text" name="nuddme"><br>
		Email: <input type="email" name="email"><br>
		Mesaj: <textarea id="mesaj" name="mesaj" rows="4" cols="50"></textarea><br>
		<input type="submit" value="Adaugă mesaj"> 
	</form>

	<!-- zona mesaje -->
	<?php
		//stabilire date de conectare
		$server = "localhost";
		$utilizator = "contact";
		$parola = "RFwqDCwO3_iRhAYQ";
		$baza_de_date = "contact";

		//creare conexiune
		$conexiune = new mysqli($server, $utilizator, $parola, $baza_de_date);

		//verificare conexiune
		if ($conexiune->connect_error) {
			die("<p>Eroare la stabilirea conexiunii: " . $conexiune->connect_error . "</p");
		}
		echo "<p>Succes conexiune!</p>";

		if( count($_POST) > 0 ) {
				//contruire comanda de inserare
				$comanda = "INSERT INTO mesaje(nume, email, mesaj) VALUES(
					'".$_POST["nume"]."', 
					'".$_POST["email"]."', 
					'".$_POST["mesaj"]."'
				)";

				//trimitere comanda
				if ($conexiune->query($comanda) === TRUE) {
				  echo "Mesaj înregistrat. Mulțumim!";
				} else {
				  echo "<p>Eroare la inserarea mesajului: " . $conexiune->error . "</p>";
				}

			} else {
				echo "<p>Introduceți un mesaj!</p>";
			}

		//construire comanda
		$comanda = "SELECT id, nume, mesaj FROM mesaje ORDER BY id DESC LIMIT 10";

		//trimitere comanda
		$rezultat = $conexiune->query($comanda);

		//test erori execuție comanda
		if( $conexiune->error )
			echo "<p>Eroare la execuția comenzii SQL: " . $conexiune->error . "</p>";

		//construire tabel html cu mesaje
		if($rezultat->num_rows > 0) {
			//generare html antet tabel
			echo "
			<table> 
				<tr> 
					<th>Nr. crt.</th>
					<th>Nume</th> 
					<th>Mesaj</th>  
				</tr>
			";

			//generare html pt. liniile tabelului
			while($linie = $rezultat->fetch_assoc()) {
				echo "
    				<tr>
    					<td>".$linie["id"]."</td>
    					<td>".$linie["nume"]."</td>
    					<td>".$linie["mesaj"]."</td>
    				</tr>
				";
				}

				//generare html sf. tabel
			echo "</table>";
		} else {
			echo "<p>Nu există mesaje!</p>";
		}

		//inchidere conexiune
		$conexiune->close();
	?>
</body>
</html>