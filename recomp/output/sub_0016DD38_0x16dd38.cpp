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

// Function: sub_0016DD38
// Address: 0x16dd38 - 0x16ddd0
void sub_0016DD38_0x16dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DD38_0x16dd38");
#endif

    switch (ctx->pc) {
        case 0x16dd38u: goto label_16dd38;
        case 0x16dd3cu: goto label_16dd3c;
        case 0x16dd40u: goto label_16dd40;
        case 0x16dd44u: goto label_16dd44;
        case 0x16dd48u: goto label_16dd48;
        case 0x16dd4cu: goto label_16dd4c;
        case 0x16dd50u: goto label_16dd50;
        case 0x16dd54u: goto label_16dd54;
        case 0x16dd58u: goto label_16dd58;
        case 0x16dd5cu: goto label_16dd5c;
        case 0x16dd60u: goto label_16dd60;
        case 0x16dd64u: goto label_16dd64;
        case 0x16dd68u: goto label_16dd68;
        case 0x16dd6cu: goto label_16dd6c;
        case 0x16dd70u: goto label_16dd70;
        case 0x16dd74u: goto label_16dd74;
        case 0x16dd78u: goto label_16dd78;
        case 0x16dd7cu: goto label_16dd7c;
        case 0x16dd80u: goto label_16dd80;
        case 0x16dd84u: goto label_16dd84;
        case 0x16dd88u: goto label_16dd88;
        case 0x16dd8cu: goto label_16dd8c;
        case 0x16dd90u: goto label_16dd90;
        case 0x16dd94u: goto label_16dd94;
        case 0x16dd98u: goto label_16dd98;
        case 0x16dd9cu: goto label_16dd9c;
        case 0x16dda0u: goto label_16dda0;
        case 0x16dda4u: goto label_16dda4;
        case 0x16dda8u: goto label_16dda8;
        case 0x16ddacu: goto label_16ddac;
        case 0x16ddb0u: goto label_16ddb0;
        case 0x16ddb4u: goto label_16ddb4;
        case 0x16ddb8u: goto label_16ddb8;
        case 0x16ddbcu: goto label_16ddbc;
        case 0x16ddc0u: goto label_16ddc0;
        case 0x16ddc4u: goto label_16ddc4;
        case 0x16ddc8u: goto label_16ddc8;
        case 0x16ddccu: goto label_16ddcc;
        default: break;
    }

    ctx->pc = 0x16dd38u;

label_16dd38:
    // 0x16dd38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16dd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16dd3c:
    // 0x16dd3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16dd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16dd40:
    // 0x16dd40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16dd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16dd44:
    // 0x16dd44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16dd44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16dd48:
    // 0x16dd48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16dd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16dd4c:
    // 0x16dd4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16dd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_16dd50:
    // 0x16dd50: 0xc04f9a4  jal         func_13E690
label_16dd54:
    if (ctx->pc == 0x16DD54u) {
        ctx->pc = 0x16DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD50u;
        // 0x16dd54: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD58u;
        goto label_16dd58;
    }
    ctx->pc = 0x16DD50u;
    SET_GPR_U32(ctx, 31, 0x16DD58u);
    ctx->pc = 0x16DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD50u;
    // 0x16dd54: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x16DD50u, 0x16DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD58u;
label_16dd58:
    // 0x16dd58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16dd5c:
    // 0x16dd5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16dd60:
    // 0x16dd60: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x16dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
label_16dd64:
    // 0x16dd64: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x16dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_16dd68:
    // 0x16dd68: 0xc04f8fc  jal         func_13E3F0
label_16dd6c:
    if (ctx->pc == 0x16DD6Cu) {
        ctx->pc = 0x16DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD68u;
        // 0x16dd6c: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD70u;
        goto label_16dd70;
    }
    ctx->pc = 0x16DD68u;
    SET_GPR_U32(ctx, 31, 0x16DD70u);
    ctx->pc = 0x16DD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD68u;
    // 0x16dd6c: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x16DD68u, 0x16DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD70u;
label_16dd70:
    // 0x16dd70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16dd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16dd74:
    // 0x16dd74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16dd74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16dd78:
    // 0x16dd78: 0xc045fea  jal         func_117FA8
label_16dd7c:
    if (ctx->pc == 0x16DD7Cu) {
        ctx->pc = 0x16DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD78u;
        // 0x16dd7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD80u;
        goto label_16dd80;
    }
    ctx->pc = 0x16DD78u;
    SET_GPR_U32(ctx, 31, 0x16DD80u);
    ctx->pc = 0x16DD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD78u;
    // 0x16dd7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x16DD78u, 0x16DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD80u;
label_16dd80:
    // 0x16dd80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16dd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16dd84:
    // 0x16dd84: 0xc046104  jal         func_118410
label_16dd88:
    if (ctx->pc == 0x16DD88u) {
        ctx->pc = 0x16DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD84u;
        // 0x16dd88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD8Cu;
        goto label_16dd8c;
    }
    ctx->pc = 0x16DD84u;
    SET_GPR_U32(ctx, 31, 0x16DD8Cu);
    ctx->pc = 0x16DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD84u;
    // 0x16dd88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x16DD84u, 0x16DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD8Cu;
label_16dd8c:
    // 0x16dd8c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x16dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16dd90:
    // 0x16dd90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16dd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16dd94:
    // 0x16dd94: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_16dd98:
    // 0x16dd98: 0xc046190  jal         func_118640
label_16dd9c:
    if (ctx->pc == 0x16DD9Cu) {
        ctx->pc = 0x16DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD98u;
        // 0x16dd9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DDA0u;
        goto label_16dda0;
    }
    ctx->pc = 0x16DD98u;
    SET_GPR_U32(ctx, 31, 0x16DDA0u);
    ctx->pc = 0x16DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD98u;
    // 0x16dd9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x16DD98u, 0x16DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DDA0u;
label_16dda0:
    // 0x16dda0: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x16dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_16dda4:
    // 0x16dda4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16dda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16dda8:
    // 0x16dda8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16ddac:
    // 0x16ddac: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x16ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_16ddb0:
    // 0x16ddb0: 0x40f809  jalr        $v0
label_16ddb4:
    if (ctx->pc == 0x16DDB4u) {
        ctx->pc = 0x16DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDB0u;
        // 0x16ddb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DDB8u;
        goto label_16ddb8;
    }
    ctx->pc = 0x16DDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DDB8u);
        ctx->pc = 0x16DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDB0u;
        // 0x16ddb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DDB0u, 0x16DDB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DDB8u;
label_16ddb8:
    // 0x16ddb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ddb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ddbc:
    // 0x16ddbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ddbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16ddc0:
    // 0x16ddc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16ddc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16ddc4:
    // 0x16ddc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16ddc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16ddc8:
    // 0x16ddc8: 0x3e00008  jr          $ra
label_16ddcc:
    if (ctx->pc == 0x16DDCCu) {
        ctx->pc = 0x16DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDC8u;
        // 0x16ddcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DDD0u;
        goto label_fallthrough_0x16ddc8;
    }
    ctx->pc = 0x16DDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDC8u;
        // 0x16ddcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16ddc8:
    ctx->pc = 0x16DDD0u;
}
