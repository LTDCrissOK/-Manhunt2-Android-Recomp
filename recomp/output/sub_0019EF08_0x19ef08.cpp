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

// Function: sub_0019EF08
// Address: 0x19ef08 - 0x19ef88
void sub_0019EF08_0x19ef08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EF08_0x19ef08");
#endif

    switch (ctx->pc) {
        case 0x19ef08u: goto label_19ef08;
        case 0x19ef0cu: goto label_19ef0c;
        case 0x19ef10u: goto label_19ef10;
        case 0x19ef14u: goto label_19ef14;
        case 0x19ef18u: goto label_19ef18;
        case 0x19ef1cu: goto label_19ef1c;
        case 0x19ef20u: goto label_19ef20;
        case 0x19ef24u: goto label_19ef24;
        case 0x19ef28u: goto label_19ef28;
        case 0x19ef2cu: goto label_19ef2c;
        case 0x19ef30u: goto label_19ef30;
        case 0x19ef34u: goto label_19ef34;
        case 0x19ef38u: goto label_19ef38;
        case 0x19ef3cu: goto label_19ef3c;
        case 0x19ef40u: goto label_19ef40;
        case 0x19ef44u: goto label_19ef44;
        case 0x19ef48u: goto label_19ef48;
        case 0x19ef4cu: goto label_19ef4c;
        case 0x19ef50u: goto label_19ef50;
        case 0x19ef54u: goto label_19ef54;
        case 0x19ef58u: goto label_19ef58;
        case 0x19ef5cu: goto label_19ef5c;
        case 0x19ef60u: goto label_19ef60;
        case 0x19ef64u: goto label_19ef64;
        case 0x19ef68u: goto label_19ef68;
        case 0x19ef6cu: goto label_19ef6c;
        case 0x19ef70u: goto label_19ef70;
        case 0x19ef74u: goto label_19ef74;
        case 0x19ef78u: goto label_19ef78;
        case 0x19ef7cu: goto label_19ef7c;
        case 0x19ef80u: goto label_19ef80;
        case 0x19ef84u: goto label_19ef84;
        default: break;
    }

    ctx->pc = 0x19ef08u;

label_19ef08:
    // 0x19ef08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ef08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19ef0c:
    // 0x19ef0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ef10:
    // 0x19ef10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ef14:
    // 0x19ef14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19ef18:
    // 0x19ef18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ef18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ef1c:
    // 0x19ef1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19ef20:
    // 0x19ef20: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19ef24:
    // 0x19ef24: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_19ef28:
    if (ctx->pc == 0x19EF28u) {
        ctx->pc = 0x19EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF24u;
        // 0x19ef28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF2Cu;
        goto label_19ef2c;
    }
    ctx->pc = 0x19EF24u;
    {
        const bool branch_taken_0x19ef24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF24u;
        // 0x19ef28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef24) {
            ctx->pc = 0x19EF70u;
            goto label_19ef70;
        }
    }
    ctx->pc = 0x19EF2Cu;
label_19ef2c:
    // 0x19ef2c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19ef30:
    // 0x19ef30: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19ef34:
    if (ctx->pc == 0x19EF34u) {
        ctx->pc = 0x19EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF30u;
        // 0x19ef34: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF38u;
        goto label_19ef38;
    }
    ctx->pc = 0x19EF30u;
    {
        const bool branch_taken_0x19ef30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF30u;
        // 0x19ef34: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef30) {
            ctx->pc = 0x19EF48u;
            goto label_19ef48;
        }
    }
    ctx->pc = 0x19EF38u;
label_19ef38:
    // 0x19ef38: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19ef3c:
    // 0x19ef3c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19ef40:
    // 0x19ef40: 0x40f809  jalr        $v0
label_19ef44:
    if (ctx->pc == 0x19EF44u) {
        ctx->pc = 0x19EF48u;
        goto label_19ef48;
    }
    ctx->pc = 0x19EF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19EF48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EF40u, 0x19EF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EF48u;
label_19ef48:
    // 0x19ef48: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x19ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19ef4c:
    // 0x19ef4c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19ef4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ef50:
    // 0x19ef50: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x19ef50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ef54:
    // 0x19ef54: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x19ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_19ef58:
    // 0x19ef58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ef58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ef5c:
    // 0x19ef5c: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x19ef5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19ef60:
    // 0x19ef60: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x19ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19ef64:
    // 0x19ef64: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19ef68:
    // 0x19ef68: 0x40f809  jalr        $v0
label_19ef6c:
    if (ctx->pc == 0x19EF6Cu) {
        ctx->pc = 0x19EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF68u;
        // 0x19ef6c: 0x8d051004  lw          $a1, 0x1004($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF70u;
        goto label_19ef70;
    }
    ctx->pc = 0x19EF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19EF70u);
        ctx->pc = 0x19EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF68u;
        // 0x19ef6c: 0x8d051004  lw          $a1, 0x1004($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EF68u, 0x19EF70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EF70u;
label_19ef70:
    // 0x19ef70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ef70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ef74:
    // 0x19ef74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19ef74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19ef78:
    // 0x19ef78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ef78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ef7c:
    // 0x19ef7c: 0x3e00008  jr          $ra
label_19ef80:
    if (ctx->pc == 0x19EF80u) {
        ctx->pc = 0x19EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF7Cu;
        // 0x19ef80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF84u;
        goto label_19ef84;
    }
    ctx->pc = 0x19EF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF7Cu;
        // 0x19ef80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EF84u;
label_19ef84:
    // 0x19ef84: 0x0  nop
    ctx->pc = 0x19ef84u;
    // NOP
    ctx->pc = 0x19ef88u;
}
