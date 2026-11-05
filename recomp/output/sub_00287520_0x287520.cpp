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

// Function: sub_00287520
// Address: 0x287520 - 0x287598
void sub_00287520_0x287520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287520_0x287520");
#endif

    ctx->pc = 0x287520u;

    // 0x287520: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x287520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x287524: 0x8c43a320  lw          $v1, -0x5CE0($v0)
    ctx->pc = 0x287524u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66A320u));
    // 0x287528: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x287528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28752c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28752Cu;
    {
        const bool branch_taken_0x28752c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28752Cu;
        // 0x287530: 0x2444a320  addiu       $a0, $v0, -0x5CE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28752c) {
            ctx->pc = 0x28753Cu;
            goto label_28753c;
        }
    }
    ctx->pc = 0x287534u;
    // 0x287534: 0x3e00008  jr          $ra
    ctx->pc = 0x287534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287534u;
        // 0x287538: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28753Cu;
label_28753c:
    // 0x28753c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x28753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x287540: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x287540u;
    {
        const bool branch_taken_0x287540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287540u;
        // 0x287544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287540) {
            ctx->pc = 0x287590u;
            goto label_287590;
        }
    }
    ctx->pc = 0x287548u;
    // 0x287548: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x287548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x28754c: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28754Cu;
    {
        const bool branch_taken_0x28754c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x287550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28754Cu;
        // 0x287550: 0xacc0a320  sw          $zero, -0x5CE0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294943520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28754c) {
            ctx->pc = 0x287568u;
            goto label_287568;
        }
    }
    ctx->pc = 0x287554u;
    // 0x287554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x287554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287558: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287558u;
    {
        const bool branch_taken_0x287558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287558u;
        // 0x28755c: 0x24c3a320  addiu       $v1, $a2, -0x5CE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287558) {
            ctx->pc = 0x287570u;
            goto label_287570;
        }
    }
    ctx->pc = 0x287560u;
    // 0x287560: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x287560u;
    {
        const bool branch_taken_0x287560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287560) {
            ctx->pc = 0x287588u;
            goto label_287588;
        }
    }
    ctx->pc = 0x287568u;
label_287568:
    // 0x287568: 0x3e00008  jr          $ra
    ctx->pc = 0x287568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287568u;
        // 0x28756c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287570u;
label_287570:
    // 0x287570: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x287570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x287574: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x287574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x287578: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x287578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x28757c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28757cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287580: 0x3e00008  jr          $ra
    ctx->pc = 0x287580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287580u;
        // 0x287584: 0xa3100a  movz        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287588u;
label_287588:
    // 0x287588: 0x3e00008  jr          $ra
    ctx->pc = 0x287588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287588u;
        // 0x28758c: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287590u;
label_287590:
    // 0x287590: 0x3e00008  jr          $ra
    ctx->pc = 0x287590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287590u;
        // 0x287594: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287598u;
}
