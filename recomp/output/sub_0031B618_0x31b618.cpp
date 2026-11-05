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

// Function: sub_0031B618
// Address: 0x31b618 - 0x31b650
void sub_0031B618_0x31b618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B618_0x31b618");
#endif

    switch (ctx->pc) {
        case 0x31b62cu: goto label_31b62c;
        case 0x31b634u: goto label_31b634;
        case 0x31b63cu: goto label_31b63c;
        default: break;
    }

    ctx->pc = 0x31b618u;

    // 0x31b618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31b618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31b61c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b620: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31b620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31b624: 0xc0c6d72  jal         func_31B5C8
    ctx->pc = 0x31B624u;
    SET_GPR_U32(ctx, 31, 0x31B62Cu);
    ctx->pc = 0x31B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B624u;
    // 0x31b628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B5C8u, 0x31B624u, 0x31B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B62Cu;
label_31b62c:
    // 0x31b62c: 0xc0c6d70  jal         func_31B5C0
    ctx->pc = 0x31B62Cu;
    SET_GPR_U32(ctx, 31, 0x31B634u);
    ctx->pc = 0x31B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B62Cu;
    // 0x31b630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B5C0u, 0x31B62Cu, 0x31B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B634u;
label_31b634:
    // 0x31b634: 0xc0c6d3c  jal         func_31B4F0
    ctx->pc = 0x31B634u;
    SET_GPR_U32(ctx, 31, 0x31B63Cu);
    ctx->pc = 0x31B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B634u;
    // 0x31b638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B4F0u, 0x31B634u, 0x31B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B63Cu;
label_31b63c:
    // 0x31b63c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b640: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31b640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b644: 0x3e00008  jr          $ra
    ctx->pc = 0x31B644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B644u;
        // 0x31b648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B64Cu;
    // 0x31b64c: 0x0  nop
    ctx->pc = 0x31b64cu;
    // NOP
    ctx->pc = 0x31b650u;
}
