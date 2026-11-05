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

// Function: sub_003D8B68
// Address: 0x3d8b68 - 0x3d8bc8
void sub_003D8B68_0x3d8b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8B68_0x3d8b68");
#endif

    switch (ctx->pc) {
        case 0x3d8b78u: goto label_3d8b78;
        case 0x3d8b88u: goto label_3d8b88;
        default: break;
    }

    ctx->pc = 0x3d8b68u;

    // 0x3d8b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d8b6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d8b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d8b70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3D8B70u;
    {
        const bool branch_taken_0x3d8b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B70u;
        // 0x3d8b74: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8b70) {
            ctx->pc = 0x3D8B9Cu;
            goto label_3d8b9c;
        }
    }
    ctx->pc = 0x3D8B78u;
label_3d8b78:
    // 0x3d8b78: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D8B78u;
    {
        const bool branch_taken_0x3d8b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3d8b78) {
            ctx->pc = 0x3D8B90u;
            goto label_3d8b90;
        }
    }
    ctx->pc = 0x3D8B80u;
    // 0x3d8b80: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x3D8B80u;
    SET_GPR_U32(ctx, 31, 0x3D8B88u);
    ctx->pc = 0x3D8B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8B80u;
    // 0x3d8b84: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x3D8B80u, 0x3D8B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8B88u;
label_3d8b88:
    // 0x3d8b88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3D8B88u;
    {
        const bool branch_taken_0x3d8b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B88u;
        // 0x3d8b8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8b88) {
            ctx->pc = 0x3D8BC0u;
            goto label_3d8bc0;
        }
    }
    ctx->pc = 0x3D8B90u;
label_3d8b90:
    // 0x3d8b90: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D8B90u;
    {
        const bool branch_taken_0x3d8b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B90u;
        // 0x3d8b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8b90) {
            ctx->pc = 0x3D8BB8u;
            goto label_3d8bb8;
        }
    }
    ctx->pc = 0x3D8B98u;
    // 0x3d8b98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d8b9c:
    // 0x3d8b9c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3d8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3d8ba0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3d8ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3d8ba4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8BA4u;
    {
        const bool branch_taken_0x3d8ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BA4u;
        // 0x3d8ba8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8ba4) {
            ctx->pc = 0x3D8BB4u;
            goto label_3d8bb4;
        }
    }
    ctx->pc = 0x3D8BACu;
    // 0x3d8bac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D8BACu;
    {
        const bool branch_taken_0x3d8bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BACu;
        // 0x3d8bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8bac) {
            ctx->pc = 0x3D8BB8u;
            goto label_3d8bb8;
        }
    }
    ctx->pc = 0x3D8BB4u;
label_3d8bb4:
    // 0x3d8bb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d8bb8:
    // 0x3d8bb8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3D8BB8u;
    {
        const bool branch_taken_0x3d8bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BB8u;
        // 0x3d8bbc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8bb8) {
            ctx->pc = 0x3D8B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8b78;
        }
    }
    ctx->pc = 0x3D8BC0u;
label_3d8bc0:
    // 0x3d8bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BC0u;
        // 0x3d8bc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8BC8u;
}
