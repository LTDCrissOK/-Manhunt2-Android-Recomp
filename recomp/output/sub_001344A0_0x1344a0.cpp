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

// Function: sub_001344A0
// Address: 0x1344a0 - 0x1344d8
void sub_001344A0_0x1344a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001344A0_0x1344a0");
#endif

    switch (ctx->pc) {
        case 0x1344bcu: goto label_1344bc;
        case 0x1344c4u: goto label_1344c4;
        default: break;
    }

    ctx->pc = 0x1344a0u;

    // 0x1344a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1344a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1344a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1344a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1344a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1344a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1344ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1344acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1344b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1344b4: 0xc04d348  jal         func_134D20
    ctx->pc = 0x1344B4u;
    SET_GPR_U32(ctx, 31, 0x1344BCu);
    ctx->pc = 0x1344B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344B4u;
    // 0x1344b8: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D20u, 0x1344B4u, 0x1344BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344BCu;
label_1344bc:
    // 0x1344bc: 0xc04d69a  jal         func_135A68
    ctx->pc = 0x1344BCu;
    SET_GPR_U32(ctx, 31, 0x1344C4u);
    ctx->pc = 0x1344C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344BCu;
    // 0x1344c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135A68u, 0x1344BCu, 0x1344C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344C4u;
label_1344c4:
    // 0x1344c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1344c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1344c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1344c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1344cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1344ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1344d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1344D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1344D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344D0u;
        // 0x1344d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1344D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1344D8u;
}
