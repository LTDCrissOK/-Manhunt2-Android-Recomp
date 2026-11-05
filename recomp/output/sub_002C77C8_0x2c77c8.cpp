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

// Function: sub_002C77C8
// Address: 0x2c77c8 - 0x2c7b18
void sub_002C77C8_0x2c77c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C77C8_0x2c77c8");
#endif

    switch (ctx->pc) {
        case 0x2c7810u: goto label_2c7810;
        case 0x2c7860u: goto label_2c7860;
        case 0x2c78a8u: goto label_2c78a8;
        case 0x2c7950u: goto label_2c7950;
        case 0x2c7a28u: goto label_2c7a28;
        case 0x2c7a3cu: goto label_2c7a3c;
        case 0x2c7a78u: goto label_2c7a78;
        case 0x2c7a98u: goto label_2c7a98;
        case 0x2c7ae4u: goto label_2c7ae4;
        default: break;
    }

    ctx->pc = 0x2c77c8u;

    // 0x2c77c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c77c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c77cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c77ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c77d0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c77d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2c77d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c77d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77d8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2c77d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2c77dc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2c77dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2c77e0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2c77e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77e4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2c77e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2c77e8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2c77e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c77ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c77f0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2c77f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c77f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c77f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c77f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c77fc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2c77fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2c7800: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c7800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c7804: 0x8e920018  lw          $s2, 0x18($s4)
    ctx->pc = 0x2c7804u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2c7808: 0xc0b1ba0  jal         func_2C6E80
    ctx->pc = 0x2C7808u;
    SET_GPR_U32(ctx, 31, 0x2C7810u);
    ctx->pc = 0x2C780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7808u;
    // 0x2c780c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6E80u, 0x2C7808u, 0x2C7810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7810u;
label_2c7810:
    // 0x2c7810: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c7810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c7814: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c7814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c7818: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x2c7818u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c781c: 0x26a2ffc9  addiu       $v0, $s5, -0x37
    ctx->pc = 0x2c781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967241));
    // 0x2c7820: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2c7820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c7824: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7824u;
    {
        const bool branch_taken_0x2c7824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7824u;
        // 0x2c7828: 0x26a3ffc1  addiu       $v1, $s5, -0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967233));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7824) {
            ctx->pc = 0x2C7838u;
            goto label_2c7838;
        }
    }
    ctx->pc = 0x2C782Cu;
    // 0x2c782c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2c782cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2c7830: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7830u;
    {
        const bool branch_taken_0x2c7830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7830u;
        // 0x2c7834: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7830) {
            ctx->pc = 0x2C783Cu;
            goto label_2c783c;
        }
    }
    ctx->pc = 0x2C7838u;
label_2c7838:
    // 0x2c7838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c783c:
    // 0x2c783c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c783cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7840: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c7840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7844: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2c7844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2c7848: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2c7848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c784c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c784cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7850: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c7850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7854: 0x242980b  movn        $s3, $s2, $v0
    ctx->pc = 0x2c7854u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
    // 0x2c7858: 0xc0b1c82  jal         func_2C7208
    ctx->pc = 0x2C7858u;
    SET_GPR_U32(ctx, 31, 0x2C7860u);
    ctx->pc = 0x2C785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7858u;
    // 0x2c785c: 0x26c6ffc8  addiu       $a2, $s6, -0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7208u, 0x2C7858u, 0x2C7860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7860u;
label_2c7860:
    // 0x2c7860: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x2c7860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2c7864: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2c7864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2c7868: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x2c7868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2c786c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2c786cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2c7870: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2c7870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c7874: 0x6a8201bf  ldl         $v0, 0x1BF($s4)
    ctx->pc = 0x2c7874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c7878: 0x6e8201b8  ldr         $v0, 0x1B8($s4)
    ctx->pc = 0x2c7878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c787c: 0x6a8301c7  ldl         $v1, 0x1C7($s4)
    ctx->pc = 0x2c787cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c7880: 0x6e8301c0  ldr         $v1, 0x1C0($s4)
    ctx->pc = 0x2c7880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c7884: 0xb262000f  sdl         $v0, 0xF($s3)
    ctx->pc = 0x2c7884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7888: 0xb6620008  sdr         $v0, 0x8($s3)
    ctx->pc = 0x2c7888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c788c: 0xb2630017  sdl         $v1, 0x17($s3)
    ctx->pc = 0x2c788cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7890: 0xb6630010  sdr         $v1, 0x10($s3)
    ctx->pc = 0x2c7890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7894: 0xae9701b8  sw          $s7, 0x1B8($s4)
    ctx->pc = 0x2c7894u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 440), GPR_U32(ctx, 23));
    // 0x2c7898: 0xae9601bc  sw          $s6, 0x1BC($s4)
    ctx->pc = 0x2c7898u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 444), GPR_U32(ctx, 22));
    // 0x2c789c: 0xae9e01c4  sw          $fp, 0x1C4($s4)
    ctx->pc = 0x2c789cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 30));
    // 0x2c78a0: 0xae9001c0  sw          $s0, 0x1C0($s4)
    ctx->pc = 0x2c78a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 16));
    // 0x2c78a4: 0x0  nop
    ctx->pc = 0x2c78a4u;
    // NOP
label_2c78a8:
    // 0x2c78a8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x2c78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2c78ac: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x2c78acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2c78b0: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x2c78b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2c78b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C78B4u;
    {
        const bool branch_taken_0x2c78b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C78B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78B4u;
        // 0x2c78b8: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78b4) {
            ctx->pc = 0x2C78C4u;
            goto label_2c78c4;
        }
    }
    ctx->pc = 0x2C78BCu;
    // 0x2c78bc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C78BCu;
    {
        const bool branch_taken_0x2c78bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78BCu;
        // 0x2c78c0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78bc) {
            ctx->pc = 0x2C78A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c78a8;
        }
    }
    ctx->pc = 0x2C78C4u;
label_2c78c4:
    // 0x2c78c4: 0x12720087  beq         $s3, $s2, . + 4 + (0x87 << 2)
    ctx->pc = 0x2C78C4u;
    {
        const bool branch_taken_0x2c78c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        ctx->pc = 0x2C78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78C4u;
        // 0x2c78c8: 0x2728023  subu        $s0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78c4) {
            ctx->pc = 0x2C7AE4u;
            goto label_2c7ae4;
        }
    }
    ctx->pc = 0x2C78CCu;
    // 0x2c78cc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c78d0: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x2c78d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2c78d4: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x2c78d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x2c78d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c78dc: 0x36050001  ori         $a1, $s0, 0x1
    ctx->pc = 0x2c78dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x2c78e0: 0x1038c2  srl         $a3, $s0, 3
    ctx->pc = 0x2c78e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
    // 0x2c78e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c78e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c78e8: 0x2ce60020  sltiu       $a2, $a3, 0x20
    ctx->pc = 0x2c78e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2c78ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2c78ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2c78f0: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x2c78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x2c78f4: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C78F4u;
    {
        const bool branch_taken_0x2c78f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78F4u;
        // 0x2c78f8: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78f4) {
            ctx->pc = 0x2C7964u;
            goto label_2c7964;
        }
    }
    ctx->pc = 0x2C78FCu;
    // 0x2c78fc: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2c78fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c7900: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2c7900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2c7904: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x2c7904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2c7908: 0xe61806  srlv        $v1, $a2, $a3
    ctx->pc = 0x2c7908u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x2c790c: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x2c790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2c7910: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c7910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c7914: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c7914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c7918: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7918u;
    {
        const bool branch_taken_0x2c7918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7918u;
        // 0x2c791c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7918) {
            ctx->pc = 0x2C7934u;
            goto label_2c7934;
        }
    }
    ctx->pc = 0x2C7920u;
    // 0x2c7920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7924: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x2c7924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x2c7928: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2c7928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2c792c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C792Cu;
    {
        const bool branch_taken_0x2c792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C792Cu;
        // 0x2c7930: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c792c) {
            ctx->pc = 0x2C7950u;
            goto label_2c7950;
        }
    }
    ctx->pc = 0x2C7934u;
label_2c7934:
    // 0x2c7934: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2c7934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c7938: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2c7938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c793c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c793cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7940: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7940u;
    {
        const bool branch_taken_0x2c7940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7940u;
        // 0x2c7944: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7940) {
            ctx->pc = 0x2C7950u;
            goto label_2c7950;
        }
    }
    ctx->pc = 0x2C7948u;
    // 0x2c7948: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C7948u;
    SET_GPR_U32(ctx, 31, 0x2C7950u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C7948u, 0x2C7950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7950u;
label_2c7950:
    // 0x2c7950: 0xacb20008  sw          $s2, 0x8($a1)
    ctx->pc = 0x2c7950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 18));
    // 0x2c7954: 0xac92000c  sw          $s2, 0xC($a0)
    ctx->pc = 0x2c7954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 18));
    // 0x2c7958: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x2c7958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
    // 0x2c795c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2C795Cu;
    {
        const bool branch_taken_0x2c795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C795Cu;
        // 0x2c7960: 0xae440008  sw          $a0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c795c) {
            ctx->pc = 0x2C7AE4u;
            goto label_2c7ae4;
        }
    }
    ctx->pc = 0x2C7964u;
label_2c7964:
    // 0x2c7964: 0x101a02  srl         $v1, $s0, 8
    ctx->pc = 0x2c7964u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x2c7968: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7968u;
    {
        const bool branch_taken_0x2c7968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7968u;
        // 0x2c796c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7968) {
            ctx->pc = 0x2C7978u;
            goto label_2c7978;
        }
    }
    ctx->pc = 0x2C7970u;
    // 0x2c7970: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C7970u;
    {
        const bool branch_taken_0x2c7970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7970u;
        // 0x2c7974: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7970) {
            ctx->pc = 0x2C79E0u;
            goto label_2c79e0;
        }
    }
    ctx->pc = 0x2C7978u;
label_2c7978:
    // 0x2c7978: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c7978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c797c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C797Cu;
    {
        const bool branch_taken_0x2c797c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C797Cu;
        // 0x2c7980: 0x2464ff00  addiu       $a0, $v1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c797c) {
            ctx->pc = 0x2C798Cu;
            goto label_2c798c;
        }
    }
    ctx->pc = 0x2C7984u;
    // 0x2c7984: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C7984u;
    {
        const bool branch_taken_0x2c7984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7984u;
        // 0x2c7988: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7984) {
            ctx->pc = 0x2C79E0u;
            goto label_2c79e0;
        }
    }
    ctx->pc = 0x2C798Cu;
label_2c798c:
    // 0x2c798c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2c798cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2c7990: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x2c7990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2c7994: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x2c7994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c7998: 0x2462f000  addiu       $v0, $v1, -0x1000
    ctx->pc = 0x2c7998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x2c799c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2c799cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2c79a0: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x2c79a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2c79a4: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x2c79a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c79a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c79a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c79ac: 0x2462c000  addiu       $v0, $v1, -0x4000
    ctx->pc = 0x2c79acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950912));
    // 0x2c79b0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2c79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2c79b4: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x2c79b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c79b8: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x2c79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c79bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c79c0: 0x31bc2  srl         $v1, $v1, 15
    ctx->pc = 0x2c79c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2c79c4: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x2c79c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x2c79c8: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x2c79c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c79cc: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x2c79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x2c79d0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2c79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c79d4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x2c79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c79d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c79d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c79dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c79dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c79e0:
    // 0x2c79e0: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x2c79e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x2c79e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c79e8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2c79e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x2c79ec: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2c79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2c79f0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2c79f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x2c79f4: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x2c79f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2c79f8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2c79f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c79fc: 0x641006  srlv        $v0, $a0, $v1
    ctx->pc = 0x2c79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c7a00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c7a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c7a04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c7a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c7a08: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C7A08u;
    {
        const bool branch_taken_0x2c7a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A08u;
        // 0x2c7a0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a08) {
            ctx->pc = 0x2C7A4Cu;
            goto label_2c7a4c;
        }
    }
    ctx->pc = 0x2C7A10u;
    // 0x2c7a10: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x2c7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c7a14: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2c7a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2c7a18: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2c7a18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2c7a1c: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x2c7a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
    // 0x2c7a20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7A20u;
    {
        const bool branch_taken_0x2c7a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A20u;
        // 0x2c7a24: 0xae450018  sw          $a1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a20) {
            ctx->pc = 0x2C7A40u;
            goto label_2c7a40;
        }
    }
    ctx->pc = 0x2C7A28u;
label_2c7a28:
    // 0x2c7a28: 0xacd20008  sw          $s2, 0x8($a2)
    ctx->pc = 0x2c7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 18));
    // 0x2c7a2c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2c7a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2c7a30: 0xae46000c  sw          $a2, 0xC($s2)
    ctx->pc = 0x2c7a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 6));
    // 0x2c7a34: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C7A34u;
    {
        const bool branch_taken_0x2c7a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A34u;
        // 0x2c7a38: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a34) {
            ctx->pc = 0x2C7AE4u;
            goto label_2c7ae4;
        }
    }
    ctx->pc = 0x2C7A3Cu;
label_2c7a3c:
    // 0x2c7a3c: 0xae460018  sw          $a2, 0x18($s2)
    ctx->pc = 0x2c7a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 6));
label_2c7a40:
    // 0x2c7a40: 0xae520008  sw          $s2, 0x8($s2)
    ctx->pc = 0x2c7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 18));
    // 0x2c7a44: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C7A44u;
    {
        const bool branch_taken_0x2c7a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A44u;
        // 0x2c7a48: 0xae52000c  sw          $s2, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a44) {
            ctx->pc = 0x2C7AE4u;
            goto label_2c7ae4;
        }
    }
    ctx->pc = 0x2C7A4Cu;
label_2c7a4c:
    // 0x2c7a4c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2c7a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c7a50: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2c7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2c7a54: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7A54u;
    {
        const bool branch_taken_0x2c7a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A54u;
        // 0x2c7a58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a54) {
            ctx->pc = 0x2C7A6Cu;
            goto label_2c7a6c;
        }
    }
    ctx->pc = 0x2C7A5Cu;
    // 0x2c7a5c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c7a60: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2c7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2c7a64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7a68: 0x452804  sllv        $a1, $a1, $v0
    ctx->pc = 0x2c7a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_2c7a6c:
    // 0x2c7a6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C7A6Cu;
    {
        const bool branch_taken_0x2c7a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A6Cu;
        // 0x2c7a70: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a6c) {
            ctx->pc = 0x2C7A98u;
            goto label_2c7a98;
        }
    }
    ctx->pc = 0x2C7A74u;
    // 0x2c7a74: 0x0  nop
    ctx->pc = 0x2c7a74u;
    // NOP
label_2c7a78:
    // 0x2c7a78: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x2c7a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c7a7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7A7Cu;
    {
        const bool branch_taken_0x2c7a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A7Cu;
        // 0x2c7a80: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a7c) {
            ctx->pc = 0x2C7A90u;
            goto label_2c7a90;
        }
    }
    ctx->pc = 0x2C7A84u;
    // 0x2c7a84: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2c7a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c7a88: 0x5040ffe7  beql        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2C7A88u;
    {
        const bool branch_taken_0x2c7a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7a88) {
            ctx->pc = 0x2C7A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7A88u;
            // 0x2c7a8c: 0xac72000c  sw          $s2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7a28;
        }
    }
    ctx->pc = 0x2C7A90u;
label_2c7a90:
    // 0x2c7a90: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C7A90u;
    SET_GPR_U32(ctx, 31, 0x2C7A98u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C7A90u, 0x2C7A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A98u;
label_2c7a98:
    // 0x2c7a98: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2c7a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c7a9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c7a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7aa0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2c7aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x2c7aa4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c7aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7aa8: 0x1070fff3  beq         $v1, $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C7AA8u;
    {
        const bool branch_taken_0x2c7aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AA8u;
        // 0x2c7aac: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7aa8) {
            ctx->pc = 0x2C7A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7a78;
        }
    }
    ctx->pc = 0x2C7AB0u;
    // 0x2c7ab0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c7ab4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2c7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c7ab8: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x2c7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c7abc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c7ac0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7AC0u;
    {
        const bool branch_taken_0x2c7ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AC0u;
        // 0x2c7ac4: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ac0) {
            ctx->pc = 0x2C7AD0u;
            goto label_2c7ad0;
        }
    }
    ctx->pc = 0x2C7AC8u;
    // 0x2c7ac8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x2C7AC8u;
    {
        const bool branch_taken_0x2c7ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AC8u;
        // 0x2c7acc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ac8) {
            ctx->pc = 0x2C7A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7a98;
        }
    }
    ctx->pc = 0x2C7AD0u;
label_2c7ad0:
    // 0x2c7ad0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2c7ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c7ad4: 0x5040ffd9  beql        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2C7AD4u;
    {
        const bool branch_taken_0x2c7ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ad4) {
            ctx->pc = 0x2C7AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7AD4u;
            // 0x2c7ad8: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7A3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7a3c;
        }
    }
    ctx->pc = 0x2C7ADCu;
    // 0x2c7adc: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C7ADCu;
    SET_GPR_U32(ctx, 31, 0x2C7AE4u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C7ADCu, 0x2C7AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7AE4u;
label_2c7ae4:
    // 0x2c7ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c7ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c7ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7aec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c7aecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7af0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c7af0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c7af4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c7af4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7af8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c7af8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c7afc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2c7afcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7b00: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2c7b00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c7b04: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2c7b04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7b08: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2c7b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c7b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B0Cu;
        // 0x2c7b10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7B14u;
    // 0x2c7b14: 0x0  nop
    ctx->pc = 0x2c7b14u;
    // NOP
    ctx->pc = 0x2c7b18u;
}
