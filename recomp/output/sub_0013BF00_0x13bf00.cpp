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

// Function: sub_0013BF00
// Address: 0x13bf00 - 0x13bf98
void sub_0013BF00_0x13bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BF00_0x13bf00");
#endif

    switch (ctx->pc) {
        case 0x13bf00u: goto label_13bf00;
        case 0x13bf04u: goto label_13bf04;
        case 0x13bf08u: goto label_13bf08;
        case 0x13bf0cu: goto label_13bf0c;
        case 0x13bf10u: goto label_13bf10;
        case 0x13bf14u: goto label_13bf14;
        case 0x13bf18u: goto label_13bf18;
        case 0x13bf1cu: goto label_13bf1c;
        case 0x13bf20u: goto label_13bf20;
        case 0x13bf24u: goto label_13bf24;
        case 0x13bf28u: goto label_13bf28;
        case 0x13bf2cu: goto label_13bf2c;
        case 0x13bf30u: goto label_13bf30;
        case 0x13bf34u: goto label_13bf34;
        case 0x13bf38u: goto label_13bf38;
        case 0x13bf3cu: goto label_13bf3c;
        case 0x13bf40u: goto label_13bf40;
        case 0x13bf44u: goto label_13bf44;
        case 0x13bf48u: goto label_13bf48;
        case 0x13bf4cu: goto label_13bf4c;
        case 0x13bf50u: goto label_13bf50;
        case 0x13bf54u: goto label_13bf54;
        case 0x13bf58u: goto label_13bf58;
        case 0x13bf5cu: goto label_13bf5c;
        case 0x13bf60u: goto label_13bf60;
        case 0x13bf64u: goto label_13bf64;
        case 0x13bf68u: goto label_13bf68;
        case 0x13bf6cu: goto label_13bf6c;
        case 0x13bf70u: goto label_13bf70;
        case 0x13bf74u: goto label_13bf74;
        case 0x13bf78u: goto label_13bf78;
        case 0x13bf7cu: goto label_13bf7c;
        case 0x13bf80u: goto label_13bf80;
        case 0x13bf84u: goto label_13bf84;
        case 0x13bf88u: goto label_13bf88;
        case 0x13bf8cu: goto label_13bf8c;
        case 0x13bf90u: goto label_13bf90;
        case 0x13bf94u: goto label_13bf94;
        default: break;
    }

    ctx->pc = 0x13bf00u;

label_13bf00:
    // 0x13bf00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13bf04:
    // 0x13bf04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13bf08:
    // 0x13bf08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13bf0c:
    // 0x13bf0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13bf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13bf10:
    // 0x13bf10: 0xc04f750  jal         func_13DD40
label_13bf14:
    if (ctx->pc == 0x13BF14u) {
        ctx->pc = 0x13BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF10u;
        // 0x13bf14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF18u;
        goto label_13bf18;
    }
    ctx->pc = 0x13BF10u;
    SET_GPR_U32(ctx, 31, 0x13BF18u);
    ctx->pc = 0x13BF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BF10u;
    // 0x13bf14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x13BF10u, 0x13BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF18u;
label_13bf18:
    // 0x13bf18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13bf18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13bf1c:
    // 0x13bf1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13bf20:
    // 0x13bf20: 0xc04f112  jal         func_13C448
label_13bf24:
    if (ctx->pc == 0x13BF24u) {
        ctx->pc = 0x13BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF20u;
        // 0x13bf24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF28u;
        goto label_13bf28;
    }
    ctx->pc = 0x13BF20u;
    SET_GPR_U32(ctx, 31, 0x13BF28u);
    ctx->pc = 0x13BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BF20u;
    // 0x13bf24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x13BF20u, 0x13BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF28u;
label_13bf28:
    // 0x13bf28: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_13bf2c:
    if (ctx->pc == 0x13BF2Cu) {
        ctx->pc = 0x13BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF28u;
        // 0x13bf2c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF30u;
        goto label_13bf30;
    }
    ctx->pc = 0x13BF28u;
    {
        const bool branch_taken_0x13bf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF28u;
        // 0x13bf2c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf28) {
            ctx->pc = 0x13BF44u;
            goto label_13bf44;
        }
    }
    ctx->pc = 0x13BF30u;
label_13bf30:
    // 0x13bf30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13bf34:
    // 0x13bf34: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x13bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_13bf38:
    // 0x13bf38: 0x40f809  jalr        $v0
label_13bf3c:
    if (ctx->pc == 0x13BF3Cu) {
        ctx->pc = 0x13BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF38u;
        // 0x13bf3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF40u;
        goto label_13bf40;
    }
    ctx->pc = 0x13BF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13BF40u);
        ctx->pc = 0x13BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF38u;
        // 0x13bf3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BF38u, 0x13BF40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BF40u;
label_13bf40:
    // 0x13bf40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13bf44:
    // 0x13bf44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13bf48:
    // 0x13bf48: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_13bf4c:
    // 0x13bf4c: 0x40f809  jalr        $v0
label_13bf50:
    if (ctx->pc == 0x13BF50u) {
        ctx->pc = 0x13BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF4Cu;
        // 0x13bf50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF54u;
        goto label_13bf54;
    }
    ctx->pc = 0x13BF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13BF54u);
        ctx->pc = 0x13BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF4Cu;
        // 0x13bf50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BF4Cu, 0x13BF54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BF54u;
label_13bf54:
    // 0x13bf54: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13bf58:
    // 0x13bf58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13bf5c:
    // 0x13bf5c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x13bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_13bf60:
    // 0x13bf60: 0x40f809  jalr        $v0
label_13bf64:
    if (ctx->pc == 0x13BF64u) {
        ctx->pc = 0x13BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF60u;
        // 0x13bf64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF68u;
        goto label_13bf68;
    }
    ctx->pc = 0x13BF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13BF68u);
        ctx->pc = 0x13BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF60u;
        // 0x13bf64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BF60u, 0x13BF68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BF68u;
label_13bf68:
    // 0x13bf68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13bf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13bf6c:
    // 0x13bf6c: 0xc04f0ee  jal         func_13C3B8
label_13bf70:
    if (ctx->pc == 0x13BF70u) {
        ctx->pc = 0x13BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF6Cu;
        // 0x13bf70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF74u;
        goto label_13bf74;
    }
    ctx->pc = 0x13BF6Cu;
    SET_GPR_U32(ctx, 31, 0x13BF74u);
    ctx->pc = 0x13BF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BF6Cu;
    // 0x13bf70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C3B8u, 0x13BF6Cu, 0x13BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF74u;
label_13bf74:
    // 0x13bf74: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x13bf74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_13bf78:
    // 0x13bf78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13bf78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13bf7c:
    // 0x13bf7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_13bf80:
    // 0x13bf80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13bf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13bf84:
    // 0x13bf84: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x13bf84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
label_13bf88:
    // 0x13bf88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13bf88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13bf8c:
    // 0x13bf8c: 0x3e00008  jr          $ra
label_13bf90:
    if (ctx->pc == 0x13BF90u) {
        ctx->pc = 0x13BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF8Cu;
        // 0x13bf90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BF94u;
        goto label_13bf94;
    }
    ctx->pc = 0x13BF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF8Cu;
        // 0x13bf90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BF94u;
label_13bf94:
    // 0x13bf94: 0x0  nop
    ctx->pc = 0x13bf94u;
    // NOP
    ctx->pc = 0x13bf98u;
}
