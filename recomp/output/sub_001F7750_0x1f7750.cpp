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

// Function: sub_001F7750
// Address: 0x1f7750 - 0x1f77d8
void sub_001F7750_0x1f7750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7750_0x1f7750");
#endif

    ctx->pc = 0x1f7750u;

    // 0x1f7750: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1f7750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7754: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7754u;
    {
        const bool branch_taken_0x1f7754 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7754u;
        // 0x1f7758: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7754) {
            ctx->pc = 0x1F7764u;
            goto label_1f7764;
        }
    }
    ctx->pc = 0x1F775Cu;
    // 0x1f775c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F775Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F775Cu;
        // 0x1f7760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F775Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7764u;
label_1f7764:
    // 0x1f7764: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1f7764u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1f7768: 0x340495cc  ori         $a0, $zero, 0x95CC
    ctx->pc = 0x1f7768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38348);
    // 0x1f776c: 0x8ce69308  lw          $a2, -0x6CF8($a3)
    ctx->pc = 0x1f776cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3F9308u));
    // 0x1f7770: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f7770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f7774: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f7774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f7778: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x1f7778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1f777c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F777Cu;
    {
        const bool branch_taken_0x1f777c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f777c) {
            ctx->pc = 0x1F7780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F777Cu;
            // 0x1f7780: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7784u;
            goto label_1f7784;
        }
    }
    ctx->pc = 0x1F7784u;
label_1f7784:
    // 0x1f7784: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x1f7784u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f7788: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1f7788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1f778c: 0x1810  mfhi        $v1
    ctx->pc = 0x1f778cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f7790: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f7790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f7794: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f7794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f7798: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f7798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f779c: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x1f779cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f77a0: 0x1810  mfhi        $v1
    ctx->pc = 0x1f77a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f77a4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f77a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77a8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1f77a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1f77ac: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1f77acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1f77b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F77B0u;
    {
        const bool branch_taken_0x1f77b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77B0u;
        // 0x1f77b4: 0xace69308  sw          $a2, -0x6CF8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294939400), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77b0) {
            ctx->pc = 0x1F77C4u;
            goto label_1f77c4;
        }
    }
    ctx->pc = 0x1F77B8u;
    // 0x1f77b8: 0x8ca29304  lw          $v0, -0x6CFC($a1)
    ctx->pc = 0x1f77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294939396)));
    // 0x1f77bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f77bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f77c0: 0xaca29304  sw          $v0, -0x6CFC($a1)
    ctx->pc = 0x1f77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294939396), GPR_U32(ctx, 2));
label_1f77c4:
    // 0x1f77c4: 0x8ca39304  lw          $v1, -0x6CFC($a1)
    ctx->pc = 0x1f77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294939396)));
    // 0x1f77c8: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1f77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1f77cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F77CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77CCu;
        // 0x1f77d0: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F77CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F77D4u;
    // 0x1f77d4: 0x0  nop
    ctx->pc = 0x1f77d4u;
    // NOP
    ctx->pc = 0x1f77d8u;
}
