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

// Function: sub_00202A40
// Address: 0x202a40 - 0x202aa8
void sub_00202A40_0x202a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202A40_0x202a40");
#endif

    switch (ctx->pc) {
        case 0x202a74u: goto label_202a74;
        case 0x202a88u: goto label_202a88;
        case 0x202a90u: goto label_202a90;
        default: break;
    }

    ctx->pc = 0x202a40u;

    // 0x202a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202a48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x202a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x202a4c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x202a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x202a50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x202a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x202a54: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x202a54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x202a58: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x202a58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x202a5c: 0x8e0593a8  lw          $a1, -0x6C58($s0)
    ctx->pc = 0x202a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F93A8u));
    // 0x202a60: 0x8e2693ac  lw          $a2, -0x6C54($s1)
    ctx->pc = 0x202a60u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3F93ACu));
    // 0x202a64: 0x8e4793b0  lw          $a3, -0x6C50($s2)
    ctx->pc = 0x202a64u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3F93B0u));
    // 0x202a68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x202a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x202a6c: 0xc082786  jal         func_209E18
    ctx->pc = 0x202A6Cu;
    SET_GPR_U32(ctx, 31, 0x202A74u);
    ctx->pc = 0x202A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A6Cu;
    // 0x202a70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E18u, 0x202A6Cu, 0x202A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A74u;
label_202a74:
    // 0x202a74: 0x8e0593a8  lw          $a1, -0x6C58($s0)
    ctx->pc = 0x202a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939560)));
    // 0x202a78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x202a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202a7c: 0x8e2693ac  lw          $a2, -0x6C54($s1)
    ctx->pc = 0x202a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939564)));
    // 0x202a80: 0xc082786  jal         func_209E18
    ctx->pc = 0x202A80u;
    SET_GPR_U32(ctx, 31, 0x202A88u);
    ctx->pc = 0x202A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A80u;
    // 0x202a84: 0x8e4793b0  lw          $a3, -0x6C50($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E18u, 0x202A80u, 0x202A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A88u;
label_202a88:
    // 0x202a88: 0xc080aaa  jal         func_202AA8
    ctx->pc = 0x202A88u;
    SET_GPR_U32(ctx, 31, 0x202A90u);
    ctx->pc = 0x202AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202AA8u, 0x202A88u, 0x202A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A90u;
label_202a90:
    // 0x202a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202a94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x202a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x202a98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x202a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202a9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x202a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x202aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x202AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AA0u;
        // 0x202aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202AA8u;
}
