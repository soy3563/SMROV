/*
 * ring.c
 *
 *  Created on: 2022. 9. 25.
 *      Author: Shin
 */
#define BUFF_SIZE 1024
#define head 0
#include <stdio.h>

struct rb{
	uint8_t = data[BUFF_SIZE];
	int read_ptr;
	int write_ptr;
	int remain_size;
};

rb init_rb(rb ring){
	ring.read_ptr = 0;
	ring.write_ptr = 0;
	ring.remain_size = BUFF_SIZE-1;
	return *ring;
};

rb write_rb(rb ring, char* data){
	if(isFULL){
		ring.write_ptr = 0;
		ring.data[ring.write_ptr] = &data;
	}
	else{
		ring.data[ring.write_ptr] = &data;
		ring.write_ptr += 1;
		reamin_size -=1;
	}
	return *ring;
};

char read_rb(rb ring){
	char read = "\0";
	if(ring.read_ptr < 1023){
			ring.read_ptr = 0;
			read = ring.data[ring.read_ptr];
		}
		else{
			read = ring.data[ring.read_ptr];
			ring.read_ptr += 1;
		}
	return read;
}

bool isFUll(rb ring){
	return ring.reamin_size == BUFF_SIZE-1;
}
bool isEmpty(rb ring){
	return ring.reamin_size == 0;
}
