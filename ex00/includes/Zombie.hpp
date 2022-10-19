/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:42:35 by ambouren          #+#    #+#             */
/*   Updated: 2022/10/17 14:42:36 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie
{
public:
    Zombie();
    ~Zombie();
    Zombie(const std::string& name);
    Zombie&     operator=(const Zombie& other);
    std::string get_name(void) const;
    void        announce(void);
private:
    std::string _name;
};

void    randomChump(std::string name);

Zombie  *newZombie(std::string name);

#endif
