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

// Function: sub_001929A0
// Address: 0x1929a0 - 0x1929d0
void sub_001929A0_0x1929a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001929A0_0x1929a0");
#endif

    switch (ctx->pc) {
        case 0x1929c0u: goto label_1929c0;
        default: break;
    }

    ctx->pc = 0x1929a0u;

    // 0x1929a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1929a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1929a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1929a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1929a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1929ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1929acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929b0: 0xc44d0018  lwc1        $f13, 0x18($v0)
    ctx->pc = 0x1929b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1929b4: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x1929b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1929b8: 0xc0951c2  jal         func_254708
    ctx->pc = 0x1929B8u;
    SET_GPR_U32(ctx, 31, 0x1929C0u);
    ctx->pc = 0x1929BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929B8u;
    // 0x1929bc: 0xc44c0014  lwc1        $f12, 0x14($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x254708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254708u, 0x1929B8u, 0x1929C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1929C0u;
label_1929c0:
    // 0x1929c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1929c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1929c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1929C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1929C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929C4u;
        // 0x1929c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1929C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1929CCu;
    // 0x1929cc: 0x0  nop
    ctx->pc = 0x1929ccu;
    // NOP
    ctx->pc = 0x1929d0u;
}
