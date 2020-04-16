// Nama     : Naufal Dean Anugrah
// NIM      : 13518123
// Tanggal  : 9 April 2020
// Topik    : Exception

public class Car {
	private static final int MAX_AC = 4;
	private static final int MIN_AC = 0;
	private static final int MAX_GEAR = 6;
	private static final int MIN_GEAR = 1;
	private Fuel fuel;
	private int gear;
	private int ac_power;
	private boolean on;

    // Ctor
	// Menginisiasi jenis fuel dengan t_fuel, gear = 0, ac_power = 0 dan on = false.
	public Car(Fuel t_fuel) {
		this.fuel = t_fuel;
		this.gear = 0;
		this.ac_power = 0;
		this.on = false;
	}

	// Getter
	public Fuel getFuel() {
		return this.fuel;
	}
	public int getGear() {
		return this.gear;
	}
	public int getAcPower() {
		return this.ac_power;
	}
	public boolean getOn() {
		return this.on;
	}

	/*
		Melakukan isi bensin terhadap mobil
		Melakukan pengecekan jenis bensin masukan apakah sesuai dengan jenis bensin mobil.
		Bila tidak sesuai lakukan throw FuelException dengan parameter masukan t_fuel
		Bila sesuai, akan menghasilkan keluaran "Berhasil isi bensin sebanyak (nilai amount_in_liter) liter" diakhiri newline dan abaikan tanda '()'
	*/
	public void fillingFuel(Fuel t_fuel, int amount_in_liter) throws FuelException {
		if (!this.fuel.equals(t_fuel))
			throw new FuelException(t_fuel);
		System.out.println("Berhasil isi bensin sebanyak " + amount_in_liter + " liter");
	}

	/*
		Melakukan pergantian gigi mobil
		Melakukan pengecekan t_gear sebagai masukan gigi apakah berada pada range MIN_GEAR<=X<=MAX_GEAR.
		Bila tidak sesuai range lakukan throw InvalidInputCarException dengan parameter masukan t_gear.
		Bila sesuai, akan merubah nilai gear si mobil dan
		menghasilkan keluaran "Berhasil mengubah gigi menjadi gigi (nilai t_gear)" diakhiri newline dan abaikan tanda '()'.
	*/
	public void changeGear(int t_gear) throws InvalidInputCarException {
		if (!(MIN_GEAR <= t_gear && t_gear <= MAX_GEAR))
			throw new InvalidInputCarException(t_gear);
		this.gear = t_gear;
		System.out.println("Berhasil mengubah gigi menjadi gigi " + t_gear);
	}

	/*
		Melakukan pergantian power ac pada mobil
		Melakukan pengecekan t_ac_power sebagai masukan power ac apakah berada pada range MIN_AC<=X<=MAX_AC.
		Bila tidak sesuai range lakukan throw InvalidInputCarException dengan parameter masukan t_ac_power.
		Bila sesuai, akan merubah nilai ac_power si mobil dan
		menghasilkan keluaran "Berhasil mengubah power ac menjadi (nilai t_ac_power)" diakhiri newline dan abaikan tanda '()'.
	*/
	public void changeAcPower(int t_ac_power) throws InvalidInputCarException {
		if (!(MIN_AC <= t_ac_power && t_ac_power <= MAX_AC))
			throw new InvalidInputCarException(t_ac_power);
		this.ac_power = t_ac_power;
		System.out.println("Berhasil mengubah power ac menjadi " + t_ac_power);
	}

	/*
		Melakukan starter/ menyalakan mobil
		Melakukan pengecekan apakah mobil sudah dalam kondisi menyala atau belum ketika fungsi start dipanggil.
		Bila mobil sudah menyala lakukan throw TheCarIsOnException.
		Bila mobil belum menyala akan merubah nilai on mobil menjadi true dan
		menghasilkan keluaran "Berhasil melakukan starter mobil" diakhiri newline.
	*/
	public void start() throws TheCarIsOnException {
		if (this.on)
			throw new TheCarIsOnException();
		this.on = true;
		System.out.println("Berhasil melakukan starter mobil");
	}

	/*
		Melakukan pergantian pengecekan seluruh fitur pada mobil
		Pengecekan fitur dilakukan dengan cara pemanggilan fungsi dengan urutan
		start -> fillingFuel dengan menggunakan parameter masukan pertama dan kedua
		-> changeGear dengan menggunakan parameter masukan ketiga
		-> changeAcPower dengan menggunakan parameter masukan keempat.
		Implementasikan prosedur ini menggunakan try catch, dengan multiple catch, total tiga jenis catch.
		Catch tipe TheCarIsOnException, cetak message dari exception tersebut diakhiri newline
		Catch tipe InvalidInputCarException, cetak message dari exception tersebut diakhiri newline
		Catch tipe FuelException, cetak message dari exception tersebut diakhiri newline
	*/
	public void service(Fuel t_fuel, int amount_in_liter, int t_gear, int t_ac_power) {
		try {
			this.start();
			this.fillingFuel(t_fuel, amount_in_liter);
			this.changeGear(t_gear);
			this.changeAcPower(t_ac_power);
		} catch(TheCarIsOnException e) {
			System.out.println(e.getMessage());
		} catch(InvalidInputCarException e) {
			System.out.println(e.getMessage());
		} catch(FuelException e) {
			System.out.println(e.getMessage());
		}
	}
}
