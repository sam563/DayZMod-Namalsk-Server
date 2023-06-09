class Hospital : Default
{
	zombieChance = 0.4;
	minRoaming = 2;
	maxRoaming = 4;
	zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
	lootChance = 0.4;
	lootGroup = Hospital;
};

class Land_A_Hospital : Hospital
{
	lootChance = 1;
	//Orignal - lootPos[] = {{0.79834,-1.16895,-7.33966},{-7.2334,-2.63574,-7.33966},{-16.3687,-2.4043,-7.33966},{-12.2847,-3.19434,-7.33966},{4.24268,-3.59375,-7.33966},{-3.2666,-0.925781,-7.33966},{6.85693,-2.75098,-7.33966},{11.0151,-3.9541,-7.33966},{16.8198,-4.71094,-7.33966},{-1.6875,5.47168,-7.4494},{12.7476,0.144531,3.29184},{10.2661,-1.21582,3.29184}};
	lootPos[] = {{0.8,-1.17,-7.11},{-7.23,-2.64,-7.3},{-15.71,-2.38,-7.29},{-11.51,-3.1,-7.29},{4.24,-3.59,-7.3},{-3.27,-0.93,-7.28},{6.86,-2.75,-7.3},{11.02,-3.95,-7.19},{16.82,-4.71,-7.29},{-1.69,5.47,-7.41},{12.75,0.14,3.29},{10.27,-1.22,3.29},{-21,0.78,-7.26},{-19.77,8.25,-7.26},{-8.05,8.8,-7.26},{0.58,1.24,-7.26},{11.19,0.9,-7.27},{18.02,3.64,-7.26},{16.02,5.05,-3.76},{11.93,1.27,-3.76},{16.7,-4.73,-3.76},{3.73,-4.99,-3.76},{-6.12,-5.09,-3.76},{-10.76,3.55,-3.76},{-3.59,-2.51,-3.76},{-6.25,-1.85,-3.76},{-0.84,0.87,-3.76},{16.72,5.2,-0.63},{15.62,4.71,-0.46},{15.38,5.11,2.83},{-8.07,2.28,3.4},{-13.54,-2.74,3.4},{-3.81,-4.26,3.4},{6.19,-1.43,3.4},{18.31,-4.29,3.41},{18.36,1.37,6.25}};
	zedPos[] = {{-1.6875,5.47168,-7.4494},{0.79834,-1.16895,-7.33966},{11.0151,-3.9541,-7.33966},{-12.2847,-3.19434,-7.33966},{-16.3687,-2.4043,-7.33966},{16.8198,-4.71094,-7.33966},{-3.2666,-0.925781,-7.33966},{4.24268,-3.59375,-7.33966},{6.85693,-2.75098,-7.33966},{-7.2334,-2.63574,-7.33966},{10.2661,-1.21582,3.29184},{12.7476,0.144531,3.29184}};
};

class MASH : Hospital
{
	maxRoaming = 1;
	zombieClass[] = {"z_soldier","z_soldier_heavy","z_doctor","z_doctor","z_doctor"};
	lootPos[] = {{1.18213,-1.64844,-1.11786},{0.24707,0.798828,-1.11798}};
	zedPos[] = {{0.24707,0.798828,-1.11798},{1.18213,-1.64844,-1.11786}};
};

class MASH_EP1 : MASH
{
};

class USMC_WarfareBFieldhHospital : MASH
{
	minRoaming = 1;
	maxRoaming = 3;
	lootPos[] = {{-3.52246,-5.03906,1.20731},{2.36621,-4.52246,1.20792},{1.39209,-0.420898,1.20752},{1.14258,5.01172,1.20786},{3.7124,1.89746,1.19794}};
	zedPos[] = {{3.7124,1.89746,1.19794},{-3.52246,-5.03906,1.20731},{1.39209,-0.420898,1.20752},{1.14258,5.01172,1.20786},{2.36621,-4.52246,1.20792}};
};

class RU_WarfareBFieldhHospital : MASH
{
	lootPos[] = {{-2.66,2.41,1.25},{3.19,-2.2,1.25}};
	zedPos[] = {{-2.66,2.41,1.25},{3.19,-2.2,1.25}};
	lootChance = 0.3;
	minRoaming = 2;
	maxRoaming = 3;
};