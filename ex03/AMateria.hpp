/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:36:08 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 14:26:34 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <string>

class AMateria
{
	private:
		AMateria();
	protected:
		std::string type;
	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria &operator=(AMateria const &obj);
		~AMateria();

		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};
