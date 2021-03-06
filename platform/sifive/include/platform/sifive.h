/*
 * Copyright (c) 2018 Travis Geiselbrecht
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#pragma once

#define SIFIVE_IRQ_UART0 3
#define SIFIVE_IRQ_UART1 4

#define SIFIVE_NUM_IRQS 127

#define CLINT_BASE 0x02000000
#define PLIC_BASE  0x0c000000
#define PRCI_BASE  0x10008000
#define GPIO_BASE  0x10012000
#define UART0_BASE 0x10013000

#define GPIO_REG_VALUE      0
#define GPIO_REG_INPUT_EN   1
#define GPIO_REG_OUTPUT_EN  2
#define GPIO_REG_PORT       3
#define GPIO_REG_IOF_EN     14
#define GPIO_REG_IOF_SEL    15

