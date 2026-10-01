#include <iostream>
#include <windows.h>


int main()

{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));









	
	return 0;
}


	




/*
		
		int size = 0;
	const int row = 3 , col = 4;

	int arr[row][col];

	for (int i = 0; i < row; i++)
	{
		arr[row][col] = rand() % 15 + 1;
	}
	
	for (int i = 0; i < row; i++)
	{
		std::cout << arr[row][col];
		std::cout << " \n";
		
		int randomnumber = 0;
	const int size = 10;
	int arr[size];
	double sumPlus = 0;
	double sumMin = 0;
	
	
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
		
	}
	for (int i = 0; i < size; i++)
	{
	std::cout << arr[i] << " ";
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 0)
		{
			sumPlus += arr[i];
			
		}
		else if (arr[i] <= 0)
		{
			sumMin += arr[i];
		}
	
	}
	std::cout << "\nСумма положительных: " << sumPlus;
	std::cout << "\nСумма отрицательных: " << sumMin;
	std::cout << "\nСреднее арифметическое " << (sumPlus + sumMin) / size;

	srand(time(NULL));
	int choose = 0, hp = 0, randomnumber = 0, number = 0;
	int maxHp = 25, maxHpHard = 25, chance = 30;
	

	while (true)


	{

		system("cls");

		std::cout << "\n\n\n\t\t Угадай число\n\n";
		std::cout << "1 - Начать игру\n";
		std::cout << "2 - Настройки \n";
		std::cout << "0 - Выход\n";
		std::cin >> choose;


		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tВыберете уровень сложности\n\n";
				std::cout << " 1 - Легкий (1 - 500)\n";
				std::cout << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cin >> choose;

				if (choose == 1)
				{
					randomnumber = rand() % 500 + 1;
					hp = maxHp;
					
					while (true)
					{
						system("cls");
						std::cout << "Кол - во жизней : " << hp << "\n";
						std::cout << "Введите число от 1 до 500: ";
						std::cin >> number;


						if (number == randomnumber)
						{
							std::cout << "\nВы угадали! Поздравляем!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "Вы вышли за диапазон\n";
							Sleep(1200);

						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << " Число компьютера было: " << randomnumber << "\n";
								system("pause");
								break;
							}

							std::cout << "Не угадали\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\n Любое число - Нет\n";
							std::cin >> choose;
							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли!\n";
									std::cout << " Число компьютера было: " << randomnumber << "\n";
									system("pause");
									break;
								}
								if (number > randomnumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";

								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(700);
							}
						}
					}




				}
				else if (choose == 2)
				{
					randomnumber = rand() % 5000 + 1;
					hp = maxHpHard;

					while (true)
					{
						system("cls");
						std::cout << "Кол - во жизней : " << hp << "\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;


						if (number == randomnumber)
						{
							std::cout << "\nВы угадали! Поздравляем!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли за диапазон\n";
							Sleep(1200);

						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << " Число компьютера было: " << randomnumber << "\n";
								system("pause");
								break;
							}

							std::cout << "Вы не угадали\n";
							std::cout << "Кол-во жизней" << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\n Любое число - Нет\n";
							std::cin >> choose;
							if (choose == 1)
							{
								if (rand() % 101 <= chance)
								{
									
									std::cout << "\nВам повевло вы получили бесплатную подсказку\n";
									Sleep(1700);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли!\n";
										std::cout << " Число компьютера было: " << randomnumber << "\n";
										system("pause");
										break;
									}
								}

								
								

								if (number > randomnumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";

								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(700);
							}
						}
					}
				}

				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "Некоректный ввод\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 2)
		{
			std::cout << "\n\n\n\t\tНастройки игры \n\n";
			std::cout << "1 - Изменить кол-во жизней для легкой игры\n";
			std::cout << "2 - Изменить кол-во жизней для сложной игры \n";
			std::cout << "3 - Изменить шанс беслпатной подсказки для сложной игры\n";
			std::cout << "0 - Выход\n\n";
			std::cin >> choose;

			if (choose == 1)
			{
				while (true)
				{
					system("cls");
					std::cout << "Введите кол-во жизней для легкой игры ";
					std::cin >> choose;
					if (choose < 1 || choose > 500)
					{
						std::cout << "Допустимые лимиты от 1 до 500\n";
						Sleep(1400);
					}
					else
					{
						std::cout << "Успешно\n";
						Sleep(1000);
						maxHp = choose;
						break;
					}
				}
			}
			else if (choose == 2)
			{
				while (true)
				{
					system("cls");
					std::cout << "Введите кол-во жизней для сложной игры ";
					std::cin >> choose;
					if (choose < 1 || choose > 500)
					{
						std::cout << "Допустимые лимиты от 1 до 500\n";
						Sleep(1400);
					}
					else
					{
						std::cout << "Успешно\n";
						Sleep(1000);
						maxHpHard = choose;
						break;
					}
				}
			}
			else if (choose == 3)
			{
				while (true)
				{
					system("cls");
					std::cout << "Введите кол-во жизней для сложной игры ";
					std::cin >> choose;
					if (choose < 0 || choose > 500)
					{
						std::cout << "Допустимые лимиты от 0 до 500\n";
						Sleep(1400);
					}
					else
					{
						std::cout << "Успешно изменена настройка\n";
						Sleep(1000);
						chance = choose;
						break;
					}
				}
			}
			else
			{
				std::cout << "Некоректный ввод";
				Sleep(1000);
			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
			break;
		}
		else
		{
			std::cout << "Некоректный ввод";
			Sleep(1500);
		}


	}
	
	
	int sanya = 0;
	do
	{
		std::cout << "Выберите пункт\n 1) Ларионов\n 2)Александр\n 3)Дмитриевич\n";
		std::cin >> sanya;
		
	} while (sanya < 1 || 3 < sanya);
	
	if (sanya == 1)
	{
		std::cout << "Ларионов\n\n";
	}
	else if (sanya == 2)
	{
		std::cout << "Александр\n\n";
	}
	else if (sanya == 3)
	{
		std::cout << "Дмитриевич\n\n";
	}
	
	while (true)
	{
		std::cout << "Введите любые числа ";
		std::cin >> numbers;
		
		if (numbers == 0)
		{
			break;
		}
		a += numbers;
	}
	std::cout << "Сумма чисел " << a << "\n\n";d
	ouble a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;

	
	
	std::cout << "Решение поного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx = c = 0\n\n";
	std::cout << "Введите А: ";
	std::cin >> a;
	std::cout << "Введите B: ";
	std::cin >> b;
	std::cout << "Введите C: ";
	std::cin >> c;
	
	std::cout << a << "x^2 + " << b << "x + " << c << " = 0\n\n";
	
	d = std::pow(b, 2) - 4 * a * c;
	
	std::cout << "Диксриминант равен: " << d << "\n\n";

	if (d < 0)
	{
		std::cout << "Корней нет\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень: " << x1 << "\n\n";
	}
	else if (d > 0)
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b + std::sqrt(d))/ (2 * a);
		std::cout << "x1: " << x1 << "\n";
		std::cout << "x2: " << x2 << "\n";
	}
	
	
	double one;
	double two;
	char sym;

	std::cout << "Калькулятор\n" << "\tВведите число: ";
	std::cin >> one;
	std::cout << "Выберите действие (+,-,*,/): ";
	std::cin >> sym;
	std::cout << "\tВведите второе число: ";
	std::cin >> two;
	system("cls");
	if (sym == '+')
	{
		std::cout << one + two;
	}
	else if (sym == '-')
	{
		std::cout << one - two;
	}
	else if (sym == '*')
	{
		std::cout << one * two;
	}
	else if (sym == '/' && two != 0)
	{		
		std::cout << one / two;		
	}
	else
	{
		std::cout << "Введен некоретный символ\n\n";
	}

	std::cout << "Введите цену пельменей: ";
	std::cin >> one >> sym >> two;
	
	std::pow(число,степень) Возведение в степень
	std::sqrt(число) корень числа


	std::cout << one << " " << sym << " " << two << " " << one + two;
	
	типы данных:
	bool					true/false  0-false >0-true
	char					'&'  '/n'  '2'
	unsigned  char			 0 -- 258
	short  123				-32768 -- 32767
	unsigned short 123		0 --  65535
	int						123456 -2147483648-- 3247483648
	unsigned int			123456 0 -4294967295
	float					123.542 +-3.4e-38...3.4e+38
	double					123123.123123 +-1.7e-308...1.7e-308

	Операторы: 

	математические: + - / * % () ++ --  += -= *= /= = 
	сравнительные: > < == >= <= !=   <=>
	логические:  && (и) ||(или) !(не)

	ТАБУ: goto  and or not  int номерОдин;
	
	std::cout << "\t\tHello World" << "\nData "
		<< 10 + 100 << std::endl << "(10 + 100)\n";
	std::cout << "Info\n\n";

	std::cout << "Меня зовут Женя" << "\n\tМне " << 16 << " лет\n" << "Моя профессия повар\n"
		<< "\t\tПотому что мясо становится дорогим иза траты денег на животных\n" << "Пачка пелеменей стоит в среднем " << one << " рублей\n"
		<< "\tИмба энерджи топ энергетик потому что его пьет Фарит\n\n\n";





*/ 
