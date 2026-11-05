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

// Function: sub_00187BE8
// Address: 0x187be8 - 0x187c90
void sub_00187BE8_0x187be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187BE8_0x187be8");
#endif

    switch (ctx->pc) {
        case 0x187be8u: goto label_187be8;
        case 0x187becu: goto label_187bec;
        case 0x187bf0u: goto label_187bf0;
        case 0x187bf4u: goto label_187bf4;
        case 0x187bf8u: goto label_187bf8;
        case 0x187bfcu: goto label_187bfc;
        case 0x187c00u: goto label_187c00;
        case 0x187c04u: goto label_187c04;
        case 0x187c08u: goto label_187c08;
        case 0x187c0cu: goto label_187c0c;
        case 0x187c10u: goto label_187c10;
        case 0x187c14u: goto label_187c14;
        case 0x187c18u: goto label_187c18;
        case 0x187c1cu: goto label_187c1c;
        case 0x187c20u: goto label_187c20;
        case 0x187c24u: goto label_187c24;
        case 0x187c28u: goto label_187c28;
        case 0x187c2cu: goto label_187c2c;
        case 0x187c30u: goto label_187c30;
        case 0x187c34u: goto label_187c34;
        case 0x187c38u: goto label_187c38;
        case 0x187c3cu: goto label_187c3c;
        case 0x187c40u: goto label_187c40;
        case 0x187c44u: goto label_187c44;
        case 0x187c48u: goto label_187c48;
        case 0x187c4cu: goto label_187c4c;
        case 0x187c50u: goto label_187c50;
        case 0x187c54u: goto label_187c54;
        case 0x187c58u: goto label_187c58;
        case 0x187c5cu: goto label_187c5c;
        case 0x187c60u: goto label_187c60;
        case 0x187c64u: goto label_187c64;
        case 0x187c68u: goto label_187c68;
        case 0x187c6cu: goto label_187c6c;
        case 0x187c70u: goto label_187c70;
        case 0x187c74u: goto label_187c74;
        case 0x187c78u: goto label_187c78;
        case 0x187c7cu: goto label_187c7c;
        case 0x187c80u: goto label_187c80;
        case 0x187c84u: goto label_187c84;
        case 0x187c88u: goto label_187c88;
        case 0x187c8cu: goto label_187c8c;
        default: break;
    }

    ctx->pc = 0x187be8u;

label_187be8:
    // 0x187be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_187bec:
    // 0x187bec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187bf0:
    // 0x187bf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x187bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_187bf4:
    // 0x187bf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187bf8:
    // 0x187bf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187bfc:
    // 0x187bfc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x187bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_187c00:
    // 0x187c00: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x187c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_187c04:
    // 0x187c04: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_187c08:
    if (ctx->pc == 0x187C08u) {
        ctx->pc = 0x187C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C04u;
        // 0x187c08: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C0Cu;
        goto label_187c0c;
    }
    ctx->pc = 0x187C04u;
    {
        const bool branch_taken_0x187c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C04u;
        // 0x187c08: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c04) {
            ctx->pc = 0x187C1Cu;
            goto label_187c1c;
        }
    }
    ctx->pc = 0x187C0Cu;
label_187c0c:
    // 0x187c0c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187c10:
    // 0x187c10: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x187c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_187c14:
    // 0x187c14: 0x40f809  jalr        $v0
label_187c18:
    if (ctx->pc == 0x187C18u) {
        ctx->pc = 0x187C1Cu;
        goto label_187c1c;
    }
    ctx->pc = 0x187C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187C1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187C14u, 0x187C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187C1Cu;
label_187c1c:
    // 0x187c1c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x187c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_187c20:
    // 0x187c20: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_187c24:
    if (ctx->pc == 0x187C24u) {
        ctx->pc = 0x187C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C20u;
        // 0x187c24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C28u;
        goto label_187c28;
    }
    ctx->pc = 0x187C20u;
    {
        const bool branch_taken_0x187c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C20u;
        // 0x187c24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c20) {
            ctx->pc = 0x187C64u;
            goto label_187c64;
        }
    }
    ctx->pc = 0x187C28u;
label_187c28:
    // 0x187c28: 0xc0f5240  jal         func_3D4900
label_187c2c:
    if (ctx->pc == 0x187C2Cu) {
        ctx->pc = 0x187C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C28u;
        // 0x187c2c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C30u;
        goto label_187c30;
    }
    ctx->pc = 0x187C28u;
    SET_GPR_U32(ctx, 31, 0x187C30u);
    ctx->pc = 0x187C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C28u;
    // 0x187c2c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187C28u, 0x187C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C30u;
label_187c30:
    // 0x187c30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187c34:
    // 0x187c34: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x187c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_187c38:
    // 0x187c38: 0xc061a32  jal         func_1868C8
label_187c3c:
    if (ctx->pc == 0x187C3Cu) {
        ctx->pc = 0x187C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C38u;
        // 0x187c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C40u;
        goto label_187c40;
    }
    ctx->pc = 0x187C38u;
    SET_GPR_U32(ctx, 31, 0x187C40u);
    ctx->pc = 0x187C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C38u;
    // 0x187c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x187C38u, 0x187C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C40u;
label_187c40:
    // 0x187c40: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x187c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_187c44:
    // 0x187c44: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x187c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_187c48:
    // 0x187c48: 0x246310a8  addiu       $v1, $v1, 0x10A8
    ctx->pc = 0x187c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4264));
label_187c4c:
    // 0x187c4c: 0xc0f6a96  jal         func_3DAA58
label_187c50:
    if (ctx->pc == 0x187C50u) {
        ctx->pc = 0x187C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C4Cu;
        // 0x187c50: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C54u;
        goto label_187c54;
    }
    ctx->pc = 0x187C4Cu;
    SET_GPR_U32(ctx, 31, 0x187C54u);
    ctx->pc = 0x187C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C4Cu;
    // 0x187c50: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x187C4Cu, 0x187C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C54u;
label_187c54:
    // 0x187c54: 0xae300048  sw          $s0, 0x48($s1)
    ctx->pc = 0x187c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
label_187c58:
    // 0x187c58: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x187c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_187c5c:
    // 0x187c5c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x187c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_187c60:
    // 0x187c60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187c64:
    // 0x187c64: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x187c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_187c68:
    // 0x187c68: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x187c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_187c6c:
    // 0x187c6c: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x187c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_187c70:
    // 0x187c70: 0xc0f809  jalr        $a2
label_187c74:
    if (ctx->pc == 0x187C74u) {
        ctx->pc = 0x187C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C70u;
        // 0x187c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C78u;
        goto label_187c78;
    }
    ctx->pc = 0x187C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x187C78u);
        ctx->pc = 0x187C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C70u;
        // 0x187c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187C70u, 0x187C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187C78u;
label_187c78:
    // 0x187c78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187c7c:
    // 0x187c7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187c80:
    // 0x187c80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x187c80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187c84:
    // 0x187c84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x187c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_187c88:
    // 0x187c88: 0x3e00008  jr          $ra
label_187c8c:
    if (ctx->pc == 0x187C8Cu) {
        ctx->pc = 0x187C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C88u;
        // 0x187c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C90u;
        goto label_fallthrough_0x187c88;
    }
    ctx->pc = 0x187C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C88u;
        // 0x187c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x187c88:
    ctx->pc = 0x187C90u;
}
