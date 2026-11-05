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

// Function: sub_002CE310
// Address: 0x2ce310 - 0x2ce370
void sub_002CE310_0x2ce310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE310_0x2ce310");
#endif

    switch (ctx->pc) {
        case 0x2ce334u: goto label_2ce334;
        case 0x2ce350u: goto label_2ce350;
        case 0x2ce35cu: goto label_2ce35c;
        default: break;
    }

    ctx->pc = 0x2ce310u;

    // 0x2ce310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce318: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x2ce318u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x2ce31c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ce31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ce320: 0x8e042c30  lw          $a0, 0x2C30($s0)
    ctx->pc = 0x2ce320u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482C30u));
    // 0x2ce324: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE324u;
    {
        const bool branch_taken_0x2ce324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce324) {
            ctx->pc = 0x2CE328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE324u;
            // 0x2ce328: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE33Cu;
            goto label_2ce33c;
        }
    }
    ctx->pc = 0x2CE32Cu;
    // 0x2ce32c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2CE32Cu;
    SET_GPR_U32(ctx, 31, 0x2CE334u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2CE32Cu, 0x2CE334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE334u;
label_2ce334:
    // 0x2ce334: 0xae002c30  sw          $zero, 0x2C30($s0)
    ctx->pc = 0x2ce334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11312), GPR_U32(ctx, 0));
    // 0x2ce338: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x2ce338u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
label_2ce33c:
    // 0x2ce33c: 0x8e042c28  lw          $a0, 0x2C28($s0)
    ctx->pc = 0x2ce33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11304)));
    // 0x2ce340: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE340u;
    {
        const bool branch_taken_0x2ce340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce340) {
            ctx->pc = 0x2CE354u;
            goto label_2ce354;
        }
    }
    ctx->pc = 0x2CE348u;
    // 0x2ce348: 0xc0b3076  jal         func_2CC1D8
    ctx->pc = 0x2CE348u;
    SET_GPR_U32(ctx, 31, 0x2CE350u);
    ctx->pc = 0x2CE34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE348u;
    // 0x2ce34c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC1D8u, 0x2CE348u, 0x2CE350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE350u;
label_2ce350:
    // 0x2ce350: 0xae002c28  sw          $zero, 0x2C28($s0)
    ctx->pc = 0x2ce350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11304), GPR_U32(ctx, 0));
label_2ce354:
    // 0x2ce354: 0xc0b3152  jal         func_2CC548
    ctx->pc = 0x2CE354u;
    SET_GPR_U32(ctx, 31, 0x2CE35Cu);
    ctx->pc = 0x2CC548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC548u, 0x2CE354u, 0x2CE35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE35Cu;
label_2ce35c:
    // 0x2ce35c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce360: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ce360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce364: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE364u;
        // 0x2ce368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE36Cu;
    // 0x2ce36c: 0x0  nop
    ctx->pc = 0x2ce36cu;
    // NOP
    ctx->pc = 0x2ce370u;
}
