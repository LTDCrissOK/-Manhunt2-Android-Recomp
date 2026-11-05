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

// Function: sub_003D7FB0
// Address: 0x3d7fb0 - 0x3d8368
void sub_003D7FB0_0x3d7fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7FB0_0x3d7fb0");
#endif

    ctx->pc = 0x3d7fb0u;

    // 0x3d7fb0: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d7fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d7fb4: 0x8c82fb98  lw          $v0, -0x468($a0)
    ctx->pc = 0x3d7fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FB98u));
    // 0x3d7fb8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D7FB8u;
    {
        const bool branch_taken_0x3d7fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FB8u;
        // 0x3d7fbc: 0x2485fb98  addiu       $a1, $a0, -0x468 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7fb8) {
            ctx->pc = 0x3D7FDCu;
            goto label_3d7fdc;
        }
    }
    ctx->pc = 0x3D7FC0u;
    // 0x3d7fc0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D7FC0u;
    {
        const bool branch_taken_0x3d7fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FC0u;
        // 0x3d7fc4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7fc0) {
            ctx->pc = 0x3D7FDCu;
            goto label_3d7fdc;
        }
    }
    ctx->pc = 0x3D7FC8u;
    // 0x3d7fc8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d7fcc: 0x246326e0  addiu       $v1, $v1, 0x26E0
    ctx->pc = 0x3d7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9952));
    // 0x3d7fd0: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d7fd4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d7fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d7fd8: 0xac83fb98  sw          $v1, -0x468($a0)
    ctx->pc = 0x3d7fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966168), GPR_U32(ctx, 3));
label_3d7fdc:
    // 0x3d7fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FDCu;
        // 0x3d7fe0: 0x2482fb98  addiu       $v0, $a0, -0x468 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7FE4u;
    // 0x3d7fe4: 0x0  nop
    ctx->pc = 0x3d7fe4u;
    // NOP
    // 0x3d7fe8: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d7fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d7fec: 0x8c82fba0  lw          $v0, -0x460($a0)
    ctx->pc = 0x3d7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FBA0u));
    // 0x3d7ff0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D7FF0u;
    {
        const bool branch_taken_0x3d7ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FF0u;
        // 0x3d7ff4: 0x2485fba0  addiu       $a1, $a0, -0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ff0) {
            ctx->pc = 0x3D8014u;
            goto label_3d8014;
        }
    }
    ctx->pc = 0x3D7FF8u;
    // 0x3d7ff8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D7FF8u;
    {
        const bool branch_taken_0x3d7ff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FF8u;
        // 0x3d7ffc: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ff8) {
            ctx->pc = 0x3D8014u;
            goto label_3d8014;
        }
    }
    ctx->pc = 0x3D8000u;
    // 0x3d8000: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d8000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d8004: 0x246326e8  addiu       $v1, $v1, 0x26E8
    ctx->pc = 0x3d8004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9960));
    // 0x3d8008: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d8008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d800c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d800cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d8010: 0xac83fba0  sw          $v1, -0x460($a0)
    ctx->pc = 0x3d8010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966176), GPR_U32(ctx, 3));
label_3d8014:
    // 0x3d8014: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8014u;
        // 0x3d8018: 0x2482fba0  addiu       $v0, $a0, -0x460 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D801Cu;
    // 0x3d801c: 0x0  nop
    ctx->pc = 0x3d801cu;
    // NOP
    // 0x3d8020: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d8020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d8024: 0x8c82fba8  lw          $v0, -0x458($a0)
    ctx->pc = 0x3d8024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FBA8u));
    // 0x3d8028: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8028u;
    {
        const bool branch_taken_0x3d8028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8028u;
        // 0x3d802c: 0x2485fba8  addiu       $a1, $a0, -0x458 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8028) {
            ctx->pc = 0x3D804Cu;
            goto label_3d804c;
        }
    }
    ctx->pc = 0x3D8030u;
    // 0x3d8030: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8030u;
    {
        const bool branch_taken_0x3d8030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8030u;
        // 0x3d8034: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8030) {
            ctx->pc = 0x3D804Cu;
            goto label_3d804c;
        }
    }
    ctx->pc = 0x3D8038u;
    // 0x3d8038: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d8038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d803c: 0x246326f0  addiu       $v1, $v1, 0x26F0
    ctx->pc = 0x3d803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9968));
    // 0x3d8040: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d8040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d8044: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d8044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d8048: 0xac83fba8  sw          $v1, -0x458($a0)
    ctx->pc = 0x3d8048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966184), GPR_U32(ctx, 3));
label_3d804c:
    // 0x3d804c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D804Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D804Cu;
        // 0x3d8050: 0x2482fba8  addiu       $v0, $a0, -0x458 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D804Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8054u;
    // 0x3d8054: 0x0  nop
    ctx->pc = 0x3d8054u;
    // NOP
    // 0x3d8058: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d8058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d805c: 0x8c82fbb0  lw          $v0, -0x450($a0)
    ctx->pc = 0x3d805cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FBB0u));
    // 0x3d8060: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8060u;
    {
        const bool branch_taken_0x3d8060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8060u;
        // 0x3d8064: 0x2485fbb0  addiu       $a1, $a0, -0x450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8060) {
            ctx->pc = 0x3D8084u;
            goto label_3d8084;
        }
    }
    ctx->pc = 0x3D8068u;
    // 0x3d8068: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8068u;
    {
        const bool branch_taken_0x3d8068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8068u;
        // 0x3d806c: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8068) {
            ctx->pc = 0x3D8084u;
            goto label_3d8084;
        }
    }
    ctx->pc = 0x3D8070u;
    // 0x3d8070: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d8070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d8074: 0x246326f8  addiu       $v1, $v1, 0x26F8
    ctx->pc = 0x3d8074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9976));
    // 0x3d8078: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d8078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d807c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d807cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d8080: 0xac83fbb0  sw          $v1, -0x450($a0)
    ctx->pc = 0x3d8080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966192), GPR_U32(ctx, 3));
label_3d8084:
    // 0x3d8084: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8084u;
        // 0x3d8088: 0x2482fbb0  addiu       $v0, $a0, -0x450 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D808Cu;
    // 0x3d808c: 0x0  nop
    ctx->pc = 0x3d808cu;
    // NOP
    // 0x3d8090: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d8090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d8094: 0x8c82fbb8  lw          $v0, -0x448($a0)
    ctx->pc = 0x3d8094u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FBB8u));
    // 0x3d8098: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8098u;
    {
        const bool branch_taken_0x3d8098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8098u;
        // 0x3d809c: 0x2485fbb8  addiu       $a1, $a0, -0x448 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8098) {
            ctx->pc = 0x3D80BCu;
            goto label_3d80bc;
        }
    }
    ctx->pc = 0x3D80A0u;
    // 0x3d80a0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D80A0u;
    {
        const bool branch_taken_0x3d80a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80A0u;
        // 0x3d80a4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d80a0) {
            ctx->pc = 0x3D80BCu;
            goto label_3d80bc;
        }
    }
    ctx->pc = 0x3D80A8u;
    // 0x3d80a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d80ac: 0x24632700  addiu       $v1, $v1, 0x2700
    ctx->pc = 0x3d80acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9984));
    // 0x3d80b0: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d80b4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d80b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d80b8: 0xac83fbb8  sw          $v1, -0x448($a0)
    ctx->pc = 0x3d80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966200), GPR_U32(ctx, 3));
label_3d80bc:
    // 0x3d80bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D80BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80BCu;
        // 0x3d80c0: 0x2482fbb8  addiu       $v0, $a0, -0x448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D80BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D80C4u;
    // 0x3d80c4: 0x0  nop
    ctx->pc = 0x3d80c4u;
    // NOP
    // 0x3d80c8: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d80c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d80cc: 0x8c82fbc0  lw          $v0, -0x440($a0)
    ctx->pc = 0x3d80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FBC0u));
    // 0x3d80d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D80D0u;
    {
        const bool branch_taken_0x3d80d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80D0u;
        // 0x3d80d4: 0x2485fbc0  addiu       $a1, $a0, -0x440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d80d0) {
            ctx->pc = 0x3D80F4u;
            goto label_3d80f4;
        }
    }
    ctx->pc = 0x3D80D8u;
    // 0x3d80d8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D80D8u;
    {
        const bool branch_taken_0x3d80d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80D8u;
        // 0x3d80dc: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d80d8) {
            ctx->pc = 0x3D80F4u;
            goto label_3d80f4;
        }
    }
    ctx->pc = 0x3D80E0u;
    // 0x3d80e0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d80e4: 0x24632708  addiu       $v1, $v1, 0x2708
    ctx->pc = 0x3d80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9992));
    // 0x3d80e8: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d80ec: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d80ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d80f0: 0xac83fbc0  sw          $v1, -0x440($a0)
    ctx->pc = 0x3d80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966208), GPR_U32(ctx, 3));
label_3d80f4:
    // 0x3d80f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D80F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D80F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80F4u;
        // 0x3d80f8: 0x2482fbc0  addiu       $v0, $a0, -0x440 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D80F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D80FCu;
    // 0x3d80fc: 0x0  nop
    ctx->pc = 0x3d80fcu;
    // NOP
    // 0x3d8100: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d8100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d8104: 0x8c82fbc8  lw          $v0, -0x438($a0)
    ctx->pc = 0x3d8104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FBC8u));
    // 0x3d8108: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8108u;
    {
        const bool branch_taken_0x3d8108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8108u;
        // 0x3d810c: 0x2485fbc8  addiu       $a1, $a0, -0x438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8108) {
            ctx->pc = 0x3D812Cu;
            goto label_3d812c;
        }
    }
    ctx->pc = 0x3D8110u;
    // 0x3d8110: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8110u;
    {
        const bool branch_taken_0x3d8110 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8110u;
        // 0x3d8114: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8110) {
            ctx->pc = 0x3D812Cu;
            goto label_3d812c;
        }
    }
    ctx->pc = 0x3D8118u;
    // 0x3d8118: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d8118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d811c: 0x24632710  addiu       $v1, $v1, 0x2710
    ctx->pc = 0x3d811cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
    // 0x3d8120: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d8120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d8124: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d8124u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d8128: 0xac83fbc8  sw          $v1, -0x438($a0)
    ctx->pc = 0x3d8128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966216), GPR_U32(ctx, 3));
label_3d812c:
    // 0x3d812c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D812Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D812Cu;
        // 0x3d8130: 0x2482fbc8  addiu       $v0, $a0, -0x438 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D812Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8134u;
    // 0x3d8134: 0x0  nop
    ctx->pc = 0x3d8134u;
    // NOP
    // 0x3d8138: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d8138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d813c: 0x8c82fbd0  lw          $v0, -0x430($a0)
    ctx->pc = 0x3d813cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FBD0u));
    // 0x3d8140: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8140u;
    {
        const bool branch_taken_0x3d8140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8140u;
        // 0x3d8144: 0x2485fbd0  addiu       $a1, $a0, -0x430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8140) {
            ctx->pc = 0x3D8164u;
            goto label_3d8164;
        }
    }
    ctx->pc = 0x3D8148u;
    // 0x3d8148: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8148u;
    {
        const bool branch_taken_0x3d8148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8148u;
        // 0x3d814c: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8148) {
            ctx->pc = 0x3D8164u;
            goto label_3d8164;
        }
    }
    ctx->pc = 0x3D8150u;
    // 0x3d8150: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d8150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d8154: 0x24632718  addiu       $v1, $v1, 0x2718
    ctx->pc = 0x3d8154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10008));
    // 0x3d8158: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d8158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d815c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d815cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d8160: 0xac83fbd0  sw          $v1, -0x430($a0)
    ctx->pc = 0x3d8160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966224), GPR_U32(ctx, 3));
label_3d8164:
    // 0x3d8164: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8164u;
        // 0x3d8168: 0x2482fbd0  addiu       $v0, $a0, -0x430 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D816Cu;
    // 0x3d816c: 0x0  nop
    ctx->pc = 0x3d816cu;
    // NOP
    // 0x3d8170: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d8170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d8174: 0x8c82fbd8  lw          $v0, -0x428($a0)
    ctx->pc = 0x3d8174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FBD8u));
    // 0x3d8178: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8178u;
    {
        const bool branch_taken_0x3d8178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8178u;
        // 0x3d817c: 0x2485fbd8  addiu       $a1, $a0, -0x428 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8178) {
            ctx->pc = 0x3D819Cu;
            goto label_3d819c;
        }
    }
    ctx->pc = 0x3D8180u;
    // 0x3d8180: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8180u;
    {
        const bool branch_taken_0x3d8180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8180u;
        // 0x3d8184: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8180) {
            ctx->pc = 0x3D819Cu;
            goto label_3d819c;
        }
    }
    ctx->pc = 0x3D8188u;
    // 0x3d8188: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d8188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d818c: 0x24632720  addiu       $v1, $v1, 0x2720
    ctx->pc = 0x3d818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10016));
    // 0x3d8190: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d8190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d8194: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d8194u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d8198: 0xac83fbd8  sw          $v1, -0x428($a0)
    ctx->pc = 0x3d8198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966232), GPR_U32(ctx, 3));
label_3d819c:
    // 0x3d819c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D819Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D819Cu;
        // 0x3d81a0: 0x2482fbd8  addiu       $v0, $a0, -0x428 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D819Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D81A4u;
    // 0x3d81a4: 0x0  nop
    ctx->pc = 0x3d81a4u;
    // NOP
    // 0x3d81a8: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d81ac: 0x8c82fbe0  lw          $v0, -0x420($a0)
    ctx->pc = 0x3d81acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FBE0u));
    // 0x3d81b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D81B0u;
    {
        const bool branch_taken_0x3d81b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81B0u;
        // 0x3d81b4: 0x2485fbe0  addiu       $a1, $a0, -0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d81b0) {
            ctx->pc = 0x3D81D4u;
            goto label_3d81d4;
        }
    }
    ctx->pc = 0x3D81B8u;
    // 0x3d81b8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D81B8u;
    {
        const bool branch_taken_0x3d81b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81B8u;
        // 0x3d81bc: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d81b8) {
            ctx->pc = 0x3D81D4u;
            goto label_3d81d4;
        }
    }
    ctx->pc = 0x3D81C0u;
    // 0x3d81c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d81c4: 0x24632728  addiu       $v1, $v1, 0x2728
    ctx->pc = 0x3d81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10024));
    // 0x3d81c8: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d81c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d81cc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d81ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d81d0: 0xac83fbe0  sw          $v1, -0x420($a0)
    ctx->pc = 0x3d81d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966240), GPR_U32(ctx, 3));
label_3d81d4:
    // 0x3d81d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D81D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81D4u;
        // 0x3d81d8: 0x2482fbe0  addiu       $v0, $a0, -0x420 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D81D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D81DCu;
    // 0x3d81dc: 0x0  nop
    ctx->pc = 0x3d81dcu;
    // NOP
    // 0x3d81e0: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d81e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d81e4: 0x8c82fbe8  lw          $v0, -0x418($a0)
    ctx->pc = 0x3d81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FBE8u));
    // 0x3d81e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D81E8u;
    {
        const bool branch_taken_0x3d81e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81E8u;
        // 0x3d81ec: 0x2485fbe8  addiu       $a1, $a0, -0x418 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d81e8) {
            ctx->pc = 0x3D820Cu;
            goto label_3d820c;
        }
    }
    ctx->pc = 0x3D81F0u;
    // 0x3d81f0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D81F0u;
    {
        const bool branch_taken_0x3d81f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81F0u;
        // 0x3d81f4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d81f0) {
            ctx->pc = 0x3D820Cu;
            goto label_3d820c;
        }
    }
    ctx->pc = 0x3D81F8u;
    // 0x3d81f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d81fc: 0x24632730  addiu       $v1, $v1, 0x2730
    ctx->pc = 0x3d81fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x3d8200: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d8200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d8204: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d8204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d8208: 0xac83fbe8  sw          $v1, -0x418($a0)
    ctx->pc = 0x3d8208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966248), GPR_U32(ctx, 3));
label_3d820c:
    // 0x3d820c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D820Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D820Cu;
        // 0x3d8210: 0x2482fbe8  addiu       $v0, $a0, -0x418 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D820Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8214u;
    // 0x3d8214: 0x0  nop
    ctx->pc = 0x3d8214u;
    // NOP
    // 0x3d8218: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d8218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d821c: 0x8c82fbf0  lw          $v0, -0x410($a0)
    ctx->pc = 0x3d821cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FBF0u));
    // 0x3d8220: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8220u;
    {
        const bool branch_taken_0x3d8220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8220u;
        // 0x3d8224: 0x2485fbf0  addiu       $a1, $a0, -0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8220) {
            ctx->pc = 0x3D8244u;
            goto label_3d8244;
        }
    }
    ctx->pc = 0x3D8228u;
    // 0x3d8228: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8228u;
    {
        const bool branch_taken_0x3d8228 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8228u;
        // 0x3d822c: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8228) {
            ctx->pc = 0x3D8244u;
            goto label_3d8244;
        }
    }
    ctx->pc = 0x3D8230u;
    // 0x3d8230: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d8230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d8234: 0x24632738  addiu       $v1, $v1, 0x2738
    ctx->pc = 0x3d8234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10040));
    // 0x3d8238: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d8238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d823c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d823cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d8240: 0xac83fbf0  sw          $v1, -0x410($a0)
    ctx->pc = 0x3d8240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966256), GPR_U32(ctx, 3));
label_3d8244:
    // 0x3d8244: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8244u;
        // 0x3d8248: 0x2482fbf0  addiu       $v0, $a0, -0x410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D824Cu;
    // 0x3d824c: 0x0  nop
    ctx->pc = 0x3d824cu;
    // NOP
    // 0x3d8250: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d8250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d8254: 0x8c82fbf8  lw          $v0, -0x408($a0)
    ctx->pc = 0x3d8254u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FBF8u));
    // 0x3d8258: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8258u;
    {
        const bool branch_taken_0x3d8258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8258u;
        // 0x3d825c: 0x2485fbf8  addiu       $a1, $a0, -0x408 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8258) {
            ctx->pc = 0x3D827Cu;
            goto label_3d827c;
        }
    }
    ctx->pc = 0x3D8260u;
    // 0x3d8260: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8260u;
    {
        const bool branch_taken_0x3d8260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8260u;
        // 0x3d8264: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8260) {
            ctx->pc = 0x3D827Cu;
            goto label_3d827c;
        }
    }
    ctx->pc = 0x3D8268u;
    // 0x3d8268: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d8268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d826c: 0x24632740  addiu       $v1, $v1, 0x2740
    ctx->pc = 0x3d826cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10048));
    // 0x3d8270: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d8270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d8274: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d8274u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d8278: 0xac83fbf8  sw          $v1, -0x408($a0)
    ctx->pc = 0x3d8278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966264), GPR_U32(ctx, 3));
label_3d827c:
    // 0x3d827c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D827Cu;
        // 0x3d8280: 0x2482fbf8  addiu       $v0, $a0, -0x408 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D827Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8284u;
    // 0x3d8284: 0x0  nop
    ctx->pc = 0x3d8284u;
    // NOP
    // 0x3d8288: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d8288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d828c: 0x8c82fc00  lw          $v0, -0x400($a0)
    ctx->pc = 0x3d828cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FC00u));
    // 0x3d8290: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8290u;
    {
        const bool branch_taken_0x3d8290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8290u;
        // 0x3d8294: 0x2485fc00  addiu       $a1, $a0, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8290) {
            ctx->pc = 0x3D82B4u;
            goto label_3d82b4;
        }
    }
    ctx->pc = 0x3D8298u;
    // 0x3d8298: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8298u;
    {
        const bool branch_taken_0x3d8298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8298u;
        // 0x3d829c: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8298) {
            ctx->pc = 0x3D82B4u;
            goto label_3d82b4;
        }
    }
    ctx->pc = 0x3D82A0u;
    // 0x3d82a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d82a4: 0x24632748  addiu       $v1, $v1, 0x2748
    ctx->pc = 0x3d82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10056));
    // 0x3d82a8: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d82ac: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d82acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d82b0: 0xac83fc00  sw          $v1, -0x400($a0)
    ctx->pc = 0x3d82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966272), GPR_U32(ctx, 3));
label_3d82b4:
    // 0x3d82b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D82B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82B4u;
        // 0x3d82b8: 0x2482fc00  addiu       $v0, $a0, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D82B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D82BCu;
    // 0x3d82bc: 0x0  nop
    ctx->pc = 0x3d82bcu;
    // NOP
    // 0x3d82c0: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d82c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d82c4: 0x8c82fc08  lw          $v0, -0x3F8($a0)
    ctx->pc = 0x3d82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FC08u));
    // 0x3d82c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D82C8u;
    {
        const bool branch_taken_0x3d82c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82C8u;
        // 0x3d82cc: 0x2485fc08  addiu       $a1, $a0, -0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d82c8) {
            ctx->pc = 0x3D82ECu;
            goto label_3d82ec;
        }
    }
    ctx->pc = 0x3D82D0u;
    // 0x3d82d0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D82D0u;
    {
        const bool branch_taken_0x3d82d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82D0u;
        // 0x3d82d4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d82d0) {
            ctx->pc = 0x3D82ECu;
            goto label_3d82ec;
        }
    }
    ctx->pc = 0x3D82D8u;
    // 0x3d82d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d82dc: 0x24632750  addiu       $v1, $v1, 0x2750
    ctx->pc = 0x3d82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10064));
    // 0x3d82e0: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d82e4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d82e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d82e8: 0xac83fc08  sw          $v1, -0x3F8($a0)
    ctx->pc = 0x3d82e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966280), GPR_U32(ctx, 3));
label_3d82ec:
    // 0x3d82ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3D82ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82ECu;
        // 0x3d82f0: 0x2482fc08  addiu       $v0, $a0, -0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D82ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D82F4u;
    // 0x3d82f4: 0x0  nop
    ctx->pc = 0x3d82f4u;
    // NOP
    // 0x3d82f8: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d82f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d82fc: 0x8c82fc10  lw          $v0, -0x3F0($a0)
    ctx->pc = 0x3d82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FC10u));
    // 0x3d8300: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8300u;
    {
        const bool branch_taken_0x3d8300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8300u;
        // 0x3d8304: 0x2485fc10  addiu       $a1, $a0, -0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8300) {
            ctx->pc = 0x3D8324u;
            goto label_3d8324;
        }
    }
    ctx->pc = 0x3D8308u;
    // 0x3d8308: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8308u;
    {
        const bool branch_taken_0x3d8308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8308u;
        // 0x3d830c: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8308) {
            ctx->pc = 0x3D8324u;
            goto label_3d8324;
        }
    }
    ctx->pc = 0x3D8310u;
    // 0x3d8310: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d8310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d8314: 0x24632758  addiu       $v1, $v1, 0x2758
    ctx->pc = 0x3d8314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10072));
    // 0x3d8318: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d8318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d831c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d831cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d8320: 0xac83fc10  sw          $v1, -0x3F0($a0)
    ctx->pc = 0x3d8320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966288), GPR_U32(ctx, 3));
label_3d8324:
    // 0x3d8324: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8324u;
        // 0x3d8328: 0x2482fc10  addiu       $v0, $a0, -0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D832Cu;
    // 0x3d832c: 0x0  nop
    ctx->pc = 0x3d832cu;
    // NOP
    // 0x3d8330: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d8330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d8334: 0x8c82fc18  lw          $v0, -0x3E8($a0)
    ctx->pc = 0x3d8334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42FC18u));
    // 0x3d8338: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8338u;
    {
        const bool branch_taken_0x3d8338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8338u;
        // 0x3d833c: 0x2485fc18  addiu       $a1, $a0, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8338) {
            ctx->pc = 0x3D835Cu;
            goto label_3d835c;
        }
    }
    ctx->pc = 0x3D8340u;
    // 0x3d8340: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8340u;
    {
        const bool branch_taken_0x3d8340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8340u;
        // 0x3d8344: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8340) {
            ctx->pc = 0x3D835Cu;
            goto label_3d835c;
        }
    }
    ctx->pc = 0x3D8348u;
    // 0x3d8348: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d8348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d834c: 0x24632760  addiu       $v1, $v1, 0x2760
    ctx->pc = 0x3d834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10080));
    // 0x3d8350: 0x244227a8  addiu       $v0, $v0, 0x27A8
    ctx->pc = 0x3d8350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3d8354: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d8354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d8358: 0xac83fc18  sw          $v1, -0x3E8($a0)
    ctx->pc = 0x3d8358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966296), GPR_U32(ctx, 3));
label_3d835c:
    // 0x3d835c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D835Cu;
        // 0x3d8360: 0x2482fc18  addiu       $v0, $a0, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D835Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8364u;
    // 0x3d8364: 0x0  nop
    ctx->pc = 0x3d8364u;
    // NOP
    ctx->pc = 0x3d8368u;
}
