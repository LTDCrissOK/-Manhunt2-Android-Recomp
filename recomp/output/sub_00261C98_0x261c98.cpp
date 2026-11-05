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

// Function: sub_00261C98
// Address: 0x261c98 - 0x261d40
void sub_00261C98_0x261c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261C98_0x261c98");
#endif

    switch (ctx->pc) {
        case 0x261c98u: goto label_261c98;
        case 0x261c9cu: goto label_261c9c;
        case 0x261ca0u: goto label_261ca0;
        case 0x261ca4u: goto label_261ca4;
        case 0x261ca8u: goto label_261ca8;
        case 0x261cacu: goto label_261cac;
        case 0x261cb0u: goto label_261cb0;
        case 0x261cb4u: goto label_261cb4;
        case 0x261cb8u: goto label_261cb8;
        case 0x261cbcu: goto label_261cbc;
        case 0x261cc0u: goto label_261cc0;
        case 0x261cc4u: goto label_261cc4;
        case 0x261cc8u: goto label_261cc8;
        case 0x261cccu: goto label_261ccc;
        case 0x261cd0u: goto label_261cd0;
        case 0x261cd4u: goto label_261cd4;
        case 0x261cd8u: goto label_261cd8;
        case 0x261cdcu: goto label_261cdc;
        case 0x261ce0u: goto label_261ce0;
        case 0x261ce4u: goto label_261ce4;
        case 0x261ce8u: goto label_261ce8;
        case 0x261cecu: goto label_261cec;
        case 0x261cf0u: goto label_261cf0;
        case 0x261cf4u: goto label_261cf4;
        case 0x261cf8u: goto label_261cf8;
        case 0x261cfcu: goto label_261cfc;
        case 0x261d00u: goto label_261d00;
        case 0x261d04u: goto label_261d04;
        case 0x261d08u: goto label_261d08;
        case 0x261d0cu: goto label_261d0c;
        case 0x261d10u: goto label_261d10;
        case 0x261d14u: goto label_261d14;
        case 0x261d18u: goto label_261d18;
        case 0x261d1cu: goto label_261d1c;
        case 0x261d20u: goto label_261d20;
        case 0x261d24u: goto label_261d24;
        case 0x261d28u: goto label_261d28;
        case 0x261d2cu: goto label_261d2c;
        case 0x261d30u: goto label_261d30;
        case 0x261d34u: goto label_261d34;
        case 0x261d38u: goto label_261d38;
        case 0x261d3cu: goto label_261d3c;
        default: break;
    }

    ctx->pc = 0x261c98u;

label_261c98:
    // 0x261c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x261c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_261c9c:
    // 0x261c9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x261c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_261ca0:
    // 0x261ca0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x261ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_261ca4:
    // 0x261ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x261ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261ca8:
    // 0x261ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x261ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_261cac:
    // 0x261cac: 0xc0838b2  jal         func_20E2C8
label_261cb0:
    if (ctx->pc == 0x261CB0u) {
        ctx->pc = 0x261CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CACu;
        // 0x261cb0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261CB4u;
        goto label_261cb4;
    }
    ctx->pc = 0x261CACu;
    SET_GPR_U32(ctx, 31, 0x261CB4u);
    ctx->pc = 0x261CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CACu;
    // 0x261cb0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E2C8u, 0x261CACu, 0x261CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261CB4u;
label_261cb4:
    // 0x261cb4: 0xc0d8de2  jal         func_363788
label_261cb8:
    if (ctx->pc == 0x261CB8u) {
        ctx->pc = 0x261CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CB4u;
        // 0x261cb8: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261CBCu;
        goto label_261cbc;
    }
    ctx->pc = 0x261CB4u;
    SET_GPR_U32(ctx, 31, 0x261CBCu);
    ctx->pc = 0x261CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CB4u;
    // 0x261cb8: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x261CB4u, 0x261CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261CBCu;
label_261cbc:
    // 0x261cbc: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x261cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_261cc0:
    // 0x261cc0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_261cc4:
    if (ctx->pc == 0x261CC4u) {
        ctx->pc = 0x261CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CC0u;
        // 0x261cc4: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261CC8u;
        goto label_261cc8;
    }
    ctx->pc = 0x261CC0u;
    {
        const bool branch_taken_0x261cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261cc0) {
            ctx->pc = 0x261CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261CC0u;
            // 0x261cc4: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261D14u;
            goto label_261d14;
        }
    }
    ctx->pc = 0x261CC8u;
label_261cc8:
    // 0x261cc8: 0xc0d8f80  jal         func_363E00
label_261ccc:
    if (ctx->pc == 0x261CCCu) {
        ctx->pc = 0x261CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CC8u;
        // 0x261ccc: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261CD0u;
        goto label_261cd0;
    }
    ctx->pc = 0x261CC8u;
    SET_GPR_U32(ctx, 31, 0x261CD0u);
    ctx->pc = 0x261CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CC8u;
    // 0x261ccc: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E00u, 0x261CC8u, 0x261CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261CD0u;
label_261cd0:
    // 0x261cd0: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x261cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_261cd4:
    // 0x261cd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261cd8:
    // 0x261cd8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x261cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_261cdc:
    // 0x261cdc: 0x40f809  jalr        $v0
label_261ce0:
    if (ctx->pc == 0x261CE0u) {
        ctx->pc = 0x261CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CDCu;
        // 0x261ce0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261CE4u;
        goto label_261ce4;
    }
    ctx->pc = 0x261CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261CE4u);
        ctx->pc = 0x261CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CDCu;
        // 0x261ce0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261CDCu, 0x261CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261CE4u;
label_261ce4:
    // 0x261ce4: 0xc0d8f80  jal         func_363E00
label_261ce8:
    if (ctx->pc == 0x261CE8u) {
        ctx->pc = 0x261CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CE4u;
        // 0x261ce8: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261CECu;
        goto label_261cec;
    }
    ctx->pc = 0x261CE4u;
    SET_GPR_U32(ctx, 31, 0x261CECu);
    ctx->pc = 0x261CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CE4u;
    // 0x261ce8: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E00u, 0x261CE4u, 0x261CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261CECu;
label_261cec:
    // 0x261cec: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x261cecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_261cf0:
    // 0x261cf0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x261cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_261cf4:
    // 0x261cf4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_261cf8:
    if (ctx->pc == 0x261CF8u) {
        ctx->pc = 0x261CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CF4u;
        // 0x261cf8: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261CFCu;
        goto label_261cfc;
    }
    ctx->pc = 0x261CF4u;
    {
        const bool branch_taken_0x261cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261cf4) {
            ctx->pc = 0x261CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261CF4u;
            // 0x261cf8: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261D14u;
            goto label_261d14;
        }
    }
    ctx->pc = 0x261CFCu;
label_261cfc:
    // 0x261cfc: 0xc0c580c  jal         func_316030
label_261d00:
    if (ctx->pc == 0x261D00u) {
        ctx->pc = 0x261D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CFCu;
        // 0x261d00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D04u;
        goto label_261d04;
    }
    ctx->pc = 0x261CFCu;
    SET_GPR_U32(ctx, 31, 0x261D04u);
    ctx->pc = 0x261D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CFCu;
    // 0x261d00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x261CFCu, 0x261D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D04u;
label_261d04:
    // 0x261d04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261d08:
    // 0x261d08: 0xc0c885e  jal         func_322178
label_261d0c:
    if (ctx->pc == 0x261D0Cu) {
        ctx->pc = 0x261D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D08u;
        // 0x261d0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D10u;
        goto label_261d10;
    }
    ctx->pc = 0x261D08u;
    SET_GPR_U32(ctx, 31, 0x261D10u);
    ctx->pc = 0x261D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D08u;
    // 0x261d0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322178u, 0x261D08u, 0x261D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D10u;
label_261d10:
    // 0x261d10: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x261d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_261d14:
    // 0x261d14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x261d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261d18:
    // 0x261d18: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x261d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_261d1c:
    // 0x261d1c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x261d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_261d20:
    // 0x261d20: 0x40f809  jalr        $v0
label_261d24:
    if (ctx->pc == 0x261D24u) {
        ctx->pc = 0x261D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D20u;
        // 0x261d24: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D28u;
        goto label_261d28;
    }
    ctx->pc = 0x261D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261D28u);
        ctx->pc = 0x261D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D20u;
        // 0x261d24: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261D20u, 0x261D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261D28u;
label_261d28:
    // 0x261d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x261d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261d2c:
    // 0x261d2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x261d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_261d30:
    // 0x261d30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x261d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_261d34:
    // 0x261d34: 0x3e00008  jr          $ra
label_261d38:
    if (ctx->pc == 0x261D38u) {
        ctx->pc = 0x261D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D34u;
        // 0x261d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261D3Cu;
        goto label_261d3c;
    }
    ctx->pc = 0x261D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D34u;
        // 0x261d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261D3Cu;
label_261d3c:
    // 0x261d3c: 0x0  nop
    ctx->pc = 0x261d3cu;
    // NOP
    ctx->pc = 0x261d40u;
}
