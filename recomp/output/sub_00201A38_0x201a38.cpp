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

// Function: sub_00201A38
// Address: 0x201a38 - 0x201a68
void sub_00201A38_0x201a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201A38_0x201a38");
#endif

    switch (ctx->pc) {
        case 0x201a5cu: goto label_201a5c;
        default: break;
    }

    ctx->pc = 0x201a38u;

    // 0x201a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201a3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x201a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x201a40: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201A40u;
    {
        const bool branch_taken_0x201a40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x201A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A40u;
        // 0x201a44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a40) {
            ctx->pc = 0x201A5Cu;
            goto label_201a5c;
        }
    }
    ctx->pc = 0x201A48u;
    // 0x201a48: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201A48u;
    {
        const bool branch_taken_0x201a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A48u;
        // 0x201a4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a48) {
            ctx->pc = 0x201A60u;
            goto label_201a60;
        }
    }
    ctx->pc = 0x201A50u;
    // 0x201a50: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x201a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x201a54: 0xc07f70c  jal         func_1FDC30
    ctx->pc = 0x201A54u;
    SET_GPR_U32(ctx, 31, 0x201A5Cu);
    ctx->pc = 0x201A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A54u;
    // 0x201a58: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC30u, 0x201A54u, 0x201A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A5Cu;
label_201a5c:
    // 0x201a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201a60:
    // 0x201a60: 0x3e00008  jr          $ra
    ctx->pc = 0x201A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A60u;
        // 0x201a64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201A68u;
}
