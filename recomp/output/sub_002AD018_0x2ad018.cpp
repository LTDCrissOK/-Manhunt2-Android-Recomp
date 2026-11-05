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

// Function: sub_002AD018
// Address: 0x2ad018 - 0x2ad048
void sub_002AD018_0x2ad018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD018_0x2ad018");
#endif

    switch (ctx->pc) {
        case 0x2ad03cu: goto label_2ad03c;
        default: break;
    }

    ctx->pc = 0x2ad018u;

    // 0x2ad018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ad018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad01c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ad01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ad020: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD020u;
    {
        const bool branch_taken_0x2ad020 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD020u;
        // 0x2ad024: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad020) {
            ctx->pc = 0x2AD03Cu;
            goto label_2ad03c;
        }
    }
    ctx->pc = 0x2AD028u;
    // 0x2ad028: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD028u;
    {
        const bool branch_taken_0x2ad028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD028u;
        // 0x2ad02c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad028) {
            ctx->pc = 0x2AD040u;
            goto label_2ad040;
        }
    }
    ctx->pc = 0x2AD030u;
    // 0x2ad030: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2ad030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2ad034: 0xc0ab3fe  jal         func_2ACFF8
    ctx->pc = 0x2AD034u;
    SET_GPR_U32(ctx, 31, 0x2AD03Cu);
    ctx->pc = 0x2AD038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD034u;
    // 0x2ad038: 0x24842440  addiu       $a0, $a0, 0x2440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFF8u, 0x2AD034u, 0x2AD03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD03Cu;
label_2ad03c:
    // 0x2ad03c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad040:
    // 0x2ad040: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD040u;
        // 0x2ad044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD048u;
}
