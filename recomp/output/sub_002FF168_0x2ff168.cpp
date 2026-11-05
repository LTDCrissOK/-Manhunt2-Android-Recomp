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

// Function: sub_002FF168
// Address: 0x2ff168 - 0x2ff1b0
void sub_002FF168_0x2ff168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF168_0x2ff168");
#endif

    switch (ctx->pc) {
        case 0x2ff17cu: goto label_2ff17c;
        case 0x2ff198u: goto label_2ff198;
        default: break;
    }

    ctx->pc = 0x2ff168u;

    // 0x2ff168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff16c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff170: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ff170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ff174: 0xc09c686  jal         func_271A18
    ctx->pc = 0x2FF174u;
    SET_GPR_U32(ctx, 31, 0x2FF17Cu);
    ctx->pc = 0x2FF178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF174u;
    // 0x2ff178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A18u, 0x2FF174u, 0x2FF17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF17Cu;
label_2ff17c:
    // 0x2ff17c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2ff17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2ff180: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ff180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff184: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x2ff184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x2ff188: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x2ff188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x2ff18c: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x2ff18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x2ff190: 0xc0bfd1c  jal         func_2FF470
    ctx->pc = 0x2FF190u;
    SET_GPR_U32(ctx, 31, 0x2FF198u);
    ctx->pc = 0x2FF194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF190u;
    // 0x2ff194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF470u, 0x2FF190u, 0x2FF198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF198u;
label_2ff198:
    // 0x2ff198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ff198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff19c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ff19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff1a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1A4u;
        // 0x2ff1a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF1ACu;
    // 0x2ff1ac: 0x0  nop
    ctx->pc = 0x2ff1acu;
    // NOP
    ctx->pc = 0x2ff1b0u;
}
