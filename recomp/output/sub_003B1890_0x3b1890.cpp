#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B1890
// Address: 0x3b1890 - 0x3b1a48
void sub_003B1890_0x3b1890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1890_0x3b1890");
#endif

    switch (ctx->pc) {
        case 0x3b18d4u: goto label_3b18d4;
        case 0x3b1908u: goto label_3b1908;
        case 0x3b1968u: goto label_3b1968;
        case 0x3b19c8u: goto label_3b19c8;
        default: break;
    }

    ctx->pc = 0x3b1890u;

    // 0x3b1890: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b1890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b1894: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b1894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b1898: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x3b1898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x424C58u));
    // 0x3b189c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b18a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b18a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b18a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b18a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b18a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b18a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b18ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b18acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b18b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b18b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b18b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b18b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b18b8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3b18b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b18bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3b18bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3b18c0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3b18c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b18c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B18C4u;
    {
        const bool branch_taken_0x3b18c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B18C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18C4u;
        // 0x3b18c8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b18c4) {
            ctx->pc = 0x3B18D4u;
            goto label_3b18d4;
        }
    }
    ctx->pc = 0x3B18CCu;
    // 0x3b18cc: 0xc0ec61a  jal         func_3B1868
    ctx->pc = 0x3B18CCu;
    SET_GPR_U32(ctx, 31, 0x3B18D4u);
    ctx->pc = 0x3B1868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1868u, 0x3B18CCu, 0x3B18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B18D4u;
label_3b18d4:
    // 0x3b18d4: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x3b18d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b18d8: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x3b18d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b18dc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B18DCu;
    {
        const bool branch_taken_0x3b18dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18DCu;
        // 0x3b18e0: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b18dc) {
            ctx->pc = 0x3B18ECu;
            goto label_3b18ec;
        }
    }
    ctx->pc = 0x3B18E4u;
    // 0x3b18e4: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3B18E4u;
    {
        const bool branch_taken_0x3b18e4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3B18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18E4u;
        // 0x3b18e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b18e4) {
            ctx->pc = 0x3B1A24u;
            goto label_3b1a24;
        }
    }
    ctx->pc = 0x3B18ECu;
label_3b18ec:
    // 0x3b18ec: 0x3c0b0048  lui         $t3, 0x48
    ctx->pc = 0x3b18ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)72 << 16));
    // 0x3b18f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b18f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b18f4: 0x2562f540  addiu       $v0, $t3, -0xAC0
    ctx->pc = 0x3b18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294964544));
    // 0x3b18f8: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B18F8u;
    {
        const bool branch_taken_0x3b18f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3B18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B18F8u;
        // 0x3b18fc: 0x844a0200  lh          $t2, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b18f8) {
            ctx->pc = 0x3B195Cu;
            goto label_3b195c;
        }
    }
    ctx->pc = 0x3B1900u;
    // 0x3b1900: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3b1900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1904: 0x0  nop
    ctx->pc = 0x3b1904u;
    // NOP
label_3b1908:
    // 0x3b1908: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x3b1908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x3b190c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b190cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3b1910: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3b1910u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b1914: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x3b1914u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3b1918: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b1918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3b191c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3b191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3b1920: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x3b1920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x3b1924: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x3b1924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b1928: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x3b1928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x3b192c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x3b192cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3b1930: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3b1930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1934: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x3b1934u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3b1938: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x3b1938u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x3b193c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x3b193cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x3b1940: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3b1940u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b1944: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3b1944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3b1948: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b1948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b194c: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3B194Cu;
    {
        const bool branch_taken_0x3b194c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B194Cu;
        // 0x3b1950: 0x846a0000  lh          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b194c) {
            ctx->pc = 0x3B1908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1908;
        }
    }
    ctx->pc = 0x3B1954u;
    // 0x3b1954: 0x2562f540  addiu       $v0, $t3, -0xAC0
    ctx->pc = 0x3b1954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294964544));
    // 0x3b1958: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b1958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b195c:
    // 0x3b195c: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B195Cu;
    {
        const bool branch_taken_0x3b195c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3B1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B195Cu;
        // 0x3b1960: 0x84480400  lh          $t0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b195c) {
            ctx->pc = 0x3B19B4u;
            goto label_3b19b4;
        }
    }
    ctx->pc = 0x3B1964u;
    // 0x3b1964: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3b1964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1968:
    // 0x3b1968: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x3b1968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x3b196c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b196cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3b1970: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3b1970u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b1974: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x3b1974u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3b1978: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b1978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3b197c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3b197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3b1980: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x3b1980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x3b1984: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x3b1984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b1988: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x3b1988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x3b198c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x3b198cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3b1990: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3b1990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1994: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x3b1994u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3b1998: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x3b1998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x3b199c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x3b199cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x3b19a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3b19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b19a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3b19a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3b19a8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b19ac: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3B19ACu;
    {
        const bool branch_taken_0x3b19ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19ACu;
        // 0x3b19b0: 0x84680000  lh          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b19ac) {
            ctx->pc = 0x3B1968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1968;
        }
    }
    ctx->pc = 0x3B19B4u;
label_3b19b4:
    // 0x3b19b4: 0x2562f540  addiu       $v0, $t3, -0xAC0
    ctx->pc = 0x3b19b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294964544));
    // 0x3b19b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b19b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b19bc: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B19BCu;
    {
        const bool branch_taken_0x3b19bc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3B19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19BCu;
        // 0x3b19c0: 0x84440600  lh          $a0, 0x600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b19bc) {
            ctx->pc = 0x3B1A14u;
            goto label_3b1a14;
        }
    }
    ctx->pc = 0x3B19C4u;
    // 0x3b19c4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3b19c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b19c8:
    // 0x3b19c8: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x3b19c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x3b19cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b19ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3b19d0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3b19d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b19d4: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x3b19d4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3b19d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3b19dc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3b19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3b19e0: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x3b19e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x3b19e4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3b19e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b19e8: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x3b19e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3b19ec: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x3b19ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x3b19f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3b19f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b19f4: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x3b19f4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3b19f8: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x3b19f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x3b19fc: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x3b19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x3b1a00: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3b1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b1a04: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3b1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3b1a08: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b1a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b1a0c: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3B1A0Cu;
    {
        const bool branch_taken_0x3b1a0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A0Cu;
        // 0x3b1a10: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a0c) {
            ctx->pc = 0x3B19C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b19c8;
        }
    }
    ctx->pc = 0x3B1A14u;
label_3b1a14:
    // 0x3b1a14: 0xa64a0000  sh          $t2, 0x0($s2)
    ctx->pc = 0x3b1a14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x3b1a18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b1a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1a1c: 0xa6680000  sh          $t0, 0x0($s3)
    ctx->pc = 0x3b1a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x3b1a20: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x3b1a20u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_3b1a24:
    // 0x3b1a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b1a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1a28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b1a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b1a2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b1a2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1a30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b1a30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b1a34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3b1a34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1a38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3b1a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b1a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A3Cu;
        // 0x3b1a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1A44u;
    // 0x3b1a44: 0x0  nop
    ctx->pc = 0x3b1a44u;
    // NOP
    ctx->pc = 0x3b1a48u;
}
