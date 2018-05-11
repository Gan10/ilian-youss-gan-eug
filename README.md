
# Projet de fin d'année 1ère SSI - Moteur à vitesses multiples

L'objectif de ces 3 dernières semaines est de mener un projet (en groupe de 4)
dans lequel vous travaillerez sur la plateforme __Arduino__. Il s'agira dans votre 
projet de simuler la __vitesse d'un moteur commandés par 4 boutons poussoirs__.

## Matériel à disposition

* 1 carte Arduino M0 Pro + 1 plaque d'essais
* 1 boîte de composants pour le prototypage (Boîte incolore)
* 1 kit de démarrage Grove (Boîte verte) 
* 1 afficheur bargraph 10 segments

## Cahier des charges

* La conception de votre système doit être réalisé sous forme d'une __machine à
états finis__ cadencé à 1 Hz.
* Chaque vitesse désirée possède un bouton d'appel permettant à l'utilisateur de 
régler le moteur à la vitesse désirée
* Le bargraph ne doit allumer qu'une seule LED à tout instant (vitesse actuelle
du moteur)
* La transition d'une vitesse à une autre doit être progressive.

## Déroulement du projet

La répartition des tâches doit se faire de la manière suivante:
* Le 1er binôme s'occupe de la partie __analyser/expérimenter__ des Sciences
de l'ingénieur en __écrivant et en testant le code__.
* Le 2e binôme s'occupe de la partie __communiquer__ des Sciences
de l'ingénieur en mettant à jour la page de documentation Github en utilisant
le langage __Markdown__.

## Par où commencer

### Partie analyser/expérimenter

Testez d'abord le programme dans la branche __exemple__. Puis une fois
compris, créer une nouvelle branche appelée __partie_pratique__ dans
lequel vous travaillerez.

Vous devez établir un diagramme d'états/transitions sur papier. Une fois
validé par votre professeur celui-ci sera traduit sous forme de 
programme dans le fichier __main.ino__.

### Partie communiquer

Vous devez vous familiariser avec le langage __Markdown__ et savoir l'utiliser
dans l'environnement Visual Studio Code. Créer une nouvelle branche appelée
__partie_communiquer__ dans lequel vous travaillerez.

Essayer de comprendre le fichier __docs/index.md__ tout en testant la commande
__Ctrl+Shift+P -> Markdown : Ouvrir l'aperçu__

Votre production finale doit contenir des rubriques décrivant le projet et
quelques illustrations (notamment le diagramme d'état/transitions élaboré par
le 1er binôme)

### À la maison

Vous devez installer les logiciels qui vous seront utiles pour travailler à
la maison. Dans l'ordre, installer :
* [Arduino] (https://www.arduino.cc/en/Main/Software)
* [Git] (https://www.git-scm.com/download)
* [Visual Studio Code] (https://code.visualstudio.com/download)

Ensuite, installer les extensions sur Visual Studio Code
* Pour cela, cloner juste votre dépôt de projet sous Visual Studio Code
* Accepter toutes les requêtes de Visual Studio Code.
