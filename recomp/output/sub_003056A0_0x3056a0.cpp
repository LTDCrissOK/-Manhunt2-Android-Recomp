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

// Function: sub_003056A0
// Address: 0x3056a0 - 0x305710
void sub_003056A0_0x3056a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003056A0_0x3056a0");
#endif

    ctx->pc = 0x3056a0u;

    // 0x3056a0: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x3056a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x3056a4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3056a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3056a8: 0x8c456610  lw          $a1, 0x6610($v0)
    ctx->pc = 0x3056a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5A6610u));
    // 0x3056ac: 0x8083bb61  lb          $v1, -0x449F($a0)
    ctx->pc = 0x3056acu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3FBB61u));
    // 0x3056b0: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3056B0u;
    {
        const bool branch_taken_0x3056b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3056B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056B0u;
        // 0x3056b4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056b0) {
            ctx->pc = 0x3056C0u;
            goto label_3056c0;
        }
    }
    ctx->pc = 0x3056B8u;
    // 0x3056b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3056B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3056BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056B8u;
        // 0x3056bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3056B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3056C0u;
label_3056c0:
    // 0x3056c0: 0x8043bb62  lb          $v1, -0x449E($v0)
    ctx->pc = 0x3056c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949730)));
    // 0x3056c4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3056C4u;
    {
        const bool branch_taken_0x3056c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3056C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056C4u;
        // 0x3056c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056c4) {
            ctx->pc = 0x3056D4u;
            goto label_3056d4;
        }
    }
    ctx->pc = 0x3056CCu;
    // 0x3056cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3056CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3056D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056CCu;
        // 0x3056d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3056CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3056D4u;
label_3056d4:
    // 0x3056d4: 0x8043bb63  lb          $v1, -0x449D($v0)
    ctx->pc = 0x3056d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949731)));
    // 0x3056d8: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3056D8u;
    {
        const bool branch_taken_0x3056d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3056DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056D8u;
        // 0x3056dc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056d8) {
            ctx->pc = 0x3056E8u;
            goto label_3056e8;
        }
    }
    ctx->pc = 0x3056E0u;
    // 0x3056e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3056E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3056E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056E0u;
        // 0x3056e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3056E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3056E8u;
label_3056e8:
    // 0x3056e8: 0x8043bb64  lb          $v1, -0x449C($v0)
    ctx->pc = 0x3056e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949732)));
    // 0x3056ec: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3056ECu;
    {
        const bool branch_taken_0x3056ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3056F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056ECu;
        // 0x3056f0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056ec) {
            ctx->pc = 0x305708u;
            goto label_305708;
        }
    }
    ctx->pc = 0x3056F4u;
    // 0x3056f4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3056f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3056f8: 0x8064bb65  lb          $a0, -0x449B($v1)
    ctx->pc = 0x3056f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294949733)));
    // 0x3056fc: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x3056fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x305700: 0x3e00008  jr          $ra
    ctx->pc = 0x305700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305700u;
        // 0x305704: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305708u;
label_305708:
    // 0x305708: 0x3e00008  jr          $ra
    ctx->pc = 0x305708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305708u;
        // 0x30570c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305710u;
}
