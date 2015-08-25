/*
    Author: Shanywoozen and Noldy : Ne pas supprimer !
    
    Description:
    Message règlement avant connexion.
*/

class agb
{
    idd = 32154;
    name = "agb";
    movingEnable = false;
    enableSimulation = false;
    
    class controlsBackground
    {
        class RscTitleBackground : Life_RscText
        {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = -1;
            x = 0.0875;
            y = 0.06;
            w = 0.825;
            h = 0.04;
        };
        
        class RscBackground : Life_RscText
        {
            colorBackground[] = {0.31,0.31,0.31,1};
            idc = -1;
            x = 0.0875;
            y = 0.12;
            w = 0.825;
            h = 0.82;
        };
        
        class RscTitleText : Life_RscTitle
        {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "A LIRE AVANT DE NOUS REJOINDRE";
            x = 0.0875;
            y = 0.06;
            w = 0.825;
            h = 0.04;
            class Attributes
            {
                align = "center";
            };
        };
                
        class RsclolStatus : Life_RscStructuredText
        {
            idc = -1;
            colorBackground[] = {0, 0, 0, 0};
            sizeEx = 0.0001;
            text = "<t size = '1'>Bienvenue sur TavianaLife FR ! Afin de respecter l'experience de jeu de chacun et de s'amuser dans la bonne humeur merci de lire et respecter les règles présentes sur le forum.<br / ><br / >- A partir du moment ou vous aurez cliquer sur Accepter, vous entrez dans un contexte entièrement RP.<br/>- Tout interaction, gestes, ou intervention vocal NON RP sera sanctionnable.<br / >- Il est interdit de : Hack / Faire de la Duplication / UseBug .<br / ><br / >Un serveur vocal TeamSpeak3 est à votre disposition : <br / >TS³ : tavianalife.fr<br / >Web : www.tavianalife.fr<br / ><br /></t><t font ='PuristaBold' size='1'>Afin de jouer sur ce serveur, vous devez accepter et respecter les règles que vous avez au préalablement lu sur le forum, sinon vous vous exposez à des sanctions !</t>";
            x = 0.1125;
            y = 0.16;
            w = 0.775;
            h = 0.66;
        };    
    };
    
        class Controls
    {
        class naz : Life_RscButtonMenu
        {
            idc = -1;
            text = "Refuser";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            onButtonClick = "closeDialog 0;";
            x = 0.1075;
            y = 0.88;
            w = 0.3;
            h = 0.04;
            class Attributes
            {
                align = "center";
            };
        };
        
        
        class az : Life_RscButtonMenu
        {
            idc = -1;
            text = "Accepter";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            onButtonClick = "rulesok = true; closeDialog 0;";
            x = 0.5825;
            y = 0.88;
            w = 0.3;
            h = 0.04;
            class Attributes
            {
                align = "center";
            };    
        };
    };
};