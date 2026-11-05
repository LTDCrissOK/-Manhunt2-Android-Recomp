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

// Function: sub_00112638
// Address: 0x112638 - 0x112678
void sub_00112638_0x112638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112638_0x112638");
#endif

    switch (ctx->pc) {
        case 0x112654u: goto label_112654;
        case 0x112664u: goto label_112664;
        default: break;
    }

    ctx->pc = 0x112638u;

    // 0x112638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11263c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11263cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112644: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112648: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x112648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x11264c: 0xc041e84  jal         func_107A10
    ctx->pc = 0x11264Cu;
    SET_GPR_U32(ctx, 31, 0x112654u);
    ctx->pc = 0x112650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11264Cu;
    // 0x112650: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A10u, 0x11264Cu, 0x112654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112654u;
label_112654:
    // 0x112654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112658: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x112658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x11265c: 0xc05fbfc  jal         func_17EFF0
    ctx->pc = 0x11265Cu;
    SET_GPR_U32(ctx, 31, 0x112664u);
    ctx->pc = 0x112660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11265Cu;
    // 0x112660: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EFF0u, 0x11265Cu, 0x112664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112664u;
label_112664:
    // 0x112664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112668: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11266c: 0x3e00008  jr          $ra
    ctx->pc = 0x11266Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11266Cu;
        // 0x112670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11266Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112674u;
    // 0x112674: 0x0  nop
    ctx->pc = 0x112674u;
    // NOP
    ctx->pc = 0x112678u;
}
