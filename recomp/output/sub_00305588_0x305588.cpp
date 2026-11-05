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

// Function: sub_00305588
// Address: 0x305588 - 0x3055d0
void sub_00305588_0x305588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305588_0x305588");
#endif

    ctx->pc = 0x305588u;

    // 0x305588: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x305588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x30558c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x30558cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x305590: 0x8c4565b0  lw          $a1, 0x65B0($v0)
    ctx->pc = 0x305590u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5A65B0u));
    // 0x305594: 0x8083bb5b  lb          $v1, -0x44A5($a0)
    ctx->pc = 0x305594u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3FBB5Bu));
    // 0x305598: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x305598u;
    {
        const bool branch_taken_0x305598 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x30559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305598u;
        // 0x30559c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305598) {
            ctx->pc = 0x3055A8u;
            goto label_3055a8;
        }
    }
    ctx->pc = 0x3055A0u;
    // 0x3055a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3055A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3055A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055A0u;
        // 0x3055a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3055A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3055A8u;
label_3055a8:
    // 0x3055a8: 0x8043bb5c  lb          $v1, -0x44A4($v0)
    ctx->pc = 0x3055a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949724)));
    // 0x3055ac: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3055ACu;
    {
        const bool branch_taken_0x3055ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3055B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055ACu;
        // 0x3055b0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055ac) {
            ctx->pc = 0x3055C8u;
            goto label_3055c8;
        }
    }
    ctx->pc = 0x3055B4u;
    // 0x3055b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3055b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3055b8: 0x8064bb5d  lb          $a0, -0x44A3($v1)
    ctx->pc = 0x3055b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294949725)));
    // 0x3055bc: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x3055bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x3055c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3055C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3055C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055C0u;
        // 0x3055c4: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3055C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3055C8u;
label_3055c8:
    // 0x3055c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3055C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055C8u;
        // 0x3055cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3055C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3055D0u;
}
