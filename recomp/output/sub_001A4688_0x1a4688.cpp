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

// Function: sub_001A4688
// Address: 0x1a4688 - 0x1a4758
void sub_001A4688_0x1a4688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4688_0x1a4688");
#endif

    switch (ctx->pc) {
        case 0x1a4688u: goto label_1a4688;
        case 0x1a468cu: goto label_1a468c;
        case 0x1a4690u: goto label_1a4690;
        case 0x1a4694u: goto label_1a4694;
        case 0x1a4698u: goto label_1a4698;
        case 0x1a469cu: goto label_1a469c;
        case 0x1a46a0u: goto label_1a46a0;
        case 0x1a46a4u: goto label_1a46a4;
        case 0x1a46a8u: goto label_1a46a8;
        case 0x1a46acu: goto label_1a46ac;
        case 0x1a46b0u: goto label_1a46b0;
        case 0x1a46b4u: goto label_1a46b4;
        case 0x1a46b8u: goto label_1a46b8;
        case 0x1a46bcu: goto label_1a46bc;
        case 0x1a46c0u: goto label_1a46c0;
        case 0x1a46c4u: goto label_1a46c4;
        case 0x1a46c8u: goto label_1a46c8;
        case 0x1a46ccu: goto label_1a46cc;
        case 0x1a46d0u: goto label_1a46d0;
        case 0x1a46d4u: goto label_1a46d4;
        case 0x1a46d8u: goto label_1a46d8;
        case 0x1a46dcu: goto label_1a46dc;
        case 0x1a46e0u: goto label_1a46e0;
        case 0x1a46e4u: goto label_1a46e4;
        case 0x1a46e8u: goto label_1a46e8;
        case 0x1a46ecu: goto label_1a46ec;
        case 0x1a46f0u: goto label_1a46f0;
        case 0x1a46f4u: goto label_1a46f4;
        case 0x1a46f8u: goto label_1a46f8;
        case 0x1a46fcu: goto label_1a46fc;
        case 0x1a4700u: goto label_1a4700;
        case 0x1a4704u: goto label_1a4704;
        case 0x1a4708u: goto label_1a4708;
        case 0x1a470cu: goto label_1a470c;
        case 0x1a4710u: goto label_1a4710;
        case 0x1a4714u: goto label_1a4714;
        case 0x1a4718u: goto label_1a4718;
        case 0x1a471cu: goto label_1a471c;
        case 0x1a4720u: goto label_1a4720;
        case 0x1a4724u: goto label_1a4724;
        case 0x1a4728u: goto label_1a4728;
        case 0x1a472cu: goto label_1a472c;
        case 0x1a4730u: goto label_1a4730;
        case 0x1a4734u: goto label_1a4734;
        case 0x1a4738u: goto label_1a4738;
        case 0x1a473cu: goto label_1a473c;
        case 0x1a4740u: goto label_1a4740;
        case 0x1a4744u: goto label_1a4744;
        case 0x1a4748u: goto label_1a4748;
        case 0x1a474cu: goto label_1a474c;
        case 0x1a4750u: goto label_1a4750;
        case 0x1a4754u: goto label_1a4754;
        default: break;
    }

    ctx->pc = 0x1a4688u;

label_1a4688:
    // 0x1a4688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a468c:
    // 0x1a468c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a468cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a4690:
    // 0x1a4690: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a4690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1a4694:
    // 0x1a4694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4698:
    // 0x1a4698: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a4698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a469c:
    // 0x1a469c: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x1a469cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a46a0:
    // 0x1a46a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a46a4:
    // 0x1a46a4: 0x50510027  beql        $v0, $s1, . + 4 + (0x27 << 2)
label_1a46a8:
    if (ctx->pc == 0x1A46A8u) {
        ctx->pc = 0x1A46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46A4u;
        // 0x1a46a8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A46ACu;
        goto label_1a46ac;
    }
    ctx->pc = 0x1A46A4u;
    {
        const bool branch_taken_0x1a46a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a46a4) {
            ctx->pc = 0x1A46A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A46A4u;
            // 0x1a46a8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4744u;
            goto label_1a4744;
        }
    }
    ctx->pc = 0x1A46ACu;
label_1a46ac:
    // 0x1a46ac: 0xc0691d6  jal         func_1A4758
label_1a46b0:
    if (ctx->pc == 0x1A46B0u) {
        ctx->pc = 0x1A46B4u;
        goto label_1a46b4;
    }
    ctx->pc = 0x1A46ACu;
    SET_GPR_U32(ctx, 31, 0x1A46B4u);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A46ACu, 0x1A46B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A46B4u;
label_1a46b4:
    // 0x1a46b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a46b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a46b8:
    // 0x1a46b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a46bc:
    if (ctx->pc == 0x1A46BCu) {
        ctx->pc = 0x1A46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46B8u;
        // 0x1a46bc: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A46C0u;
        goto label_1a46c0;
    }
    ctx->pc = 0x1A46B8u;
    {
        const bool branch_taken_0x1a46b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46B8u;
        // 0x1a46bc: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46b8) {
            ctx->pc = 0x1A46D0u;
            goto label_1a46d0;
        }
    }
    ctx->pc = 0x1A46C0u;
label_1a46c0:
    // 0x1a46c0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a46c4:
    // 0x1a46c4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a46c8:
    // 0x1a46c8: 0x40f809  jalr        $v0
label_1a46cc:
    if (ctx->pc == 0x1A46CCu) {
        ctx->pc = 0x1A46D0u;
        goto label_1a46d0;
    }
    ctx->pc = 0x1A46C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A46D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46C8u, 0x1A46D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A46D0u;
label_1a46d0:
    // 0x1a46d0: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x1a46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1a46d4:
    // 0x1a46d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a46d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a46d8:
    // 0x1a46d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a46dc:
    // 0x1a46dc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a46dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1a46e0:
    // 0x1a46e0: 0xc06faee  jal         func_1BEBB8
label_1a46e4:
    if (ctx->pc == 0x1A46E4u) {
        ctx->pc = 0x1A46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46E0u;
        // 0x1a46e4: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A46E8u;
        goto label_1a46e8;
    }
    ctx->pc = 0x1A46E0u;
    SET_GPR_U32(ctx, 31, 0x1A46E8u);
    ctx->pc = 0x1A46E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A46E0u;
    // 0x1a46e4: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1A46E0u, 0x1A46E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A46E8u;
label_1a46e8:
    // 0x1a46e8: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x1a46e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1a46ec:
    // 0x1a46ec: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x1a46ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
label_1a46f0:
    // 0x1a46f0: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1a46f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1a46f4:
    // 0x1a46f4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a46f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1a46f8:
    // 0x1a46f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a46f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a46fc:
    // 0x1a46fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a46fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a4700:
    // 0x1a4700: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a4700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a4704:
    // 0x1a4704: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a4704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a4708:
    // 0x1a4708: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x1a4708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_1a470c:
    // 0x1a470c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a470cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1a4710:
    // 0x1a4710: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1a4710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1a4714:
    // 0x1a4714: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a4714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a4718:
    // 0x1a4718: 0x40f809  jalr        $v0
label_1a471c:
    if (ctx->pc == 0x1A471Cu) {
        ctx->pc = 0x1A471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4718u;
        // 0x1a471c: 0x24c6f020  addiu       $a2, $a2, -0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4720u;
        goto label_1a4720;
    }
    ctx->pc = 0x1A4718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4720u);
        ctx->pc = 0x1A471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4718u;
        // 0x1a471c: 0x24c6f020  addiu       $a2, $a2, -0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4718u, 0x1A4720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4720u;
label_1a4720:
    // 0x1a4720: 0xc061a16  jal         func_186858
label_1a4724:
    if (ctx->pc == 0x1A4724u) {
        ctx->pc = 0x1A4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4720u;
        // 0x1a4724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4728u;
        goto label_1a4728;
    }
    ctx->pc = 0x1A4720u;
    SET_GPR_U32(ctx, 31, 0x1A4728u);
    ctx->pc = 0x1A4724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4720u;
    // 0x1a4724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4720u, 0x1A4728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4728u;
label_1a4728:
    // 0x1a4728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a472c:
    // 0x1a472c: 0xc06ee66  jal         func_1BB998
label_1a4730:
    if (ctx->pc == 0x1A4730u) {
        ctx->pc = 0x1A4730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A472Cu;
        // 0x1a4730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4734u;
        goto label_1a4734;
    }
    ctx->pc = 0x1A472Cu;
    SET_GPR_U32(ctx, 31, 0x1A4734u);
    ctx->pc = 0x1A4730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A472Cu;
    // 0x1a4730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1A472Cu, 0x1A4734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4734u;
label_1a4734:
    // 0x1a4734: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1a4734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1a4738:
    // 0x1a4738: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1a4738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_1a473c:
    // 0x1a473c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1a473cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1a4740:
    // 0x1a4740: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a4740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4744:
    // 0x1a4744: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a4744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a4748:
    // 0x1a4748: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a4748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a474c:
    // 0x1a474c: 0x3e00008  jr          $ra
label_1a4750:
    if (ctx->pc == 0x1A4750u) {
        ctx->pc = 0x1A4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A474Cu;
        // 0x1a4750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4754u;
        goto label_1a4754;
    }
    ctx->pc = 0x1A474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A474Cu;
        // 0x1a4750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A474Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4754u;
label_1a4754:
    // 0x1a4754: 0x0  nop
    ctx->pc = 0x1a4754u;
    // NOP
    ctx->pc = 0x1a4758u;
}
