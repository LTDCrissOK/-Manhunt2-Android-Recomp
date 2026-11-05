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

// Function: sub_002CC978
// Address: 0x2cc978 - 0x2cc9e0
void sub_002CC978_0x2cc978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC978_0x2cc978");
#endif

    switch (ctx->pc) {
        case 0x2cc9c8u: goto label_2cc9c8;
        default: break;
    }

    ctx->pc = 0x2cc978u;

    // 0x2cc978: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2cc978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2cc97c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2cc97cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2cc980: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2cc980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2cc984: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x2cc984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x2cc988: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2cc988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2cc98c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2cc98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2cc990: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2cc990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2cc994: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2cc994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2cc998: 0x7387a  dsrl        $a3, $a3, 1
    ctx->pc = 0x2cc998u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 1);
    // 0x2cc99c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2cc99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2cc9a0: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x2cc9a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x2cc9a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc9a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc9a8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2cc9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2cc9ac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2cc9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2cc9b0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2cc9b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2cc9b4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x2cc9b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x2cc9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc9bc: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x2cc9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2cc9c0: 0xc0e3d48  jal         func_38F520
    ctx->pc = 0x2CC9C0u;
    SET_GPR_U32(ctx, 31, 0x2CC9C8u);
    ctx->pc = 0x2CC9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC9C0u;
    // 0x2cc9c4: 0x2484a608  addiu       $a0, $a0, -0x59F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F520u, 0x2CC9C0u, 0x2CC9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9C8u;
label_2cc9c8:
    // 0x2cc9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9CCu;
        // 0x2cc9d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC9D4u;
    // 0x2cc9d4: 0x0  nop
    ctx->pc = 0x2cc9d4u;
    // NOP
    // 0x2cc9d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2cc9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cc9dc: 0x0  nop
    ctx->pc = 0x2cc9dcu;
    // NOP
    ctx->pc = 0x2cc9e0u;
}
