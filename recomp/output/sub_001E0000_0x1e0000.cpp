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

// Function: sub_001E0000
// Address: 0x1e0000 - 0x1e0040
void sub_001E0000_0x1e0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0000_0x1e0000");
#endif

    switch (ctx->pc) {
        case 0x1e0024u: goto label_1e0024;
        case 0x1e0030u: goto label_1e0030;
        default: break;
    }

    ctx->pc = 0x1e0000u;

    // 0x1e0000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0004: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e0004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e0008: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0008u;
    {
        const bool branch_taken_0x1e0008 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0008u;
        // 0x1e000c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0008) {
            ctx->pc = 0x1E0030u;
            goto label_1e0030;
        }
    }
    ctx->pc = 0x1E0010u;
    // 0x1e0010: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0010u;
    {
        const bool branch_taken_0x1e0010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0010u;
        // 0x1e0014: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0010) {
            ctx->pc = 0x1E0034u;
            goto label_1e0034;
        }
    }
    ctx->pc = 0x1E0018u;
    // 0x1e0018: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1e0018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1e001c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E001Cu;
    SET_GPR_U32(ctx, 31, 0x1E0024u);
    ctx->pc = 0x1E0020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E001Cu;
    // 0x1e0020: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E001Cu, 0x1E0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0024u;
label_1e0024:
    // 0x1e0024: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1e0024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1e0028: 0xc07a804  jal         func_1EA010
    ctx->pc = 0x1E0028u;
    SET_GPR_U32(ctx, 31, 0x1E0030u);
    ctx->pc = 0x1E002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0028u;
    // 0x1e002c: 0x248400d0  addiu       $a0, $a0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA010u, 0x1E0028u, 0x1E0030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0030u;
label_1e0030:
    // 0x1e0030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0034:
    // 0x1e0034: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0034u;
        // 0x1e0038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E003Cu;
    // 0x1e003c: 0x0  nop
    ctx->pc = 0x1e003cu;
    // NOP
    ctx->pc = 0x1e0040u;
}
