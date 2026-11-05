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

// Function: sub_00144020
// Address: 0x144020 - 0x1441a8
void sub_00144020_0x144020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144020_0x144020");
#endif

    switch (ctx->pc) {
        case 0x1440a0u: goto label_1440a0;
        case 0x1440b8u: goto label_1440b8;
        case 0x1440c8u: goto label_1440c8;
        case 0x1440e4u: goto label_1440e4;
        case 0x1440f4u: goto label_1440f4;
        case 0x144104u: goto label_144104;
        case 0x14410cu: goto label_14410c;
        case 0x144118u: goto label_144118;
        case 0x144130u: goto label_144130;
        case 0x144140u: goto label_144140;
        case 0x144158u: goto label_144158;
        case 0x144168u: goto label_144168;
        case 0x144178u: goto label_144178;
        case 0x14418cu: goto label_14418c;
        default: break;
    }

    ctx->pc = 0x144020u;

    // 0x144020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x144024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x144028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14402c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14402cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144030: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x144030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x144034: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x144034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x144038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14403c: 0x8e220ab0  lw          $v0, 0xAB0($s1)
    ctx->pc = 0x14403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
    // 0x144040: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x144040u;
    {
        const bool branch_taken_0x144040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144040u;
        // 0x144044: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144040) {
            ctx->pc = 0x14418Cu;
            goto label_14418c;
        }
    }
    ctx->pc = 0x144048u;
    // 0x144048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x144048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14404c: 0x24649a08  addiu       $a0, $v1, -0x65F8
    ctx->pc = 0x14404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x144050: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x144050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144054: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x144054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x144058: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x144058u;
    {
        const bool branch_taken_0x144058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144058u;
        // 0x14405c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144058) {
            ctx->pc = 0x144190u;
            goto label_144190;
        }
    }
    ctx->pc = 0x144060u;
    // 0x144060: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x144060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x144064: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x144064u;
    {
        const bool branch_taken_0x144064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144064) {
            ctx->pc = 0x144068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144064u;
            // 0x144068: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144194u;
            goto label_144194;
        }
    }
    ctx->pc = 0x14406Cu;
    // 0x14406c: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x14406cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x144070: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x144074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x144078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14407c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144080: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x144080u;
    {
        const bool branch_taken_0x144080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144080u;
        // 0x144084: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144080) {
            ctx->pc = 0x144190u;
            goto label_144190;
        }
    }
    ctx->pc = 0x144088u;
    // 0x144088: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x144088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14408c: 0x8c520108  lw          $s2, 0x108($v0)
    ctx->pc = 0x14408cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x144090: 0x52400040  beql        $s2, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x144090u;
    {
        const bool branch_taken_0x144090 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x144090) {
            ctx->pc = 0x144094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144090u;
            // 0x144094: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144194u;
            goto label_144194;
        }
    }
    ctx->pc = 0x144098u;
    // 0x144098: 0xc09522a  jal         func_2548A8
    ctx->pc = 0x144098u;
    SET_GPR_U32(ctx, 31, 0x1440A0u);
    ctx->pc = 0x14409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144098u;
    // 0x14409c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A8u, 0x144098u, 0x1440A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440A0u;
label_1440a0:
    // 0x1440a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1440A0u;
    {
        const bool branch_taken_0x1440a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1440a0) {
            ctx->pc = 0x1440A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1440A0u;
            // 0x1440a4: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1440C0u;
            goto label_1440c0;
        }
    }
    ctx->pc = 0x1440A8u;
    // 0x1440a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1440a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1440acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440b0: 0xc04e88a  jal         func_13A228
    ctx->pc = 0x1440B0u;
    SET_GPR_U32(ctx, 31, 0x1440B8u);
    ctx->pc = 0x1440B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440B0u;
    // 0x1440b4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A228u, 0x1440B0u, 0x1440B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440B8u;
label_1440b8:
    // 0x1440b8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1440B8u;
    {
        const bool branch_taken_0x1440b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440B8u;
        // 0x1440bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440b8) {
            ctx->pc = 0x144190u;
            goto label_144190;
        }
    }
    ctx->pc = 0x1440C0u;
label_1440c0:
    // 0x1440c0: 0xc04e890  jal         func_13A240
    ctx->pc = 0x1440C0u;
    SET_GPR_U32(ctx, 31, 0x1440C8u);
    ctx->pc = 0x1440C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440C0u;
    // 0x1440c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A240u, 0x1440C0u, 0x1440C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440C8u;
label_1440c8:
    // 0x1440c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1440c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440cc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1440CCu;
    {
        const bool branch_taken_0x1440cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440CCu;
        // 0x1440d0: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440cc) {
            ctx->pc = 0x144104u;
            goto label_144104;
        }
    }
    ctx->pc = 0x1440D4u;
    // 0x1440d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1440d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440d8: 0x2453b530  addiu       $s3, $v0, -0x4AD0
    ctx->pc = 0x1440d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948144));
    // 0x1440dc: 0xc04b2b6  jal         func_12CAD8
    ctx->pc = 0x1440DCu;
    SET_GPR_U32(ctx, 31, 0x1440E4u);
    ctx->pc = 0x1440E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440DCu;
    // 0x1440e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAD8u, 0x1440DCu, 0x1440E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440E4u;
label_1440e4:
    // 0x1440e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1440E4u;
    {
        const bool branch_taken_0x1440e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440E4u;
        // 0x1440e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440e4) {
            ctx->pc = 0x144104u;
            goto label_144104;
        }
    }
    ctx->pc = 0x1440ECu;
    // 0x1440ec: 0xc04b2c0  jal         func_12CB00
    ctx->pc = 0x1440ECu;
    SET_GPR_U32(ctx, 31, 0x1440F4u);
    ctx->pc = 0x1440F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440ECu;
    // 0x1440f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CB00u, 0x1440ECu, 0x1440F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440F4u;
label_1440f4:
    // 0x1440f4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1440f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1440f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1440f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440fc: 0xc04e87a  jal         func_13A1E8
    ctx->pc = 0x1440FCu;
    SET_GPR_U32(ctx, 31, 0x144104u);
    ctx->pc = 0x144100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1440FCu;
    // 0x144100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1E8u, 0x1440FCu, 0x144104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144104u;
label_144104:
    // 0x144104: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x144104u;
    SET_GPR_U32(ctx, 31, 0x14410Cu);
    ctx->pc = 0x144108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144104u;
    // 0x144108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1369D0u, 0x144104u, 0x14410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14410Cu;
label_14410c:
    // 0x14410c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14410cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144110: 0xc09522e  jal         func_2548B8
    ctx->pc = 0x144110u;
    SET_GPR_U32(ctx, 31, 0x144118u);
    ctx->pc = 0x144114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144110u;
    // 0x144114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548B8u, 0x144110u, 0x144118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144118u;
label_144118:
    // 0x144118: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x144118u;
    {
        const bool branch_taken_0x144118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144118) {
            ctx->pc = 0x144138u;
            goto label_144138;
        }
    }
    ctx->pc = 0x144120u;
    // 0x144120: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x144120u;
    {
        const bool branch_taken_0x144120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x144124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144120u;
        // 0x144124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144120) {
            ctx->pc = 0x14417Cu;
            goto label_14417c;
        }
    }
    ctx->pc = 0x144128u;
    // 0x144128: 0xc051164  jal         func_144590
    ctx->pc = 0x144128u;
    SET_GPR_U32(ctx, 31, 0x144130u);
    ctx->pc = 0x14412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144128u;
    // 0x14412c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144590u, 0x144128u, 0x144130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144130u;
label_144130:
    // 0x144130: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x144130u;
    {
        const bool branch_taken_0x144130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144130u;
        // 0x144134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144130) {
            ctx->pc = 0x14417Cu;
            goto label_14417c;
        }
    }
    ctx->pc = 0x144138u;
label_144138:
    // 0x144138: 0xc095238  jal         func_2548E0
    ctx->pc = 0x144138u;
    SET_GPR_U32(ctx, 31, 0x144140u);
    ctx->pc = 0x14413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144138u;
    // 0x14413c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548E0u, 0x144138u, 0x144140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144140u;
label_144140:
    // 0x144140: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x144140u;
    {
        const bool branch_taken_0x144140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144140) {
            ctx->pc = 0x144160u;
            goto label_144160;
        }
    }
    ctx->pc = 0x144148u;
    // 0x144148: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x144148u;
    {
        const bool branch_taken_0x144148 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144148u;
        // 0x14414c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144148) {
            ctx->pc = 0x14417Cu;
            goto label_14417c;
        }
    }
    ctx->pc = 0x144150u;
    // 0x144150: 0xc05118a  jal         func_144628
    ctx->pc = 0x144150u;
    SET_GPR_U32(ctx, 31, 0x144158u);
    ctx->pc = 0x144154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144150u;
    // 0x144154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144628u, 0x144150u, 0x144158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144158u;
label_144158:
    // 0x144158: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x144158u;
    {
        const bool branch_taken_0x144158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144158u;
        // 0x14415c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144158) {
            ctx->pc = 0x14417Cu;
            goto label_14417c;
        }
    }
    ctx->pc = 0x144160u;
label_144160:
    // 0x144160: 0xc095242  jal         func_254908
    ctx->pc = 0x144160u;
    SET_GPR_U32(ctx, 31, 0x144168u);
    ctx->pc = 0x144164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144160u;
    // 0x144164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254908u, 0x144160u, 0x144168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144168u;
label_144168:
    // 0x144168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x144168u;
    {
        const bool branch_taken_0x144168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144168u;
        // 0x14416c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144168) {
            ctx->pc = 0x14417Cu;
            goto label_14417c;
        }
    }
    ctx->pc = 0x144170u;
    // 0x144170: 0xc0511b0  jal         func_1446C0
    ctx->pc = 0x144170u;
    SET_GPR_U32(ctx, 31, 0x144178u);
    ctx->pc = 0x144174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144170u;
    // 0x144174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1446C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1446C0u, 0x144170u, 0x144178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144178u;
label_144178:
    // 0x144178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14417c:
    // 0x14417c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x14417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x144180: 0x8c46a9d4  lw          $a2, -0x562C($v0)
    ctx->pc = 0x144180u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x144184: 0xc04e87a  jal         func_13A1E8
    ctx->pc = 0x144184u;
    SET_GPR_U32(ctx, 31, 0x14418Cu);
    ctx->pc = 0x144188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144184u;
    // 0x144188: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1E8u, 0x144184u, 0x14418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14418Cu;
label_14418c:
    // 0x14418c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14418cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_144190:
    // 0x144190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x144190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_144194:
    // 0x144194: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x144194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144198: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x144198u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14419c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14419cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1441a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1441A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1441A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441A0u;
        // 0x1441a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1441A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1441A8u;
}
