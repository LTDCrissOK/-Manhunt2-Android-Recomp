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

// Function: sub_00324C00
// Address: 0x324c00 - 0x324c80
void sub_00324C00_0x324c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324C00_0x324c00");
#endif

    switch (ctx->pc) {
        case 0x324c00u: goto label_324c00;
        case 0x324c04u: goto label_324c04;
        case 0x324c08u: goto label_324c08;
        case 0x324c0cu: goto label_324c0c;
        case 0x324c10u: goto label_324c10;
        case 0x324c14u: goto label_324c14;
        case 0x324c18u: goto label_324c18;
        case 0x324c1cu: goto label_324c1c;
        case 0x324c20u: goto label_324c20;
        case 0x324c24u: goto label_324c24;
        case 0x324c28u: goto label_324c28;
        case 0x324c2cu: goto label_324c2c;
        case 0x324c30u: goto label_324c30;
        case 0x324c34u: goto label_324c34;
        case 0x324c38u: goto label_324c38;
        case 0x324c3cu: goto label_324c3c;
        case 0x324c40u: goto label_324c40;
        case 0x324c44u: goto label_324c44;
        case 0x324c48u: goto label_324c48;
        case 0x324c4cu: goto label_324c4c;
        case 0x324c50u: goto label_324c50;
        case 0x324c54u: goto label_324c54;
        case 0x324c58u: goto label_324c58;
        case 0x324c5cu: goto label_324c5c;
        case 0x324c60u: goto label_324c60;
        case 0x324c64u: goto label_324c64;
        case 0x324c68u: goto label_324c68;
        case 0x324c6cu: goto label_324c6c;
        case 0x324c70u: goto label_324c70;
        case 0x324c74u: goto label_324c74;
        case 0x324c78u: goto label_324c78;
        case 0x324c7cu: goto label_324c7c;
        default: break;
    }

    ctx->pc = 0x324c00u;

label_324c00:
    // 0x324c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_324c04:
    // 0x324c04: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x324c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_324c08:
    // 0x324c08: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x324c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_324c0c:
    // 0x324c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_324c10:
    // 0x324c10: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x324c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_324c14:
    // 0x324c14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x324c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_324c18:
    // 0x324c18: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x324c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_324c1c:
    // 0x324c1c: 0xc0c8b5a  jal         func_322D68
label_324c20:
    if (ctx->pc == 0x324C20u) {
        ctx->pc = 0x324C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C1Cu;
        // 0x324c20: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324C24u;
        goto label_324c24;
    }
    ctx->pc = 0x324C1Cu;
    SET_GPR_U32(ctx, 31, 0x324C24u);
    ctx->pc = 0x324C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324C1Cu;
    // 0x324c20: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322D68u, 0x324C1Cu, 0x324C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324C24u;
label_324c24:
    // 0x324c24: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x324c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_324c28:
    // 0x324c28: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x324c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_324c2c:
    // 0x324c2c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_324c30:
    if (ctx->pc == 0x324C30u) {
        ctx->pc = 0x324C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C2Cu;
        // 0x324c30: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324C34u;
        goto label_324c34;
    }
    ctx->pc = 0x324C2Cu;
    {
        const bool branch_taken_0x324c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C2Cu;
        // 0x324c30: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c2c) {
            ctx->pc = 0x324C64u;
            goto label_324c64;
        }
    }
    ctx->pc = 0x324C34u;
label_324c34:
    // 0x324c34: 0x0  nop
    ctx->pc = 0x324c34u;
    // NOP
label_324c38:
    // 0x324c38: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x324c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_324c3c:
    // 0x324c3c: 0x240f809  jalr        $s2
label_324c40:
    if (ctx->pc == 0x324C40u) {
        ctx->pc = 0x324C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C3Cu;
        // 0x324c40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324C44u;
        goto label_324c44;
    }
    ctx->pc = 0x324C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x324C44u);
        ctx->pc = 0x324C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C3Cu;
        // 0x324c40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324C3Cu, 0x324C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324C44u;
label_324c44:
    // 0x324c44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_324c48:
    if (ctx->pc == 0x324C48u) {
        ctx->pc = 0x324C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C44u;
        // 0x324c48: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324C4Cu;
        goto label_324c4c;
    }
    ctx->pc = 0x324C44u;
    {
        const bool branch_taken_0x324c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C44u;
        // 0x324c48: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c44) {
            ctx->pc = 0x324C54u;
            goto label_324c54;
        }
    }
    ctx->pc = 0x324C4Cu;
label_324c4c:
    // 0x324c4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_324c50:
    if (ctx->pc == 0x324C50u) {
        ctx->pc = 0x324C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C4Cu;
        // 0x324c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324C54u;
        goto label_324c54;
    }
    ctx->pc = 0x324C4Cu;
    {
        const bool branch_taken_0x324c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C4Cu;
        // 0x324c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c4c) {
            ctx->pc = 0x324C68u;
            goto label_324c68;
        }
    }
    ctx->pc = 0x324C54u;
label_324c54:
    // 0x324c54: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x324c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_324c58:
    // 0x324c58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x324c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_324c5c:
    // 0x324c5c: 0x1464fff6  bne         $v1, $a0, . + 4 + (-0xA << 2)
label_324c60:
    if (ctx->pc == 0x324C60u) {
        ctx->pc = 0x324C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C5Cu;
        // 0x324c60: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324C64u;
        goto label_324c64;
    }
    ctx->pc = 0x324C5Cu;
    {
        const bool branch_taken_0x324c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x324C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C5Cu;
        // 0x324c60: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c5c) {
            ctx->pc = 0x324C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324c38;
        }
    }
    ctx->pc = 0x324C64u;
label_324c64:
    // 0x324c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_324c68:
    // 0x324c68: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x324c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_324c6c:
    // 0x324c6c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x324c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_324c70:
    // 0x324c70: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x324c70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_324c74:
    // 0x324c74: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x324c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_324c78:
    // 0x324c78: 0x3e00008  jr          $ra
label_324c7c:
    if (ctx->pc == 0x324C7Cu) {
        ctx->pc = 0x324C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C78u;
        // 0x324c7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324C80u;
        goto label_fallthrough_0x324c78;
    }
    ctx->pc = 0x324C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C78u;
        // 0x324c7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x324c78:
    ctx->pc = 0x324C80u;
}
