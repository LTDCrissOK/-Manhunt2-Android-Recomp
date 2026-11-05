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

// Function: sub_003D97A0
// Address: 0x3d97a0 - 0x3d9958
void sub_003D97A0_0x3d97a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D97A0_0x3d97a0");
#endif

    switch (ctx->pc) {
        case 0x3d97e8u: goto label_3d97e8;
        case 0x3d98c0u: goto label_3d98c0;
        default: break;
    }

    ctx->pc = 0x3d97a0u;

    // 0x3d97a0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3d97a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d97a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d97a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d97a8: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x3d97a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d97ac: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3d97acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d97b0: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x3d97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x3d97b4: 0x24480002  addiu       $t0, $v0, 0x2
    ctx->pc = 0x3d97b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3d97b8: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x3d97b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3d97bc: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x3d97bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3d97c0: 0x68e3000f  ldl         $v1, 0xF($a3)
    ctx->pc = 0x3d97c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3d97c4: 0x6ce30008  ldr         $v1, 0x8($a3)
    ctx->pc = 0x3d97c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3d97c8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3d97c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d97cc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3d97ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d97d0: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x3d97d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d97d4: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x3d97d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d97d8: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x3d97d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3d97dc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3D97DCu;
    {
        const bool branch_taken_0x3d97dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D97DCu;
        // 0x3d97e0: 0x3a0602d  daddu       $t4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d97dc) {
            ctx->pc = 0x3D9844u;
            goto label_3d9844;
        }
    }
    ctx->pc = 0x3D97E4u;
    // 0x3d97e4: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x3d97e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_3d97e8:
    // 0x3d97e8: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x3d97e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3d97ec: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3d97ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3d97f0: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x3d97f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x3d97f4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3d97f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3d97f8: 0x8c62fff4  lw          $v0, -0xC($v1)
    ctx->pc = 0x3d97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
    // 0x3d97fc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3d97fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d9800: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x3d9800u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3d9804: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3d9804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9808: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x3d9808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3d980c: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x3d980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3d9810: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3d9810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3d9814: 0x24040  sll         $t0, $v0, 1
    ctx->pc = 0x3d9814u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3d9818: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x3d9818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3d981c: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x3d981cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3d9820: 0x686d000f  ldl         $t5, 0xF($v1)
    ctx->pc = 0x3d9820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x3d9824: 0x6c6d0008  ldr         $t5, 0x8($v1)
    ctx->pc = 0x3d9824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x3d9828: 0xb0a70007  sdl         $a3, 0x7($a1)
    ctx->pc = 0x3d9828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d982c: 0xb4a70000  sdr         $a3, 0x0($a1)
    ctx->pc = 0x3d982cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9830: 0xb0ad000f  sdl         $t5, 0xF($a1)
    ctx->pc = 0x3d9830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9834: 0xb4ad0008  sdr         $t5, 0x8($a1)
    ctx->pc = 0x3d9834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9838: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x3d9838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3d983c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3D983Cu;
    {
        const bool branch_taken_0x3d983c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D983Cu;
        // 0x3d9840: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d983c) {
            ctx->pc = 0x3D97E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d97e8;
        }
    }
    ctx->pc = 0x3D9844u;
label_3d9844:
    // 0x3d9844: 0x1506000d  bne         $t0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x3D9844u;
    {
        const bool branch_taken_0x3d9844 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x3D9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9844u;
        // 0x3d9848: 0x91900  sll         $v1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9844) {
            ctx->pc = 0x3D987Cu;
            goto label_3d987c;
        }
    }
    ctx->pc = 0x3D984Cu;
    // 0x3d984c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x3d984cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3d9850: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3d9850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3d9854: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3d9854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3d9858: 0x6845fff7  ldl         $a1, -0x9($v0)
    ctx->pc = 0x3d9858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3d985c: 0x6c45fff0  ldr         $a1, -0x10($v0)
    ctx->pc = 0x3d985cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3d9860: 0x6846ffff  ldl         $a2, -0x1($v0)
    ctx->pc = 0x3d9860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3d9864: 0x6c46fff8  ldr         $a2, -0x8($v0)
    ctx->pc = 0x3d9864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3d9868: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x3d9868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d986c: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x3d986cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9870: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x3d9870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9874: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x3d9874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9878: 0x2509ffff  addiu       $t1, $t0, -0x1
    ctx->pc = 0x3d9878u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_3d987c:
    // 0x3d987c: 0x698d0007  ldl         $t5, 0x7($t4)
    ctx->pc = 0x3d987cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x3d9880: 0x6d8d0000  ldr         $t5, 0x0($t4)
    ctx->pc = 0x3d9880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x3d9884: 0x6982000f  ldl         $v0, 0xF($t4)
    ctx->pc = 0x3d9884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3d9888: 0x6d820008  ldr         $v0, 0x8($t4)
    ctx->pc = 0x3d9888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3d988c: 0xb3ad0017  sdl         $t5, 0x17($sp)
    ctx->pc = 0x3d988cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9890: 0xb7ad0010  sdr         $t5, 0x10($sp)
    ctx->pc = 0x3d9890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9894: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x3d9894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9898: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x3d9898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d989c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3d989cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d98a0: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3d98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3d98a4: 0x168202a  slt         $a0, $t3, $t0
    ctx->pc = 0x3d98a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3d98a8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3d98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3d98ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d98acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d98b0: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3D98B0u;
    {
        const bool branch_taken_0x3d98b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D98B0u;
        // 0x3d98b4: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d98b0) {
            ctx->pc = 0x3D9924u;
            goto label_3d9924;
        }
    }
    ctx->pc = 0x3D98B8u;
    // 0x3d98b8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3D98B8u;
    {
        const bool branch_taken_0x3d98b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D98B8u;
        // 0x3d98bc: 0x72100  sll         $a0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d98b8) {
            ctx->pc = 0x3D990Cu;
            goto label_3d990c;
        }
    }
    ctx->pc = 0x3D98C0u;
label_3d98c0:
    // 0x3d98c0: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x3d98c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3d98c4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3d98c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3d98c8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3d98c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d98cc: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x3d98ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x3d98d0: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3d98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3d98d4: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x3d98d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3d98d8: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x3d98d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3d98dc: 0x68c9000f  ldl         $t1, 0xF($a2)
    ctx->pc = 0x3d98dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3d98e0: 0x6cc90008  ldr         $t1, 0x8($a2)
    ctx->pc = 0x3d98e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3d98e4: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x3d98e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d98e8: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x3d98e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d98ec: 0xb089000f  sdl         $t1, 0xF($a0)
    ctx->pc = 0x3d98ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d98f0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3d98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3d98f4: 0xb4890008  sdr         $t1, 0x8($a0)
    ctx->pc = 0x3d98f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d98f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d98fc: 0x168282a  slt         $a1, $t3, $t0
    ctx->pc = 0x3d98fcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3d9900: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D9900u;
    {
        const bool branch_taken_0x3d9900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9900u;
        // 0x3d9904: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9900) {
            ctx->pc = 0x3D9924u;
            goto label_3d9924;
        }
    }
    ctx->pc = 0x3D9908u;
    // 0x3d9908: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x3d9908u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_3d990c:
    // 0x3d990c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3d990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3d9910: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x3d9910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x3d9914: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3d9914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d9918: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3d9918u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d991c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3D991Cu;
    {
        const bool branch_taken_0x3d991c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D991Cu;
        // 0x3d9920: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d991c) {
            ctx->pc = 0x3D98C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d98c0;
        }
    }
    ctx->pc = 0x3D9924u;
label_3d9924:
    // 0x3d9924: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x3d9924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3d9928: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3d9928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3d992c: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x3d992cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3d9930: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x3d9930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3d9934: 0x6ba4001f  ldl         $a0, 0x1F($sp)
    ctx->pc = 0x3d9934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3d9938: 0x6fa40018  ldr         $a0, 0x18($sp)
    ctx->pc = 0x3d9938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3d993c: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3d993cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9940: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3d9940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9944: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3d9944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9948: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3d9948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d994c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D994Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D994Cu;
        // 0x3d9950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D994Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9954u;
    // 0x3d9954: 0x0  nop
    ctx->pc = 0x3d9954u;
    // NOP
    ctx->pc = 0x3d9958u;
}
