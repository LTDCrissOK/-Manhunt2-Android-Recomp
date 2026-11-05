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

// Function: sub_00207490
// Address: 0x207490 - 0x2074d8
void sub_00207490_0x207490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207490_0x207490");
#endif

    switch (ctx->pc) {
        case 0x2074b4u: goto label_2074b4;
        case 0x2074bcu: goto label_2074bc;
        default: break;
    }

    ctx->pc = 0x207490u;

    // 0x207490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207498: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x207498u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x20749c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2074a0: 0x8e0293cc  lw          $v0, -0x6C34($s0)
    ctx->pc = 0x2074a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F93CCu));
    // 0x2074a4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2074A4u;
    {
        const bool branch_taken_0x2074a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2074a4) {
            ctx->pc = 0x2074A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2074A4u;
            // 0x2074a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2074C8u;
            goto label_2074c8;
        }
    }
    ctx->pc = 0x2074ACu;
    // 0x2074ac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2074ACu;
    SET_GPR_U32(ctx, 31, 0x2074B4u);
    ctx->pc = 0x2074B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074ACu;
    // 0x2074b0: 0x240433d0  addiu       $a0, $zero, 0x33D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2074ACu, 0x2074B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074B4u;
label_2074b4:
    // 0x2074b4: 0xc081d48  jal         func_207520
    ctx->pc = 0x2074B4u;
    SET_GPR_U32(ctx, 31, 0x2074BCu);
    ctx->pc = 0x2074B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074B4u;
    // 0x2074b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207520u, 0x2074B4u, 0x2074BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074BCu;
label_2074bc:
    // 0x2074bc: 0xae0293cc  sw          $v0, -0x6C34($s0)
    ctx->pc = 0x2074bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939596), GPR_U32(ctx, 2));
    // 0x2074c0: 0x8e0293cc  lw          $v0, -0x6C34($s0)
    ctx->pc = 0x2074c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939596)));
    // 0x2074c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2074c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2074c8:
    // 0x2074c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2074c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2074cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2074CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2074D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074CCu;
        // 0x2074d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2074CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2074D4u;
    // 0x2074d4: 0x0  nop
    ctx->pc = 0x2074d4u;
    // NOP
    ctx->pc = 0x2074d8u;
}
