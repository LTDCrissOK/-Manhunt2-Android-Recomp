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

// Function: sub_0030CC08
// Address: 0x30cc08 - 0x30cc48
void sub_0030CC08_0x30cc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CC08_0x30cc08");
#endif

    switch (ctx->pc) {
        case 0x30cc34u: goto label_30cc34;
        default: break;
    }

    ctx->pc = 0x30cc08u;

    // 0x30cc08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30cc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30cc0c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x30cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x30cc10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x30cc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x30cc14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x30cc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x30cc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x30cc1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30cc1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x30cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x30cc24: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x30cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x30cc28: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x30cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x30cc2c: 0xc0c49a6  jal         func_312698
    ctx->pc = 0x30CC2Cu;
    SET_GPR_U32(ctx, 31, 0x30CC34u);
    ctx->pc = 0x30CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC2Cu;
    // 0x30cc30: 0x2445cb70  addiu       $a1, $v0, -0x3490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312698u, 0x30CC2Cu, 0x30CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC34u;
label_30cc34:
    // 0x30cc34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30cc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x30cc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cc3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30cc3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cc40: 0x3e00008  jr          $ra
    ctx->pc = 0x30CC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC40u;
        // 0x30cc44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CC48u;
}
