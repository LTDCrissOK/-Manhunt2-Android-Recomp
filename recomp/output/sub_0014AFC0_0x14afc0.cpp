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

// Function: sub_0014AFC0
// Address: 0x14afc0 - 0x14b108
void sub_0014AFC0_0x14afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AFC0_0x14afc0");
#endif

    switch (ctx->pc) {
        case 0x14afe0u: goto label_14afe0;
        case 0x14affcu: goto label_14affc;
        case 0x14b008u: goto label_14b008;
        case 0x14b018u: goto label_14b018;
        case 0x14b024u: goto label_14b024;
        case 0x14b048u: goto label_14b048;
        case 0x14b064u: goto label_14b064;
        case 0x14b078u: goto label_14b078;
        case 0x14b098u: goto label_14b098;
        case 0x14b0c8u: goto label_14b0c8;
        case 0x14b0ecu: goto label_14b0ec;
        default: break;
    }

    ctx->pc = 0x14afc0u;

    // 0x14afc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14afc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14afc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14afcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14afccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afd0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14afd4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14afd8: 0xc052ae4  jal         func_14AB90
    ctx->pc = 0x14AFD8u;
    SET_GPR_U32(ctx, 31, 0x14AFE0u);
    ctx->pc = 0x14AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AFD8u;
    // 0x14afdc: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB90u, 0x14AFD8u, 0x14AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFE0u;
label_14afe0:
    // 0x14afe0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14afe4: 0x10430042  beq         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x14AFE4u;
    {
        const bool branch_taken_0x14afe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFE4u;
        // 0x14afe8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afe4) {
            ctx->pc = 0x14B0F0u;
            goto label_14b0f0;
        }
    }
    ctx->pc = 0x14AFECu;
    // 0x14afec: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14afecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14aff0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14aff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14aff4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14AFF4u;
    SET_GPR_U32(ctx, 31, 0x14AFFCu);
    ctx->pc = 0x14AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AFF4u;
    // 0x14aff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14AFF4u, 0x14AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFFCu;
label_14affc:
    // 0x14affc: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14affcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14b000: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14B000u;
    SET_GPR_U32(ctx, 31, 0x14B008u);
    ctx->pc = 0x14B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B000u;
    // 0x14b004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14B000u, 0x14B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B008u;
label_14b008:
    // 0x14b008: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14b008u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14b00c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14b010: 0xc052ade  jal         func_14AB78
    ctx->pc = 0x14B010u;
    SET_GPR_U32(ctx, 31, 0x14B018u);
    ctx->pc = 0x14B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B010u;
    // 0x14b014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB78u, 0x14B010u, 0x14B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B018u;
label_14b018:
    // 0x14b018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b01c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14B01Cu;
    SET_GPR_U32(ctx, 31, 0x14B024u);
    ctx->pc = 0x14B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B01Cu;
    // 0x14b020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14B01Cu, 0x14B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B024u;
label_14b024:
    // 0x14b024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b028: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14b028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b02c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14b02cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b030: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14b030u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b038: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b03c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b040: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14B040u;
    SET_GPR_U32(ctx, 31, 0x14B048u);
    ctx->pc = 0x14B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B040u;
    // 0x14b044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14B040u, 0x14B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B048u;
label_14b048:
    // 0x14b048: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14b048u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14b04c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b050: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14b050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14b054: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14b054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14b058: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b05c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14B05Cu;
    SET_GPR_U32(ctx, 31, 0x14B064u);
    ctx->pc = 0x14B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B05Cu;
    // 0x14b060: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14B05Cu, 0x14B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B064u;
label_14b064:
    // 0x14b064: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14b064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b068: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14b068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b06c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14b06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b070: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14B070u;
    SET_GPR_U32(ctx, 31, 0x14B078u);
    ctx->pc = 0x14B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B070u;
    // 0x14b074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14B070u, 0x14B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B078u;
label_14b078:
    // 0x14b078: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x14b078u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x14b07c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x14b07cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14b080: 0x26109a08  addiu       $s0, $s0, -0x65F8
    ctx->pc = 0x14b080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x14b084: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x14b084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x14b088: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x14b088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x14b08c: 0x8e31020c  lw          $s1, 0x20C($s1)
    ctx->pc = 0x14b08cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x14b090: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14B090u;
    SET_GPR_U32(ctx, 31, 0x14B098u);
    ctx->pc = 0x14B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B090u;
    // 0x14b094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14B090u, 0x14B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B098u;
label_14b098:
    // 0x14b098: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14b09c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14b0a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x14b0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14b0a4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x14b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x14b0a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B0A8u;
    {
        const bool branch_taken_0x14b0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b0a8) {
            ctx->pc = 0x14B0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B0A8u;
            // 0x14b0ac: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B0B8u;
            goto label_14b0b8;
        }
    }
    ctx->pc = 0x14B0B0u;
    // 0x14b0b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14B0B0u;
    {
        const bool branch_taken_0x14b0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B0B0u;
        // 0x14b0b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0b0) {
            ctx->pc = 0x14B0C0u;
            goto label_14b0c0;
        }
    }
    ctx->pc = 0x14B0B8u;
label_14b0b8:
    // 0x14b0b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b0bc: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x14b0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14b0c0:
    // 0x14b0c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x14B0C0u;
    SET_GPR_U32(ctx, 31, 0x14B0C8u);
    ctx->pc = 0x14B0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0C0u;
    // 0x14b0c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x14B0C0u, 0x14B0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0C8u;
label_14b0c8:
    // 0x14b0c8: 0x26420570  addiu       $v0, $s2, 0x570
    ctx->pc = 0x14b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1392));
    // 0x14b0cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x14b0ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b0d0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x14b0d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b0d4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x14b0d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x14b0d8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x14b0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14b0dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14b0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0e4: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x14B0E4u;
    SET_GPR_U32(ctx, 31, 0x14B0ECu);
    ctx->pc = 0x14B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0E4u;
    // 0x14b0e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x14B0E4u, 0x14B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0ECu;
label_14b0ec:
    // 0x14b0ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14b0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14b0f0:
    // 0x14b0f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14b0f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14b0f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14b0f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b0f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14b0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x14B0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B0FCu;
        // 0x14b100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B104u;
    // 0x14b104: 0x0  nop
    ctx->pc = 0x14b104u;
    // NOP
    ctx->pc = 0x14b108u;
}
