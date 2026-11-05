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

// Function: sub_00176B28
// Address: 0x176b28 - 0x176bc8
void sub_00176B28_0x176b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176B28_0x176b28");
#endif

    switch (ctx->pc) {
        case 0x176b28u: goto label_176b28;
        case 0x176b2cu: goto label_176b2c;
        case 0x176b30u: goto label_176b30;
        case 0x176b34u: goto label_176b34;
        case 0x176b38u: goto label_176b38;
        case 0x176b3cu: goto label_176b3c;
        case 0x176b40u: goto label_176b40;
        case 0x176b44u: goto label_176b44;
        case 0x176b48u: goto label_176b48;
        case 0x176b4cu: goto label_176b4c;
        case 0x176b50u: goto label_176b50;
        case 0x176b54u: goto label_176b54;
        case 0x176b58u: goto label_176b58;
        case 0x176b5cu: goto label_176b5c;
        case 0x176b60u: goto label_176b60;
        case 0x176b64u: goto label_176b64;
        case 0x176b68u: goto label_176b68;
        case 0x176b6cu: goto label_176b6c;
        case 0x176b70u: goto label_176b70;
        case 0x176b74u: goto label_176b74;
        case 0x176b78u: goto label_176b78;
        case 0x176b7cu: goto label_176b7c;
        case 0x176b80u: goto label_176b80;
        case 0x176b84u: goto label_176b84;
        case 0x176b88u: goto label_176b88;
        case 0x176b8cu: goto label_176b8c;
        case 0x176b90u: goto label_176b90;
        case 0x176b94u: goto label_176b94;
        case 0x176b98u: goto label_176b98;
        case 0x176b9cu: goto label_176b9c;
        case 0x176ba0u: goto label_176ba0;
        case 0x176ba4u: goto label_176ba4;
        case 0x176ba8u: goto label_176ba8;
        case 0x176bacu: goto label_176bac;
        case 0x176bb0u: goto label_176bb0;
        case 0x176bb4u: goto label_176bb4;
        case 0x176bb8u: goto label_176bb8;
        case 0x176bbcu: goto label_176bbc;
        case 0x176bc0u: goto label_176bc0;
        case 0x176bc4u: goto label_176bc4;
        default: break;
    }

    ctx->pc = 0x176b28u;

label_176b28:
    // 0x176b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_176b2c:
    // 0x176b2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176b30:
    // 0x176b30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176b34:
    // 0x176b34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x176b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176b38:
    // 0x176b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176b3c:
    // 0x176b3c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x176b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_176b40:
    // 0x176b40: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x176b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_176b44:
    // 0x176b44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_176b48:
    if (ctx->pc == 0x176B48u) {
        ctx->pc = 0x176B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B44u;
        // 0x176b48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B4Cu;
        goto label_176b4c;
    }
    ctx->pc = 0x176B44u;
    {
        const bool branch_taken_0x176b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B44u;
        // 0x176b48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b44) {
            ctx->pc = 0x176B54u;
            goto label_176b54;
        }
    }
    ctx->pc = 0x176B4Cu;
label_176b4c:
    // 0x176b4c: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_176b50:
    if (ctx->pc == 0x176B50u) {
        ctx->pc = 0x176B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B4Cu;
        // 0x176b50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B54u;
        goto label_176b54;
    }
    ctx->pc = 0x176B4Cu;
    {
        const bool branch_taken_0x176b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x176B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B4Cu;
        // 0x176b50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b4c) {
            ctx->pc = 0x176BB4u;
            goto label_176bb4;
        }
    }
    ctx->pc = 0x176B54u;
label_176b54:
    // 0x176b54: 0xc04f9b8  jal         func_13E6E0
label_176b58:
    if (ctx->pc == 0x176B58u) {
        ctx->pc = 0x176B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B54u;
        // 0x176b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B5Cu;
        goto label_176b5c;
    }
    ctx->pc = 0x176B54u;
    SET_GPR_U32(ctx, 31, 0x176B5Cu);
    ctx->pc = 0x176B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B54u;
    // 0x176b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E6E0u, 0x176B54u, 0x176B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B5Cu;
label_176b5c:
    // 0x176b5c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x176b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_176b60:
    // 0x176b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176b64:
    // 0x176b64: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x176b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_176b68:
    // 0x176b68: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x176b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_176b6c:
    // 0x176b6c: 0xc04f8fc  jal         func_13E3F0
label_176b70:
    if (ctx->pc == 0x176B70u) {
        ctx->pc = 0x176B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B6Cu;
        // 0x176b70: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B74u;
        goto label_176b74;
    }
    ctx->pc = 0x176B6Cu;
    SET_GPR_U32(ctx, 31, 0x176B74u);
    ctx->pc = 0x176B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B6Cu;
    // 0x176b70: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x176B6Cu, 0x176B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B74u;
label_176b74:
    // 0x176b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x176b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176b78:
    // 0x176b78: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x176b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_176b7c:
    // 0x176b7c: 0xc0461e8  jal         func_1187A0
label_176b80:
    if (ctx->pc == 0x176B80u) {
        ctx->pc = 0x176B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B7Cu;
        // 0x176b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B84u;
        goto label_176b84;
    }
    ctx->pc = 0x176B7Cu;
    SET_GPR_U32(ctx, 31, 0x176B84u);
    ctx->pc = 0x176B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B7Cu;
    // 0x176b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x176B7Cu, 0x176B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B84u;
label_176b84:
    // 0x176b84: 0xc62c00dc  lwc1        $f12, 0xDC($s1)
    ctx->pc = 0x176b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_176b88:
    // 0x176b88: 0xc046290  jal         func_118A40
label_176b8c:
    if (ctx->pc == 0x176B8Cu) {
        ctx->pc = 0x176B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B88u;
        // 0x176b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B90u;
        goto label_176b90;
    }
    ctx->pc = 0x176B88u;
    SET_GPR_U32(ctx, 31, 0x176B90u);
    ctx->pc = 0x176B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B88u;
    // 0x176b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x176B88u, 0x176B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B90u;
label_176b90:
    // 0x176b90: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x176b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_176b94:
    // 0x176b94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176b98:
    // 0x176b98: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x176b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_176b9c:
    // 0x176b9c: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x176b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_176ba0:
    // 0x176ba0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176ba4:
    // 0x176ba4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x176ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_176ba8:
    // 0x176ba8: 0x40f809  jalr        $v0
label_176bac:
    if (ctx->pc == 0x176BACu) {
        ctx->pc = 0x176BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BA8u;
        // 0x176bac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176BB0u;
        goto label_176bb0;
    }
    ctx->pc = 0x176BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176BB0u);
        ctx->pc = 0x176BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BA8u;
        // 0x176bac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176BA8u, 0x176BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176BB0u;
label_176bb0:
    // 0x176bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176bb4:
    // 0x176bb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176bb8:
    // 0x176bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176bbc:
    // 0x176bbc: 0x3e00008  jr          $ra
label_176bc0:
    if (ctx->pc == 0x176BC0u) {
        ctx->pc = 0x176BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BBCu;
        // 0x176bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176BC4u;
        goto label_176bc4;
    }
    ctx->pc = 0x176BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BBCu;
        // 0x176bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176BC4u;
label_176bc4:
    // 0x176bc4: 0x0  nop
    ctx->pc = 0x176bc4u;
    // NOP
    ctx->pc = 0x176bc8u;
}
