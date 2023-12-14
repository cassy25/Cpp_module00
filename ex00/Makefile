# **************************************************************************** #                                                            
#                                                                              #                                                            
#                                                         :::      ::::::::    #                                                            
#    Makefile                                           :+:      :+:    :+:    #                                                            
#                                                     +:+ +:+         +:+      #                                                            
#    By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+         #                                                            
#                                                 +#+#+#+#+#+   +#+            #                                                            
#    Created: 2023/11/16 10:44:21 by cgeoffra          #+#    #+#              #                                                            
#    Updated: 2023/11/16 10:44:22 by cgeoffra         ###   ########.fr        #                                                            
#                                                                              #                                                            
# **************************************************************************** #                                                            

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = Megaphone.cpp
EXE = Megaphone

all: $(EXE)

$(EXE): $(SRC)
        $(CXX) $(CXXFLAGS) -o $@ $<

clean:
        rm -f $(EXE)

fclean: clean
        rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
