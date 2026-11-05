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

// Function: sub_0025D390
// Address: 0x25d390 - 0x25d3c8
void sub_0025D390_0x25d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D390_0x25d390");
#endif

    switch (ctx->pc) {
        case 0x25d3a4u: goto label_25d3a4;
        default: break;
    }

    ctx->pc = 0x25d390u;

    // 0x25d390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25d394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d398: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25d398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25d39c: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x25D39Cu;
    SET_GPR_U32(ctx, 31, 0x25D3A4u);
    ctx->pc = 0x25D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D39Cu;
    // 0x25d3a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x25D39Cu, 0x25D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3A4u;
label_25d3a4:
    // 0x25d3a4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x25d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x25d3a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25d3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3ac: 0x246322d0  addiu       $v1, $v1, 0x22D0
    ctx->pc = 0x25d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8912));
    // 0x25d3b0: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x25d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x25d3b4: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x25d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x25d3b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25d3b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d3bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25d3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25d3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x25D3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3C0u;
        // 0x25d3c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D3C8u;
}
