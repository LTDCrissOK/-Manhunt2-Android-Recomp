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

// Function: sub_0016E638
// Address: 0x16e638 - 0x16e670
void sub_0016E638_0x16e638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E638_0x16e638");
#endif

    switch (ctx->pc) {
        case 0x16e64cu: goto label_16e64c;
        case 0x16e654u: goto label_16e654;
        case 0x16e65cu: goto label_16e65c;
        default: break;
    }

    ctx->pc = 0x16e638u;

    // 0x16e638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e640: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e644: 0xc04f820  jal         func_13E080
    ctx->pc = 0x16E644u;
    SET_GPR_U32(ctx, 31, 0x16E64Cu);
    ctx->pc = 0x16E648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E644u;
    // 0x16e648: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x16E644u, 0x16E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E64Cu;
label_16e64c:
    // 0x16e64c: 0xc05b3da  jal         func_16CF68
    ctx->pc = 0x16E64Cu;
    SET_GPR_U32(ctx, 31, 0x16E654u);
    ctx->pc = 0x16E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E64Cu;
    // 0x16e650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF68u, 0x16E64Cu, 0x16E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E654u;
label_16e654:
    // 0x16e654: 0xc05ba08  jal         func_16E820
    ctx->pc = 0x16E654u;
    SET_GPR_U32(ctx, 31, 0x16E65Cu);
    ctx->pc = 0x16E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E654u;
    // 0x16e658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E820u, 0x16E654u, 0x16E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E65Cu;
label_16e65c:
    // 0x16e65c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e65cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e660: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e664: 0x3e00008  jr          $ra
    ctx->pc = 0x16E664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E664u;
        // 0x16e668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E66Cu;
    // 0x16e66c: 0x0  nop
    ctx->pc = 0x16e66cu;
    // NOP
    ctx->pc = 0x16e670u;
}
