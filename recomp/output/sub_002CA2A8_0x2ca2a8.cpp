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

// Function: sub_002CA2A8
// Address: 0x2ca2a8 - 0x2ca310
void sub_002CA2A8_0x2ca2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA2A8_0x2ca2a8");
#endif

    switch (ctx->pc) {
        case 0x2ca2dcu: goto label_2ca2dc;
        default: break;
    }

    ctx->pc = 0x2ca2a8u;

    // 0x2ca2a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca2ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ca2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ca2b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca2b4: 0x8c62b448  lw          $v0, -0x4BB8($v1)
    ctx->pc = 0x2ca2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB448u));
    // 0x2ca2b8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2ca2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA2BCu;
    {
        const bool branch_taken_0x2ca2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2BCu;
        // 0x2ca2c0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca2bc) {
            ctx->pc = 0x2CA2DCu;
            goto label_2ca2dc;
        }
    }
    ctx->pc = 0x2CA2C4u;
    // 0x2ca2c4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2ca2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2ca2c8: 0x24448d58  addiu       $a0, $v0, -0x72A8
    ctx->pc = 0x2ca2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937944));
    // 0x2ca2cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA2CCu;
    {
        const bool branch_taken_0x2ca2cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2CCu;
        // 0x2ca2d0: 0xae04b448  sw          $a0, -0x4BB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294947912), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca2cc) {
            ctx->pc = 0x2CA2DCu;
            goto label_2ca2dc;
        }
    }
    ctx->pc = 0x2CA2D4u;
    // 0x2ca2d4: 0xc0b28a6  jal         func_2CA298
    ctx->pc = 0x2CA2D4u;
    SET_GPR_U32(ctx, 31, 0x2CA2DCu);
    ctx->pc = 0x2CA298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA298u, 0x2CA2D4u, 0x2CA2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA2DCu;
label_2ca2dc:
    // 0x2ca2dc: 0x8e02b448  lw          $v0, -0x4BB8($s0)
    ctx->pc = 0x2ca2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947912)));
    // 0x2ca2e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca2e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca2e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ca2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2E8u;
        // 0x2ca2ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA2F0u;
    // 0x2ca2f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ca2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ca2f4: 0x0  nop
    ctx->pc = 0x2ca2f4u;
    // NOP
    // 0x2ca2f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2ca2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ca2fc: 0x0  nop
    ctx->pc = 0x2ca2fcu;
    // NOP
    // 0x2ca300: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ca300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ca304: 0x0  nop
    ctx->pc = 0x2ca304u;
    // NOP
    // 0x2ca308: 0xa0820030  sb          $v0, 0x30($a0)
    ctx->pc = 0x2ca308u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ca30c: 0x0  nop
    ctx->pc = 0x2ca30cu;
    // NOP
    ctx->pc = 0x2ca310u;
}
