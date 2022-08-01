/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>

#include <hal/nrf_egu.h>

#include <unity.h>


void test_egu_channels_count(void)
{
	TEST_ASSERT_EQUAL(16, nrf_egu_channel_count(NRF_EGU0));
	TEST_ASSERT_EQUAL(16, nrf_egu_channel_count(NRF_EGU1));
	TEST_ASSERT_EQUAL(16, nrf_egu_channel_count(NRF_EGU2));
	TEST_ASSERT_EQUAL(16, nrf_egu_channel_count(NRF_EGU3));
	TEST_ASSERT_EQUAL(16, nrf_egu_channel_count(NRF_EGU4));
	TEST_ASSERT_EQUAL(16, nrf_egu_channel_count(NRF_EGU5));
}

void test_nrf_egu_task_address_get(void)
{

	TEST_ASSERT_EQUAL((size_t)&NRF_EGU0->TASKS_TRIGGER[0], nrf_egu_task_address_get(NRF_EGU0, NRF_EGU_TASK_TRIGGER0));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU0->TASKS_TRIGGER[1], nrf_egu_task_address_get(NRF_EGU0, NRF_EGU_TASK_TRIGGER1));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU0->TASKS_TRIGGER[15], nrf_egu_task_address_get(NRF_EGU0, NRF_EGU_TASK_TRIGGER15));

	TEST_ASSERT_EQUAL((size_t)&NRF_EGU1->TASKS_TRIGGER[0], nrf_egu_task_address_get(NRF_EGU1, NRF_EGU_TASK_TRIGGER0));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU1->TASKS_TRIGGER[1], nrf_egu_task_address_get(NRF_EGU1, NRF_EGU_TASK_TRIGGER1));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU1->TASKS_TRIGGER[15], nrf_egu_task_address_get(NRF_EGU1, NRF_EGU_TASK_TRIGGER15));

	TEST_ASSERT_EQUAL((size_t)&NRF_EGU2->TASKS_TRIGGER[0], nrf_egu_task_address_get(NRF_EGU2, NRF_EGU_TASK_TRIGGER0));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU2->TASKS_TRIGGER[1], nrf_egu_task_address_get(NRF_EGU2, NRF_EGU_TASK_TRIGGER1));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU2->TASKS_TRIGGER[15], nrf_egu_task_address_get(NRF_EGU2, NRF_EGU_TASK_TRIGGER15));

	TEST_ASSERT_EQUAL((size_t)&NRF_EGU3->TASKS_TRIGGER[0], nrf_egu_task_address_get(NRF_EGU3, NRF_EGU_TASK_TRIGGER0));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU3->TASKS_TRIGGER[1], nrf_egu_task_address_get(NRF_EGU3, NRF_EGU_TASK_TRIGGER1));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU3->TASKS_TRIGGER[15], nrf_egu_task_address_get(NRF_EGU3, NRF_EGU_TASK_TRIGGER15));

	TEST_ASSERT_EQUAL((size_t)&NRF_EGU4->TASKS_TRIGGER[0], nrf_egu_task_address_get(NRF_EGU4, NRF_EGU_TASK_TRIGGER0));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU4->TASKS_TRIGGER[1], nrf_egu_task_address_get(NRF_EGU4, NRF_EGU_TASK_TRIGGER1));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU4->TASKS_TRIGGER[15], nrf_egu_task_address_get(NRF_EGU4, NRF_EGU_TASK_TRIGGER15));

	TEST_ASSERT_EQUAL((size_t)&NRF_EGU5->TASKS_TRIGGER[0], nrf_egu_task_address_get(NRF_EGU5, NRF_EGU_TASK_TRIGGER0));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU5->TASKS_TRIGGER[1], nrf_egu_task_address_get(NRF_EGU5, NRF_EGU_TASK_TRIGGER1));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU5->TASKS_TRIGGER[15], nrf_egu_task_address_get(NRF_EGU5, NRF_EGU_TASK_TRIGGER15));
}


void test_nrf_egu_event_address_get(void)
{
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU0->EVENTS_TRIGGERED[0], nrf_egu_event_address_get(NRF_EGU0, NRF_EGU_EVENT_TRIGGERED0));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU0->EVENTS_TRIGGERED[1], nrf_egu_event_address_get(NRF_EGU0, NRF_EGU_EVENT_TRIGGERED1));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU0->EVENTS_TRIGGERED[15], nrf_egu_event_address_get(NRF_EGU0, NRF_EGU_EVENT_TRIGGERED15));

	TEST_ASSERT_EQUAL((size_t)&NRF_EGU1->EVENTS_TRIGGERED[0], nrf_egu_event_address_get(NRF_EGU1, NRF_EGU_EVENT_TRIGGERED0));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU1->EVENTS_TRIGGERED[1], nrf_egu_event_address_get(NRF_EGU1, NRF_EGU_EVENT_TRIGGERED1));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU1->EVENTS_TRIGGERED[15], nrf_egu_event_address_get(NRF_EGU1, NRF_EGU_EVENT_TRIGGERED15));

	TEST_ASSERT_EQUAL((size_t)&NRF_EGU2->EVENTS_TRIGGERED[0], nrf_egu_event_address_get(NRF_EGU2, NRF_EGU_EVENT_TRIGGERED0));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU2->EVENTS_TRIGGERED[1], nrf_egu_event_address_get(NRF_EGU2, NRF_EGU_EVENT_TRIGGERED1));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU2->EVENTS_TRIGGERED[15], nrf_egu_event_address_get(NRF_EGU2, NRF_EGU_EVENT_TRIGGERED15));

	TEST_ASSERT_EQUAL((size_t)&NRF_EGU3->EVENTS_TRIGGERED[0], nrf_egu_event_address_get(NRF_EGU3, NRF_EGU_EVENT_TRIGGERED0));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU3->EVENTS_TRIGGERED[1], nrf_egu_event_address_get(NRF_EGU3, NRF_EGU_EVENT_TRIGGERED1));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU3->EVENTS_TRIGGERED[15], nrf_egu_event_address_get(NRF_EGU3, NRF_EGU_EVENT_TRIGGERED15));

	TEST_ASSERT_EQUAL((size_t)&NRF_EGU4->EVENTS_TRIGGERED[0], nrf_egu_event_address_get(NRF_EGU4, NRF_EGU_EVENT_TRIGGERED0));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU4->EVENTS_TRIGGERED[1], nrf_egu_event_address_get(NRF_EGU4, NRF_EGU_EVENT_TRIGGERED1));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU4->EVENTS_TRIGGERED[15], nrf_egu_event_address_get(NRF_EGU4, NRF_EGU_EVENT_TRIGGERED15));

	TEST_ASSERT_EQUAL((size_t)&NRF_EGU5->EVENTS_TRIGGERED[0], nrf_egu_event_address_get(NRF_EGU5, NRF_EGU_EVENT_TRIGGERED0));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU5->EVENTS_TRIGGERED[1], nrf_egu_event_address_get(NRF_EGU5, NRF_EGU_EVENT_TRIGGERED1));
	TEST_ASSERT_EQUAL((size_t)&NRF_EGU5->EVENTS_TRIGGERED[15], nrf_egu_event_address_get(NRF_EGU5, NRF_EGU_EVENT_TRIGGERED15));
}


void test_nrf_egu_channel_int_get(){
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED0, nrf_egu_channel_int_get(0));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED1, nrf_egu_channel_int_get(1));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED2, nrf_egu_channel_int_get(2));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED3, nrf_egu_channel_int_get(3));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED4, nrf_egu_channel_int_get(4));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED5, nrf_egu_channel_int_get(5));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED6, nrf_egu_channel_int_get(6));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED7, nrf_egu_channel_int_get(7));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED8, nrf_egu_channel_int_get(8));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED9, nrf_egu_channel_int_get(9));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED10, nrf_egu_channel_int_get(10));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED11, nrf_egu_channel_int_get(11));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED12, nrf_egu_channel_int_get(12));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED13, nrf_egu_channel_int_get(13));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED14, nrf_egu_channel_int_get(14));
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED15, nrf_egu_channel_int_get(15));

}


struct SWI_trigger_assert_parameter{
	bool triggered[EGU5_CH_NUM];
	uint32_t call_count;
};

static struct SWI_trigger_assert_parameter event_triggered_flag;

void SWI5_trigger_function(const void * param)
{
	TEST_MESSAGE("called_SWI5 trigger function!");
	event_triggered_flag.call_count++;
	for(uint8_t i=0; i<nrf_egu_channel_count(NRF_EGU5);i++)
	{
		const nrf_egu_event_t check_event = nrf_egu_triggered_event_get(i);
		event_triggered_flag.triggered[i] = nrf_egu_event_check(NRF_EGU5, check_event);
		if(event_triggered_flag.triggered[i])
		{
			nrf_egu_event_clear(NRF_EGU5, check_event);
		}
	}
}

// TODO : test with trigger not enabled event


void test_nrf_egu_task_trigger_not_int(void)
{
	nrf_egu_int_disable(NRF_EGU5, NRF_EGU_INT_TRIGGERED1);
	TEST_ASSERT_EQUAL(0, nrf_egu_int_enable_check(NRF_EGU5, NRF_EGU_INT_TRIGGERED1));
	memset(&event_triggered_flag, 0, sizeof(event_triggered_flag));
	irq_connect_dynamic(SWI5_EGU5_IRQn, 0, SWI5_trigger_function, NULL, BIT(0));
	irq_enable(SWI5_EGU5_IRQn);
	nrf_egu_task_t task_to_trigger = nrf_egu_trigger_task_get(0);

	nrf_egu_task_trigger(NRF_EGU5, task_to_trigger);

	// k_sleep(K_MSEC(1));
	irq_disable(SWI5_EGU5_IRQn);
	nrf_egu_int_disable(NRF_EGU5, NRF_EGU_INT_TRIGGERED1);

	TEST_ASSERT_EQUAL(0, event_triggered_flag.call_count);

	TEST_ASSERT_FALSE(event_triggered_flag.triggered[0]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[1]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[2]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[3]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[4]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[5]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[6]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[7]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[8]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[9]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[10]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[11]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[12]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[13]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[14]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[15]);

	TEST_ASSERT_TRUE(nrf_egu_event_check(NRF_EGU5, nrf_egu_triggered_event_get(0)));
	for(uint8_t i=1; i<nrf_egu_channel_count(NRF_EGU5);i++)
	{
		const nrf_egu_event_t check_event = nrf_egu_triggered_event_get(i);
		TEST_ASSERT_FALSE(nrf_egu_event_check(NRF_EGU5, check_event));
	}
}

void test_nrf_egu_task_trigger(void)
{
	nrf_egu_int_enable(NRF_EGU5, NRF_EGU_INT_TRIGGERED0);
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED0, nrf_egu_int_enable_check(NRF_EGU5, NRF_EGU_INT_TRIGGERED0));
	memset(&event_triggered_flag, 0, sizeof(event_triggered_flag));
	irq_connect_dynamic(SWI5_EGU5_IRQn, 0, SWI5_trigger_function, NULL, BIT(0));
	irq_enable(SWI5_EGU5_IRQn);
	TEST_MESSAGE("Trigger");
	nrf_egu_task_t task_to_trigger = nrf_egu_trigger_task_get(0);
	nrf_egu_task_trigger(NRF_EGU5, task_to_trigger);

	// k_sleep(K_MSEC(1));
	k_busy_wait(1000);
	TEST_MESSAGE("disable");
	irq_disable(SWI5_EGU5_IRQn);
	nrf_egu_int_disable(NRF_EGU5, NRF_EGU_INT_TRIGGERED0);

	TEST_ASSERT_EQUAL(1, event_triggered_flag.call_count);

	TEST_ASSERT_TRUE(event_triggered_flag.triggered[0]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[1]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[2]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[3]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[4]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[5]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[6]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[7]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[8]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[9]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[10]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[11]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[12]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[13]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[14]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[15]);

	for(uint8_t i=0; i<nrf_egu_channel_count(NRF_EGU5);i++)
	{
		const nrf_egu_event_t check_event = nrf_egu_triggered_event_get(i);
		TEST_ASSERT_FALSE(nrf_egu_event_check(NRF_EGU5, check_event));
	}
}

void test_nrf_egu_task_configure_not_trigger(void)
{
	nrf_egu_int_mask_t egu_int_mask = nrf_egu_channel_int_get(0);
	TEST_ASSERT_EQUAL(NRF_EGU_INT_TRIGGERED0, egu_int_mask);
	nrf_egu_int_enable(NRF_EGU5, egu_int_mask);
	TEST_ASSERT_EQUAL(egu_int_mask, nrf_egu_int_enable_check(NRF_EGU5, egu_int_mask));
	memset(&event_triggered_flag, 0, sizeof(event_triggered_flag));
	irq_connect_dynamic(SWI5_EGU5_IRQn, 0, SWI5_trigger_function, NULL, BIT(0));
	irq_enable(SWI5_EGU5_IRQn);

	// k_sleep(K_MSEC(1));
	k_busy_wait(1000);
	irq_disable(SWI5_EGU5_IRQn);
	nrf_egu_int_disable(NRF_EGU5, egu_int_mask);

	TEST_ASSERT_EQUAL(0, event_triggered_flag.call_count);

	TEST_ASSERT_FALSE(event_triggered_flag.triggered[0]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[1]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[2]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[3]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[4]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[5]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[6]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[7]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[8]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[9]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[10]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[11]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[12]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[13]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[14]);
	TEST_ASSERT_FALSE(event_triggered_flag.triggered[15]);

	for(uint8_t i=0; i<nrf_egu_channel_count(NRF_EGU5);i++)
	{
		const nrf_egu_event_t check_event = nrf_egu_triggered_event_get(i);
		TEST_ASSERT_FALSE(nrf_egu_event_check(NRF_EGU5, check_event));
	}
}


extern int unity_main(void);

void main(void)
{
	(void)unity_main();
}
