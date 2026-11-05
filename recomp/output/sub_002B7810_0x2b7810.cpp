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

// Function: sub_002B7810
// Address: 0x2b7810 - 0x2b79d8
void sub_002B7810_0x2b7810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7810_0x2b7810");
#endif

    switch (ctx->pc) {
        case 0x2b7828u: goto label_2b7828;
        case 0x2b7848u: goto label_2b7848;
        case 0x2b785cu: goto label_2b785c;
        case 0x2b7880u: goto label_2b7880;
        case 0x2b78b0u: goto label_2b78b0;
        case 0x2b790cu: goto label_2b790c;
        case 0x2b7980u: goto label_2b7980;
        case 0x2b7988u: goto label_2b7988;
        case 0x2b7990u: goto label_2b7990;
        case 0x2b7998u: goto label_2b7998;
        case 0x2b79a0u: goto label_2b79a0;
        case 0x2b79a8u: goto label_2b79a8;
        default: break;
    }

    ctx->pc = 0x2b7810u;

    // 0x2b7810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7818: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b7818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b781c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b781cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7820: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7820u;
    SET_GPR_U32(ctx, 31, 0x2B7828u);
    ctx->pc = 0x2B7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7820u;
    // 0x2b7824: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7820u, 0x2B7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7828u;
label_2b7828:
    // 0x2b7828: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x2b7828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x2b782c: 0x8e055908  lw          $a1, 0x5908($s0)
    ctx->pc = 0x2b782cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22792)));
    // 0x2b7830: 0x24711eb0  addiu       $s1, $v1, 0x1EB0
    ctx->pc = 0x2b7830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 7856));
    // 0x2b7834: 0x3c070005  lui         $a3, 0x5
    ctx->pc = 0x2b7834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5 << 16));
    // 0x2b7838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b7838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b783c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b783cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7840: 0xc0ad2fc  jal         func_2B4BF0
    ctx->pc = 0x2B7840u;
    SET_GPR_U32(ctx, 31, 0x2B7848u);
    ctx->pc = 0x2B7844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7840u;
    // 0x2b7844: 0x34e72e3c  ori         $a3, $a3, 0x2E3C (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)11836);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BF0u, 0x2B7840u, 0x2B7848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7848u;
label_2b7848:
    // 0x2b7848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b784c: 0x14430059  bne         $v0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2B784Cu;
    {
        const bool branch_taken_0x2b784c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B784Cu;
        // 0x2b7850: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b784c) {
            ctx->pc = 0x2B79B4u;
            goto label_2b79b4;
        }
    }
    ctx->pc = 0x2B7854u;
    // 0x2b7854: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7854u;
    SET_GPR_U32(ctx, 31, 0x2B785Cu);
    ctx->pc = 0x2B7858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7854u;
    // 0x2b7858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7854u, 0x2B785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B785Cu;
label_2b785c:
    // 0x2b785c: 0x8e035908  lw          $v1, 0x5908($s0)
    ctx->pc = 0x2b785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22792)));
    // 0x2b7860: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x2b7860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2b7864: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2b7864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b7868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b7868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b786c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2b786cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2b7870: 0x14800050  bnez        $a0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2B7870u;
    {
        const bool branch_taken_0x2b7870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7870u;
        // 0x2b7874: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7870) {
            ctx->pc = 0x2B79B4u;
            goto label_2b79b4;
        }
    }
    ctx->pc = 0x2B7878u;
    // 0x2b7878: 0xc0addea  jal         func_2B77A8
    ctx->pc = 0x2B7878u;
    SET_GPR_U32(ctx, 31, 0x2B7880u);
    ctx->pc = 0x2B787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7878u;
    // 0x2b787c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B77A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B77A8u, 0x2B7878u, 0x2B7880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7880u;
label_2b7880:
    // 0x2b7880: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2B7880u;
    {
        const bool branch_taken_0x2b7880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7880u;
        // 0x2b7884: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7880) {
            ctx->pc = 0x2B79B4u;
            goto label_2b79b4;
        }
    }
    ctx->pc = 0x2B7888u;
    // 0x2b7888: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2b7888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2b788c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b788cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7890: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b7890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7894: 0x24632508  addiu       $v1, $v1, 0x2508
    ctx->pc = 0x2b7894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9480));
    // 0x2b7898: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x2b7898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2b789c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2b789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2b78a0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B78A0u;
    {
        const bool branch_taken_0x2b78a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78A0u;
        // 0x2b78a4: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78a0) {
            ctx->pc = 0x2B7904u;
            goto label_2b7904;
        }
    }
    ctx->pc = 0x2B78A8u;
    // 0x2b78a8: 0x34422e20  ori         $v0, $v0, 0x2E20
    ctx->pc = 0x2b78a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11808);
    // 0x2b78ac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b78acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2b78b0:
    // 0x2b78b0: 0x68c50007  ldl         $a1, 0x7($a2)
    ctx->pc = 0x2b78b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2b78b4: 0x6cc50000  ldr         $a1, 0x0($a2)
    ctx->pc = 0x2b78b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2b78b8: 0x68c7000f  ldl         $a3, 0xF($a2)
    ctx->pc = 0x2b78b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2b78bc: 0x6cc70008  ldr         $a3, 0x8($a2)
    ctx->pc = 0x2b78bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2b78c0: 0x68c80017  ldl         $t0, 0x17($a2)
    ctx->pc = 0x2b78c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2b78c4: 0x6cc80010  ldr         $t0, 0x10($a2)
    ctx->pc = 0x2b78c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2b78c8: 0x68c9001f  ldl         $t1, 0x1F($a2)
    ctx->pc = 0x2b78c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2b78cc: 0x6cc90018  ldr         $t1, 0x18($a2)
    ctx->pc = 0x2b78ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2b78d0: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x2b78d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b78d4: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x2b78d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b78d8: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x2b78d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b78dc: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x2b78dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b78e0: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x2b78e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b78e4: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x2b78e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b78e8: 0xb069001f  sdl         $t1, 0x1F($v1)
    ctx->pc = 0x2b78e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b78ec: 0xb4690018  sdr         $t1, 0x18($v1)
    ctx->pc = 0x2b78ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b78f0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b78f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b78f4: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B78F4u;
    {
        const bool branch_taken_0x2b78f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78F4u;
        // 0x2b78f8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78f4) {
            ctx->pc = 0x2B78B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b78b0;
        }
    }
    ctx->pc = 0x2B78FCu;
    // 0x2b78fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2B78FCu;
    {
        const bool branch_taken_0x2b78fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b78fc) {
            ctx->pc = 0x2B7938u;
            goto label_2b7938;
        }
    }
    ctx->pc = 0x2B7904u;
label_2b7904:
    // 0x2b7904: 0x34422e20  ori         $v0, $v0, 0x2E20
    ctx->pc = 0x2b7904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11808);
    // 0x2b7908: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b7908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2b790c:
    // 0x2b790c: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x2b790cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b7910: 0xdcc70008  ld          $a3, 0x8($a2)
    ctx->pc = 0x2b7910u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2b7914: 0xdcc80010  ld          $t0, 0x10($a2)
    ctx->pc = 0x2b7914u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b7918: 0xdcc90018  ld          $t1, 0x18($a2)
    ctx->pc = 0x2b7918u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2b791c: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x2b791cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2b7920: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x2b7920u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x2b7924: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x2b7924u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x2b7928: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x2b7928u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x2b792c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b792cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b7930: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B7930u;
    {
        const bool branch_taken_0x2b7930 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B7934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7930u;
        // 0x2b7934: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7930) {
            ctx->pc = 0x2B790Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b790c;
        }
    }
    ctx->pc = 0x2B7938u;
label_2b7938:
    // 0x2b7938: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2b7938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b793c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2b793cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b7940: 0x68c5000f  ldl         $a1, 0xF($a2)
    ctx->pc = 0x2b7940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2b7944: 0x6cc50008  ldr         $a1, 0x8($a2)
    ctx->pc = 0x2b7944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2b7948: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x2b7948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2b794c: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x2b794cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2b7950: 0x8cc80018  lw          $t0, 0x18($a2)
    ctx->pc = 0x2b7950u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2b7954: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x2b7954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b7958: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x2b7958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b795c: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x2b795cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b7960: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x2b7960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b7964: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x2b7964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b7968: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x2b7968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b796c: 0x24842508  addiu       $a0, $a0, 0x2508
    ctx->pc = 0x2b796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9480));
    // 0x2b7970: 0xac680018  sw          $t0, 0x18($v1)
    ctx->pc = 0x2b7970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 8));
    // 0x2b7974: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x2b7974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x2b7978: 0xc0acbd0  jal         func_2B2F40
    ctx->pc = 0x2B7978u;
    SET_GPR_U32(ctx, 31, 0x2B7980u);
    ctx->pc = 0x2B797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7978u;
    // 0x2b797c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F40u, 0x2B7978u, 0x2B7980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7980u;
label_2b7980:
    // 0x2b7980: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B7980u;
    SET_GPR_U32(ctx, 31, 0x2B7988u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B7980u, 0x2B7988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7988u;
label_2b7988:
    // 0x2b7988: 0xc0a7244  jal         func_29C910
    ctx->pc = 0x2B7988u;
    SET_GPR_U32(ctx, 31, 0x2B7990u);
    ctx->pc = 0x2B798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7988u;
    // 0x2b798c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C910u, 0x2B7988u, 0x2B7990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7990u;
label_2b7990:
    // 0x2b7990: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B7990u;
    SET_GPR_U32(ctx, 31, 0x2B7998u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B7990u, 0x2B7998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7998u;
label_2b7998:
    // 0x2b7998: 0xc0a7566  jal         func_29D598
    ctx->pc = 0x2B7998u;
    SET_GPR_U32(ctx, 31, 0x2B79A0u);
    ctx->pc = 0x2B799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7998u;
    // 0x2b799c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D598u, 0x2B7998u, 0x2B79A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79A0u;
label_2b79a0:
    // 0x2b79a0: 0xc0a221c  jal         func_288870
    ctx->pc = 0x2B79A0u;
    SET_GPR_U32(ctx, 31, 0x2B79A8u);
    ctx->pc = 0x288870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288870u, 0x2B79A0u, 0x2B79A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79A8u;
label_2b79a8:
    // 0x2b79a8: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2b79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2b79ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B79ACu;
    {
        const bool branch_taken_0x2b79ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79ACu;
        // 0x2b79b0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79ac) {
            ctx->pc = 0x2B79B8u;
            goto label_2b79b8;
        }
    }
    ctx->pc = 0x2B79B4u;
label_2b79b4:
    // 0x2b79b4: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2b79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2b79b8:
    // 0x2b79b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b79b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b79bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b79bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b79c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b79c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b79c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b79c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b79c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B79C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B79CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79C8u;
        // 0x2b79cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B79C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B79D0u;
    // 0x2b79d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b79d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b79d4: 0x0  nop
    ctx->pc = 0x2b79d4u;
    // NOP
    ctx->pc = 0x2b79d8u;
}
