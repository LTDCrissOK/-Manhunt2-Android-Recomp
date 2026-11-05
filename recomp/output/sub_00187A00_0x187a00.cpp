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

// Function: sub_00187A00
// Address: 0x187a00 - 0x187aa8
void sub_00187A00_0x187a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187A00_0x187a00");
#endif

    switch (ctx->pc) {
        case 0x187a00u: goto label_187a00;
        case 0x187a04u: goto label_187a04;
        case 0x187a08u: goto label_187a08;
        case 0x187a0cu: goto label_187a0c;
        case 0x187a10u: goto label_187a10;
        case 0x187a14u: goto label_187a14;
        case 0x187a18u: goto label_187a18;
        case 0x187a1cu: goto label_187a1c;
        case 0x187a20u: goto label_187a20;
        case 0x187a24u: goto label_187a24;
        case 0x187a28u: goto label_187a28;
        case 0x187a2cu: goto label_187a2c;
        case 0x187a30u: goto label_187a30;
        case 0x187a34u: goto label_187a34;
        case 0x187a38u: goto label_187a38;
        case 0x187a3cu: goto label_187a3c;
        case 0x187a40u: goto label_187a40;
        case 0x187a44u: goto label_187a44;
        case 0x187a48u: goto label_187a48;
        case 0x187a4cu: goto label_187a4c;
        case 0x187a50u: goto label_187a50;
        case 0x187a54u: goto label_187a54;
        case 0x187a58u: goto label_187a58;
        case 0x187a5cu: goto label_187a5c;
        case 0x187a60u: goto label_187a60;
        case 0x187a64u: goto label_187a64;
        case 0x187a68u: goto label_187a68;
        case 0x187a6cu: goto label_187a6c;
        case 0x187a70u: goto label_187a70;
        case 0x187a74u: goto label_187a74;
        case 0x187a78u: goto label_187a78;
        case 0x187a7cu: goto label_187a7c;
        case 0x187a80u: goto label_187a80;
        case 0x187a84u: goto label_187a84;
        case 0x187a88u: goto label_187a88;
        case 0x187a8cu: goto label_187a8c;
        case 0x187a90u: goto label_187a90;
        case 0x187a94u: goto label_187a94;
        case 0x187a98u: goto label_187a98;
        case 0x187a9cu: goto label_187a9c;
        case 0x187aa0u: goto label_187aa0;
        case 0x187aa4u: goto label_187aa4;
        default: break;
    }

    ctx->pc = 0x187a00u;

label_187a00:
    // 0x187a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_187a04:
    // 0x187a04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187a08:
    // 0x187a08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x187a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_187a0c:
    // 0x187a0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187a10:
    // 0x187a10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187a14:
    // 0x187a14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x187a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_187a18:
    // 0x187a18: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x187a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_187a1c:
    // 0x187a1c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_187a20:
    if (ctx->pc == 0x187A20u) {
        ctx->pc = 0x187A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A1Cu;
        // 0x187a20: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187A24u;
        goto label_187a24;
    }
    ctx->pc = 0x187A1Cu;
    {
        const bool branch_taken_0x187a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A1Cu;
        // 0x187a20: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a1c) {
            ctx->pc = 0x187A34u;
            goto label_187a34;
        }
    }
    ctx->pc = 0x187A24u;
label_187a24:
    // 0x187a24: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187a28:
    // 0x187a28: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x187a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_187a2c:
    // 0x187a2c: 0x40f809  jalr        $v0
label_187a30:
    if (ctx->pc == 0x187A30u) {
        ctx->pc = 0x187A34u;
        goto label_187a34;
    }
    ctx->pc = 0x187A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187A34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187A2Cu, 0x187A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187A34u;
label_187a34:
    // 0x187a34: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x187a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_187a38:
    // 0x187a38: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_187a3c:
    if (ctx->pc == 0x187A3Cu) {
        ctx->pc = 0x187A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A38u;
        // 0x187a3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187A40u;
        goto label_187a40;
    }
    ctx->pc = 0x187A38u;
    {
        const bool branch_taken_0x187a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A38u;
        // 0x187a3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a38) {
            ctx->pc = 0x187A78u;
            goto label_187a78;
        }
    }
    ctx->pc = 0x187A40u;
label_187a40:
    // 0x187a40: 0xc0f5240  jal         func_3D4900
label_187a44:
    if (ctx->pc == 0x187A44u) {
        ctx->pc = 0x187A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A40u;
        // 0x187a44: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187A48u;
        goto label_187a48;
    }
    ctx->pc = 0x187A40u;
    SET_GPR_U32(ctx, 31, 0x187A48u);
    ctx->pc = 0x187A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A40u;
    // 0x187a44: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187A40u, 0x187A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A48u;
label_187a48:
    // 0x187a48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187a4c:
    // 0x187a4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x187a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_187a50:
    // 0x187a50: 0xc0635bc  jal         func_18D6F0
label_187a54:
    if (ctx->pc == 0x187A54u) {
        ctx->pc = 0x187A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A50u;
        // 0x187a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187A58u;
        goto label_187a58;
    }
    ctx->pc = 0x187A50u;
    SET_GPR_U32(ctx, 31, 0x187A58u);
    ctx->pc = 0x187A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A50u;
    // 0x187a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D6F0u, 0x187A50u, 0x187A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A58u;
label_187a58:
    // 0x187a58: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x187a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_187a5c:
    // 0x187a5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x187a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_187a60:
    // 0x187a60: 0x246310f8  addiu       $v1, $v1, 0x10F8
    ctx->pc = 0x187a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4344));
label_187a64:
    // 0x187a64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x187a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_187a68:
    // 0x187a68: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x187a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_187a6c:
    // 0x187a6c: 0xae300044  sw          $s0, 0x44($s1)
    ctx->pc = 0x187a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 16));
label_187a70:
    // 0x187a70: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x187a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_187a74:
    // 0x187a74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187a78:
    // 0x187a78: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x187a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_187a7c:
    // 0x187a7c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x187a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_187a80:
    // 0x187a80: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x187a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_187a84:
    // 0x187a84: 0xc0f809  jalr        $a2
label_187a88:
    if (ctx->pc == 0x187A88u) {
        ctx->pc = 0x187A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A84u;
        // 0x187a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187A8Cu;
        goto label_187a8c;
    }
    ctx->pc = 0x187A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x187A8Cu);
        ctx->pc = 0x187A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A84u;
        // 0x187a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187A84u, 0x187A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187A8Cu;
label_187a8c:
    // 0x187a8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187a90:
    // 0x187a90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187a94:
    // 0x187a94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x187a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187a98:
    // 0x187a98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x187a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_187a9c:
    // 0x187a9c: 0x3e00008  jr          $ra
label_187aa0:
    if (ctx->pc == 0x187AA0u) {
        ctx->pc = 0x187AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A9Cu;
        // 0x187aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187AA4u;
        goto label_187aa4;
    }
    ctx->pc = 0x187A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A9Cu;
        // 0x187aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187AA4u;
label_187aa4:
    // 0x187aa4: 0x0  nop
    ctx->pc = 0x187aa4u;
    // NOP
    ctx->pc = 0x187aa8u;
}
