/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconvent <aconvent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:40:01 by aconvent          #+#    #+#             */
/*   Updated: 2024/08/26 11:04:09 by aconvent         ###   ########.fr       */
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

//background colours e
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


# define BLD "\033[1m"
# define FNT "\033[2m"
# define UNL "\033[4m"

// max values for Claptrap

# define MAX_HP 100
# define MAX_EP 100

# define DSTOR RED BLD "DESTRUCTOR " RST

# define CNTOR GRN BLD "CONSTRUCTOR " RST

# define ERR BLU BGNRED BLD "ERROR" RST

# define EN_PO BLU " Energy points" RST 