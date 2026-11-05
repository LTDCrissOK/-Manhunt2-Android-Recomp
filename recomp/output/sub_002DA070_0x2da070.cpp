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

// Function: sub_002DA070
// Address: 0x2da070 - 0x2da0d8
void sub_002DA070_0x2da070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA070_0x2da070");
#endif

    switch (ctx->pc) {
        case 0x2da084u: goto label_2da084;
        case 0x2da090u: goto label_2da090;
        case 0x2da09cu: goto label_2da09c;
        case 0x2da0a8u: goto label_2da0a8;
        case 0x2da0b4u: goto label_2da0b4;
        case 0x2da0c0u: goto label_2da0c0;
        case 0x2da0c8u: goto label_2da0c8;
        default: break;
    }

    ctx->pc = 0x2da070u;

    // 0x2da070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2da070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2da074: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2da074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2da078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da07c: 0xc09f478  jal         func_27D1E0
    ctx->pc = 0x2DA07Cu;
    SET_GPR_U32(ctx, 31, 0x2DA084u);
    ctx->pc = 0x2DA080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA07Cu;
    // 0x2da080: 0x2484b0d8  addiu       $a0, $a0, -0x4F28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D1E0u, 0x2DA07Cu, 0x2DA084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA084u;
label_2da084:
    // 0x2da084: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2da084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2da088: 0xc0b6b82  jal         func_2DAE08
    ctx->pc = 0x2DA088u;
    SET_GPR_U32(ctx, 31, 0x2DA090u);
    ctx->pc = 0x2DA08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA088u;
    // 0x2da08c: 0x2484b0e0  addiu       $a0, $a0, -0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE08u, 0x2DA088u, 0x2DA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA090u;
label_2da090:
    // 0x2da090: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2da090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2da094: 0xc0b6b82  jal         func_2DAE08
    ctx->pc = 0x2DA094u;
    SET_GPR_U32(ctx, 31, 0x2DA09Cu);
    ctx->pc = 0x2DA098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA094u;
    // 0x2da098: 0x248414e0  addiu       $a0, $a0, 0x14E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE08u, 0x2DA094u, 0x2DA09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA09Cu;
label_2da09c:
    // 0x2da09c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2da09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2da0a0: 0xc0b6b82  jal         func_2DAE08
    ctx->pc = 0x2DA0A0u;
    SET_GPR_U32(ctx, 31, 0x2DA0A8u);
    ctx->pc = 0x2DA0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA0A0u;
    // 0x2da0a4: 0x248478e0  addiu       $a0, $a0, 0x78E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE08u, 0x2DA0A0u, 0x2DA0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0A8u;
label_2da0a8:
    // 0x2da0a8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2da0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2da0ac: 0xc0b6b84  jal         func_2DAE10
    ctx->pc = 0x2DA0ACu;
    SET_GPR_U32(ctx, 31, 0x2DA0B4u);
    ctx->pc = 0x2DA0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA0ACu;
    // 0x2da0b0: 0x2484dce0  addiu       $a0, $a0, -0x2320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE10u, 0x2DA0ACu, 0x2DA0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0B4u;
label_2da0b4:
    // 0x2da0b4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2da0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2da0b8: 0xc0b6b06  jal         func_2DAC18
    ctx->pc = 0x2DA0B8u;
    SET_GPR_U32(ctx, 31, 0x2DA0C0u);
    ctx->pc = 0x2DA0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA0B8u;
    // 0x2da0bc: 0x248440e0  addiu       $a0, $a0, 0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC18u, 0x2DA0B8u, 0x2DA0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0C0u;
label_2da0c0:
    // 0x2da0c0: 0xc0d99cc  jal         func_366730
    ctx->pc = 0x2DA0C0u;
    SET_GPR_U32(ctx, 31, 0x2DA0C8u);
    ctx->pc = 0x366730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366730u, 0x2DA0C0u, 0x2DA0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0C8u;
label_2da0c8:
    // 0x2da0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da0cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0D0u;
        // 0x2da0d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA0D8u;
}
