--
-- Table structure for table `vehicle_locations`
--

DROP TABLE IF EXISTS `vehicle_locations`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `vehicle_locations` (
  `ID` int(11) NOT NULL,
  `Worldspace` varchar(255) CHARACTER SET latin1 NOT NULL,
  PRIMARY KEY (`ID`,`Worldspace`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC COMMENT='0 ATV\r\n1 Motorcycle\r\n2 Huey\r\n4 Mi-17\r\n3 Little bird\r\n5 AN-2\r\n6 Bike\r\n7 Military car (Landrover, HMMWV, Camo UAZs, Armed pickups)\r\n10 Civilian car (including SUV)\r\n11 Bus\r\n12 Tractor\r\n13 Truck\r\n14 Boat';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `vehicle_locations`
--

LOCK TABLES `vehicle_locations` WRITE;
/*!40000 ALTER TABLE `vehicle_locations` DISABLE KEYS */;
INSERT INTO `vehicle_locations` VALUES
(2,'[219,[4186.09,6606.66,0]]'),
(4,'[47,[4521,11230,3.81583]]'),
(6,'[11,[6665.94,11022.5,0.00143909]]'),
(6,'[22,[8957.08,10629.1,0.00132465]]'),
(6,'[34,[2197.75,5762.33,0.00141096]]'),
(6,'[6,[4877.88,6215.15,0.00143814]]'),
(6,'[81,[7209.53,10848.4,0.00142956]]'),
(7,'[182,[4127.6,6703.51,0.00146484]]'),
(7,'[203,[4849.06,10858.9,0.00143909]]'),
(7,'[23,[5975.07,6690.23,0.00141525]]'),
(7,'[250,[4090.02,9225.91,0.00144958]]'),
(7,'[280,[4418.92,10748.9,0.00143909]]'),
(7,'[93,[3552.5,6675.55,0.00143433]]'),
(10,'[255,[5748.33,9844.07,0.00140762]]'),
(10,'[278,[5796.78,10761.3,0.00142288]]'),
(10,'[52,[7358.11,7984.73,0.00138092]]'),
(10,'[74,[7029.23,11540.7,0.00143909]]'),
(10,'[90,[7051.95,5777.77,0.00144196]]'),
(12,'[296,[8252.9,10792.1,0.00143909]]'),
(13,'[1,[4991.09,8165.97,0.00148773]]'),
(13,'[126,[7647.15,7406.74,0.00144958]]'),
(13,'[180,[5849.93,8659.4,0.00143814]]'),
(13,'[180,[7894.81,7718.42,0.00142384]]'),
(13,'[220,[3941.47,7595.37,0.00143814]]'),
(13,'[270,[6739.51,11323.5,0.00143909]]'),
(13,'[351,[7685.47,8729.3,0.00157166]]'),
(13,'[90,[4837.61,6145.8,0.00143814]]'),
(14,'[0,[4430.48,11303.5,8.4149]]'),
(14,'[110,[9134.51,10091.7,4.11368]]'),
(14,'[180,[4306.51,4719.16,5.83564]]'),
(14,'[228,[6044.81,6760.48,2.24013]]'),
(14,'[245,[5031.6,6100.52,5.8214]]'),
(14,'[55,[4525.93,11255.1,0.001692]]'),
(14,'[88,[2144.77,5754.73,1.84505]]'),
(14,'[92,[4387.41,11293.1,7.2188]]');
/*!40000 ALTER TABLE `vehicle_locations` ENABLE KEYS */;
UNLOCK TABLES;
