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

// Function: sub_002A0468
// Address: 0x2a0468 - 0x2a04a0
void sub_002A0468_0x2a0468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0468_0x2a0468");
#endif

    switch (ctx->pc) {
        case 0x2a047cu: goto label_2a047c;
        default: break;
    }

    ctx->pc = 0x2a0468u;

    // 0x2a0468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a0468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a046c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a046cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a0470: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a0470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a0474: 0xc0a526c  jal         func_2949B0
    ctx->pc = 0x2A0474u;
    SET_GPR_U32(ctx, 31, 0x2A047Cu);
    ctx->pc = 0x2A0478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0474u;
    // 0x2a0478: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2949B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2949B0u, 0x2A0474u, 0x2A047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A047Cu;
label_2a047c:
    // 0x2a047c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2a047cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2a0480: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a0480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0484: 0x246334e8  addiu       $v1, $v1, 0x34E8
    ctx->pc = 0x2a0484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13544));
    // 0x2a0488: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a0488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a048c: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x2a048cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x2a0490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0494: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0494u;
        // 0x2a0498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A049Cu;
    // 0x2a049c: 0x0  nop
    ctx->pc = 0x2a049cu;
    // NOP
    ctx->pc = 0x2a04a0u;
}
