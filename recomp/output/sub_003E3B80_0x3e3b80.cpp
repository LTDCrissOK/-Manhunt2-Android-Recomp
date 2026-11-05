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

// Function: sub_003E3B80
// Address: 0x3e3b80 - 0x3e3c58
void sub_003E3B80_0x3e3b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3B80_0x3e3b80");
#endif

    switch (ctx->pc) {
        case 0x3e3b98u: goto label_3e3b98;
        case 0x3e3bb8u: goto label_3e3bb8;
        case 0x3e3bc4u: goto label_3e3bc4;
        case 0x3e3bdcu: goto label_3e3bdc;
        case 0x3e3becu: goto label_3e3bec;
        case 0x3e3c10u: goto label_3e3c10;
        case 0x3e3c30u: goto label_3e3c30;
        default: break;
    }

    ctx->pc = 0x3e3b80u;

    // 0x3e3b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e3b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e3b84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e3b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e3b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e3b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e3b8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e3b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e3b90: 0xc0f8ede  jal         func_3E3B78
    ctx->pc = 0x3E3B90u;
    SET_GPR_U32(ctx, 31, 0x3E3B98u);
    ctx->pc = 0x3E3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B90u;
    // 0x3e3b94: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3B78u, 0x3E3B90u, 0x3E3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B98u;
label_3e3b98:
    // 0x3e3b98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e3b9c: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E3B9Cu;
    {
        const bool branch_taken_0x3e3b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3b9c) {
            ctx->pc = 0x3E3BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3B9Cu;
            // 0x3e3ba0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3BE0u;
            goto label_3e3be0;
        }
    }
    ctx->pc = 0x3E3BA4u;
    // 0x3e3ba4: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3e3ba8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3e3ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e3bac: 0x50700009  beql        $v1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E3BACu;
    {
        const bool branch_taken_0x3e3bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e3bac) {
            ctx->pc = 0x3E3BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3BACu;
            // 0x3e3bb0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3BD4u;
            goto label_3e3bd4;
        }
    }
    ctx->pc = 0x3E3BB4u;
    // 0x3e3bb4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3e3bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3e3bb8:
    // 0x3e3bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3bbc: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x3E3BBCu;
    SET_GPR_U32(ctx, 31, 0x3E3BC4u);
    ctx->pc = 0x3E3BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3BBCu;
    // 0x3e3bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x3E3BBCu, 0x3E3BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3BC4u;
label_3e3bc4:
    // 0x3e3bc4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e3bc8: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E3BC8u;
    {
        const bool branch_taken_0x3e3bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BC8u;
        // 0x3e3bcc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3bc8) {
            ctx->pc = 0x3E3BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3bb8;
        }
    }
    ctx->pc = 0x3E3BD0u;
    // 0x3e3bd0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3e3bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e3bd4:
    // 0x3e3bd4: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E3BD4u;
    SET_GPR_U32(ctx, 31, 0x3E3BDCu);
    ctx->pc = 0x3E3BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3BD4u;
    // 0x3e3bd8: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E3BD4u, 0x3E3BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3BDCu;
label_3e3bdc:
    // 0x3e3bdc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3e3bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3e3be0:
    // 0x3e3be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3be4: 0xc0f8e56  jal         func_3E3958
    ctx->pc = 0x3E3BE4u;
    SET_GPR_U32(ctx, 31, 0x3E3BECu);
    ctx->pc = 0x3E3BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3BE4u;
    // 0x3e3be8: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3958u, 0x3E3BE4u, 0x3E3BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3BECu;
label_3e3bec:
    // 0x3e3bec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e3becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e3bf0: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E3BF0u;
    {
        const bool branch_taken_0x3e3bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3bf0) {
            ctx->pc = 0x3E3BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3BF0u;
            // 0x3e3bf4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3C34u;
            goto label_3e3c34;
        }
    }
    ctx->pc = 0x3E3BF8u;
    // 0x3e3bf8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3e3bfc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e3bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3c00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e3c04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e3c08: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3C08u;
    {
        const bool branch_taken_0x3e3c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C08u;
        // 0x3e3c0c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3c08) {
            ctx->pc = 0x3E3C28u;
            goto label_3e3c28;
        }
    }
    ctx->pc = 0x3E3C10u;
label_3e3c10:
    // 0x3e3c10: 0x0  nop
    ctx->pc = 0x3e3c10u;
    // NOP
    // 0x3e3c14: 0x0  nop
    ctx->pc = 0x3e3c14u;
    // NOP
    // 0x3e3c18: 0x0  nop
    ctx->pc = 0x3e3c18u;
    // NOP
    // 0x3e3c1c: 0x0  nop
    ctx->pc = 0x3e3c1cu;
    // NOP
    // 0x3e3c20: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E3C20u;
    {
        const bool branch_taken_0x3e3c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C20u;
        // 0x3e3c24: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3c20) {
            ctx->pc = 0x3E3C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3c10;
        }
    }
    ctx->pc = 0x3E3C28u;
label_3e3c28:
    // 0x3e3c28: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E3C28u;
    SET_GPR_U32(ctx, 31, 0x3E3C30u);
    ctx->pc = 0x3E3C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3C28u;
    // 0x3e3c2c: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E3C28u, 0x3E3C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3C30u;
label_3e3c30:
    // 0x3e3c30: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3e3c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3e3c34:
    // 0x3e3c34: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x3e3c34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e3c38: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x3e3c38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e3c3c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3e3c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3e3c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e3c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e3c44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e3c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e3c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e3c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e3c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C4Cu;
        // 0x3e3c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3C54u;
    // 0x3e3c54: 0x0  nop
    ctx->pc = 0x3e3c54u;
    // NOP
    ctx->pc = 0x3e3c58u;
}
