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

// Function: sub_003D4C68
// Address: 0x3d4c68 - 0x3d4cd0
void sub_003D4C68_0x3d4c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4C68_0x3d4c68");
#endif

    switch (ctx->pc) {
        case 0x3d4ca4u: goto label_3d4ca4;
        default: break;
    }

    ctx->pc = 0x3d4c68u;

    // 0x3d4c68: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3d4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3d4c6c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d4c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d4c70: 0x8c628e68  lw          $v0, -0x7198($v1)
    ctx->pc = 0x3d4c70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x668E68u));
    // 0x3d4c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d4c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d4c78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d4c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d4c7c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3D4C7Cu;
    {
        const bool branch_taken_0x3d4c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C7Cu;
        // 0x3d4c80: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4c7c) {
            ctx->pc = 0x3D4CB4u;
            goto label_3d4cb4;
        }
    }
    ctx->pc = 0x3D4C84u;
    // 0x3d4c84: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x3d4c84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
    // 0x3d4c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d4c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4c8c: 0x26308e58  addiu       $s0, $s1, -0x71A8
    ctx->pc = 0x3d4c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938200));
    // 0x3d4c90: 0xac628e68  sw          $v0, -0x7198($v1)
    ctx->pc = 0x3d4c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294938216), GPR_U32(ctx, 2));
    // 0x3d4c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4c98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d4c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4c9c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3D4C9Cu;
    SET_GPR_U32(ctx, 31, 0x3D4CA4u);
    ctx->pc = 0x3D4CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4C9Cu;
    // 0x3d4ca0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3D4C9Cu, 0x3D4CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4CA4u;
label_3d4ca4:
    // 0x3d4ca4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3d4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3d4ca8: 0x24638e70  addiu       $v1, $v1, -0x7190
    ctx->pc = 0x3d4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938224));
    // 0x3d4cac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D4CACu;
    {
        const bool branch_taken_0x3d4cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CACu;
        // 0x3d4cb0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4cac) {
            ctx->pc = 0x3D4CB8u;
            goto label_3d4cb8;
        }
    }
    ctx->pc = 0x3D4CB4u;
label_3d4cb4:
    // 0x3d4cb4: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x3d4cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_3d4cb8:
    // 0x3d4cb8: 0x26228e58  addiu       $v0, $s1, -0x71A8
    ctx->pc = 0x3d4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938200));
    // 0x3d4cbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d4cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d4cc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d4cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d4cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d4cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d4cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CC8u;
        // 0x3d4ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4CD0u;
}
