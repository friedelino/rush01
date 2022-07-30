#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 13:48:39 by fmaurer           #+#    #+#              #
#    Updated: 2022/07/30 13:48:39 by fmaurer          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
CFLAGS = -Wall -Werror -Wextra

TARGETS = test

.PHONY: all

all: ${TARGETS}

test: *.c
	@echo "Cleaning up..."
	@echo
	rm -f ../rush-01
	@echo
	@echo "Compiling..."
	@echo
	${CC} ${CFLAGS} *.c -o rush-01
	@echo
	@echo "Testing... rush-01:"
	@echo "------------"
	-./rush-01
	-./rush-01 ""
	-./rush-01 "asd	123 	sad sadsa 123"
	-./rush-01 "1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 5"
	-./rush-01 "1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4"
	./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
	@echo "------------"
	@echo "Done!"

test0: *.c
	@echo "Cleaning up..."
	@echo
	rm -f ../rush-01
	@echo
	@echo "Compiling..."
	@echo
	${CC} ${CFLAGS} *.c -o rush-01
	@echo
	@echo "Testing... rush-01:"
	@echo "------------"
	./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
	@echo "------------"
	@echo "Done!"
