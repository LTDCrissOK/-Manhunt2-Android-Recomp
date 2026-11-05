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

// Function: sub_0025BE78
// Address: 0x25be78 - 0x25bed8
void sub_0025BE78_0x25be78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BE78_0x25be78");
#endif

    switch (ctx->pc) {
        case 0x25be9cu: goto label_25be9c;
        case 0x25bea8u: goto label_25bea8;
        case 0x25beb4u: goto label_25beb4;
        case 0x25bec0u: goto label_25bec0;
        case 0x25beccu: goto label_25becc;
        default: break;
    }

    ctx->pc = 0x25be78u;

    // 0x25be78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25be78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25be7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25be7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25be80: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25BE80u;
    {
        const bool branch_taken_0x25be80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x25BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE80u;
        // 0x25be84: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be80) {
            ctx->pc = 0x25BECCu;
            goto label_25becc;
        }
    }
    ctx->pc = 0x25BE88u;
    // 0x25be88: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25BE88u;
    {
        const bool branch_taken_0x25be88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE88u;
        // 0x25be8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be88) {
            ctx->pc = 0x25BED0u;
            goto label_25bed0;
        }
    }
    ctx->pc = 0x25BE90u;
    // 0x25be90: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x25be90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x25be94: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25BE94u;
    SET_GPR_U32(ctx, 31, 0x25BE9Cu);
    ctx->pc = 0x25BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BE94u;
    // 0x25be98: 0x24843d40  addiu       $a0, $a0, 0x3D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25BE94u, 0x25BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BE9Cu;
label_25be9c:
    // 0x25be9c: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x25be9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x25bea0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25BEA0u;
    SET_GPR_U32(ctx, 31, 0x25BEA8u);
    ctx->pc = 0x25BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BEA0u;
    // 0x25bea4: 0x24843d50  addiu       $a0, $a0, 0x3D50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25BEA0u, 0x25BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BEA8u;
label_25bea8:
    // 0x25bea8: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x25bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x25beac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25BEACu;
    SET_GPR_U32(ctx, 31, 0x25BEB4u);
    ctx->pc = 0x25BEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BEACu;
    // 0x25beb0: 0x24843d60  addiu       $a0, $a0, 0x3D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25BEACu, 0x25BEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BEB4u;
label_25beb4:
    // 0x25beb4: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x25beb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x25beb8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25BEB8u;
    SET_GPR_U32(ctx, 31, 0x25BEC0u);
    ctx->pc = 0x25BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BEB8u;
    // 0x25bebc: 0x24843d70  addiu       $a0, $a0, 0x3D70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25BEB8u, 0x25BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BEC0u;
label_25bec0:
    // 0x25bec0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x25bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x25bec4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25BEC4u;
    SET_GPR_U32(ctx, 31, 0x25BECCu);
    ctx->pc = 0x25BEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BEC4u;
    // 0x25bec8: 0x24843d80  addiu       $a0, $a0, 0x3D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25BEC4u, 0x25BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BECCu;
label_25becc:
    // 0x25becc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25beccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25bed0:
    // 0x25bed0: 0x3e00008  jr          $ra
    ctx->pc = 0x25BED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BED0u;
        // 0x25bed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BED8u;
}
