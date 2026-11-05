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

// Function: sub_003058E8
// Address: 0x3058e8 - 0x305930
void sub_003058E8_0x3058e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003058E8_0x3058e8");
#endif

    switch (ctx->pc) {
        case 0x3058fcu: goto label_3058fc;
        default: break;
    }

    ctx->pc = 0x3058e8u;

    // 0x3058e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3058e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3058ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3058ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3058f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3058f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3058f4: 0xc08ffe6  jal         func_23FF98
    ctx->pc = 0x3058F4u;
    SET_GPR_U32(ctx, 31, 0x3058FCu);
    ctx->pc = 0x3058F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3058F4u;
    // 0x3058f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FF98u, 0x3058F4u, 0x3058FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3058FCu;
label_3058fc:
    // 0x3058fc: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x3058fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x305900: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x305900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x305904: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x305904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x305908: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x305908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x30590c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30590cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305910: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x305910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x305914: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x305914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305918: 0xe6001298  swc1        $f0, 0x1298($s0)
    ctx->pc = 0x305918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4760), bits); }
    // 0x30591c: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x30591cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
    // 0x305920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x305920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305924: 0x3e00008  jr          $ra
    ctx->pc = 0x305924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305924u;
        // 0x305928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30592Cu;
    // 0x30592c: 0x0  nop
    ctx->pc = 0x30592cu;
    // NOP
    ctx->pc = 0x305930u;
}
