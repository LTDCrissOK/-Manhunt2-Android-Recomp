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

// Function: sub_00104A48
// Address: 0x104a48 - 0x104b48
void sub_00104A48_0x104a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104A48_0x104a48");
#endif

    switch (ctx->pc) {
        case 0x104a90u: goto label_104a90;
        case 0x104ab0u: goto label_104ab0;
        case 0x104ab8u: goto label_104ab8;
        case 0x104ae4u: goto label_104ae4;
        case 0x104af8u: goto label_104af8;
        case 0x104b00u: goto label_104b00;
        case 0x104b2cu: goto label_104b2c;
        default: break;
    }

    ctx->pc = 0x104a48u;

    // 0x104a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104a4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104a50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104a54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104a5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x104a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x104a60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x104a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104a64: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x104a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x104a68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104A68u;
    {
        const bool branch_taken_0x104a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A68u;
        // 0x104a6c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a68) {
            ctx->pc = 0x104A90u;
            goto label_104a90;
        }
    }
    ctx->pc = 0x104A70u;
    // 0x104a70: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x104a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x104a74: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x104a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x104a78: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x104a78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
    // 0x104a7c: 0x24842440  addiu       $a0, $a0, 0x2440
    ctx->pc = 0x104a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9280));
    // 0x104a80: 0x24a5a4e0  addiu       $a1, $a1, -0x5B20
    ctx->pc = 0x104a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943968));
    // 0x104a84: 0x24e7a508  addiu       $a3, $a3, -0x5AF8
    ctx->pc = 0x104a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944008));
    // 0x104a88: 0xc0ab404  jal         func_2AD010
    ctx->pc = 0x104A88u;
    SET_GPR_U32(ctx, 31, 0x104A90u);
    ctx->pc = 0x104A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A88u;
    // 0x104a8c: 0x24060fa3  addiu       $a2, $zero, 0xFA3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4003));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD010u, 0x104A88u, 0x104A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A90u;
label_104a90:
    // 0x104a90: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x104a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x104a94: 0x32530001  andi        $s3, $s2, 0x1
    ctx->pc = 0x104a94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x104a98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x104a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104a9c: 0x26320034  addiu       $s2, $s1, 0x34
    ctx->pc = 0x104a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x104aa0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104AA0u;
    {
        const bool branch_taken_0x104aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AA0u;
        // 0x104aa4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104aa0) {
            ctx->pc = 0x104AC8u;
            goto label_104ac8;
        }
    }
    ctx->pc = 0x104AA8u;
    // 0x104aa8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x104aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104aac: 0x0  nop
    ctx->pc = 0x104aacu;
    // NOP
label_104ab0:
    // 0x104ab0: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x104AB0u;
    SET_GPR_U32(ctx, 31, 0x104AB8u);
    ctx->pc = 0x104AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104AB0u;
    // 0x104ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x104AB0u, 0x104AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AB8u;
label_104ab8:
    // 0x104ab8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x104ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104abc: 0x0  nop
    ctx->pc = 0x104abcu;
    // NOP
    // 0x104ac0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x104AC0u;
    {
        const bool branch_taken_0x104ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104ac0) {
            ctx->pc = 0x104AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104AC0u;
            // 0x104ac4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104ab0;
        }
    }
    ctx->pc = 0x104AC8u;
label_104ac8:
    // 0x104ac8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x104ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x104acc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x104accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ad0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x104ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x104ad4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x104ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104ad8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x104ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x104adc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x104ADCu;
    SET_GPR_U32(ctx, 31, 0x104AE4u);
    ctx->pc = 0x104AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104ADCu;
    // 0x104ae0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x104ADCu, 0x104AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AE4u;
label_104ae4:
    // 0x104ae4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x104ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104ae8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104AE8u;
    {
        const bool branch_taken_0x104ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AE8u;
        // 0x104aec: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ae8) {
            ctx->pc = 0x104B10u;
            goto label_104b10;
        }
    }
    ctx->pc = 0x104AF0u;
    // 0x104af0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x104af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104af4: 0x0  nop
    ctx->pc = 0x104af4u;
    // NOP
label_104af8:
    // 0x104af8: 0xc0f6a42  jal         func_3DA908
    ctx->pc = 0x104AF8u;
    SET_GPR_U32(ctx, 31, 0x104B00u);
    ctx->pc = 0x104AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104AF8u;
    // 0x104afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA908u, 0x104AF8u, 0x104B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B00u;
label_104b00:
    // 0x104b00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x104b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104b04: 0x0  nop
    ctx->pc = 0x104b04u;
    // NOP
    // 0x104b08: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x104B08u;
    {
        const bool branch_taken_0x104b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104b08) {
            ctx->pc = 0x104B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104B08u;
            // 0x104b0c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104af8;
        }
    }
    ctx->pc = 0x104B10u;
label_104b10:
    // 0x104b10: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x104b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x104b14: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x104b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x104b18: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x104b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x104b1c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x104B1Cu;
    {
        const bool branch_taken_0x104b1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B1Cu;
        // 0x104b20: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b1c) {
            ctx->pc = 0x104B2Cu;
            goto label_104b2c;
        }
    }
    ctx->pc = 0x104B24u;
    // 0x104b24: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x104B24u;
    SET_GPR_U32(ctx, 31, 0x104B2Cu);
    ctx->pc = 0x104B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104B24u;
    // 0x104b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x104B24u, 0x104B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B2Cu;
label_104b2c:
    // 0x104b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104b30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104b30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104b34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104b34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104b38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x104b38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104b3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104b40: 0x3e00008  jr          $ra
    ctx->pc = 0x104B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B40u;
        // 0x104b44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104B48u;
}
