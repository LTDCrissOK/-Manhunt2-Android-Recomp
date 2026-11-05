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

// Function: sub_0016DF38
// Address: 0x16df38 - 0x16dfc0
void sub_0016DF38_0x16df38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DF38_0x16df38");
#endif

    switch (ctx->pc) {
        case 0x16df38u: goto label_16df38;
        case 0x16df3cu: goto label_16df3c;
        case 0x16df40u: goto label_16df40;
        case 0x16df44u: goto label_16df44;
        case 0x16df48u: goto label_16df48;
        case 0x16df4cu: goto label_16df4c;
        case 0x16df50u: goto label_16df50;
        case 0x16df54u: goto label_16df54;
        case 0x16df58u: goto label_16df58;
        case 0x16df5cu: goto label_16df5c;
        case 0x16df60u: goto label_16df60;
        case 0x16df64u: goto label_16df64;
        case 0x16df68u: goto label_16df68;
        case 0x16df6cu: goto label_16df6c;
        case 0x16df70u: goto label_16df70;
        case 0x16df74u: goto label_16df74;
        case 0x16df78u: goto label_16df78;
        case 0x16df7cu: goto label_16df7c;
        case 0x16df80u: goto label_16df80;
        case 0x16df84u: goto label_16df84;
        case 0x16df88u: goto label_16df88;
        case 0x16df8cu: goto label_16df8c;
        case 0x16df90u: goto label_16df90;
        case 0x16df94u: goto label_16df94;
        case 0x16df98u: goto label_16df98;
        case 0x16df9cu: goto label_16df9c;
        case 0x16dfa0u: goto label_16dfa0;
        case 0x16dfa4u: goto label_16dfa4;
        case 0x16dfa8u: goto label_16dfa8;
        case 0x16dfacu: goto label_16dfac;
        case 0x16dfb0u: goto label_16dfb0;
        case 0x16dfb4u: goto label_16dfb4;
        case 0x16dfb8u: goto label_16dfb8;
        case 0x16dfbcu: goto label_16dfbc;
        default: break;
    }

    ctx->pc = 0x16df38u;

label_16df38:
    // 0x16df38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16df38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16df3c:
    // 0x16df3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16df3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16df40:
    // 0x16df40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16df40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16df44:
    // 0x16df44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16df48:
    // 0x16df48: 0xc04f9a4  jal         func_13E690
label_16df4c:
    if (ctx->pc == 0x16DF4Cu) {
        ctx->pc = 0x16DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF48u;
        // 0x16df4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF50u;
        goto label_16df50;
    }
    ctx->pc = 0x16DF48u;
    SET_GPR_U32(ctx, 31, 0x16DF50u);
    ctx->pc = 0x16DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF48u;
    // 0x16df4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x16DF48u, 0x16DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF50u;
label_16df50:
    // 0x16df50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16df50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16df54:
    // 0x16df54: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x16df54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_16df58:
    // 0x16df58: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x16df58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
label_16df5c:
    // 0x16df5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16df5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16df60:
    // 0x16df60: 0xc04f8fc  jal         func_13E3F0
label_16df64:
    if (ctx->pc == 0x16DF64u) {
        ctx->pc = 0x16DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF60u;
        // 0x16df64: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF68u;
        goto label_16df68;
    }
    ctx->pc = 0x16DF60u;
    SET_GPR_U32(ctx, 31, 0x16DF68u);
    ctx->pc = 0x16DF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF60u;
    // 0x16df64: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x16DF60u, 0x16DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF68u;
label_16df68:
    // 0x16df68: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x16df68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_16df6c:
    // 0x16df6c: 0xc05a5fe  jal         func_1697F8
label_16df70:
    if (ctx->pc == 0x16DF70u) {
        ctx->pc = 0x16DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF6Cu;
        // 0x16df70: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF74u;
        goto label_16df74;
    }
    ctx->pc = 0x16DF6Cu;
    SET_GPR_U32(ctx, 31, 0x16DF74u);
    ctx->pc = 0x16DF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF6Cu;
    // 0x16df70: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16DF6Cu, 0x16DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF74u;
label_16df74:
    // 0x16df74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16df74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16df78:
    // 0x16df78: 0xc0461e8  jal         func_1187A0
label_16df7c:
    if (ctx->pc == 0x16DF7Cu) {
        ctx->pc = 0x16DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF78u;
        // 0x16df7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF80u;
        goto label_16df80;
    }
    ctx->pc = 0x16DF78u;
    SET_GPR_U32(ctx, 31, 0x16DF80u);
    ctx->pc = 0x16DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF78u;
    // 0x16df7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x16DF78u, 0x16DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF80u;
label_16df80:
    // 0x16df80: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x16df80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_16df84:
    // 0x16df84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16df84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16df88:
    // 0x16df88: 0xc046330  jal         func_118CC0
label_16df8c:
    if (ctx->pc == 0x16DF8Cu) {
        ctx->pc = 0x16DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF88u;
        // 0x16df8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF90u;
        goto label_16df90;
    }
    ctx->pc = 0x16DF88u;
    SET_GPR_U32(ctx, 31, 0x16DF90u);
    ctx->pc = 0x16DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF88u;
    // 0x16df8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x16DF88u, 0x16DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF90u;
label_16df90:
    // 0x16df90: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x16df90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_16df94:
    // 0x16df94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16df94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16df98:
    // 0x16df98: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16df98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16df9c:
    // 0x16df9c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x16df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_16dfa0:
    // 0x16dfa0: 0x40f809  jalr        $v0
label_16dfa4:
    if (ctx->pc == 0x16DFA4u) {
        ctx->pc = 0x16DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFA0u;
        // 0x16dfa4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DFA8u;
        goto label_16dfa8;
    }
    ctx->pc = 0x16DFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DFA8u);
        ctx->pc = 0x16DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFA0u;
        // 0x16dfa4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DFA0u, 0x16DFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DFA8u;
label_16dfa8:
    // 0x16dfa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16dfa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16dfac:
    // 0x16dfac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16dfacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16dfb0:
    // 0x16dfb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16dfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16dfb4:
    // 0x16dfb4: 0x3e00008  jr          $ra
label_16dfb8:
    if (ctx->pc == 0x16DFB8u) {
        ctx->pc = 0x16DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFB4u;
        // 0x16dfb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DFBCu;
        goto label_16dfbc;
    }
    ctx->pc = 0x16DFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFB4u;
        // 0x16dfb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DFBCu;
label_16dfbc:
    // 0x16dfbc: 0x0  nop
    ctx->pc = 0x16dfbcu;
    // NOP
    ctx->pc = 0x16dfc0u;
}
