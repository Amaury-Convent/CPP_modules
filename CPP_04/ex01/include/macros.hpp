/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:40:01 by aconvent          #+#    #+#             */
/*   Updated: 2024/09/01 12:24:58 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define RST "\033[0m"

// foreground colours
# define BLC "\033[30"
# define RED "\033[31m"
# define DRKRED "\033[38;2;250;20;5m"
# define PINK "\033[38;2;221;49;191m"
# define GRN "\033[32m"
# define DRKGRN "\033[38;2;4;160;20m"
# define ORG "\033[38;2;177;100;40m"


# define MIN "\033[38;2;56;141;103m"
# define YLW "\033[33m"
# define BLU "\033[34m"
# define MGT "\033[35m"
# define CYN "\033[36m"
# define DRKBLU "\033[38;2;24;111;233m"
# define GRY "\033[90m"
# define LGTRED "\033[91m"
# define LGTGRN "\033[92m"
# define LGTYLW "\033[93m"
# define LGTBLU "\033[94m"
# define LGTMGT "\033[95m"
# define LGTCYN "\033[96m"
# define LGTGRY "\033[91m"

//background colours 
# define BGNBLC "\033[40m"
# define DRKBLUBGR "\033[48;2;24;169;233m"
# define BGNRED "\033[41m"
# define BGNGRN "\033[42m"
# define BGNYLW "\033[43m"
# define BGNBLU "\033[44m"
# define BGNMGT "\033[45m"
# define BGNCYN "\033[46m"
# define BGNGRY "\033[100m"
# define BGNLGTRED "\033[101m"
# define BGNLGTGRN "\033[102m"
# define BGNLGTYLW "\033[103m"
# define BGNLGTBLU "\033[104m"
# define BGNLGTMGT "\033[105m"
# define BGNLGTCYN "\033[106m"

// text formating
# define BLD "\033[1m"
# define FNT "\033[2m"
# define UNL "\033[4m"

// max values for Claptrap


# define ANI DRKBLU "Animal " RST

# define CAT DRKBLU "Cat " RST

# define DOG DRKBLU "Dog " RST

# define WRAN DRKBLU "Wrong Animal " RST

# define BRAIN PINK "Brain " RST

# define WRCA DRKBLU "Wrong Cat " RST

# define MEMADR UNL GRN "the memory address " RST

# define DSTOR DRKRED BLD "DESTRUCTOR " RST

# define CNTOR DRKGRN BLD "CONSTRUCTOR " RST

# define ERR BGNRED BLD "ERROR" RST