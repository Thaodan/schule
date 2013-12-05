use Collateral; 
insert into Artikel( ArtikelNr, LieferantenCode,
		       Bezeichnung, Warengruppe,
		       Einkaufspreis, Verkaufspreis,
		       USTSatz,
		       Lieferbar
		       )
values ( 1, 666,
       'Kekse','Lebensmittel',
       2.3, 2.5,
       7,
       0,
       );		

insert into Kunden ( KundenNR, KundenName, Strasse, 
       	    Zipcode, Ort, Telefon, Telefax, Barzahlung)
values ( 1, 'Krummelmonster', 'Sesamtrasse', 
       666, '/dev/null', 666, 666, 1
);

insert into Lieferanten ( LieferantenCode, Name, Vertreter, 
       Strasse, Plz, Ort, Telefon, Telefax, Rabatt, Konditionen)
values (
       1, 'Hell',  'Ras Frostchill',
       'Road to damnation', 1318, 'Scourgeholme', 1, 1, 6, 1
);

insert into Bestellungen ( BestellNr, KundenNR, Sachbearbeiter, 
       Bestelldatum, Liefertermin, Bezahlt_am
       )
values ( 14, 1, 'Kel''Thuzad',
       10.13.1307, 03.22.1312, 04.04.1312
       );       
insert into BestellPositionen ( ArtikelNr, BestellNr, Stuck 
       ) values ( 1, 14, 18);
       	    
