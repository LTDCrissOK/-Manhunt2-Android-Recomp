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

// Function: sub_00145080
// Address: 0x145080 - 0x1450c0
void sub_00145080_0x145080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145080_0x145080");
#endif

    switch (ctx->pc) {
        case 0x145094u: goto label_145094;
        case 0x1450acu: goto label_1450ac;
        default: break;
    }

    ctx->pc = 0x145080u;

    // 0x145080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145088: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x145088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14508c: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x14508Cu;
    SET_GPR_U32(ctx, 31, 0x145094u);
    ctx->pc = 0x145090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14508Cu;
    // 0x145090: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x14508Cu, 0x145094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145094u;
label_145094:
    // 0x145094: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x145094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x145098: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x145098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x14509c: 0x246308b8  addiu       $v1, $v1, 0x8B8
    ctx->pc = 0x14509cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2232));
    // 0x1450a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1450a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450a4: 0xc0514f0  jal         func_1453C0
    ctx->pc = 0x1450A4u;
    SET_GPR_U32(ctx, 31, 0x1450ACu);
    ctx->pc = 0x1450A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450A4u;
    // 0x1450a8: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1453C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1453C0u, 0x1450A4u, 0x1450ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450ACu;
label_1450ac:
    // 0x1450ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1450acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1450b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1450b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1450b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1450b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1450B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1450BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450B8u;
        // 0x1450bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1450B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1450C0u;
}
