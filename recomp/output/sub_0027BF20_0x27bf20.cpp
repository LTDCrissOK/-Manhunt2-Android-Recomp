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

// Function: sub_0027BF20
// Address: 0x27bf20 - 0x27c0c0
void sub_0027BF20_0x27bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BF20_0x27bf20");
#endif

    switch (ctx->pc) {
        case 0x27bf44u: goto label_27bf44;
        case 0x27bfa0u: goto label_27bfa0;
        default: break;
    }

    ctx->pc = 0x27bf20u;

    // 0x27bf20: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x27bf24: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x27bf24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x27bf28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27bf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27bf2c: 0x24459640  addiu       $a1, $v0, -0x69C0
    ctx->pc = 0x27bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940224));
    // 0x27bf30: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x27bf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x27bf34: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27BF34u;
    {
        const bool branch_taken_0x27bf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF34u;
        // 0x27bf38: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf34) {
            ctx->pc = 0x27BF98u;
            goto label_27bf98;
        }
    }
    ctx->pc = 0x27BF3Cu;
    // 0x27bf3c: 0x24a70080  addiu       $a3, $a1, 0x80
    ctx->pc = 0x27bf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x27bf40: 0x24c2ffe0  addiu       $v0, $a2, -0x20
    ctx->pc = 0x27bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
label_27bf44:
    // 0x27bf44: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x27bf44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27bf48: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x27bf48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27bf4c: 0x68a9000f  ldl         $t1, 0xF($a1)
    ctx->pc = 0x27bf4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x27bf50: 0x6ca90008  ldr         $t1, 0x8($a1)
    ctx->pc = 0x27bf50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x27bf54: 0x68aa0017  ldl         $t2, 0x17($a1)
    ctx->pc = 0x27bf54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x27bf58: 0x6caa0010  ldr         $t2, 0x10($a1)
    ctx->pc = 0x27bf58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x27bf5c: 0x68ab001f  ldl         $t3, 0x1F($a1)
    ctx->pc = 0x27bf5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x27bf60: 0x6cab0018  ldr         $t3, 0x18($a1)
    ctx->pc = 0x27bf60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x27bf64: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x27bf64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27bf68: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x27bf68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27bf6c: 0xb069000f  sdl         $t1, 0xF($v1)
    ctx->pc = 0x27bf6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27bf70: 0xb4690008  sdr         $t1, 0x8($v1)
    ctx->pc = 0x27bf70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27bf74: 0xb06a0017  sdl         $t2, 0x17($v1)
    ctx->pc = 0x27bf74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27bf78: 0xb46a0010  sdr         $t2, 0x10($v1)
    ctx->pc = 0x27bf78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27bf7c: 0xb06b001f  sdl         $t3, 0x1F($v1)
    ctx->pc = 0x27bf7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27bf80: 0xb46b0018  sdr         $t3, 0x18($v1)
    ctx->pc = 0x27bf80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27bf84: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x27bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x27bf88: 0x14a7ffee  bne         $a1, $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27BF88u;
    {
        const bool branch_taken_0x27bf88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x27BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF88u;
        // 0x27bf8c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf88) {
            ctx->pc = 0x27BF44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27bf44;
        }
    }
    ctx->pc = 0x27BF90u;
    // 0x27bf90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27BF90u;
    {
        const bool branch_taken_0x27bf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF90u;
        // 0x27bf94: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf90) {
            ctx->pc = 0x27BFD0u;
            goto label_27bfd0;
        }
    }
    ctx->pc = 0x27BF98u;
label_27bf98:
    // 0x27bf98: 0x24a70080  addiu       $a3, $a1, 0x80
    ctx->pc = 0x27bf98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x27bf9c: 0x24c2ffe0  addiu       $v0, $a2, -0x20
    ctx->pc = 0x27bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
label_27bfa0:
    // 0x27bfa0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x27bfa0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27bfa4: 0xdca90008  ld          $t1, 0x8($a1)
    ctx->pc = 0x27bfa4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x27bfa8: 0xdcaa0010  ld          $t2, 0x10($a1)
    ctx->pc = 0x27bfa8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x27bfac: 0xdcab0018  ld          $t3, 0x18($a1)
    ctx->pc = 0x27bfacu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x27bfb0: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x27bfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x27bfb4: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x27bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x27bfb8: 0xfc6a0010  sd          $t2, 0x10($v1)
    ctx->pc = 0x27bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 10));
    // 0x27bfbc: 0xfc6b0018  sd          $t3, 0x18($v1)
    ctx->pc = 0x27bfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 11));
    // 0x27bfc0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x27bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x27bfc4: 0x14a7fff6  bne         $a1, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x27BFC4u;
    {
        const bool branch_taken_0x27bfc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x27BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFC4u;
        // 0x27bfc8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfc4) {
            ctx->pc = 0x27BFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27bfa0;
        }
    }
    ctx->pc = 0x27BFCCu;
    // 0x27bfcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27bfd0:
    // 0x27bfd0: 0x88a80003  lwl         $t0, 0x3($a1)
    ctx->pc = 0x27bfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x27bfd4: 0x98a80000  lwr         $t0, 0x0($a1)
    ctx->pc = 0x27bfd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x27bfd8: 0xa8680003  swl         $t0, 0x3($v1)
    ctx->pc = 0x27bfd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27bfdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27bfdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bfe0: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x27bfe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x27bfe4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BFE4u;
    {
        const bool branch_taken_0x27bfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFE4u;
        // 0x27bfe8: 0xb8680000  swr         $t0, 0x0($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfe4) {
            ctx->pc = 0x27BFF4u;
            goto label_27bff4;
        }
    }
    ctx->pc = 0x27BFECu;
    // 0x27bfec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27BFECu;
    {
        const bool branch_taken_0x27bfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFECu;
        // 0x27bff0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfec) {
            ctx->pc = 0x27C070u;
            goto label_27c070;
        }
    }
    ctx->pc = 0x27BFF4u;
label_27bff4:
    // 0x27bff4: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x27bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x27bff8: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x27bff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x27bffc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BFFCu;
    {
        const bool branch_taken_0x27bffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFFCu;
        // 0x27c000: 0x24c2ffc6  addiu       $v0, $a2, -0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967238));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bffc) {
            ctx->pc = 0x27C00Cu;
            goto label_27c00c;
        }
    }
    ctx->pc = 0x27C004u;
    // 0x27c004: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27C004u;
    {
        const bool branch_taken_0x27c004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C004u;
        // 0x27c008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c004) {
            ctx->pc = 0x27C070u;
            goto label_27c070;
        }
    }
    ctx->pc = 0x27C00Cu;
label_27c00c:
    // 0x27c00c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x27c00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x27c010: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C010u;
    {
        const bool branch_taken_0x27c010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C010u;
        // 0x27c014: 0x24c2ffbf  addiu       $v0, $a2, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c010) {
            ctx->pc = 0x27C020u;
            goto label_27c020;
        }
    }
    ctx->pc = 0x27C018u;
    // 0x27c018: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27C018u;
    {
        const bool branch_taken_0x27c018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C018u;
        // 0x27c01c: 0x2407000b  addiu       $a3, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c018) {
            ctx->pc = 0x27C070u;
            goto label_27c070;
        }
    }
    ctx->pc = 0x27C020u;
label_27c020:
    // 0x27c020: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x27c020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x27c024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C024u;
    {
        const bool branch_taken_0x27c024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C024u;
        // 0x27c028: 0x24c2ffa5  addiu       $v0, $a2, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c024) {
            ctx->pc = 0x27C034u;
            goto label_27c034;
        }
    }
    ctx->pc = 0x27C02Cu;
    // 0x27c02c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27C02Cu;
    {
        const bool branch_taken_0x27c02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C02Cu;
        // 0x27c030: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c02c) {
            ctx->pc = 0x27C070u;
            goto label_27c070;
        }
    }
    ctx->pc = 0x27C034u;
label_27c034:
    // 0x27c034: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x27c034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x27c038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C038u;
    {
        const bool branch_taken_0x27c038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C038u;
        // 0x27c03c: 0x24c2ff9f  addiu       $v0, $a2, -0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c038) {
            ctx->pc = 0x27C048u;
            goto label_27c048;
        }
    }
    ctx->pc = 0x27C040u;
    // 0x27c040: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27C040u;
    {
        const bool branch_taken_0x27c040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C040u;
        // 0x27c044: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c040) {
            ctx->pc = 0x27C070u;
            goto label_27c070;
        }
    }
    ctx->pc = 0x27C048u;
label_27c048:
    // 0x27c048: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x27c048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x27c04c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C04Cu;
    {
        const bool branch_taken_0x27c04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C04Cu;
        // 0x27c050: 0x24c2ff85  addiu       $v0, $a2, -0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967173));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c04c) {
            ctx->pc = 0x27C05Cu;
            goto label_27c05c;
        }
    }
    ctx->pc = 0x27C054u;
    // 0x27c054: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27C054u;
    {
        const bool branch_taken_0x27c054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C054u;
        // 0x27c058: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c054) {
            ctx->pc = 0x27C070u;
            goto label_27c070;
        }
    }
    ctx->pc = 0x27C05Cu;
label_27c05c:
    // 0x27c05c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x27c05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27c060: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C060u;
    {
        const bool branch_taken_0x27c060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C060u;
        // 0x27c064: 0x2407003f  addiu       $a3, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c060) {
            ctx->pc = 0x27C070u;
            goto label_27c070;
        }
    }
    ctx->pc = 0x27C068u;
    // 0x27c068: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27C068u;
    {
        const bool branch_taken_0x27c068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C068u;
        // 0x27c06c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c068) {
            ctx->pc = 0x27C0B4u;
            goto label_27c0b4;
        }
    }
    ctx->pc = 0x27C070u;
label_27c070:
    // 0x27c070: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C070u;
    {
        const bool branch_taken_0x27c070 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C070u;
        // 0x27c074: 0x24e2001f  addiu       $v0, $a3, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c070) {
            ctx->pc = 0x27C08Cu;
            goto label_27c08c;
        }
    }
    ctx->pc = 0x27C078u;
    // 0x27c078: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x27c078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x27c07c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27c080: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x27c080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x27c084: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27C084u;
    {
        const bool branch_taken_0x27c084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C084u;
        // 0x27c088: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c084) {
            ctx->pc = 0x27C0B4u;
            goto label_27c0b4;
        }
    }
    ctx->pc = 0x27C08Cu;
label_27c08c:
    // 0x27c08c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27c090: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27c090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27c094: 0x2463a2f0  addiu       $v1, $v1, -0x5D10
    ctx->pc = 0x27c094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943472));
    // 0x27c098: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x27c098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27c09c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27c0a0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x27c0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27c0a4: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x27c0a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x27c0a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x27c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27c0ac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x27c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27c0b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27c0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_27c0b4:
    // 0x27c0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x27C0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C0B4u;
        // 0x27c0b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C0BCu;
    // 0x27c0bc: 0x0  nop
    ctx->pc = 0x27c0bcu;
    // NOP
    ctx->pc = 0x27c0c0u;
}
