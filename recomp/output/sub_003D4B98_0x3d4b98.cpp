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

// Function: sub_003D4B98
// Address: 0x3d4b98 - 0x3d4bf0
void sub_003D4B98_0x3d4b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4B98_0x3d4b98");
#endif

    switch (ctx->pc) {
        case 0x3d4bacu: goto label_3d4bac;
        case 0x3d4bc0u: goto label_3d4bc0;
        case 0x3d4bd0u: goto label_3d4bd0;
        default: break;
    }

    ctx->pc = 0x3d4b98u;

    // 0x3d4b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d4b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d4b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d4b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d4ba0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d4ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d4ba4: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x3D4BA4u;
    SET_GPR_U32(ctx, 31, 0x3D4BACu);
    ctx->pc = 0x3D4BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4BA4u;
    // 0x3d4ba8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x3D4BA4u, 0x3D4BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4BACu;
label_3d4bac:
    // 0x3d4bac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d4bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4bb0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4BB0u;
    {
        const bool branch_taken_0x3d4bb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4BB0u;
        // 0x3d4bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4bb0) {
            ctx->pc = 0x3D4BC4u;
            goto label_3d4bc4;
        }
    }
    ctx->pc = 0x3D4BB8u;
    // 0x3d4bb8: 0xc0f52ce  jal         func_3D4B38
    ctx->pc = 0x3D4BB8u;
    SET_GPR_U32(ctx, 31, 0x3D4BC0u);
    ctx->pc = 0x3D4B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4B38u, 0x3D4BB8u, 0x3D4BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4BC0u;
label_3d4bc0:
    // 0x3d4bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4bc4:
    // 0x3d4bc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d4bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4bc8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3D4BC8u;
    SET_GPR_U32(ctx, 31, 0x3D4BD0u);
    ctx->pc = 0x3D4BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4BC8u;
    // 0x3d4bcc: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3D4BC8u, 0x3D4BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4BD0u;
label_3d4bd0:
    // 0x3d4bd0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x3d4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3d4bd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d4bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4bd8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3d4bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3d4bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d4bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d4be0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d4be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d4be4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4BE4u;
        // 0x3d4be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4BECu;
    // 0x3d4bec: 0x0  nop
    ctx->pc = 0x3d4becu;
    // NOP
    ctx->pc = 0x3d4bf0u;
}
