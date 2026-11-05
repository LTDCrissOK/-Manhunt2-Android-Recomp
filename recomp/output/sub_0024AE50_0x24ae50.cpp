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

// Function: sub_0024AE50
// Address: 0x24ae50 - 0x24af18
void sub_0024AE50_0x24ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AE50_0x24ae50");
#endif

    switch (ctx->pc) {
        case 0x24ae50u: goto label_24ae50;
        case 0x24ae54u: goto label_24ae54;
        case 0x24ae58u: goto label_24ae58;
        case 0x24ae5cu: goto label_24ae5c;
        case 0x24ae60u: goto label_24ae60;
        case 0x24ae64u: goto label_24ae64;
        case 0x24ae68u: goto label_24ae68;
        case 0x24ae6cu: goto label_24ae6c;
        case 0x24ae70u: goto label_24ae70;
        case 0x24ae74u: goto label_24ae74;
        case 0x24ae78u: goto label_24ae78;
        case 0x24ae7cu: goto label_24ae7c;
        case 0x24ae80u: goto label_24ae80;
        case 0x24ae84u: goto label_24ae84;
        case 0x24ae88u: goto label_24ae88;
        case 0x24ae8cu: goto label_24ae8c;
        case 0x24ae90u: goto label_24ae90;
        case 0x24ae94u: goto label_24ae94;
        case 0x24ae98u: goto label_24ae98;
        case 0x24ae9cu: goto label_24ae9c;
        case 0x24aea0u: goto label_24aea0;
        case 0x24aea4u: goto label_24aea4;
        case 0x24aea8u: goto label_24aea8;
        case 0x24aeacu: goto label_24aeac;
        case 0x24aeb0u: goto label_24aeb0;
        case 0x24aeb4u: goto label_24aeb4;
        case 0x24aeb8u: goto label_24aeb8;
        case 0x24aebcu: goto label_24aebc;
        case 0x24aec0u: goto label_24aec0;
        case 0x24aec4u: goto label_24aec4;
        case 0x24aec8u: goto label_24aec8;
        case 0x24aeccu: goto label_24aecc;
        case 0x24aed0u: goto label_24aed0;
        case 0x24aed4u: goto label_24aed4;
        case 0x24aed8u: goto label_24aed8;
        case 0x24aedcu: goto label_24aedc;
        case 0x24aee0u: goto label_24aee0;
        case 0x24aee4u: goto label_24aee4;
        case 0x24aee8u: goto label_24aee8;
        case 0x24aeecu: goto label_24aeec;
        case 0x24aef0u: goto label_24aef0;
        case 0x24aef4u: goto label_24aef4;
        case 0x24aef8u: goto label_24aef8;
        case 0x24aefcu: goto label_24aefc;
        case 0x24af00u: goto label_24af00;
        case 0x24af04u: goto label_24af04;
        case 0x24af08u: goto label_24af08;
        case 0x24af0cu: goto label_24af0c;
        case 0x24af10u: goto label_24af10;
        case 0x24af14u: goto label_24af14;
        default: break;
    }

    ctx->pc = 0x24ae50u;

label_24ae50:
    // 0x24ae50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24ae54:
    // 0x24ae54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24ae58:
    // 0x24ae58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24ae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_24ae5c:
    // 0x24ae5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24ae5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24ae60:
    // 0x24ae60: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x24ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_24ae64:
    // 0x24ae64: 0x8c4301cc  lw          $v1, 0x1CC($v0)
    ctx->pc = 0x24ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
label_24ae68:
    // 0x24ae68: 0x60f809  jalr        $v1
label_24ae6c:
    if (ctx->pc == 0x24AE6Cu) {
        ctx->pc = 0x24AE70u;
        goto label_24ae70;
    }
    ctx->pc = 0x24AE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24AE70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AE68u, 0x24AE70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24AE70u;
label_24ae70:
    // 0x24ae70: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x24ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_24ae74:
    // 0x24ae74: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x24ae74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_24ae78:
    // 0x24ae78: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_24ae7c:
    if (ctx->pc == 0x24AE7Cu) {
        ctx->pc = 0x24AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE78u;
        // 0x24ae7c: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AE80u;
        goto label_24ae80;
    }
    ctx->pc = 0x24AE78u;
    {
        const bool branch_taken_0x24ae78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ae78) {
            ctx->pc = 0x24AE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AE78u;
            // 0x24ae7c: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AE9Cu;
            goto label_24ae9c;
        }
    }
    ctx->pc = 0x24AE80u;
label_24ae80:
    // 0x24ae80: 0x920211c1  lbu         $v0, 0x11C1($s0)
    ctx->pc = 0x24ae80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4545)));
label_24ae84:
    // 0x24ae84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24ae84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24ae88:
    // 0x24ae88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_24ae8c:
    if (ctx->pc == 0x24AE8Cu) {
        ctx->pc = 0x24AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE88u;
        // 0x24ae8c: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AE90u;
        goto label_24ae90;
    }
    ctx->pc = 0x24AE88u;
    {
        const bool branch_taken_0x24ae88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ae88) {
            ctx->pc = 0x24AE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AE88u;
            // 0x24ae8c: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AE9Cu;
            goto label_24ae9c;
        }
    }
    ctx->pc = 0x24AE90u;
label_24ae90:
    // 0x24ae90: 0xc0bc9d2  jal         func_2F2748
label_24ae94:
    if (ctx->pc == 0x24AE94u) {
        ctx->pc = 0x24AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE90u;
        // 0x24ae94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AE98u;
        goto label_24ae98;
    }
    ctx->pc = 0x24AE90u;
    SET_GPR_U32(ctx, 31, 0x24AE98u);
    ctx->pc = 0x24AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AE90u;
    // 0x24ae94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2748u, 0x24AE90u, 0x24AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE98u;
label_24ae98:
    // 0x24ae98: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x24ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24ae9c:
    // 0x24ae9c: 0x240507e1  addiu       $a1, $zero, 0x7E1
    ctx->pc = 0x24ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2017));
label_24aea0:
    // 0x24aea0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x24aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_24aea4:
    // 0x24aea4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24aea8:
    // 0x24aea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24aeac:
    // 0x24aeac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24aeb0:
    // 0x24aeb0: 0x1485000e  bne         $a0, $a1, . + 4 + (0xE << 2)
label_24aeb4:
    if (ctx->pc == 0x24AEB4u) {
        ctx->pc = 0x24AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEB0u;
        // 0x24aeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AEB8u;
        goto label_24aeb8;
    }
    ctx->pc = 0x24AEB0u;
    {
        const bool branch_taken_0x24aeb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x24AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEB0u;
        // 0x24aeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aeb0) {
            ctx->pc = 0x24AEECu;
            goto label_24aeec;
        }
    }
    ctx->pc = 0x24AEB8u;
label_24aeb8:
    // 0x24aeb8: 0xc08fc4e  jal         func_23F138
label_24aebc:
    if (ctx->pc == 0x24AEBCu) {
        ctx->pc = 0x24AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEB8u;
        // 0x24aebc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AEC0u;
        goto label_24aec0;
    }
    ctx->pc = 0x24AEB8u;
    SET_GPR_U32(ctx, 31, 0x24AEC0u);
    ctx->pc = 0x24AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEB8u;
    // 0x24aebc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x24AEB8u, 0x24AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEC0u;
label_24aec0:
    // 0x24aec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24aec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24aec4:
    // 0x24aec4: 0xc08bd96  jal         func_22F658
label_24aec8:
    if (ctx->pc == 0x24AEC8u) {
        ctx->pc = 0x24AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEC4u;
        // 0x24aec8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AECCu;
        goto label_24aecc;
    }
    ctx->pc = 0x24AEC4u;
    SET_GPR_U32(ctx, 31, 0x24AECCu);
    ctx->pc = 0x24AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEC4u;
    // 0x24aec8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x24AEC4u, 0x24AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AECCu;
label_24aecc:
    // 0x24aecc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24aed0:
    // 0x24aed0: 0x240607eb  addiu       $a2, $zero, 0x7EB
    ctx->pc = 0x24aed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2027));
label_24aed4:
    // 0x24aed4: 0xc069712  jal         func_1A5C48
label_24aed8:
    if (ctx->pc == 0x24AED8u) {
        ctx->pc = 0x24AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AED4u;
        // 0x24aed8: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AEDCu;
        goto label_24aedc;
    }
    ctx->pc = 0x24AED4u;
    SET_GPR_U32(ctx, 31, 0x24AEDCu);
    ctx->pc = 0x24AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AED4u;
    // 0x24aed8: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24AED4u, 0x24AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEDCu;
label_24aedc:
    // 0x24aedc: 0xc092b7c  jal         func_24ADF0
label_24aee0:
    if (ctx->pc == 0x24AEE0u) {
        ctx->pc = 0x24AEE4u;
        goto label_24aee4;
    }
    ctx->pc = 0x24AEDCu;
    SET_GPR_U32(ctx, 31, 0x24AEE4u);
    ctx->pc = 0x24ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ADF0u, 0x24AEDCu, 0x24AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEE4u;
label_24aee4:
    // 0x24aee4: 0x10000009  b           . + 4 + (0x9 << 2)
label_24aee8:
    if (ctx->pc == 0x24AEE8u) {
        ctx->pc = 0x24AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEE4u;
        // 0x24aee8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AEECu;
        goto label_24aeec;
    }
    ctx->pc = 0x24AEE4u;
    {
        const bool branch_taken_0x24aee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEE4u;
        // 0x24aee8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aee4) {
            ctx->pc = 0x24AF0Cu;
            goto label_24af0c;
        }
    }
    ctx->pc = 0x24AEECu;
label_24aeec:
    // 0x24aeec: 0xc08bd98  jal         func_22F660
label_24aef0:
    if (ctx->pc == 0x24AEF0u) {
        ctx->pc = 0x24AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEECu;
        // 0x24aef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AEF4u;
        goto label_24aef4;
    }
    ctx->pc = 0x24AEECu;
    SET_GPR_U32(ctx, 31, 0x24AEF4u);
    ctx->pc = 0x24AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEECu;
    // 0x24aef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F660u, 0x24AEECu, 0x24AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEF4u;
label_24aef4:
    // 0x24aef4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24aef8:
    // 0x24aef8: 0xc069832  jal         func_1A60C8
label_24aefc:
    if (ctx->pc == 0x24AEFCu) {
        ctx->pc = 0x24AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEF8u;
        // 0x24aefc: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF00u;
        goto label_24af00;
    }
    ctx->pc = 0x24AEF8u;
    SET_GPR_U32(ctx, 31, 0x24AF00u);
    ctx->pc = 0x24AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEF8u;
    // 0x24aefc: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x24AEF8u, 0x24AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF00u;
label_24af00:
    // 0x24af00: 0xc092b7c  jal         func_24ADF0
label_24af04:
    if (ctx->pc == 0x24AF04u) {
        ctx->pc = 0x24AF08u;
        goto label_24af08;
    }
    ctx->pc = 0x24AF00u;
    SET_GPR_U32(ctx, 31, 0x24AF08u);
    ctx->pc = 0x24ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ADF0u, 0x24AF00u, 0x24AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF08u;
label_24af08:
    // 0x24af08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24af08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24af0c:
    // 0x24af0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24af0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24af10:
    // 0x24af10: 0x3e00008  jr          $ra
label_24af14:
    if (ctx->pc == 0x24AF14u) {
        ctx->pc = 0x24AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF10u;
        // 0x24af14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF18u;
        goto label_fallthrough_0x24af10;
    }
    ctx->pc = 0x24AF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF10u;
        // 0x24af14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24af10:
    ctx->pc = 0x24AF18u;
}
