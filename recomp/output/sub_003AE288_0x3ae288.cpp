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

// Function: sub_003AE288
// Address: 0x3ae288 - 0x3ae330
void sub_003AE288_0x3ae288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE288_0x3ae288");
#endif

    switch (ctx->pc) {
        case 0x3ae298u: goto label_3ae298;
        case 0x3ae2b8u: goto label_3ae2b8;
        case 0x3ae2d8u: goto label_3ae2d8;
        case 0x3ae2f8u: goto label_3ae2f8;
        default: break;
    }

    ctx->pc = 0x3ae288u;

    // 0x3ae288: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3ae288u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3ae28c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3ae28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3ae290: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE290u;
        // 0x3ae294: 0x84a200e2  lh          $v0, 0xE2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 226)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE298u;
label_3ae298:
    // 0x3ae298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ae29c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ae29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ae2a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae2a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ae2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ae2a8: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x3ae2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x3ae2ac: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x3ae2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x3ae2b0: 0xc0ec3f2  jal         func_3B0FC8
    ctx->pc = 0x3AE2B0u;
    SET_GPR_U32(ctx, 31, 0x3AE2B8u);
    ctx->pc = 0x3AE2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE2B0u;
    // 0x3ae2b4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0FC8u, 0x3AE2B0u, 0x3AE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE2B8u;
label_3ae2b8:
    // 0x3ae2b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3ae2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ae2bc: 0x260700aa  addiu       $a3, $s0, 0xAA
    ctx->pc = 0x3ae2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 170));
    // 0x3ae2c0: 0x260500a6  addiu       $a1, $s0, 0xA6
    ctx->pc = 0x3ae2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 166));
    // 0x3ae2c4: 0x260600a8  addiu       $a2, $s0, 0xA8
    ctx->pc = 0x3ae2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x3ae2c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae2cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ae2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae2d0: 0x80ec400  j           func_3B1000
    ctx->pc = 0x3AE2D0u;
    ctx->pc = 0x3AE2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE2D0u;
    // 0x3ae2d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1000u, 0x3AE2D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE2D8u;
label_3ae2d8:
    // 0x3ae2d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ae2dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ae2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ae2e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae2e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ae2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ae2e8: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x3ae2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x3ae2ec: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x3ae2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x3ae2f0: 0xc0ec3e8  jal         func_3B0FA0
    ctx->pc = 0x3AE2F0u;
    SET_GPR_U32(ctx, 31, 0x3AE2F8u);
    ctx->pc = 0x3AE2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE2F0u;
    // 0x3ae2f4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0FA0u, 0x3AE2F0u, 0x3AE2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE2F8u;
label_3ae2f8:
    // 0x3ae2f8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3ae2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ae2fc: 0x860700aa  lh          $a3, 0xAA($s0)
    ctx->pc = 0x3ae2fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 170)));
    // 0x3ae300: 0x860500a6  lh          $a1, 0xA6($s0)
    ctx->pc = 0x3ae300u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 166)));
    // 0x3ae304: 0x860600a8  lh          $a2, 0xA8($s0)
    ctx->pc = 0x3ae304u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x3ae308: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ae308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae30c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae310: 0x80ec3fc  j           func_3B0FF0
    ctx->pc = 0x3AE310u;
    ctx->pc = 0x3AE314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE310u;
    // 0x3ae314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0FF0u;
    sub_003B0FF0_0x3b0ff0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AE318u;
    // 0x3ae318: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3ae318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3ae31c: 0x0  nop
    ctx->pc = 0x3ae31cu;
    // NOP
    // 0x3ae320: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ae320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ae324: 0x0  nop
    ctx->pc = 0x3ae324u;
    // NOP
    // 0x3ae328: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x3ae328u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ae32c: 0x0  nop
    ctx->pc = 0x3ae32cu;
    // NOP
    ctx->pc = 0x3ae330u;
}
