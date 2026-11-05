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

// Function: sub_0013B250
// Address: 0x13b250 - 0x13b378
void sub_0013B250_0x13b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B250_0x13b250");
#endif

    switch (ctx->pc) {
        case 0x13b274u: goto label_13b274;
        case 0x13b290u: goto label_13b290;
        case 0x13b2a0u: goto label_13b2a0;
        case 0x13b2b0u: goto label_13b2b0;
        case 0x13b2b8u: goto label_13b2b8;
        case 0x13b2c8u: goto label_13b2c8;
        case 0x13b2e0u: goto label_13b2e0;
        case 0x13b304u: goto label_13b304;
        case 0x13b310u: goto label_13b310;
        case 0x13b32cu: goto label_13b32c;
        case 0x13b340u: goto label_13b340;
        case 0x13b35cu: goto label_13b35c;
        default: break;
    }

    ctx->pc = 0x13b250u;

    // 0x13b250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b254: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13b258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b25c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13b25cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13b260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b264: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13b268: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13b268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13b26c: 0xc04e866  jal         func_13A198
    ctx->pc = 0x13B26Cu;
    SET_GPR_U32(ctx, 31, 0x13B274u);
    ctx->pc = 0x13B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B26Cu;
    // 0x13b270: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x13B26Cu, 0x13B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B274u;
label_13b274:
    // 0x13b274: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x13b274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13b278: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x13B278u;
    {
        const bool branch_taken_0x13b278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B278u;
        // 0x13b27c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b278) {
            ctx->pc = 0x13B35Cu;
            goto label_13b35c;
        }
    }
    ctx->pc = 0x13B280u;
    // 0x13b280: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b280u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b288: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x13B288u;
    SET_GPR_U32(ctx, 31, 0x13B290u);
    ctx->pc = 0x13B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B288u;
    // 0x13b28c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x13B288u, 0x13B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B290u;
label_13b290:
    // 0x13b290: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x13b290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b294: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b294u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b298: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x13B298u;
    SET_GPR_U32(ctx, 31, 0x13B2A0u);
    ctx->pc = 0x13B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B298u;
    // 0x13b29c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x13B298u, 0x13B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B2A0u;
label_13b2a0:
    // 0x13b2a0: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b2a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b2a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b2a8: 0xc04e860  jal         func_13A180
    ctx->pc = 0x13B2A8u;
    SET_GPR_U32(ctx, 31, 0x13B2B0u);
    ctx->pc = 0x13B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B2A8u;
    // 0x13b2ac: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x13B2A8u, 0x13B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B2B0u;
label_13b2b0:
    // 0x13b2b0: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x13B2B0u;
    SET_GPR_U32(ctx, 31, 0x13B2B8u);
    ctx->pc = 0x13B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B2B0u;
    // 0x13b2b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x13B2B0u, 0x13B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B2B8u;
label_13b2b8:
    // 0x13b2b8: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b2b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b2bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b2c0: 0xc04d930  jal         func_1364C0
    ctx->pc = 0x13B2C0u;
    SET_GPR_U32(ctx, 31, 0x13B2C8u);
    ctx->pc = 0x13B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B2C0u;
    // 0x13b2c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364C0u, 0x13B2C0u, 0x13B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B2C8u;
label_13b2c8:
    // 0x13b2c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B2C8u;
    {
        const bool branch_taken_0x13b2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2C8u;
        // 0x13b2cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2c8) {
            ctx->pc = 0x13B2D8u;
            goto label_13b2d8;
        }
    }
    ctx->pc = 0x13B2D0u;
    // 0x13b2d0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x13b2d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b2d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13b2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b2d8:
    // 0x13b2d8: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x13B2D8u;
    SET_GPR_U32(ctx, 31, 0x13B2E0u);
    ctx->pc = 0x13B2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B2D8u;
    // 0x13b2dc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x13B2D8u, 0x13B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B2E0u;
label_13b2e0:
    // 0x13b2e0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x13b2e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b2e4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x13b2e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b2e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13b2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b2ec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x13b2ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b2f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x13b2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b2f4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x13b2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13b2f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b2fc: 0xc04daca  jal         func_136B28
    ctx->pc = 0x13B2FCu;
    SET_GPR_U32(ctx, 31, 0x13B304u);
    ctx->pc = 0x13B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B2FCu;
    // 0x13b300: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x13B2FCu, 0x13B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B304u;
label_13b304:
    // 0x13b304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b308: 0xc046030  jal         func_1180C0
    ctx->pc = 0x13B308u;
    SET_GPR_U32(ctx, 31, 0x13B310u);
    ctx->pc = 0x13B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B308u;
    // 0x13b30c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x13B308u, 0x13B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B310u;
label_13b310:
    // 0x13b310: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b310u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b318: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13b318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13b31c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13b320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13b320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b324: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x13B324u;
    SET_GPR_U32(ctx, 31, 0x13B32Cu);
    ctx->pc = 0x13B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B324u;
    // 0x13b328: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x13B324u, 0x13B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B32Cu;
label_13b32c:
    // 0x13b32c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b330: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b334: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x13b334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b338: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x13B338u;
    SET_GPR_U32(ctx, 31, 0x13B340u);
    ctx->pc = 0x13B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B338u;
    // 0x13b33c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x13B338u, 0x13B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B340u;
label_13b340:
    // 0x13b340: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13b340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13b344: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x13b344u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13b348: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13b34c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13b34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13b350: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13b350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13b354: 0xc043c56  jal         func_10F158
    ctx->pc = 0x13B354u;
    SET_GPR_U32(ctx, 31, 0x13B35Cu);
    ctx->pc = 0x13B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B354u;
    // 0x13b358: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x13B354u, 0x13B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B35Cu;
label_13b35c:
    // 0x13b35c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b360: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b364: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13b364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b368: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13b368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b36c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13b36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b370: 0x3e00008  jr          $ra
    ctx->pc = 0x13B370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B370u;
        // 0x13b374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B378u;
}
