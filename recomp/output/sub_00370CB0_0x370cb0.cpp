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

// Function: sub_00370CB0
// Address: 0x370cb0 - 0x370d18
void sub_00370CB0_0x370cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370CB0_0x370cb0");
#endif

    switch (ctx->pc) {
        case 0x370cc0u: goto label_370cc0;
        case 0x370ce0u: goto label_370ce0;
        case 0x370cf0u: goto label_370cf0;
        case 0x370d08u: goto label_370d08;
        default: break;
    }

    ctx->pc = 0x370cb0u;

    // 0x370cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370cb8: 0xc0dccae  jal         func_3732B8
    ctx->pc = 0x370CB8u;
    SET_GPR_U32(ctx, 31, 0x370CC0u);
    ctx->pc = 0x3732B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3732B8u, 0x370CB8u, 0x370CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370CC0u;
label_370cc0:
    // 0x370cc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x370cc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370cc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x370cc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370cc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x370cc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ccc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x370cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370cd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370cd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370cd8: 0xc0dccd0  jal         func_373340
    ctx->pc = 0x370CD8u;
    SET_GPR_U32(ctx, 31, 0x370CE0u);
    ctx->pc = 0x370CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370CD8u;
    // 0x370cdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373340u, 0x370CD8u, 0x370CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370CE0u;
label_370ce0:
    // 0x370ce0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x370ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x370ce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x370ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ce8: 0xc0dca58  jal         func_372960
    ctx->pc = 0x370CE8u;
    SET_GPR_U32(ctx, 31, 0x370CF0u);
    ctx->pc = 0x370CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370CE8u;
    // 0x370cec: 0x24840de0  addiu       $a0, $a0, 0xDE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372960u, 0x370CE8u, 0x370CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370CF0u;
label_370cf0:
    // 0x370cf0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x370cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x370cf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370cf8: 0x24a51080  addiu       $a1, $a1, 0x1080
    ctx->pc = 0x370cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4224));
    // 0x370cfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d00: 0xc0dc5b4  jal         func_3716D0
    ctx->pc = 0x370D00u;
    SET_GPR_U32(ctx, 31, 0x370D08u);
    ctx->pc = 0x370D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D00u;
    // 0x370d04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3716D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3716D0u, 0x370D00u, 0x370D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D08u;
label_370d08:
    // 0x370d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x370D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D0Cu;
        // 0x370d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370D14u;
    // 0x370d14: 0x0  nop
    ctx->pc = 0x370d14u;
    // NOP
    ctx->pc = 0x370d18u;
}
