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

// Function: sub_00223DC0
// Address: 0x223dc0 - 0x223eb0
void sub_00223DC0_0x223dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223DC0_0x223dc0");
#endif

    switch (ctx->pc) {
        case 0x223de4u: goto label_223de4;
        case 0x223e10u: goto label_223e10;
        case 0x223e30u: goto label_223e30;
        case 0x223e38u: goto label_223e38;
        case 0x223e40u: goto label_223e40;
        case 0x223e48u: goto label_223e48;
        case 0x223e50u: goto label_223e50;
        case 0x223e58u: goto label_223e58;
        case 0x223e60u: goto label_223e60;
        case 0x223e80u: goto label_223e80;
        default: break;
    }

    ctx->pc = 0x223dc0u;

    // 0x223dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223dc4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x223dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x223dc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223dcc: 0x244217b8  addiu       $v0, $v0, 0x17B8
    ctx->pc = 0x223dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6072));
    // 0x223dd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223dd4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x223dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x223dd8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x223dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x223ddc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223DDCu;
    SET_GPR_U32(ctx, 31, 0x223DE4u);
    ctx->pc = 0x223DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223DDCu;
    // 0x223de0: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223DDCu, 0x223DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223DE4u;
label_223de4:
    // 0x223de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223de8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x223de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x223dec: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x223decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x223df0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x223df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223df4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x223df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x223df8: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x223df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x223dfc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x223dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x223e00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x223e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223e04: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x223e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x223e08: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x223e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x223e0c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x223e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_223e10:
    // 0x223e10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x223e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x223e14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x223e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x223e18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x223e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x223e1c: 0x0  nop
    ctx->pc = 0x223e1cu;
    // NOP
    // 0x223e20: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x223E20u;
    {
        const bool branch_taken_0x223e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x223E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E20u;
        // 0x223e24: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e20) {
            ctx->pc = 0x223E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223e10;
        }
    }
    ctx->pc = 0x223E28u;
    // 0x223e28: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223E28u;
    SET_GPR_U32(ctx, 31, 0x223E30u);
    ctx->pc = 0x223E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E28u;
    // 0x223e2c: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223E28u, 0x223E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E30u;
label_223e30:
    // 0x223e30: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223E30u;
    SET_GPR_U32(ctx, 31, 0x223E38u);
    ctx->pc = 0x223E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E30u;
    // 0x223e34: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223E30u, 0x223E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E38u;
label_223e38:
    // 0x223e38: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223E38u;
    SET_GPR_U32(ctx, 31, 0x223E40u);
    ctx->pc = 0x223E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E38u;
    // 0x223e3c: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223E38u, 0x223E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E40u;
label_223e40:
    // 0x223e40: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223E40u;
    SET_GPR_U32(ctx, 31, 0x223E48u);
    ctx->pc = 0x223E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E40u;
    // 0x223e44: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223E40u, 0x223E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E48u;
label_223e48:
    // 0x223e48: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223E48u;
    SET_GPR_U32(ctx, 31, 0x223E50u);
    ctx->pc = 0x223E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E48u;
    // 0x223e4c: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223E48u, 0x223E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E50u;
label_223e50:
    // 0x223e50: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223E50u;
    SET_GPR_U32(ctx, 31, 0x223E58u);
    ctx->pc = 0x223E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E50u;
    // 0x223e54: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223E50u, 0x223E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E58u;
label_223e58:
    // 0x223e58: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x223E58u;
    SET_GPR_U32(ctx, 31, 0x223E60u);
    ctx->pc = 0x223E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E58u;
    // 0x223e5c: 0x26040088  addiu       $a0, $s0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x223E58u, 0x223E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E60u;
label_223e60:
    // 0x223e60: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x223e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x223e64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x223e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223e68: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x223e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x223e6c: 0x2602003e  addiu       $v0, $s0, 0x3E
    ctx->pc = 0x223e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 62));
    // 0x223e70: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x223e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x223e74: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x223e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x223e78: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x223e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x223e7c: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x223e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_223e80:
    // 0x223e80: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x223e80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x223e84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x223e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x223e88: 0x0  nop
    ctx->pc = 0x223e88u;
    // NOP
    // 0x223e8c: 0x0  nop
    ctx->pc = 0x223e8cu;
    // NOP
    // 0x223e90: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x223E90u;
    {
        const bool branch_taken_0x223e90 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x223E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E90u;
        // 0x223e94: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e90) {
            ctx->pc = 0x223E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223e80;
        }
    }
    ctx->pc = 0x223E98u;
    // 0x223e98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x223e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x223e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223ea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x223EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EA4u;
        // 0x223ea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223EACu;
    // 0x223eac: 0x0  nop
    ctx->pc = 0x223eacu;
    // NOP
    ctx->pc = 0x223eb0u;
}
