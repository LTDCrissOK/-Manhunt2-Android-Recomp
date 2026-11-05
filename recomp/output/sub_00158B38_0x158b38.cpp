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

// Function: sub_00158B38
// Address: 0x158b38 - 0x158bc0
void sub_00158B38_0x158b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158B38_0x158b38");
#endif

    switch (ctx->pc) {
        case 0x158b38u: goto label_158b38;
        case 0x158b3cu: goto label_158b3c;
        case 0x158b40u: goto label_158b40;
        case 0x158b44u: goto label_158b44;
        case 0x158b48u: goto label_158b48;
        case 0x158b4cu: goto label_158b4c;
        case 0x158b50u: goto label_158b50;
        case 0x158b54u: goto label_158b54;
        case 0x158b58u: goto label_158b58;
        case 0x158b5cu: goto label_158b5c;
        case 0x158b60u: goto label_158b60;
        case 0x158b64u: goto label_158b64;
        case 0x158b68u: goto label_158b68;
        case 0x158b6cu: goto label_158b6c;
        case 0x158b70u: goto label_158b70;
        case 0x158b74u: goto label_158b74;
        case 0x158b78u: goto label_158b78;
        case 0x158b7cu: goto label_158b7c;
        case 0x158b80u: goto label_158b80;
        case 0x158b84u: goto label_158b84;
        case 0x158b88u: goto label_158b88;
        case 0x158b8cu: goto label_158b8c;
        case 0x158b90u: goto label_158b90;
        case 0x158b94u: goto label_158b94;
        case 0x158b98u: goto label_158b98;
        case 0x158b9cu: goto label_158b9c;
        case 0x158ba0u: goto label_158ba0;
        case 0x158ba4u: goto label_158ba4;
        case 0x158ba8u: goto label_158ba8;
        case 0x158bacu: goto label_158bac;
        case 0x158bb0u: goto label_158bb0;
        case 0x158bb4u: goto label_158bb4;
        case 0x158bb8u: goto label_158bb8;
        case 0x158bbcu: goto label_158bbc;
        default: break;
    }

    ctx->pc = 0x158b38u;

label_158b38:
    // 0x158b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_158b3c:
    // 0x158b3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_158b40:
    // 0x158b40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158b44:
    // 0x158b44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x158b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_158b48:
    // 0x158b48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x158b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_158b4c:
    // 0x158b4c: 0xc04f30c  jal         func_13CC30
label_158b50:
    if (ctx->pc == 0x158B50u) {
        ctx->pc = 0x158B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B4Cu;
        // 0x158b50: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B54u;
        goto label_158b54;
    }
    ctx->pc = 0x158B4Cu;
    SET_GPR_U32(ctx, 31, 0x158B54u);
    ctx->pc = 0x158B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B4Cu;
    // 0x158b50: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC30u, 0x158B4Cu, 0x158B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B54u;
label_158b54:
    // 0x158b54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x158b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158b58:
    // 0x158b58: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x158b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_158b5c:
    // 0x158b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158b60:
    // 0x158b60: 0xc04f33e  jal         func_13CCF8
label_158b64:
    if (ctx->pc == 0x158B64u) {
        ctx->pc = 0x158B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B60u;
        // 0x158b64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B68u;
        goto label_158b68;
    }
    ctx->pc = 0x158B60u;
    SET_GPR_U32(ctx, 31, 0x158B68u);
    ctx->pc = 0x158B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B60u;
    // 0x158b64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x158B60u, 0x158B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B68u;
label_158b68:
    // 0x158b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158b6c:
    // 0x158b6c: 0xc04f0b6  jal         func_13C2D8
label_158b70:
    if (ctx->pc == 0x158B70u) {
        ctx->pc = 0x158B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B6Cu;
        // 0x158b70: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B74u;
        goto label_158b74;
    }
    ctx->pc = 0x158B6Cu;
    SET_GPR_U32(ctx, 31, 0x158B74u);
    ctx->pc = 0x158B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B6Cu;
    // 0x158b70: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x158B6Cu, 0x158B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B74u;
label_158b74:
    // 0x158b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158b78:
    // 0x158b78: 0x8e250304  lw          $a1, 0x304($s1)
    ctx->pc = 0x158b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_158b7c:
    // 0x158b7c: 0xc0461e8  jal         func_1187A0
label_158b80:
    if (ctx->pc == 0x158B80u) {
        ctx->pc = 0x158B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B7Cu;
        // 0x158b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B84u;
        goto label_158b84;
    }
    ctx->pc = 0x158B7Cu;
    SET_GPR_U32(ctx, 31, 0x158B84u);
    ctx->pc = 0x158B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B7Cu;
    // 0x158b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x158B7Cu, 0x158B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B84u;
label_158b84:
    // 0x158b84: 0x8e250328  lw          $a1, 0x328($s1)
    ctx->pc = 0x158b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_158b88:
    // 0x158b88: 0xc046256  jal         func_118958
label_158b8c:
    if (ctx->pc == 0x158B8Cu) {
        ctx->pc = 0x158B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B88u;
        // 0x158b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B90u;
        goto label_158b90;
    }
    ctx->pc = 0x158B88u;
    SET_GPR_U32(ctx, 31, 0x158B90u);
    ctx->pc = 0x158B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B88u;
    // 0x158b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x158B88u, 0x158B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B90u;
label_158b90:
    // 0x158b90: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x158b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_158b94:
    // 0x158b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158b98:
    // 0x158b98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158b9c:
    // 0x158b9c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x158b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_158ba0:
    // 0x158ba0: 0x40f809  jalr        $v0
label_158ba4:
    if (ctx->pc == 0x158BA4u) {
        ctx->pc = 0x158BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BA0u;
        // 0x158ba4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BA8u;
        goto label_158ba8;
    }
    ctx->pc = 0x158BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158BA8u);
        ctx->pc = 0x158BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BA0u;
        // 0x158ba4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158BA0u, 0x158BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158BA8u;
label_158ba8:
    // 0x158ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158bac:
    // 0x158bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x158bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_158bb0:
    // 0x158bb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_158bb4:
    // 0x158bb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x158bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_158bb8:
    // 0x158bb8: 0x3e00008  jr          $ra
label_158bbc:
    if (ctx->pc == 0x158BBCu) {
        ctx->pc = 0x158BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BB8u;
        // 0x158bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BC0u;
        goto label_fallthrough_0x158bb8;
    }
    ctx->pc = 0x158BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BB8u;
        // 0x158bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x158bb8:
    ctx->pc = 0x158BC0u;
}
