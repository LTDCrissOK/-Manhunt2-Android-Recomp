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

// Function: sub_00368FF8
// Address: 0x368ff8 - 0x369038
void sub_00368FF8_0x368ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368FF8_0x368ff8");
#endif

    switch (ctx->pc) {
        case 0x369020u: goto label_369020;
        case 0x36902cu: goto label_36902c;
        default: break;
    }

    ctx->pc = 0x368ff8u;

    // 0x368ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x368ffc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x368ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x369000: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x369000u;
    {
        const bool branch_taken_0x369000 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x369004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369000u;
        // 0x369004: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369000) {
            ctx->pc = 0x36902Cu;
            goto label_36902c;
        }
    }
    ctx->pc = 0x369008u;
    // 0x369008: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x369008u;
    {
        const bool branch_taken_0x369008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369008u;
        // 0x36900c: 0x24050280  addiu       $a1, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369008) {
            ctx->pc = 0x36902Cu;
            goto label_36902c;
        }
    }
    ctx->pc = 0x369010u;
    // 0x369010: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x369010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x369014: 0x2484ef80  addiu       $a0, $a0, -0x1080
    ctx->pc = 0x369014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
    // 0x369018: 0xc082b0a  jal         func_20AC28
    ctx->pc = 0x369018u;
    SET_GPR_U32(ctx, 31, 0x369020u);
    ctx->pc = 0x36901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369018u;
    // 0x36901c: 0x240601e0  addiu       $a2, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x369018u, 0x369020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369020u;
label_369020:
    // 0x369020: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x369020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x369024: 0xc082ee4  jal         func_20BB90
    ctx->pc = 0x369024u;
    SET_GPR_U32(ctx, 31, 0x36902Cu);
    ctx->pc = 0x369028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369024u;
    // 0x369028: 0x2484efd0  addiu       $a0, $a0, -0x1030 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BB90u, 0x369024u, 0x36902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36902Cu;
label_36902c:
    // 0x36902c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36902cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369030: 0x3e00008  jr          $ra
    ctx->pc = 0x369030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369030u;
        // 0x369034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369038u;
}
