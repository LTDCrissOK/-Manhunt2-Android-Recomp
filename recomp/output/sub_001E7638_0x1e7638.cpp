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

// Function: sub_001E7638
// Address: 0x1e7638 - 0x1e7680
void sub_001E7638_0x1e7638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7638_0x1e7638");
#endif

    switch (ctx->pc) {
        case 0x1e765cu: goto label_1e765c;
        case 0x1e7668u: goto label_1e7668;
        case 0x1e7674u: goto label_1e7674;
        default: break;
    }

    ctx->pc = 0x1e7638u;

    // 0x1e7638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e763c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e763cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e7640: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E7640u;
    {
        const bool branch_taken_0x1e7640 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7640u;
        // 0x1e7644: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7640) {
            ctx->pc = 0x1E7674u;
            goto label_1e7674;
        }
    }
    ctx->pc = 0x1E7648u;
    // 0x1e7648: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E7648u;
    {
        const bool branch_taken_0x1e7648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7648u;
        // 0x1e764c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7648) {
            ctx->pc = 0x1E7678u;
            goto label_1e7678;
        }
    }
    ctx->pc = 0x1E7650u;
    // 0x1e7650: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1e7650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1e7654: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1E7654u;
    SET_GPR_U32(ctx, 31, 0x1E765Cu);
    ctx->pc = 0x1E7658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7654u;
    // 0x1e7658: 0x248401d0  addiu       $a0, $a0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1E7654u, 0x1E765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E765Cu;
label_1e765c:
    // 0x1e765c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1e765cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1e7660: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1E7660u;
    SET_GPR_U32(ctx, 31, 0x1E7668u);
    ctx->pc = 0x1E7664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7660u;
    // 0x1e7664: 0x24840230  addiu       $a0, $a0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1E7660u, 0x1E7668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7668u;
label_1e7668:
    // 0x1e7668: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1e7668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1e766c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1E766Cu;
    SET_GPR_U32(ctx, 31, 0x1E7674u);
    ctx->pc = 0x1E7670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E766Cu;
    // 0x1e7670: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1E766Cu, 0x1E7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7674u;
label_1e7674:
    // 0x1e7674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7678:
    // 0x1e7678: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7678u;
        // 0x1e767c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7680u;
}
