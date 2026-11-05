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

// Function: sub_0013F2A0
// Address: 0x13f2a0 - 0x13f2e8
void sub_0013F2A0_0x13f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F2A0_0x13f2a0");
#endif

    switch (ctx->pc) {
        case 0x13f2c4u: goto label_13f2c4;
        case 0x13f2d4u: goto label_13f2d4;
        default: break;
    }

    ctx->pc = 0x13f2a0u;

    // 0x13f2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f2a4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x13f2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13f2a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f2ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13f2b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2b4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x13f2b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13f2b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13f2bc: 0xc04fe52  jal         func_13F948
    ctx->pc = 0x13F2BCu;
    SET_GPR_U32(ctx, 31, 0x13F2C4u);
    ctx->pc = 0x13F2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F2BCu;
    // 0x13f2c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F948u, 0x13F2BCu, 0x13F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F2C4u;
label_13f2c4:
    // 0x13f2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13f2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2cc: 0xc04d88a  jal         func_136228
    ctx->pc = 0x13F2CCu;
    SET_GPR_U32(ctx, 31, 0x13F2D4u);
    ctx->pc = 0x13F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F2CCu;
    // 0x13f2d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x13F2CCu, 0x13F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F2D4u;
label_13f2d4:
    // 0x13f2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f2d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f2d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f2dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2E0u;
        // 0x13f2e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F2E8u;
}
