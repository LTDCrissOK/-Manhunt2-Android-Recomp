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

// Function: sub_00158CE8
// Address: 0x158ce8 - 0x158d88
void sub_00158CE8_0x158ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158CE8_0x158ce8");
#endif

    switch (ctx->pc) {
        case 0x158ce8u: goto label_158ce8;
        case 0x158cecu: goto label_158cec;
        case 0x158cf0u: goto label_158cf0;
        case 0x158cf4u: goto label_158cf4;
        case 0x158cf8u: goto label_158cf8;
        case 0x158cfcu: goto label_158cfc;
        case 0x158d00u: goto label_158d00;
        case 0x158d04u: goto label_158d04;
        case 0x158d08u: goto label_158d08;
        case 0x158d0cu: goto label_158d0c;
        case 0x158d10u: goto label_158d10;
        case 0x158d14u: goto label_158d14;
        case 0x158d18u: goto label_158d18;
        case 0x158d1cu: goto label_158d1c;
        case 0x158d20u: goto label_158d20;
        case 0x158d24u: goto label_158d24;
        case 0x158d28u: goto label_158d28;
        case 0x158d2cu: goto label_158d2c;
        case 0x158d30u: goto label_158d30;
        case 0x158d34u: goto label_158d34;
        case 0x158d38u: goto label_158d38;
        case 0x158d3cu: goto label_158d3c;
        case 0x158d40u: goto label_158d40;
        case 0x158d44u: goto label_158d44;
        case 0x158d48u: goto label_158d48;
        case 0x158d4cu: goto label_158d4c;
        case 0x158d50u: goto label_158d50;
        case 0x158d54u: goto label_158d54;
        case 0x158d58u: goto label_158d58;
        case 0x158d5cu: goto label_158d5c;
        case 0x158d60u: goto label_158d60;
        case 0x158d64u: goto label_158d64;
        case 0x158d68u: goto label_158d68;
        case 0x158d6cu: goto label_158d6c;
        case 0x158d70u: goto label_158d70;
        case 0x158d74u: goto label_158d74;
        case 0x158d78u: goto label_158d78;
        case 0x158d7cu: goto label_158d7c;
        case 0x158d80u: goto label_158d80;
        case 0x158d84u: goto label_158d84;
        default: break;
    }

    ctx->pc = 0x158ce8u;

label_158ce8:
    // 0x158ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_158cec:
    // 0x158cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158cf0:
    // 0x158cf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_158cf4:
    // 0x158cf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x158cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_158cf8:
    // 0x158cf8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x158cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_158cfc:
    // 0x158cfc: 0xc04f26c  jal         func_13C9B0
label_158d00:
    if (ctx->pc == 0x158D00u) {
        ctx->pc = 0x158D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CFCu;
        // 0x158d00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D04u;
        goto label_158d04;
    }
    ctx->pc = 0x158CFCu;
    SET_GPR_U32(ctx, 31, 0x158D04u);
    ctx->pc = 0x158D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158CFCu;
    // 0x158d00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C9B0u, 0x158CFCu, 0x158D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D04u;
label_158d04:
    // 0x158d04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x158d04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158d08:
    // 0x158d08: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x158d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_158d0c:
    // 0x158d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158d10:
    // 0x158d10: 0xc04f33e  jal         func_13CCF8
label_158d14:
    if (ctx->pc == 0x158D14u) {
        ctx->pc = 0x158D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D10u;
        // 0x158d14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D18u;
        goto label_158d18;
    }
    ctx->pc = 0x158D10u;
    SET_GPR_U32(ctx, 31, 0x158D18u);
    ctx->pc = 0x158D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D10u;
    // 0x158d14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x158D10u, 0x158D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D18u;
label_158d18:
    // 0x158d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158d1c:
    // 0x158d1c: 0xc04f0b6  jal         func_13C2D8
label_158d20:
    if (ctx->pc == 0x158D20u) {
        ctx->pc = 0x158D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D1Cu;
        // 0x158d20: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D24u;
        goto label_158d24;
    }
    ctx->pc = 0x158D1Cu;
    SET_GPR_U32(ctx, 31, 0x158D24u);
    ctx->pc = 0x158D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D1Cu;
    // 0x158d20: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x158D1Cu, 0x158D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D24u;
label_158d24:
    // 0x158d24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x158d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158d28:
    // 0x158d28: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x158d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_158d2c:
    // 0x158d2c: 0xc046330  jal         func_118CC0
label_158d30:
    if (ctx->pc == 0x158D30u) {
        ctx->pc = 0x158D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D2Cu;
        // 0x158d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D34u;
        goto label_158d34;
    }
    ctx->pc = 0x158D2Cu;
    SET_GPR_U32(ctx, 31, 0x158D34u);
    ctx->pc = 0x158D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D2Cu;
    // 0x158d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x158D2Cu, 0x158D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D34u;
label_158d34:
    // 0x158d34: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x158d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_158d38:
    // 0x158d38: 0xc045fea  jal         func_117FA8
label_158d3c:
    if (ctx->pc == 0x158D3Cu) {
        ctx->pc = 0x158D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D38u;
        // 0x158d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D40u;
        goto label_158d40;
    }
    ctx->pc = 0x158D38u;
    SET_GPR_U32(ctx, 31, 0x158D40u);
    ctx->pc = 0x158D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D38u;
    // 0x158d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x158D38u, 0x158D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D40u;
label_158d40:
    // 0x158d40: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x158d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_158d44:
    // 0x158d44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_158d48:
    if (ctx->pc == 0x158D48u) {
        ctx->pc = 0x158D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D44u;
        // 0x158d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D4Cu;
        goto label_158d4c;
    }
    ctx->pc = 0x158D44u;
    {
        const bool branch_taken_0x158d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D44u;
        // 0x158d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d44) {
            ctx->pc = 0x158D54u;
            goto label_158d54;
        }
    }
    ctx->pc = 0x158D4Cu;
label_158d4c:
    // 0x158d4c: 0xc046058  jal         func_118160
label_158d50:
    if (ctx->pc == 0x158D50u) {
        ctx->pc = 0x158D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D4Cu;
        // 0x158d50: 0x260502f0  addiu       $a1, $s0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D54u;
        goto label_158d54;
    }
    ctx->pc = 0x158D4Cu;
    SET_GPR_U32(ctx, 31, 0x158D54u);
    ctx->pc = 0x158D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D4Cu;
    // 0x158d50: 0x260502f0  addiu       $a1, $s0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x158D4Cu, 0x158D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D54u;
label_158d54:
    // 0x158d54: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x158d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_158d58:
    // 0x158d58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158d5c:
    // 0x158d5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158d60:
    // 0x158d60: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x158d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_158d64:
    // 0x158d64: 0x40f809  jalr        $v0
label_158d68:
    if (ctx->pc == 0x158D68u) {
        ctx->pc = 0x158D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D64u;
        // 0x158d68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D6Cu;
        goto label_158d6c;
    }
    ctx->pc = 0x158D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158D6Cu);
        ctx->pc = 0x158D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D64u;
        // 0x158d68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158D64u, 0x158D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158D6Cu;
label_158d6c:
    // 0x158d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158d70:
    // 0x158d70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x158d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_158d74:
    // 0x158d74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_158d78:
    // 0x158d78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x158d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_158d7c:
    // 0x158d7c: 0x3e00008  jr          $ra
label_158d80:
    if (ctx->pc == 0x158D80u) {
        ctx->pc = 0x158D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D7Cu;
        // 0x158d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D84u;
        goto label_158d84;
    }
    ctx->pc = 0x158D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D7Cu;
        // 0x158d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158D84u;
label_158d84:
    // 0x158d84: 0x0  nop
    ctx->pc = 0x158d84u;
    // NOP
    ctx->pc = 0x158d88u;
}
