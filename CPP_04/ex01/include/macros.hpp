/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:40:01 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/31 10:23:37 by aconvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define RST "\033[0m"

// foreground colours
# define BLC "\033[30"
# define RED "\033[31m"
# define GRN "\033[32m"
# define YLW "\033[33m"
# define BLU "\033[34m"
# define MGT "\033[35m"
# define CYN "\033[36m"
# define GRY "\033[90m"
# define LGTRED "\033[91m"
# define LGTGRN "\033[92m"
# define LGTYLW "\033[93m"
# define LGTBLU "\033[94m"
# define LGTMGT "\033[95m"
# define LGTCYN "\033[96m"
# define LGTGRY "\033[91m"

//background colours 
#
# define BGNBLC "\033[40m"
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



# define ANI CYN "Animal " RST

# define CAT CYN "Cat " RST

# define DOG CYN "Dog " RST

# define WRAN CYN "Wrong Animal " RST

# define BRAIN CYN "Brain " RST

# define WRCA CYN "Wrong Cat " RST

# define DSTOR RED BLD "DESTRUCTOR " RST

# define CNTOR GRN BLD "CONSTRUCTOR " RST

# define ERR BGNRED BLD "ERROR" RST
