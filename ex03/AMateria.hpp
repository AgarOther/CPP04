/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:36:08 by scraeyme          #+#    #+#             */
/*   Updated: 2025/04/16 21:11:36 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

// That was to counter the circular include issue..
class ICharacter;

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
		virtual ~AMateria();

		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
