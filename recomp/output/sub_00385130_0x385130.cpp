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

// Function: sub_00385130
// Address: 0x385130 - 0x385160
void sub_00385130_0x385130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385130_0x385130");
#endif

    switch (ctx->pc) {
        case 0x385150u: goto label_385150;
        default: break;
    }

    ctx->pc = 0x385130u;

    // 0x385130: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x385130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x385134: 0x41702  srl         $v0, $a0, 28
    ctx->pc = 0x385134u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x385138: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x385138u;
    {
        const bool branch_taken_0x385138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x38513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385138u;
        // 0x38513c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385138) {
            ctx->pc = 0x385150u;
            goto label_385150;
        }
    }
    ctx->pc = 0x385140u;
    // 0x385140: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x385140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x385144: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x385144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x385148: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x385148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x38514c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38514cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_385150:
    // 0x385150: 0x3e00008  jr          $ra
    ctx->pc = 0x385150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385150u;
        // 0x385154: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385158u;
    // 0x385158: 0x0  nop
    ctx->pc = 0x385158u;
    // NOP
    // 0x38515c: 0x0  nop
    ctx->pc = 0x38515cu;
    // NOP
    ctx->pc = 0x385160u;
}
