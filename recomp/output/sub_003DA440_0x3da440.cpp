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

// Function: sub_003DA440
// Address: 0x3da440 - 0x3da4e8
void sub_003DA440_0x3da440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA440_0x3da440");
#endif

    switch (ctx->pc) {
        case 0x3da480u: goto label_3da480;
        default: break;
    }

    ctx->pc = 0x3da440u;

    // 0x3da440: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3da440u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da444: 0x30a9ffff  andi        $t1, $a1, 0xFFFF
    ctx->pc = 0x3da444u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3da448: 0x95430010  lhu         $v1, 0x10($t2)
    ctx->pc = 0x3da448u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x3da44c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3DA44Cu;
    {
        const bool branch_taken_0x3da44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA44Cu;
        // 0x3da450: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da44c) {
            ctx->pc = 0x3DA4E0u;
            goto label_3da4e0;
        }
    }
    ctx->pc = 0x3DA454u;
    // 0x3da454: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x3da454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3da458: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3DA458u;
    {
        const bool branch_taken_0x3da458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA458u;
        // 0x3da45c: 0x123102b  sltu        $v0, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da458) {
            ctx->pc = 0x3DA4E0u;
            goto label_3da4e0;
        }
    }
    ctx->pc = 0x3DA460u;
    // 0x3da460: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3DA460u;
    {
        const bool branch_taken_0x3da460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA460u;
        // 0x3da464: 0xc3102b  sltu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da460) {
            ctx->pc = 0x3DA4E0u;
            goto label_3da4e0;
        }
    }
    ctx->pc = 0x3DA468u;
    // 0x3da468: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3DA468u;
    {
        const bool branch_taken_0x3da468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA468u;
        // 0x3da46c: 0x25230001  addiu       $v1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da468) {
            ctx->pc = 0x3DA4E0u;
            goto label_3da4e0;
        }
    }
    ctx->pc = 0x3DA470u;
    // 0x3da470: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x3da470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3da474: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x3da474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3da478: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DA478u;
    {
        const bool branch_taken_0x3da478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA478u;
        // 0x3da47c: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da478) {
            ctx->pc = 0x3DA4BCu;
            goto label_3da4bc;
        }
    }
    ctx->pc = 0x3DA480u;
label_3da480:
    // 0x3da480: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x3da480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3da484: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x3da484u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3da488: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x3da488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3da48c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x3da48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3da490: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3da490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3da494: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3da494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3da498: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x3da498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3da49c: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x3da49cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3da4a0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x3da4a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3da4a4: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x3da4a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3da4a8: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x3da4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3da4ac: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x3da4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3da4b0: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3da4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3da4b4: 0x1060fff2  beqz        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3DA4B4u;
    {
        const bool branch_taken_0x3da4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA4B4u;
        // 0x3da4b8: 0xb4a20000  sdr         $v0, 0x0($a1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da4b4) {
            ctx->pc = 0x3DA480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da480;
        }
    }
    ctx->pc = 0x3DA4BCu;
label_3da4bc:
    // 0x3da4bc: 0x95440012  lhu         $a0, 0x12($t2)
    ctx->pc = 0x3da4bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 18)));
    // 0x3da4c0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3da4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3da4c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DA4C4u;
    {
        const bool branch_taken_0x3da4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA4C4u;
        // 0x3da4c8: 0x123102b  sltu        $v0, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da4c4) {
            ctx->pc = 0x3DA4E0u;
            goto label_3da4e0;
        }
    }
    ctx->pc = 0x3DA4CCu;
    // 0x3da4cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA4CCu;
    {
        const bool branch_taken_0x3da4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA4CCu;
        // 0x3da4d0: 0xc3102b  sltu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da4cc) {
            ctx->pc = 0x3DA4E0u;
            goto label_3da4e0;
        }
    }
    ctx->pc = 0x3DA4D4u;
    // 0x3da4d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DA4D4u;
    {
        const bool branch_taken_0x3da4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA4D4u;
        // 0x3da4d8: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da4d4) {
            ctx->pc = 0x3DA4E0u;
            goto label_3da4e0;
        }
    }
    ctx->pc = 0x3DA4DCu;
    // 0x3da4dc: 0xa5420012  sh          $v0, 0x12($t2)
    ctx->pc = 0x3da4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 18), (uint16_t)GPR_U32(ctx, 2));
label_3da4e0:
    // 0x3da4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA4E8u;
}
