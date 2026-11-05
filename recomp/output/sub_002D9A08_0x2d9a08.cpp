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

// Function: sub_002D9A08
// Address: 0x2d9a08 - 0x2d9ad8
void sub_002D9A08_0x2d9a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9A08_0x2d9a08");
#endif

    switch (ctx->pc) {
        case 0x2d9a28u: goto label_2d9a28;
        case 0x2d9a44u: goto label_2d9a44;
        case 0x2d9a60u: goto label_2d9a60;
        case 0x2d9a7cu: goto label_2d9a7c;
        case 0x2d9a98u: goto label_2d9a98;
        case 0x2d9ab4u: goto label_2d9ab4;
        default: break;
    }

    ctx->pc = 0x2d9a08u;

    // 0x2d9a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9a0c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d9a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d9a10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d9a14: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x2d9a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
    // 0x2d9a18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d9a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d9a1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a20: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2D9A20u;
    SET_GPR_U32(ctx, 31, 0x2D9A28u);
    ctx->pc = 0x2D9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9A20u;
    // 0x2d9a24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2D9A20u, 0x2D9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A28u;
label_2d9a28:
    // 0x2d9a28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9a2c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D9A2Cu;
    {
        const bool branch_taken_0x2d9a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A2Cu;
        // 0x2d9a30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a2c) {
            ctx->pc = 0x2D9AC4u;
            goto label_2d9ac4;
        }
    }
    ctx->pc = 0x2D9A34u;
    // 0x2d9a34: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d9a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d9a38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9a3c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2D9A3Cu;
    SET_GPR_U32(ctx, 31, 0x2D9A44u);
    ctx->pc = 0x2D9A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9A3Cu;
    // 0x2d9a40: 0x24a51318  addiu       $a1, $a1, 0x1318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2D9A3Cu, 0x2D9A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A44u;
label_2d9a44:
    // 0x2d9a44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9a48: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D9A48u;
    {
        const bool branch_taken_0x2d9a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A48u;
        // 0x2d9a4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a48) {
            ctx->pc = 0x2D9AC4u;
            goto label_2d9ac4;
        }
    }
    ctx->pc = 0x2D9A50u;
    // 0x2d9a50: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d9a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d9a54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9a58: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2D9A58u;
    SET_GPR_U32(ctx, 31, 0x2D9A60u);
    ctx->pc = 0x2D9A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9A58u;
    // 0x2d9a5c: 0x24a51330  addiu       $a1, $a1, 0x1330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2D9A58u, 0x2D9A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A60u;
label_2d9a60:
    // 0x2d9a60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9a64: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D9A64u;
    {
        const bool branch_taken_0x2d9a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A64u;
        // 0x2d9a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a64) {
            ctx->pc = 0x2D9AC4u;
            goto label_2d9ac4;
        }
    }
    ctx->pc = 0x2D9A6Cu;
    // 0x2d9a6c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d9a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d9a70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9a74: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2D9A74u;
    SET_GPR_U32(ctx, 31, 0x2D9A7Cu);
    ctx->pc = 0x2D9A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9A74u;
    // 0x2d9a78: 0x24a51348  addiu       $a1, $a1, 0x1348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2D9A74u, 0x2D9A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A7Cu;
label_2d9a7c:
    // 0x2d9a7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9a80: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D9A80u;
    {
        const bool branch_taken_0x2d9a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A80u;
        // 0x2d9a84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a80) {
            ctx->pc = 0x2D9AC4u;
            goto label_2d9ac4;
        }
    }
    ctx->pc = 0x2D9A88u;
    // 0x2d9a88: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d9a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d9a8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9a90: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2D9A90u;
    SET_GPR_U32(ctx, 31, 0x2D9A98u);
    ctx->pc = 0x2D9A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9A90u;
    // 0x2d9a94: 0x24a51360  addiu       $a1, $a1, 0x1360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2D9A90u, 0x2D9A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A98u;
label_2d9a98:
    // 0x2d9a98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9a9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9A9Cu;
    {
        const bool branch_taken_0x2d9a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A9Cu;
        // 0x2d9aa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a9c) {
            ctx->pc = 0x2D9AC4u;
            goto label_2d9ac4;
        }
    }
    ctx->pc = 0x2D9AA4u;
    // 0x2d9aa4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9aa8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d9aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d9aac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2D9AACu;
    SET_GPR_U32(ctx, 31, 0x2D9AB4u);
    ctx->pc = 0x2D9AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9AACu;
    // 0x2d9ab0: 0x24a51378  addiu       $a1, $a1, 0x1378 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2D9AACu, 0x2D9AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AB4u;
label_2d9ab4:
    // 0x2d9ab4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9ab8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9AB8u;
    {
        const bool branch_taken_0x2d9ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9AB8u;
        // 0x2d9abc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ab8) {
            ctx->pc = 0x2D9AC4u;
            goto label_2d9ac4;
        }
    }
    ctx->pc = 0x2D9AC0u;
    // 0x2d9ac0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ac4:
    // 0x2d9ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9ac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d9ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d9acc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9ACCu;
        // 0x2d9ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9AD4u;
    // 0x2d9ad4: 0x0  nop
    ctx->pc = 0x2d9ad4u;
    // NOP
    ctx->pc = 0x2d9ad8u;
}
