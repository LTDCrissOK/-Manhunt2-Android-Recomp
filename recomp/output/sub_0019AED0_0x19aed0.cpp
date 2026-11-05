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

// Function: sub_0019AED0
// Address: 0x19aed0 - 0x19aff8
void sub_0019AED0_0x19aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AED0_0x19aed0");
#endif

    switch (ctx->pc) {
        case 0x19aed0u: goto label_19aed0;
        case 0x19aed4u: goto label_19aed4;
        case 0x19aed8u: goto label_19aed8;
        case 0x19aedcu: goto label_19aedc;
        case 0x19aee0u: goto label_19aee0;
        case 0x19aee4u: goto label_19aee4;
        case 0x19aee8u: goto label_19aee8;
        case 0x19aeecu: goto label_19aeec;
        case 0x19aef0u: goto label_19aef0;
        case 0x19aef4u: goto label_19aef4;
        case 0x19aef8u: goto label_19aef8;
        case 0x19aefcu: goto label_19aefc;
        case 0x19af00u: goto label_19af00;
        case 0x19af04u: goto label_19af04;
        case 0x19af08u: goto label_19af08;
        case 0x19af0cu: goto label_19af0c;
        case 0x19af10u: goto label_19af10;
        case 0x19af14u: goto label_19af14;
        case 0x19af18u: goto label_19af18;
        case 0x19af1cu: goto label_19af1c;
        case 0x19af20u: goto label_19af20;
        case 0x19af24u: goto label_19af24;
        case 0x19af28u: goto label_19af28;
        case 0x19af2cu: goto label_19af2c;
        case 0x19af30u: goto label_19af30;
        case 0x19af34u: goto label_19af34;
        case 0x19af38u: goto label_19af38;
        case 0x19af3cu: goto label_19af3c;
        case 0x19af40u: goto label_19af40;
        case 0x19af44u: goto label_19af44;
        case 0x19af48u: goto label_19af48;
        case 0x19af4cu: goto label_19af4c;
        case 0x19af50u: goto label_19af50;
        case 0x19af54u: goto label_19af54;
        case 0x19af58u: goto label_19af58;
        case 0x19af5cu: goto label_19af5c;
        case 0x19af60u: goto label_19af60;
        case 0x19af64u: goto label_19af64;
        case 0x19af68u: goto label_19af68;
        case 0x19af6cu: goto label_19af6c;
        case 0x19af70u: goto label_19af70;
        case 0x19af74u: goto label_19af74;
        case 0x19af78u: goto label_19af78;
        case 0x19af7cu: goto label_19af7c;
        case 0x19af80u: goto label_19af80;
        case 0x19af84u: goto label_19af84;
        case 0x19af88u: goto label_19af88;
        case 0x19af8cu: goto label_19af8c;
        case 0x19af90u: goto label_19af90;
        case 0x19af94u: goto label_19af94;
        case 0x19af98u: goto label_19af98;
        case 0x19af9cu: goto label_19af9c;
        case 0x19afa0u: goto label_19afa0;
        case 0x19afa4u: goto label_19afa4;
        case 0x19afa8u: goto label_19afa8;
        case 0x19afacu: goto label_19afac;
        case 0x19afb0u: goto label_19afb0;
        case 0x19afb4u: goto label_19afb4;
        case 0x19afb8u: goto label_19afb8;
        case 0x19afbcu: goto label_19afbc;
        case 0x19afc0u: goto label_19afc0;
        case 0x19afc4u: goto label_19afc4;
        case 0x19afc8u: goto label_19afc8;
        case 0x19afccu: goto label_19afcc;
        case 0x19afd0u: goto label_19afd0;
        case 0x19afd4u: goto label_19afd4;
        case 0x19afd8u: goto label_19afd8;
        case 0x19afdcu: goto label_19afdc;
        case 0x19afe0u: goto label_19afe0;
        case 0x19afe4u: goto label_19afe4;
        case 0x19afe8u: goto label_19afe8;
        case 0x19afecu: goto label_19afec;
        case 0x19aff0u: goto label_19aff0;
        case 0x19aff4u: goto label_19aff4;
        default: break;
    }

    ctx->pc = 0x19aed0u;

label_19aed0:
    // 0x19aed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19aed4:
    // 0x19aed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19aed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19aed8:
    // 0x19aed8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19aedc:
    // 0x19aedc: 0xc061a1e  jal         func_186878
label_19aee0:
    if (ctx->pc == 0x19AEE0u) {
        ctx->pc = 0x19AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEDCu;
        // 0x19aee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AEE4u;
        goto label_19aee4;
    }
    ctx->pc = 0x19AEDCu;
    SET_GPR_U32(ctx, 31, 0x19AEE4u);
    ctx->pc = 0x19AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AEDCu;
    // 0x19aee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19AEDCu, 0x19AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEE4u;
label_19aee4:
    // 0x19aee4: 0xc06d9b2  jal         func_1B66C8
label_19aee8:
    if (ctx->pc == 0x19AEE8u) {
        ctx->pc = 0x19AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEE4u;
        // 0x19aee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AEECu;
        goto label_19aeec;
    }
    ctx->pc = 0x19AEE4u;
    SET_GPR_U32(ctx, 31, 0x19AEECu);
    ctx->pc = 0x19AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AEE4u;
    // 0x19aee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B66C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B66C8u, 0x19AEE4u, 0x19AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEECu;
label_19aeec:
    // 0x19aeec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19aef0:
    if (ctx->pc == 0x19AEF0u) {
        ctx->pc = 0x19AEF4u;
        goto label_19aef4;
    }
    ctx->pc = 0x19AEECu;
    {
        const bool branch_taken_0x19aeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aeec) {
            ctx->pc = 0x19AF04u;
            goto label_19af04;
        }
    }
    ctx->pc = 0x19AEF4u;
label_19aef4:
    // 0x19aef4: 0xc061a1e  jal         func_186878
label_19aef8:
    if (ctx->pc == 0x19AEF8u) {
        ctx->pc = 0x19AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEF4u;
        // 0x19aef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AEFCu;
        goto label_19aefc;
    }
    ctx->pc = 0x19AEF4u;
    SET_GPR_U32(ctx, 31, 0x19AEFCu);
    ctx->pc = 0x19AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AEF4u;
    // 0x19aef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19AEF4u, 0x19AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEFCu;
label_19aefc:
    // 0x19aefc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19af00:
    // 0x19af00: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x19af00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
label_19af04:
    // 0x19af04: 0xc06766e  jal         func_19D9B8
label_19af08:
    if (ctx->pc == 0x19AF08u) {
        ctx->pc = 0x19AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF04u;
        // 0x19af08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF0Cu;
        goto label_19af0c;
    }
    ctx->pc = 0x19AF04u;
    SET_GPR_U32(ctx, 31, 0x19AF0Cu);
    ctx->pc = 0x19AF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF04u;
    // 0x19af08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B8u, 0x19AF04u, 0x19AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF0Cu;
label_19af0c:
    // 0x19af0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19af10:
    if (ctx->pc == 0x19AF10u) {
        ctx->pc = 0x19AF14u;
        goto label_19af14;
    }
    ctx->pc = 0x19AF0Cu;
    {
        const bool branch_taken_0x19af0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19af0c) {
            ctx->pc = 0x19AF24u;
            goto label_19af24;
        }
    }
    ctx->pc = 0x19AF14u;
label_19af14:
    // 0x19af14: 0xc0676b8  jal         func_19DAE0
label_19af18:
    if (ctx->pc == 0x19AF18u) {
        ctx->pc = 0x19AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF14u;
        // 0x19af18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF1Cu;
        goto label_19af1c;
    }
    ctx->pc = 0x19AF14u;
    SET_GPR_U32(ctx, 31, 0x19AF1Cu);
    ctx->pc = 0x19AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF14u;
    // 0x19af18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAE0u, 0x19AF14u, 0x19AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF1Cu;
label_19af1c:
    // 0x19af1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19af20:
    if (ctx->pc == 0x19AF20u) {
        ctx->pc = 0x19AF24u;
        goto label_19af24;
    }
    ctx->pc = 0x19AF1Cu;
    {
        const bool branch_taken_0x19af1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af1c) {
            ctx->pc = 0x19AF34u;
            goto label_19af34;
        }
    }
    ctx->pc = 0x19AF24u;
label_19af24:
    // 0x19af24: 0xc0675e0  jal         func_19D780
label_19af28:
    if (ctx->pc == 0x19AF28u) {
        ctx->pc = 0x19AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF24u;
        // 0x19af28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF2Cu;
        goto label_19af2c;
    }
    ctx->pc = 0x19AF24u;
    SET_GPR_U32(ctx, 31, 0x19AF2Cu);
    ctx->pc = 0x19AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF24u;
    // 0x19af28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D780u, 0x19AF24u, 0x19AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF2Cu;
label_19af2c:
    // 0x19af2c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_19af30:
    if (ctx->pc == 0x19AF30u) {
        ctx->pc = 0x19AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF2Cu;
        // 0x19af30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF34u;
        goto label_19af34;
    }
    ctx->pc = 0x19AF2Cu;
    {
        const bool branch_taken_0x19af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF2Cu;
        // 0x19af30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af2c) {
            ctx->pc = 0x19AFE8u;
            goto label_19afe8;
        }
    }
    ctx->pc = 0x19AF34u;
label_19af34:
    // 0x19af34: 0xc061a1e  jal         func_186878
label_19af38:
    if (ctx->pc == 0x19AF38u) {
        ctx->pc = 0x19AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF34u;
        // 0x19af38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF3Cu;
        goto label_19af3c;
    }
    ctx->pc = 0x19AF34u;
    SET_GPR_U32(ctx, 31, 0x19AF3Cu);
    ctx->pc = 0x19AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF34u;
    // 0x19af38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19AF34u, 0x19AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF3Cu;
label_19af3c:
    // 0x19af3c: 0xc06e0e6  jal         func_1B8398
label_19af40:
    if (ctx->pc == 0x19AF40u) {
        ctx->pc = 0x19AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF3Cu;
        // 0x19af40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF44u;
        goto label_19af44;
    }
    ctx->pc = 0x19AF3Cu;
    SET_GPR_U32(ctx, 31, 0x19AF44u);
    ctx->pc = 0x19AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF3Cu;
    // 0x19af40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x19AF3Cu, 0x19AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF44u;
label_19af44:
    // 0x19af44: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_19af48:
    if (ctx->pc == 0x19AF48u) {
        ctx->pc = 0x19AF4Cu;
        goto label_19af4c;
    }
    ctx->pc = 0x19AF44u;
    {
        const bool branch_taken_0x19af44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19af44) {
            ctx->pc = 0x19AFB8u;
            goto label_19afb8;
        }
    }
    ctx->pc = 0x19AF4Cu;
label_19af4c:
    // 0x19af4c: 0xc061a26  jal         func_186898
label_19af50:
    if (ctx->pc == 0x19AF50u) {
        ctx->pc = 0x19AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF4Cu;
        // 0x19af50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF54u;
        goto label_19af54;
    }
    ctx->pc = 0x19AF4Cu;
    SET_GPR_U32(ctx, 31, 0x19AF54u);
    ctx->pc = 0x19AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF4Cu;
    // 0x19af50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19AF4Cu, 0x19AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF54u;
label_19af54:
    // 0x19af54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19af54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19af58:
    // 0x19af58: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x19af58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_19af5c:
    // 0x19af5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19af5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_19af60:
    // 0x19af60: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_19af64:
    if (ctx->pc == 0x19AF64u) {
        ctx->pc = 0x19AF68u;
        goto label_19af68;
    }
    ctx->pc = 0x19AF60u;
    {
        const bool branch_taken_0x19af60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19af60) {
            ctx->pc = 0x19AF80u;
            goto label_19af80;
        }
    }
    ctx->pc = 0x19AF68u;
label_19af68:
    // 0x19af68: 0xc061a1e  jal         func_186878
label_19af6c:
    if (ctx->pc == 0x19AF6Cu) {
        ctx->pc = 0x19AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF68u;
        // 0x19af6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF70u;
        goto label_19af70;
    }
    ctx->pc = 0x19AF68u;
    SET_GPR_U32(ctx, 31, 0x19AF70u);
    ctx->pc = 0x19AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF68u;
    // 0x19af6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19AF68u, 0x19AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF70u;
label_19af70:
    // 0x19af70: 0xc06d9b2  jal         func_1B66C8
label_19af74:
    if (ctx->pc == 0x19AF74u) {
        ctx->pc = 0x19AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF70u;
        // 0x19af74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF78u;
        goto label_19af78;
    }
    ctx->pc = 0x19AF70u;
    SET_GPR_U32(ctx, 31, 0x19AF78u);
    ctx->pc = 0x19AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF70u;
    // 0x19af74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B66C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B66C8u, 0x19AF70u, 0x19AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF78u;
label_19af78:
    // 0x19af78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19af7c:
    if (ctx->pc == 0x19AF7Cu) {
        ctx->pc = 0x19AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF78u;
        // 0x19af7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF80u;
        goto label_19af80;
    }
    ctx->pc = 0x19AF78u;
    {
        const bool branch_taken_0x19af78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF78u;
        // 0x19af7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af78) {
            ctx->pc = 0x19AF9Cu;
            goto label_19af9c;
        }
    }
    ctx->pc = 0x19AF80u;
label_19af80:
    // 0x19af80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19af80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19af84:
    // 0x19af84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19af84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19af88:
    // 0x19af88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19af88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19af8c:
    // 0x19af8c: 0xc0671ca  jal         func_19C728
label_19af90:
    if (ctx->pc == 0x19AF90u) {
        ctx->pc = 0x19AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF8Cu;
        // 0x19af90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF94u;
        goto label_19af94;
    }
    ctx->pc = 0x19AF8Cu;
    SET_GPR_U32(ctx, 31, 0x19AF94u);
    ctx->pc = 0x19AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF8Cu;
    // 0x19af90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C728u, 0x19AF8Cu, 0x19AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF94u;
label_19af94:
    // 0x19af94: 0x10000014  b           . + 4 + (0x14 << 2)
label_19af98:
    if (ctx->pc == 0x19AF98u) {
        ctx->pc = 0x19AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF94u;
        // 0x19af98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF9Cu;
        goto label_19af9c;
    }
    ctx->pc = 0x19AF94u;
    {
        const bool branch_taken_0x19af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF94u;
        // 0x19af98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af94) {
            ctx->pc = 0x19AFE8u;
            goto label_19afe8;
        }
    }
    ctx->pc = 0x19AF9Cu;
label_19af9c:
    // 0x19af9c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19af9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_19afa0:
    // 0x19afa0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19afa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19afa4:
    // 0x19afa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19afa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19afa8:
    // 0x19afa8: 0xc0674fe  jal         func_19D3F8
label_19afac:
    if (ctx->pc == 0x19AFACu) {
        ctx->pc = 0x19AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFA8u;
        // 0x19afac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFB0u;
        goto label_19afb0;
    }
    ctx->pc = 0x19AFA8u;
    SET_GPR_U32(ctx, 31, 0x19AFB0u);
    ctx->pc = 0x19AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AFA8u;
    // 0x19afac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3F8u, 0x19AFA8u, 0x19AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AFB0u;
label_19afb0:
    // 0x19afb0: 0x1000000d  b           . + 4 + (0xD << 2)
label_19afb4:
    if (ctx->pc == 0x19AFB4u) {
        ctx->pc = 0x19AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFB0u;
        // 0x19afb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFB8u;
        goto label_19afb8;
    }
    ctx->pc = 0x19AFB0u;
    {
        const bool branch_taken_0x19afb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFB0u;
        // 0x19afb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afb0) {
            ctx->pc = 0x19AFE8u;
            goto label_19afe8;
        }
    }
    ctx->pc = 0x19AFB8u;
label_19afb8:
    // 0x19afb8: 0xc061a12  jal         func_186848
label_19afbc:
    if (ctx->pc == 0x19AFBCu) {
        ctx->pc = 0x19AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFB8u;
        // 0x19afbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFC0u;
        goto label_19afc0;
    }
    ctx->pc = 0x19AFB8u;
    SET_GPR_U32(ctx, 31, 0x19AFC0u);
    ctx->pc = 0x19AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AFB8u;
    // 0x19afbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19AFB8u, 0x19AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AFC0u;
label_19afc0:
    // 0x19afc0: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19afc4:
    // 0x19afc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19afc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19afc8:
    // 0x19afc8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19afcc:
    // 0x19afcc: 0x40f809  jalr        $v0
label_19afd0:
    if (ctx->pc == 0x19AFD0u) {
        ctx->pc = 0x19AFD4u;
        goto label_19afd4;
    }
    ctx->pc = 0x19AFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19AFD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AFCCu, 0x19AFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19AFD4u;
label_19afd4:
    // 0x19afd4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_19afd8:
    if (ctx->pc == 0x19AFD8u) {
        ctx->pc = 0x19AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFD4u;
        // 0x19afd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFDCu;
        goto label_19afdc;
    }
    ctx->pc = 0x19AFD4u;
    {
        const bool branch_taken_0x19afd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19afd4) {
            ctx->pc = 0x19AFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AFD4u;
            // 0x19afd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AFE8u;
            goto label_19afe8;
        }
    }
    ctx->pc = 0x19AFDCu;
label_19afdc:
    // 0x19afdc: 0xc067258  jal         func_19C960
label_19afe0:
    if (ctx->pc == 0x19AFE0u) {
        ctx->pc = 0x19AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFDCu;
        // 0x19afe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFE4u;
        goto label_19afe4;
    }
    ctx->pc = 0x19AFDCu;
    SET_GPR_U32(ctx, 31, 0x19AFE4u);
    ctx->pc = 0x19AFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AFDCu;
    // 0x19afe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C960u, 0x19AFDCu, 0x19AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AFE4u;
label_19afe4:
    // 0x19afe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19afe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19afe8:
    // 0x19afe8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19afe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19afec:
    // 0x19afec: 0x3e00008  jr          $ra
label_19aff0:
    if (ctx->pc == 0x19AFF0u) {
        ctx->pc = 0x19AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFECu;
        // 0x19aff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFF4u;
        goto label_19aff4;
    }
    ctx->pc = 0x19AFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFECu;
        // 0x19aff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AFF4u;
label_19aff4:
    // 0x19aff4: 0x0  nop
    ctx->pc = 0x19aff4u;
    // NOP
    ctx->pc = 0x19aff8u;
}
