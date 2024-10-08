/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:59:42 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/05 11:37:54 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

/******** test 01 ********/
void test01()
{
	std::cout << "\n/********* test 01: tableaux d animaux ***********/\n"<< std::endl;
	int N = 6;
	const Animal *Animaux[N];
	int i;
	for (i = 0; i < N; ++i)
	{
		if(i%2 == 0)
		{
			Animaux[i] = new Cat();			
		}
		else
			Animaux[i] = new Dog();
	}
	for(i = 0; i<N ; ++i)
	{
		Animaux[i]->makeSound();
	}
	for (i = 0; i < N; ++i)
	{
		delete Animaux[i];
	}
}
void test02()
{
	std::cout << "\n/********* test 02: tableaux de Wronganimaux ***********/\n"<< std::endl;
	int N = 4;
	const WrongAnimal *Animaux[N];
	int i;
	for (i = 0; i < N; ++i)
	{
		Animaux[i] = new WrongCat();		
	}
	for(i = 0; i<N ; ++i)
	{
		Animaux[i]->makeSound();
	}
	for (i = 0; i < N; ++i)
	{
		delete Animaux[i];
	}
}
void test03()
{
	std::cout << "\n/********* test03: Deep Copy  tests ***********/\n"<< std::endl;
	const Dog dog1;
	const Dog dog2=dog1;
	Dog dog3;
	dog3= dog1;
	const Cat cat1;
	const Cat cat2=cat1;
	Cat cat3;
	cat3=cat1;
	
	std::cout << "/***** apres assignation et copie  comparaison des Adress *****/ "<< std::endl;
	std::cout << CYAN<< "\ncomparaison des adresses des cats " << std::endl;
	std::cout << "Address of cat1 : " << &cat1 << std::endl;
	std::cout << "Address of cat2 : " << &cat2 << std::endl;
	std::cout << "Address of cat3 : " << &cat3 << std::endl;
    std::cout << "Address of cat1 Brain: " << cat1.getBrain() << std::endl;
    std::cout << "Address of cat2 Brain: " << cat2.getBrain() << std::endl;
	std::cout << "Address of cat3 Brain: " << cat3.getBrain() << std::endl;
	std::cout << "Address of cat3 Brain ideas: " << cat3.getBrain()->getIdeas()<< std::endl;	
	std::cout << "Address of cat3 Brain ideas: " << cat2.getBrain()->getIdeas()<< std::endl;	
	std::cout << "Address of cat3 Brain ideas: " << cat3.getBrain()->getIdeas()<< std::endl;
	std::cout << YELLOW<< "\ncomparaison des adresses des dogs " << std::endl;
    std::cout << "Address of dog1 : " << &dog1 << std::endl;
	std::cout << "Address of dog2 : " << &dog2 << std::endl;
	std::cout << "Address of dog3 : " << &dog3 << std::endl;
	std::cout << "Address of dog1 Brain: " << dog1.getBrain() << std::endl;
    std::cout << "Address of dog2 Brain: " << dog2.getBrain() << std::endl;
	std::cout << "Address of dog3 Brain: " << dog3.getBrain() << std::endl;
	std::cout << "Address of dog1 Brain ideas: " << dog1.getBrain()->getIdeas() << std::endl;
    std::cout << "Address of dog2 Brain ideas: " << dog2.getBrain()->getIdeas() << std::endl;
	std::cout << "Address of dog3 Brain ideas: " << dog3.getBrain()->getIdeas() << std::endl;

	std::cout << WHITE << std::endl;
}

void test04()
{
	std::cout << "\n/********* test04: Deep Copy compar idea Dogs ***********/\n"<< std::endl;
	std::cout << "/***** dog1 ********/ "<< std::endl;
	const Dog dog1;
	dog1.getBrain()->setIdea(0, "Heeelo je suis Dog1! ");
	dog1.getBrain()->printIdeas();
	std::cout << "/***** dog2 ********/ "<< std::endl;
	const Dog dog2=dog1;
	dog2.getBrain()->printIdeas();
	dog2.getBrain()->setIdea(0, "Hello je suis Dog2! ");
	std::cout << "/***** dog3 ********/ "<< std::endl;
	Dog dog3;
	dog3.getBrain()->printIdeas();
	std::cout << "/***** dog3 assignment ********/ "<< std::endl;
	dog3 = dog1;
	dog1.getBrain()->printIdeas();
	dog3.getBrain()->setIdea(0, "Hello, moi c est Dog3! ");
	
	std::cout << YELLOW << "\n/***** apres modif de idea(0) dog2 et dog3. ideas dog1 et dog2 et dog3. ***/\n " << std::endl;
    std::cout << "idea 0 dog1 Brain: " << dog1.getBrain()->getIdea(0)<< std::endl;
    std::cout << "idea 0 dog2 Brain: " << dog2.getBrain()->getIdea(0)<< std::endl;
	std::cout << "idea 0 dog3 Brain: " << dog3.getBrain()->getIdea(0)<< std::endl;
	std::cout << WHITE << std::endl;
}
void test05()
{
	std::cout << "\n/********* test05: Deep Copy compar idea Cats ***********/\n"<< std::endl;
	std::cout << "/***** cat1 ********/ "<< std::endl;
	const Cat cat1;
	cat1.getBrain()->setIdea(0, "je suis Cat1! ");
	cat1.getBrain()->printIdeas();
	std::cout << "/***** cat2 ********/ "<< std::endl;
	const Cat cat2=cat1;
	cat2.getBrain()->printIdeas();
	cat2.getBrain()->setIdea(0, "Moi, je suis Cat2! ");	
	std::cout << "/***** cat3 ********/ "<< std::endl;
	Cat cat3;
	cat3.getBrain()->printIdeas();
	std::cout << "/***** cat3 assignment ********/ "<< std::endl;
	cat3 = cat1;
	cat1.getBrain()->printIdeas();
	cat3.getBrain()->setIdea(0, "Hello, moi c est Cat3! ");
	std::cout << YELLOW << "\n/***** apres modif de idea(0) cat2 & cat3. ideas cat1 et cat2 et cat3 ***/\n " << std::endl;
    std::cout << "idea 0 cat1 Brain: " << cat1.getBrain()->getIdea(0)<< std::endl;
    std::cout << "idea 0 cat2 Brain: " << cat2.getBrain()->getIdea(0)<< std::endl;
	std::cout << "idea 0 cat3 Brain: " << cat3.getBrain()->getIdea(0)<< std::endl;	
	std::cout << WHITE << std::endl;
}

int main()
{
	test01();
	test02();
	test03();
	test04();
	test05();
	return(0);
}
	
	
	
