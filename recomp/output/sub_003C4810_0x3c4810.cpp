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

// Function: sub_003C4810
// Address: 0x3c4810 - 0x3c5718
void sub_003C4810_0x3c4810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4810_0x3c4810");
#endif

    switch (ctx->pc) {
        case 0x3c4860u: goto label_3c4860;
        case 0x3c4868u: goto label_3c4868;
        case 0x3c4888u: goto label_3c4888;
        case 0x3c48d8u: goto label_3c48d8;
        case 0x3c4900u: goto label_3c4900;
        case 0x3c493cu: goto label_3c493c;
        case 0x3c4984u: goto label_3c4984;
        case 0x3c4988u: goto label_3c4988;
        case 0x3c498cu: goto label_3c498c;
        case 0x3c4a48u: goto label_3c4a48;
        case 0x3c4a90u: goto label_3c4a90;
        case 0x3c4c54u: goto label_3c4c54;
        case 0x3c4c78u: goto label_3c4c78;
        case 0x3c4da0u: goto label_3c4da0;
        case 0x3c4df0u: goto label_3c4df0;
        case 0x3c4df8u: goto label_3c4df8;
        case 0x3c4e14u: goto label_3c4e14;
        case 0x3c4e48u: goto label_3c4e48;
        case 0x3c4e8cu: goto label_3c4e8c;
        case 0x3c4ebcu: goto label_3c4ebc;
        case 0x3c4f60u: goto label_3c4f60;
        case 0x3c4fc8u: goto label_3c4fc8;
        case 0x3c5004u: goto label_3c5004;
        case 0x3c5040u: goto label_3c5040;
        case 0x3c5068u: goto label_3c5068;
        case 0x3c50a4u: goto label_3c50a4;
        case 0x3c5118u: goto label_3c5118;
        case 0x3c518cu: goto label_3c518c;
        case 0x3c51ccu: goto label_3c51cc;
        case 0x3c5200u: goto label_3c5200;
        case 0x3c5268u: goto label_3c5268;
        case 0x3c529cu: goto label_3c529c;
        case 0x3c52d8u: goto label_3c52d8;
        case 0x3c5300u: goto label_3c5300;
        case 0x3c533cu: goto label_3c533c;
        case 0x3c5360u: goto label_3c5360;
        case 0x3c53c8u: goto label_3c53c8;
        case 0x3c53fcu: goto label_3c53fc;
        case 0x3c5438u: goto label_3c5438;
        case 0x3c5460u: goto label_3c5460;
        case 0x3c549cu: goto label_3c549c;
        case 0x3c54c4u: goto label_3c54c4;
        case 0x3c54f0u: goto label_3c54f0;
        case 0x3c5530u: goto label_3c5530;
        case 0x3c5560u: goto label_3c5560;
        case 0x3c55c8u: goto label_3c55c8;
        case 0x3c55fcu: goto label_3c55fc;
        case 0x3c5638u: goto label_3c5638;
        case 0x3c5660u: goto label_3c5660;
        case 0x3c569cu: goto label_3c569c;
        case 0x3c56e0u: goto label_3c56e0;
        default: break;
    }

    ctx->pc = 0x3c4810u;

    // 0x3c4810: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3c4810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x3c4814: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x3c4814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x3c4818: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x3c4818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x3c481c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3c481cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x3c4820: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3c4820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x3c4824: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c4824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4828: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x3c4828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x3c482c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3c482cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4830: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3c4830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x3c4834: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3c4834u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4838: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3c4838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x3c483c: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x3c483cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x3c4840: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x3c4840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x3c4844: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x3c4844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x3c4848: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3c4848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x3c484c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3c484cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3c4850: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3c4850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x3c4854: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3c4854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x3c4858: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3c4858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x3c485c: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x3c485cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_3c4860:
    // 0x3c4860: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x3c4860u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4864: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x3c4864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3c4868:
    // 0x3c4868: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x3c4868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x3c486c: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x3c486cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x3c4870: 0x8ca4cddc  lw          $a0, -0x3224($a1)
    ctx->pc = 0x3c4870u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3c4874: 0x8cc7d178  lw          $a3, -0x2E88($a2)
    ctx->pc = 0x3c4874u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x42D178u));
    // 0x3c4878: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3c4878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3c487c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3c487cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4880: 0xc0f02d8  jal         func_3C0B60
    ctx->pc = 0x3C4880u;
    SET_GPR_U32(ctx, 31, 0x3C4888u);
    ctx->pc = 0x3C4884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4880u;
    // 0x3c4884: 0x8fa8006c  lw          $t0, 0x6C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0B60u, 0x3C4880u, 0x3C4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4888u;
label_3c4888:
    // 0x3c4888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c4888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c488c: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C488Cu;
    {
        const bool branch_taken_0x3c488c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C488Cu;
        // 0x3c4890: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c488c) {
            ctx->pc = 0x3C48A0u;
            goto label_3c48a0;
        }
    }
    ctx->pc = 0x3C4894u;
    // 0x3c4894: 0x1452fff4  bne         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x3C4894u;
    {
        const bool branch_taken_0x3c4894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3C4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4894u;
        // 0x3c4898: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4894) {
            ctx->pc = 0x3C4868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4868;
        }
    }
    ctx->pc = 0x3C489Cu;
    // 0x3c489c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x3c489cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_3c48a0:
    // 0x3c48a0: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x3c48a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x3c48a4: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x3C48A4u;
    {
        const bool branch_taken_0x3c48a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c48a4) {
            ctx->pc = 0x3C4948u;
            goto label_3c4948;
        }
    }
    ctx->pc = 0x3C48ACu;
    // 0x3c48ac: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c48acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c48b0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c48b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c48b4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C48B4u;
    {
        const bool branch_taken_0x3c48b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c48b4) {
            ctx->pc = 0x3C48B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C48B4u;
            // 0x3c48b8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4918u;
            goto label_3c4918;
        }
    }
    ctx->pc = 0x3C48BCu;
    // 0x3c48bc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c48bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c48c0: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x3c48c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3c48c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C48C4u;
    {
        const bool branch_taken_0x3c48c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48C4u;
        // 0x3c48c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c48c4) {
            ctx->pc = 0x3C48F4u;
            goto label_3c48f4;
        }
    }
    ctx->pc = 0x3C48CCu;
    // 0x3c48cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c48ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c48d0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C48D0u;
    SET_GPR_U32(ctx, 31, 0x3C48D8u);
    ctx->pc = 0x3C48D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C48D0u;
    // 0x3c48d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C48D0u, 0x3C48D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C48D8u;
label_3c48d8:
    // 0x3c48d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c48d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c48dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c48dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c48e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3c48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3c48e4: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3c48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3c48e8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c48e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c48ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C48ECu;
    {
        const bool branch_taken_0x3c48ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48ECu;
        // 0x3c48f0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c48ec) {
            ctx->pc = 0x3C493Cu;
            goto label_3c493c;
        }
    }
    ctx->pc = 0x3C48F4u;
label_3c48f4:
    // 0x3c48f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c48f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c48f8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C48F8u;
    SET_GPR_U32(ctx, 31, 0x3C4900u);
    ctx->pc = 0x3C48FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C48F8u;
    // 0x3c48fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C48F8u, 0x3C4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4900u;
label_3c4900:
    // 0x3c4900: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4904: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c4904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4908: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c4908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c490c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c4910: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C4910u;
    {
        const bool branch_taken_0x3c4910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4910u;
        // 0x3c4914: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4910) {
            ctx->pc = 0x3C493Cu;
            goto label_3c493c;
        }
    }
    ctx->pc = 0x3C4918u;
label_3c4918:
    // 0x3c4918: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4918u;
    {
        const bool branch_taken_0x3c4918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4918) {
            ctx->pc = 0x3C491Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4918u;
            // 0x3c491c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C492Cu;
            goto label_3c492c;
        }
    }
    ctx->pc = 0x3C4920u;
    // 0x3c4920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c4920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4924: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c4924u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c4928: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c4928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c492c:
    // 0x3c492c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c492cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4930: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c4930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4934: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C4934u;
    SET_GPR_U32(ctx, 31, 0x3C493Cu);
    ctx->pc = 0x3C4938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4934u;
    // 0x3c4938: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C4934u, 0x3C493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C493Cu;
label_3c493c:
    // 0x3c493c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3c493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c4940: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3c4940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3c4944: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x3c4944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_3c4948:
    // 0x3c4948: 0x5a00035d  blezl       $s0, . + 4 + (0x35D << 2)
    ctx->pc = 0x3C4948u;
    {
        const bool branch_taken_0x3c4948 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x3c4948) {
            ctx->pc = 0x3C494Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4948u;
            // 0x3c494c: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C56C0u;
            goto label_3c56c0;
        }
    }
    ctx->pc = 0x3C4950u;
    // 0x3c4950: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c4950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4954: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C4954u;
    {
        const bool branch_taken_0x3c4954 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3c4954) {
            ctx->pc = 0x3C4958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4954u;
            // 0x3c4958: 0xa3a00040  sb          $zero, 0x40($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4970u;
            goto label_3c4970;
        }
    }
    ctx->pc = 0x3C495Cu;
    // 0x3c495c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c495cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c4960: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c4960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c4964: 0x1440035f  bnez        $v0, . + 4 + (0x35F << 2)
    ctx->pc = 0x3C4964u;
    {
        const bool branch_taken_0x3c4964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4964u;
        // 0x3c4968: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4964) {
            ctx->pc = 0x3C56E4u;
            goto label_3c56e4;
        }
    }
    ctx->pc = 0x3C496Cu;
    // 0x3c496c: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x3c496cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_3c4970:
    // 0x3c4970: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3c4970u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x3c4974: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3c4974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x3c4978: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c4978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c497c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3c497cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x3c4980: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x3c4980u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c4984:
    // 0x3c4984: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x3c4984u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_3c4988:
    // 0x3c4988: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3c4988u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3c498c:
    // 0x3c498c: 0x26a3ffe0  addiu       $v1, $s5, -0x20
    ctx->pc = 0x3c498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967264));
    // 0x3c4990: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x3c4990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x3c4994: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x3C4994u;
    {
        const bool branch_taken_0x3c4994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4994u;
        // 0x3c4998: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4994) {
            ctx->pc = 0x3C4ED4u;
            goto label_3c4ed4;
        }
    }
    ctx->pc = 0x3C499Cu;
    // 0x3c499c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c499cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c49a0: 0x244215c0  addiu       $v0, $v0, 0x15C0
    ctx->pc = 0x3c49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5568));
    // 0x3c49a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c49a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c49a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c49a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c49ac: 0x800008  jr          $a0
    ctx->pc = 0x3C49ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C49B4u: goto label_3c49b4;
            case 0x3C49CCu: goto label_3c49cc;
            case 0x3C49D4u: goto label_3c49d4;
            case 0x3C49DCu: goto label_3c49dc;
            case 0x3C49F4u: goto label_3c49f4;
            case 0x3C49FCu: goto label_3c49fc;
            case 0x3C4A08u: goto label_3c4a08;
            case 0x3C4A7Cu: goto label_3c4a7c;
            case 0x3C4A84u: goto label_3c4a84;
            case 0x3C4AB8u: goto label_3c4ab8;
            case 0x3C4AC0u: goto label_3c4ac0;
            case 0x3C4AD4u: goto label_3c4ad4;
            case 0x3C4ADCu: goto label_3c4adc;
            case 0x3C4B08u: goto label_3c4b08;
            case 0x3C4B0Cu: goto label_3c4b0c;
            case 0x3C4B5Cu: goto label_3c4b5c;
            case 0x3C4BC4u: goto label_3c4bc4;
            case 0x3C4BC8u: goto label_3c4bc8;
            case 0x3C4C08u: goto label_3c4c08;
            case 0x3C4C2Cu: goto label_3c4c2c;
            case 0x3C4C8Cu: goto label_3c4c8c;
            case 0x3C4C90u: goto label_3c4c90;
            case 0x3C4CD0u: goto label_3c4cd0;
            case 0x3C4CDCu: goto label_3c4cdc;
            case 0x3C4ED4u: goto label_3c4ed4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C49ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C49B4u;
label_3c49b4:
    // 0x3c49b4: 0x83a20040  lb          $v0, 0x40($sp)
    ctx->pc = 0x3c49b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c49b8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x3C49B8u;
    {
        const bool branch_taken_0x3c49b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c49b8) {
            ctx->pc = 0x3C49BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C49B8u;
            // 0x3c49bc: 0x82f50000  lb          $s5, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4988;
        }
    }
    ctx->pc = 0x3C49C0u;
    // 0x3c49c0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3c49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3c49c4: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x3C49C4u;
    {
        const bool branch_taken_0x3c49c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C49C4u;
        // 0x3c49c8: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c49c4) {
            ctx->pc = 0x3C4984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4984;
        }
    }
    ctx->pc = 0x3C49CCu;
label_3c49cc:
    // 0x3c49cc: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x3C49CCu;
    {
        const bool branch_taken_0x3c49cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C49CCu;
        // 0x3c49d0: 0x36520001  ori         $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c49cc) {
            ctx->pc = 0x3C4984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4984;
        }
    }
    ctx->pc = 0x3C49D4u;
label_3c49d4:
    // 0x3c49d4: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x3C49D4u;
    {
        const bool branch_taken_0x3c49d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C49D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C49D4u;
        // 0x3c49d8: 0x36520200  ori         $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c49d4) {
            ctx->pc = 0x3C4984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4984;
        }
    }
    ctx->pc = 0x3C49DCu;
label_3c49dc:
    // 0x3c49dc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c49dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c49e0: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x3c49e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c49e4: 0x461ffe7  bgez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3C49E4u;
    {
        const bool branch_taken_0x3c49e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3C49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C49E4u;
        // 0x3c49e8: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c49e4) {
            ctx->pc = 0x3C4984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4984;
        }
    }
    ctx->pc = 0x3C49ECu;
    // 0x3c49ec: 0x31823  negu        $v1, $v1
    ctx->pc = 0x3c49ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3c49f0: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x3c49f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_3c49f4:
    // 0x3c49f4: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x3C49F4u;
    {
        const bool branch_taken_0x3c49f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C49F4u;
        // 0x3c49f8: 0x36520004  ori         $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c49f4) {
            ctx->pc = 0x3C4984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4984;
        }
    }
    ctx->pc = 0x3C49FCu;
label_3c49fc:
    // 0x3c49fc: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3c49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3c4a00: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x3C4A00u;
    {
        const bool branch_taken_0x3c4a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A00u;
        // 0x3c4a04: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4a00) {
            ctx->pc = 0x3C4984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4984;
        }
    }
    ctx->pc = 0x3C4A08u;
label_3c4a08:
    // 0x3c4a08: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x3c4a08u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3c4a0c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3c4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3c4a10: 0x16a20008  bne         $s5, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C4A10u;
    {
        const bool branch_taken_0x3c4a10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A10u;
        // 0x3c4a14: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4a10) {
            ctx->pc = 0x3C4A34u;
            goto label_3c4a34;
        }
    }
    ctx->pc = 0x3C4A18u;
    // 0x3c4a18: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c4a18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c4a1c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3c4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3c4a20: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x3c4a20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c4a24: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x3c4a24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c4a28: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3c4a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3c4a2c: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x3C4A2Cu;
    {
        const bool branch_taken_0x3c4a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A2Cu;
        // 0x3c4a30: 0x202f00b  movn        $fp, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4a2c) {
            ctx->pc = 0x3C4984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4984;
        }
    }
    ctx->pc = 0x3C4A34u;
label_3c4a34:
    // 0x3c4a34: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x3c4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x3c4a38: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3c4a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c4a3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C4A3Cu;
    {
        const bool branch_taken_0x3c4a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A3Cu;
        // 0x3c4a40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4a3c) {
            ctx->pc = 0x3C4A68u;
            goto label_3c4a68;
        }
    }
    ctx->pc = 0x3C4A44u;
    // 0x3c4a44: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3c4a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3c4a48:
    // 0x3c4a48: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x3c4a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c4a4c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3c4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3c4a50: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x3c4a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3c4a54: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x3c4a54u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3c4a58: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x3c4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x3c4a5c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3c4a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c4a60: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3C4A60u;
    {
        const bool branch_taken_0x3c4a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A60u;
        // 0x3c4a64: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4a60) {
            ctx->pc = 0x3C4A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4a48;
        }
    }
    ctx->pc = 0x3C4A68u;
label_3c4a68:
    // 0x3c4a68: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3c4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3c4a6c: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x3c4a6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c4a70: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3c4a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3c4a74: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x3C4A74u;
    {
        const bool branch_taken_0x3c4a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A74u;
        // 0x3c4a78: 0x202f00b  movn        $fp, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4a74) {
            ctx->pc = 0x3C498Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c498c;
        }
    }
    ctx->pc = 0x3C4A7Cu;
label_3c4a7c:
    // 0x3c4a7c: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x3C4A7Cu;
    {
        const bool branch_taken_0x3c4a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A7Cu;
        // 0x3c4a80: 0x36520080  ori         $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4a7c) {
            ctx->pc = 0x3C4984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4984;
        }
    }
    ctx->pc = 0x3C4A84u;
label_3c4a84:
    // 0x3c4a84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c4a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4a88: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3c4a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c4a8c: 0x0  nop
    ctx->pc = 0x3c4a8cu;
    // NOP
label_3c4a90:
    // 0x3c4a90: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x3c4a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c4a94: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3c4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3c4a98: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x3c4a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3c4a9c: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x3c4a9cu;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3c4aa0: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x3c4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x3c4aa4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3c4aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c4aa8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3C4AA8u;
    {
        const bool branch_taken_0x3c4aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AA8u;
        // 0x3c4aac: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4aa8) {
            ctx->pc = 0x3C4A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4a90;
        }
    }
    ctx->pc = 0x3C4AB0u;
    // 0x3c4ab0: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x3C4AB0u;
    {
        const bool branch_taken_0x3c4ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AB0u;
        // 0x3c4ab4: 0xafb00054  sw          $s0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ab0) {
            ctx->pc = 0x3C498Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c498c;
        }
    }
    ctx->pc = 0x3C4AB8u;
label_3c4ab8:
    // 0x3c4ab8: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x3C4AB8u;
    {
        const bool branch_taken_0x3c4ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AB8u;
        // 0x3c4abc: 0x36520040  ori         $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ab8) {
            ctx->pc = 0x3C4984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4984;
        }
    }
    ctx->pc = 0x3C4AC0u;
label_3c4ac0:
    // 0x3c4ac0: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x3c4ac0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3c4ac4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x3c4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x3c4ac8: 0x5462ffae  bnel        $v1, $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x3C4AC8u;
    {
        const bool branch_taken_0x3c4ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c4ac8) {
            ctx->pc = 0x3C4ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4AC8u;
            // 0x3c4acc: 0x36520010  ori         $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4984;
        }
    }
    ctx->pc = 0x3C4AD0u;
    // 0x3c4ad0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3c4ad0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3c4ad4:
    // 0x3c4ad4: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x3C4AD4u;
    {
        const bool branch_taken_0x3c4ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AD4u;
        // 0x3c4ad8: 0x36520020  ori         $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ad4) {
            ctx->pc = 0x3C4984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4984;
        }
    }
    ctx->pc = 0x3C4ADCu;
label_3c4adc:
    // 0x3c4adc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c4adcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c4ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4ae4: 0x9263fff8  lbu         $v1, -0x8($s3)
    ctx->pc = 0x3c4ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c4ae8: 0x32440004  andi        $a0, $s2, 0x4
    ctx->pc = 0x3c4ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3c4aec: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x3c4aecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4af0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3c4af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x3c4af4: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3c4af4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3c4af8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x3c4af8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c4afc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x3c4afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x3c4b00: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x3C4B00u;
    {
        const bool branch_taken_0x3c4b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B00u;
        // 0x3c4b04: 0xa3a00040  sb          $zero, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b00) {
            ctx->pc = 0x3C4EF8u;
            goto label_3c4ef8;
        }
    }
    ctx->pc = 0x3C4B08u;
label_3c4b08:
    // 0x3c4b08: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x3c4b08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_3c4b0c:
    // 0x3c4b0c: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x3c4b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x3c4b10: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C4B10u;
    {
        const bool branch_taken_0x3c4b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4b10) {
            ctx->pc = 0x3C4B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4B10u;
            // 0x3c4b14: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4B28u;
            goto label_3c4b28;
        }
    }
    ctx->pc = 0x3C4B18u;
    // 0x3c4b18: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3c4b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3c4b1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4B1Cu;
    {
        const bool branch_taken_0x3c4b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B1Cu;
        // 0x3c4b20: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b1c) {
            ctx->pc = 0x3C4B30u;
            goto label_3c4b30;
        }
    }
    ctx->pc = 0x3C4B24u;
    // 0x3c4b24: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c4b24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3c4b28:
    // 0x3c4b28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C4B28u;
    {
        const bool branch_taken_0x3c4b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B28u;
        // 0x3c4b2c: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b28) {
            ctx->pc = 0x3C4B44u;
            goto label_3c4b44;
        }
    }
    ctx->pc = 0x3C4B30u;
label_3c4b30:
    // 0x3c4b30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4B30u;
    {
        const bool branch_taken_0x3c4b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B30u;
        // 0x3c4b34: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b30) {
            ctx->pc = 0x3C4B40u;
            goto label_3c4b40;
        }
    }
    ctx->pc = 0x3C4B38u;
    // 0x3c4b38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C4B38u;
    {
        const bool branch_taken_0x3c4b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B38u;
        // 0x3c4b3c: 0x8670fff8  lh          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b38) {
            ctx->pc = 0x3C4B44u;
            goto label_3c4b44;
        }
    }
    ctx->pc = 0x3C4B40u;
label_3c4b40:
    // 0x3c4b40: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x3c4b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3c4b44:
    // 0x3c4b44: 0x601007c  bgez        $s0, . + 4 + (0x7C << 2)
    ctx->pc = 0x3C4B44u;
    {
        const bool branch_taken_0x3c4b44 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3C4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B44u;
        // 0x3c4b48: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b44) {
            ctx->pc = 0x3C4D38u;
            goto label_3c4d38;
        }
    }
    ctx->pc = 0x3C4B4Cu;
    // 0x3c4b4c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3c4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3c4b50: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x3c4b50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x3c4b54: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x3C4B54u;
    {
        const bool branch_taken_0x3c4b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B54u;
        // 0x3c4b58: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b54) {
            ctx->pc = 0x3C4D38u;
            goto label_3c4d38;
        }
    }
    ctx->pc = 0x3C4B5Cu;
label_3c4b5c:
    // 0x3c4b5c: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x3c4b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x3c4b60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C4B60u;
    {
        const bool branch_taken_0x3c4b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B60u;
        // 0x3c4b64: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b60) {
            ctx->pc = 0x3C4B78u;
            goto label_3c4b78;
        }
    }
    ctx->pc = 0x3C4B68u;
    // 0x3c4b68: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c4b68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c4b6c: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3c4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c4b70: 0x1000ff3b  b           . + 4 + (-0xC5 << 2)
    ctx->pc = 0x3C4B70u;
    {
        const bool branch_taken_0x3c4b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B70u;
        // 0x3c4b74: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b70) {
            ctx->pc = 0x3C4860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4860;
        }
    }
    ctx->pc = 0x3C4B78u;
label_3c4b78:
    // 0x3c4b78: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3c4b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3c4b7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C4B7Cu;
    {
        const bool branch_taken_0x3c4b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B7Cu;
        // 0x3c4b80: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b7c) {
            ctx->pc = 0x3C4B94u;
            goto label_3c4b94;
        }
    }
    ctx->pc = 0x3C4B84u;
    // 0x3c4b84: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c4b84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c4b88: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3c4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c4b8c: 0x1000ff34  b           . + 4 + (-0xCC << 2)
    ctx->pc = 0x3C4B8Cu;
    {
        const bool branch_taken_0x3c4b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B8Cu;
        // 0x3c4b90: 0xfc460000  sd          $a2, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b8c) {
            ctx->pc = 0x3C4860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4860;
        }
    }
    ctx->pc = 0x3C4B94u;
label_3c4b94:
    // 0x3c4b94: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x3c4b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x3c4b98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C4B98u;
    {
        const bool branch_taken_0x3c4b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B98u;
        // 0x3c4b9c: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b98) {
            ctx->pc = 0x3C4BB0u;
            goto label_3c4bb0;
        }
    }
    ctx->pc = 0x3C4BA0u;
    // 0x3c4ba0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c4ba0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c4ba4: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3c4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c4ba8: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x3C4BA8u;
    {
        const bool branch_taken_0x3c4ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4BA8u;
        // 0x3c4bac: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ba8) {
            ctx->pc = 0x3C4860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4860;
        }
    }
    ctx->pc = 0x3C4BB0u;
label_3c4bb0:
    // 0x3c4bb0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c4bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c4bb4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x3c4bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c4bb8: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3c4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c4bbc: 0x1000ff28  b           . + 4 + (-0xD8 << 2)
    ctx->pc = 0x3C4BBCu;
    {
        const bool branch_taken_0x3c4bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4BBCu;
        // 0x3c4bc0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4bbc) {
            ctx->pc = 0x3C4860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4860;
        }
    }
    ctx->pc = 0x3C4BC4u;
label_3c4bc4:
    // 0x3c4bc4: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x3c4bc4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_3c4bc8:
    // 0x3c4bc8: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x3c4bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x3c4bcc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C4BCCu;
    {
        const bool branch_taken_0x3c4bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4bcc) {
            ctx->pc = 0x3C4BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4BCCu;
            // 0x3c4bd0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4BE4u;
            goto label_3c4be4;
        }
    }
    ctx->pc = 0x3C4BD4u;
    // 0x3c4bd4: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3c4bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3c4bd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4BD8u;
    {
        const bool branch_taken_0x3c4bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4BD8u;
        // 0x3c4bdc: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4bd8) {
            ctx->pc = 0x3C4BECu;
            goto label_3c4bec;
        }
    }
    ctx->pc = 0x3C4BE0u;
    // 0x3c4be0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c4be0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3c4be4:
    // 0x3c4be4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C4BE4u;
    {
        const bool branch_taken_0x3c4be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4BE4u;
        // 0x3c4be8: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4be4) {
            ctx->pc = 0x3C4C00u;
            goto label_3c4c00;
        }
    }
    ctx->pc = 0x3C4BECu;
label_3c4bec:
    // 0x3c4bec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4BECu;
    {
        const bool branch_taken_0x3c4bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4BECu;
        // 0x3c4bf0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4bec) {
            ctx->pc = 0x3C4BFCu;
            goto label_3c4bfc;
        }
    }
    ctx->pc = 0x3C4BF4u;
    // 0x3c4bf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C4BF4u;
    {
        const bool branch_taken_0x3c4bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4BF4u;
        // 0x3c4bf8: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4bf4) {
            ctx->pc = 0x3C4C00u;
            goto label_3c4c00;
        }
    }
    ctx->pc = 0x3C4BFCu;
label_3c4bfc:
    // 0x3c4bfc: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3c4bfcu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3c4c00:
    // 0x3c4c00: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3C4C00u;
    {
        const bool branch_taken_0x3c4c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C00u;
        // 0x3c4c04: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c00) {
            ctx->pc = 0x3C4D34u;
            goto label_3c4d34;
        }
    }
    ctx->pc = 0x3C4C08u;
label_3c4c08:
    // 0x3c4c08: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c4c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c4c0c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c4c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c4c10: 0x24421560  addiu       $v0, $v0, 0x1560
    ctx->pc = 0x3c4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5472));
    // 0x3c4c14: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x3c4c14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c4c18: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x3c4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x3c4c1c: 0x36520002  ori         $s2, $s2, 0x2
    ctx->pc = 0x3c4c1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x3c4c20: 0x24150078  addiu       $s5, $zero, 0x78
    ctx->pc = 0x3c4c20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3c4c24: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3C4C24u;
    {
        const bool branch_taken_0x3c4c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C24u;
        // 0x3c4c28: 0x8e70fff8  lw          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c24) {
            ctx->pc = 0x3C4D34u;
            goto label_3c4d34;
        }
    }
    ctx->pc = 0x3C4C2Cu;
label_3c4c2c:
    // 0x3c4c2c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c4c2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c4c30: 0x8e74fff8  lw          $s4, -0x8($s3)
    ctx->pc = 0x3c4c30u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c4c34: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C4C34u;
    {
        const bool branch_taken_0x3c4c34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C34u;
        // 0x3c4c38: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c34) {
            ctx->pc = 0x3C4C40u;
            goto label_3c4c40;
        }
    }
    ctx->pc = 0x3C4C3Cu;
    // 0x3c4c3c: 0x24541578  addiu       $s4, $v0, 0x1578
    ctx->pc = 0x3c4c3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 5496));
label_3c4c40:
    // 0x3c4c40: 0x7c0000b  bltz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x3C4C40u;
    {
        const bool branch_taken_0x3c4c40 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x3C4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C40u;
        // 0x3c4c44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c40) {
            ctx->pc = 0x3C4C70u;
            goto label_3c4c70;
        }
    }
    ctx->pc = 0x3C4C48u;
    // 0x3c4c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c4c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4c4c: 0xc0f1680  jal         func_3C5A00
    ctx->pc = 0x3C4C4Cu;
    SET_GPR_U32(ctx, 31, 0x3C4C54u);
    ctx->pc = 0x3C4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4C4Cu;
    // 0x3c4c50: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5A00u, 0x3C4C4Cu, 0x3C4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4C54u;
label_3c4c54:
    // 0x3c4c54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4C54u;
    {
        const bool branch_taken_0x3c4c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C54u;
        // 0x3c4c58: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c54) {
            ctx->pc = 0x3C4C68u;
            goto label_3c4c68;
        }
    }
    ctx->pc = 0x3C4C5Cu;
    // 0x3c4c5c: 0x3c2182a  slt         $v1, $fp, $v0
    ctx->pc = 0x3c4c5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c4c60: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C4C60u;
    {
        const bool branch_taken_0x3c4c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C60u;
        // 0x3c4c64: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c60) {
            ctx->pc = 0x3C4C7Cu;
            goto label_3c4c7c;
        }
    }
    ctx->pc = 0x3C4C68u;
label_3c4c68:
    // 0x3c4c68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4C68u;
    {
        const bool branch_taken_0x3c4c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C68u;
        // 0x3c4c6c: 0xafbe004c  sw          $fp, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c68) {
            ctx->pc = 0x3C4C7Cu;
            goto label_3c4c7c;
        }
    }
    ctx->pc = 0x3C4C70u;
label_3c4c70:
    // 0x3c4c70: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3C4C70u;
    SET_GPR_U32(ctx, 31, 0x3C4C78u);
    ctx->pc = 0x3C4C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4C70u;
    // 0x3c4c74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3C4C70u, 0x3C4C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4C78u;
label_3c4c78:
    // 0x3c4c78: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3c4c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_3c4c7c:
    // 0x3c4c7c: 0x32450004  andi        $a1, $s2, 0x4
    ctx->pc = 0x3c4c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3c4c80: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x3c4c80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c4c84: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3C4C84u;
    {
        const bool branch_taken_0x3c4c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C84u;
        // 0x3c4c88: 0x325e0084  andi        $fp, $s2, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c84) {
            ctx->pc = 0x3C4EF4u;
            goto label_3c4ef4;
        }
    }
    ctx->pc = 0x3C4C8Cu;
label_3c4c8c:
    // 0x3c4c8c: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x3c4c8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_3c4c90:
    // 0x3c4c90: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x3c4c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x3c4c94: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C4C94u;
    {
        const bool branch_taken_0x3c4c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4c94) {
            ctx->pc = 0x3C4C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4C94u;
            // 0x3c4c98: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4CACu;
            goto label_3c4cac;
        }
    }
    ctx->pc = 0x3C4C9Cu;
    // 0x3c4c9c: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3c4c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3c4ca0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4CA0u;
    {
        const bool branch_taken_0x3c4ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CA0u;
        // 0x3c4ca4: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ca0) {
            ctx->pc = 0x3C4CB4u;
            goto label_3c4cb4;
        }
    }
    ctx->pc = 0x3C4CA8u;
    // 0x3c4ca8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c4ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3c4cac:
    // 0x3c4cac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C4CACu;
    {
        const bool branch_taken_0x3c4cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CACu;
        // 0x3c4cb0: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4cac) {
            ctx->pc = 0x3C4CC8u;
            goto label_3c4cc8;
        }
    }
    ctx->pc = 0x3C4CB4u;
label_3c4cb4:
    // 0x3c4cb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4CB4u;
    {
        const bool branch_taken_0x3c4cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CB4u;
        // 0x3c4cb8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4cb4) {
            ctx->pc = 0x3C4CC4u;
            goto label_3c4cc4;
        }
    }
    ctx->pc = 0x3C4CBCu;
    // 0x3c4cbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C4CBCu;
    {
        const bool branch_taken_0x3c4cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CBCu;
        // 0x3c4cc0: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4cbc) {
            ctx->pc = 0x3C4CC8u;
            goto label_3c4cc8;
        }
    }
    ctx->pc = 0x3C4CC4u;
label_3c4cc4:
    // 0x3c4cc4: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3c4cc4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3c4cc8:
    // 0x3c4cc8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3C4CC8u;
    {
        const bool branch_taken_0x3c4cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CC8u;
        // 0x3c4ccc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4cc8) {
            ctx->pc = 0x3C4D34u;
            goto label_3c4d34;
        }
    }
    ctx->pc = 0x3C4CD0u;
label_3c4cd0:
    // 0x3c4cd0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c4cd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4CD4u;
    {
        const bool branch_taken_0x3c4cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CD4u;
        // 0x3c4cd8: 0x24421580  addiu       $v0, $v0, 0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4cd4) {
            ctx->pc = 0x3C4CE4u;
            goto label_3c4ce4;
        }
    }
    ctx->pc = 0x3C4CDCu;
label_3c4cdc:
    // 0x3c4cdc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c4ce0: 0x24421560  addiu       $v0, $v0, 0x1560
    ctx->pc = 0x3c4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5472));
label_3c4ce4:
    // 0x3c4ce4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x3c4ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x3c4ce8: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x3c4ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x3c4cec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C4CECu;
    {
        const bool branch_taken_0x3c4cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4cec) {
            ctx->pc = 0x3C4CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4CECu;
            // 0x3c4cf0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4D04u;
            goto label_3c4d04;
        }
    }
    ctx->pc = 0x3C4CF4u;
    // 0x3c4cf4: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3c4cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3c4cf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4CF8u;
    {
        const bool branch_taken_0x3c4cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CF8u;
        // 0x3c4cfc: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4cf8) {
            ctx->pc = 0x3C4D0Cu;
            goto label_3c4d0c;
        }
    }
    ctx->pc = 0x3C4D00u;
    // 0x3c4d00: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c4d00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3c4d04:
    // 0x3c4d04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C4D04u;
    {
        const bool branch_taken_0x3c4d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D04u;
        // 0x3c4d08: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d04) {
            ctx->pc = 0x3C4D20u;
            goto label_3c4d20;
        }
    }
    ctx->pc = 0x3C4D0Cu;
label_3c4d0c:
    // 0x3c4d0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4D0Cu;
    {
        const bool branch_taken_0x3c4d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D0Cu;
        // 0x3c4d10: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d0c) {
            ctx->pc = 0x3C4D1Cu;
            goto label_3c4d1c;
        }
    }
    ctx->pc = 0x3C4D14u;
    // 0x3c4d14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C4D14u;
    {
        const bool branch_taken_0x3c4d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D14u;
        // 0x3c4d18: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d14) {
            ctx->pc = 0x3C4D20u;
            goto label_3c4d20;
        }
    }
    ctx->pc = 0x3C4D1Cu;
label_3c4d1c:
    // 0x3c4d1c: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3c4d1cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3c4d20:
    // 0x3c4d20: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x3c4d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3c4d24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4D24u;
    {
        const bool branch_taken_0x3c4d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D24u;
        // 0x3c4d28: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d24) {
            ctx->pc = 0x3C4D34u;
            goto label_3c4d34;
        }
    }
    ctx->pc = 0x3C4D2Cu;
    // 0x3c4d2c: 0x36420002  ori         $v0, $s2, 0x2
    ctx->pc = 0x3c4d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x3c4d30: 0x50900b  movn        $s2, $v0, $s0
    ctx->pc = 0x3c4d30u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_3c4d34:
    // 0x3c4d34: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x3c4d34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_3c4d38:
    // 0x3c4d38: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3c4d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4d3c: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4D3Cu;
    {
        const bool branch_taken_0x3c4d3c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3C4D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D3Cu;
        // 0x3c4d40: 0xafbe0058  sw          $fp, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d3c) {
            ctx->pc = 0x3C4D4Cu;
            goto label_3c4d4c;
        }
    }
    ctx->pc = 0x3C4D44u;
    // 0x3c4d44: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x3c4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x3c4d48: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x3c4d48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_3c4d4c:
    // 0x3c4d4c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C4D4Cu;
    {
        const bool branch_taken_0x3c4d4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D4Cu;
        // 0x3c4d50: 0x27b40028  addiu       $s4, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d4c) {
            ctx->pc = 0x3C4D68u;
            goto label_3c4d68;
        }
    }
    ctx->pc = 0x3C4D54u;
    // 0x3c4d54: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x3c4d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3c4d58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3c4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3c4d5c: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3c4d5cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3c4d60: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x3C4D60u;
    {
        const bool branch_taken_0x3c4d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D60u;
        // 0x3c4d64: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d60) {
            ctx->pc = 0x3C4E94u;
            goto label_3c4e94;
        }
    }
    ctx->pc = 0x3C4D68u;
label_3c4d68:
    // 0x3c4d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4d6c: 0x12c2001a  beq         $s6, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C4D6Cu;
    {
        const bool branch_taken_0x3c4d6c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C4D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D6Cu;
        // 0x3c4d70: 0x32450004  andi        $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d6c) {
            ctx->pc = 0x3C4DD8u;
            goto label_3c4dd8;
        }
    }
    ctx->pc = 0x3C4D74u;
    // 0x3c4d74: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C4D74u;
    {
        const bool branch_taken_0x3c4d74 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D74u;
        // 0x3c4d78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d74) {
            ctx->pc = 0x3C4D8Cu;
            goto label_3c4d8c;
        }
    }
    ctx->pc = 0x3C4D7Cu;
    // 0x3c4d7c: 0x12c2002e  beq         $s6, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3C4D7Cu;
    {
        const bool branch_taken_0x3c4d7c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C4D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D7Cu;
        // 0x3c4d80: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d7c) {
            ctx->pc = 0x3C4E38u;
            goto label_3c4e38;
        }
    }
    ctx->pc = 0x3C4D84u;
    // 0x3c4d84: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3C4D84u;
    {
        const bool branch_taken_0x3c4d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D84u;
        // 0x3c4d88: 0x32440004  andi        $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d84) {
            ctx->pc = 0x3C4E78u;
            goto label_3c4e78;
        }
    }
    ctx->pc = 0x3C4D8Cu;
label_3c4d8c:
    // 0x3c4d8c: 0x32440004  andi        $a0, $s2, 0x4
    ctx->pc = 0x3c4d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3c4d90: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x3c4d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3c4d94: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x3c4d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x3c4d98: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3c4d98u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3c4d9c: 0x0  nop
    ctx->pc = 0x3c4d9cu;
    // NOP
label_3c4da0:
    // 0x3c4da0: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x3c4da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x3c4da4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c4da4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3c4da8: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3c4da8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x3c4dac: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x3c4dacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x3c4db0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3c4db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3c4db4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C4DB4u;
    {
        const bool branch_taken_0x3c4db4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DB4u;
        // 0x3c4db8: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4db4) {
            ctx->pc = 0x3C4DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4da0;
        }
    }
    ctx->pc = 0x3C4DBCu;
    // 0x3c4dbc: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3C4DBCu;
    {
        const bool branch_taken_0x3c4dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DBCu;
        // 0x3c4dc0: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4dbc) {
            ctx->pc = 0x3C4E94u;
            goto label_3c4e94;
        }
    }
    ctx->pc = 0x3C4DC4u;
    // 0x3c4dc4: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C4DC4u;
    {
        const bool branch_taken_0x3c4dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DC4u;
        // 0x3c4dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4dc4) {
            ctx->pc = 0x3C4E98u;
            goto label_3c4e98;
        }
    }
    ctx->pc = 0x3C4DCCu;
    // 0x3c4dcc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c4dccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3c4dd0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3C4DD0u;
    {
        const bool branch_taken_0x3c4dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DD0u;
        // 0x3c4dd4: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4dd0) {
            ctx->pc = 0x3C4E98u;
            goto label_3c4e98;
        }
    }
    ctx->pc = 0x3C4DD8u;
label_3c4dd8:
    // 0x3c4dd8: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x3c4dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c4ddc: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3c4ddcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3c4de0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C4DE0u;
    {
        const bool branch_taken_0x3c4de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DE0u;
        // 0x3c4de4: 0xafa50070  sw          $a1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4de0) {
            ctx->pc = 0x3C4E24u;
            goto label_3c4e24;
        }
    }
    ctx->pc = 0x3C4DE8u;
    // 0x3c4de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c4de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4dec: 0x0  nop
    ctx->pc = 0x3c4decu;
    // NOP
label_3c4df0:
    // 0x3c4df0: 0xc0f4d12  jal         func_3D3448
    ctx->pc = 0x3C4DF0u;
    SET_GPR_U32(ctx, 31, 0x3C4DF8u);
    ctx->pc = 0x3C4DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4DF0u;
    // 0x3c4df4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3448u, 0x3C4DF0u, 0x3C4DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4DF8u;
label_3c4df8:
    // 0x3c4df8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c4df8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3c4dfc: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3c4dfcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x3c4e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c4e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4e04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3c4e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3c4e08: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3c4e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c4e0c: 0xc0f4b9e  jal         func_3D2E78
    ctx->pc = 0x3C4E0Cu;
    SET_GPR_U32(ctx, 31, 0x3C4E14u);
    ctx->pc = 0x3C4E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4E0Cu;
    // 0x3c4e10: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E78u, 0x3C4E0Cu, 0x3C4E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4E14u;
label_3c4e14:
    // 0x3c4e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c4e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4e18: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x3c4e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c4e1c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3C4E1Cu;
    {
        const bool branch_taken_0x3c4e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E1Cu;
        // 0x3c4e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4e1c) {
            ctx->pc = 0x3C4DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4df0;
        }
    }
    ctx->pc = 0x3C4E24u;
label_3c4e24:
    // 0x3c4e24: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x3c4e24u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x3c4e28: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c4e28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3c4e2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3c4e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3c4e30: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3C4E30u;
    {
        const bool branch_taken_0x3c4e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E30u;
        // 0x3c4e34: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4e30) {
            ctx->pc = 0x3C4E94u;
            goto label_3c4e94;
        }
    }
    ctx->pc = 0x3C4E38u;
label_3c4e38:
    // 0x3c4e38: 0x32460004  andi        $a2, $s2, 0x4
    ctx->pc = 0x3c4e38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3c4e3c: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3c4e3cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3c4e40: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x3c4e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x3c4e44: 0x0  nop
    ctx->pc = 0x3c4e44u;
    // NOP
label_3c4e48:
    // 0x3c4e48: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x3c4e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c4e4c: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3c4e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x3c4e50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c4e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c4e54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c4e54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c4e58: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c4e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3c4e5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3c4e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c4e60: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x3c4e60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x3c4e64: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3c4e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c4e68: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3C4E68u;
    {
        const bool branch_taken_0x3c4e68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E68u;
        // 0x3c4e6c: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4e68) {
            ctx->pc = 0x3C4E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4e48;
        }
    }
    ctx->pc = 0x3C4E70u;
    // 0x3c4e70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C4E70u;
    {
        const bool branch_taken_0x3c4e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E70u;
        // 0x3c4e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4e70) {
            ctx->pc = 0x3C4E98u;
            goto label_3c4e98;
        }
    }
    ctx->pc = 0x3C4E78u;
label_3c4e78:
    // 0x3c4e78: 0x24541598  addiu       $s4, $v0, 0x1598
    ctx->pc = 0x3c4e78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 5528));
    // 0x3c4e7c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x3c4e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x3c4e80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4e84: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3C4E84u;
    SET_GPR_U32(ctx, 31, 0x3C4E8Cu);
    ctx->pc = 0x3C4E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4E84u;
    // 0x3c4e88: 0x325e0084  andi        $fp, $s2, 0x84 (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3C4E84u, 0x3C4E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4E8Cu;
label_3c4e8c:
    // 0x3c4e8c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3C4E8Cu;
    {
        const bool branch_taken_0x3c4e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E8Cu;
        // 0x3c4e90: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4e8c) {
            ctx->pc = 0x3C4EF8u;
            goto label_3c4ef8;
        }
    }
    ctx->pc = 0x3C4E94u;
label_3c4e94:
    // 0x3c4e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4e98:
    // 0x3c4e98: 0x16c2000b  bne         $s6, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C4E98u;
    {
        const bool branch_taken_0x3c4e98 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E98u;
        // 0x3c4e9c: 0x2682ffd8  addiu       $v0, $s4, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4e98) {
            ctx->pc = 0x3C4EC8u;
            goto label_3c4ec8;
        }
    }
    ctx->pc = 0x3C4EA0u;
    // 0x3c4ea0: 0x32420200  andi        $v0, $s2, 0x200
    ctx->pc = 0x3c4ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
    // 0x3c4ea4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C4EA4u;
    {
        const bool branch_taken_0x3c4ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4EA4u;
        // 0x3c4ea8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ea4) {
            ctx->pc = 0x3C4EC4u;
            goto label_3c4ec4;
        }
    }
    ctx->pc = 0x3C4EACu;
    // 0x3c4eac: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x3c4eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x3c4eb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c4eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4eb4: 0xc0f1156  jal         func_3C4558
    ctx->pc = 0x3C4EB4u;
    SET_GPR_U32(ctx, 31, 0x3C4EBCu);
    ctx->pc = 0x3C4EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4EB4u;
    // 0x3c4eb8: 0x27a7004c  addiu       $a3, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4558u, 0x3C4EB4u, 0x3C4EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4EBCu;
label_3c4ebc:
    // 0x3c4ebc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3C4EBCu;
    {
        const bool branch_taken_0x3c4ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4EBCu;
        // 0x3c4ec0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ebc) {
            ctx->pc = 0x3C4EF8u;
            goto label_3c4ef8;
        }
    }
    ctx->pc = 0x3C4EC4u;
label_3c4ec4:
    // 0x3c4ec4: 0x2682ffd8  addiu       $v0, $s4, -0x28
    ctx->pc = 0x3c4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
label_3c4ec8:
    // 0x3c4ec8: 0x3a21823  subu        $v1, $sp, $v0
    ctx->pc = 0x3c4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3c4ecc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C4ECCu;
    {
        const bool branch_taken_0x3c4ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4ECCu;
        // 0x3c4ed0: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ecc) {
            ctx->pc = 0x3C4EF8u;
            goto label_3c4ef8;
        }
    }
    ctx->pc = 0x3C4ED4u;
label_3c4ed4:
    // 0x3c4ed4: 0x12a001f9  beqz        $s5, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x3C4ED4u;
    {
        const bool branch_taken_0x3c4ed4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4ED4u;
        // 0x3c4ed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ed4) {
            ctx->pc = 0x3C56BCu;
            goto label_3c56bc;
        }
    }
    ctx->pc = 0x3C4EDCu;
    // 0x3c4edc: 0x32450004  andi        $a1, $s2, 0x4
    ctx->pc = 0x3c4edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3c4ee0: 0xa3b50000  sb          $s5, 0x0($sp)
    ctx->pc = 0x3c4ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x3c4ee4: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x3c4ee4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4ee8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3c4ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x3c4eec: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3c4eecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3c4ef0: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x3c4ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_3c4ef4:
    // 0x3c4ef4: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x3c4ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_3c4ef8:
    // 0x3c4ef8: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x3c4ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x3c4efc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3c4efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3c4f00: 0x83a30040  lb          $v1, 0x40($sp)
    ctx->pc = 0x3c4f00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c4f04: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x3c4f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c4f08: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x3c4f08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x3c4f0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4F0Cu;
    {
        const bool branch_taken_0x3c4f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F0Cu;
        // 0x3c4f10: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4f0c) {
            ctx->pc = 0x3C4F20u;
            goto label_3c4f20;
        }
    }
    ctx->pc = 0x3C4F14u;
    // 0x3c4f14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c4f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c4f18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C4F18u;
    {
        const bool branch_taken_0x3c4f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F18u;
        // 0x3c4f1c: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4f18) {
            ctx->pc = 0x3C4F30u;
            goto label_3c4f30;
        }
    }
    ctx->pc = 0x3C4F20u;
label_3c4f20:
    // 0x3c4f20: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3c4f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3c4f24: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x3c4f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x3c4f28: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3c4f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3c4f2c: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x3c4f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_3c4f30:
    // 0x3c4f30: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x3c4f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3c4f34: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3c4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3c4f38: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x3c4f38u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c4f3c: 0x17c00059  bnez        $fp, . + 4 + (0x59 << 2)
    ctx->pc = 0x3C4F3Cu;
    {
        const bool branch_taken_0x3c4f3c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F3Cu;
        // 0x3c4f40: 0xafa60064  sw          $a2, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4f3c) {
            ctx->pc = 0x3C50A4u;
            goto label_3c50a4;
        }
    }
    ctx->pc = 0x3C4F44u;
    // 0x3c4f44: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x3c4f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3c4f48: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x3c4f48u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c4f4c: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3C4F4Cu;
    {
        const bool branch_taken_0x3c4f4c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F4Cu;
        // 0x3c4f50: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4f4c) {
            ctx->pc = 0x3C50A4u;
            goto label_3c50a4;
        }
    }
    ctx->pc = 0x3C4F54u;
    // 0x3c4f54: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3C4F54u;
    {
        const bool branch_taken_0x3c4f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F54u;
        // 0x3c4f58: 0x3c160048  lui         $s6, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4f54) {
            ctx->pc = 0x3C5014u;
            goto label_3c5014;
        }
    }
    ctx->pc = 0x3C4F5Cu;
    // 0x3c4f5c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c4f5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3c4f60:
    // 0x3c4f60: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c4f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c4f64: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C4F64u;
    {
        const bool branch_taken_0x3c4f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4f64) {
            ctx->pc = 0x3C4F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4F64u;
            // 0x3c4f68: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4FE0u;
            goto label_3c4fe0;
        }
    }
    ctx->pc = 0x3C4F6Cu;
    // 0x3c4f6c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c4f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4f70: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3c4f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c4f74: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C4F74u;
    {
        const bool branch_taken_0x3c4f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4f74) {
            ctx->pc = 0x3C4F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4F74u;
            // 0x3c4f78: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4FC0u;
            goto label_3c4fc0;
        }
    }
    ctx->pc = 0x3C4F7Cu;
    // 0x3c4f7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4f80: 0x26c31540  addiu       $v1, $s6, 0x1540
    ctx->pc = 0x3c4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 5440));
    // 0x3c4f84: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x3c4f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3c4f88: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x3c4f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3c4f8c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x3c4f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3c4f90: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x3c4f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3c4f94: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x3c4f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c4f98: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x3c4f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c4f9c: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x3c4f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c4fa0: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x3c4fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c4fa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4fa8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4fac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3c4facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c4fb0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3c4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3c4fb4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c4fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c4fb8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3C4FB8u;
    {
        const bool branch_taken_0x3c4fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4FB8u;
        // 0x3c4fbc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4fb8) {
            ctx->pc = 0x3C5004u;
            goto label_3c5004;
        }
    }
    ctx->pc = 0x3C4FC0u;
label_3c4fc0:
    // 0x3c4fc0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C4FC0u;
    SET_GPR_U32(ctx, 31, 0x3C4FC8u);
    ctx->pc = 0x3C4FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4FC0u;
    // 0x3c4fc4: 0x26c51540  addiu       $a1, $s6, 0x1540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C4FC0u, 0x3C4FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4FC8u;
label_3c4fc8:
    // 0x3c4fc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4fcc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c4fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4fd0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c4fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c4fd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c4fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c4fd8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C4FD8u;
    {
        const bool branch_taken_0x3c4fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4FD8u;
        // 0x3c4fdc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4fd8) {
            ctx->pc = 0x3C5004u;
            goto label_3c5004;
        }
    }
    ctx->pc = 0x3C4FE0u;
label_3c4fe0:
    // 0x3c4fe0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4FE0u;
    {
        const bool branch_taken_0x3c4fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4fe0) {
            ctx->pc = 0x3C4FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4FE0u;
            // 0x3c4fe4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4FF4u;
            goto label_3c4ff4;
        }
    }
    ctx->pc = 0x3C4FE8u;
    // 0x3c4fe8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c4fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4fec: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x3c4fecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c4ff0: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c4ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c4ff4:
    // 0x3c4ff4: 0x26c51540  addiu       $a1, $s6, 0x1540
    ctx->pc = 0x3c4ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5440));
    // 0x3c4ff8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3c4ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c4ffc: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C4FFCu;
    SET_GPR_U32(ctx, 31, 0x3C5004u);
    ctx->pc = 0x3C5000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4FFCu;
    // 0x3c5000: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C4FFCu, 0x3C5004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5004u;
label_3c5004:
    // 0x3c5004: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3c5004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3c5008: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3c5008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c500c: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x3C500Cu;
    {
        const bool branch_taken_0x3c500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c500c) {
            ctx->pc = 0x3C5010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C500Cu;
            // 0x3c5010: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4f60;
        }
    }
    ctx->pc = 0x3C5014u;
label_3c5014:
    // 0x3c5014: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c5014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c5018: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c5018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c501c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C501Cu;
    {
        const bool branch_taken_0x3c501c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c501c) {
            ctx->pc = 0x3C5020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C501Cu;
            // 0x3c5020: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5080u;
            goto label_3c5080;
        }
    }
    ctx->pc = 0x3C5024u;
    // 0x3c5024: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c5024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5028: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3c5028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3c502c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C502Cu;
    {
        const bool branch_taken_0x3c502c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C502Cu;
        // 0x3c5030: 0x26c51540  addiu       $a1, $s6, 0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c502c) {
            ctx->pc = 0x3C505Cu;
            goto label_3c505c;
        }
    }
    ctx->pc = 0x3C5034u;
    // 0x3c5034: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c5034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5038: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C5038u;
    SET_GPR_U32(ctx, 31, 0x3C5040u);
    ctx->pc = 0x3C503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5038u;
    // 0x3c503c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C5038u, 0x3C5040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5040u;
label_3c5040:
    // 0x3c5040: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5044: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c5044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5048: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c5048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c504c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3c504cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c5050: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c5050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c5054: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C5054u;
    {
        const bool branch_taken_0x3c5054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5054u;
        // 0x3c5058: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5054) {
            ctx->pc = 0x3C50A4u;
            goto label_3c50a4;
        }
    }
    ctx->pc = 0x3C505Cu;
label_3c505c:
    // 0x3c505c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c505cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5060: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C5060u;
    SET_GPR_U32(ctx, 31, 0x3C5068u);
    ctx->pc = 0x3C5064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5060u;
    // 0x3c5064: 0x26c51540  addiu       $a1, $s6, 0x1540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C5060u, 0x3C5068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5068u;
label_3c5068:
    // 0x3c5068: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c506c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c506cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5070: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c5070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c5074: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c5074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c5078: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C5078u;
    {
        const bool branch_taken_0x3c5078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5078u;
        // 0x3c507c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5078) {
            ctx->pc = 0x3C50A4u;
            goto label_3c50a4;
        }
    }
    ctx->pc = 0x3C5080u;
label_3c5080:
    // 0x3c5080: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5080u;
    {
        const bool branch_taken_0x3c5080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5080) {
            ctx->pc = 0x3C5084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5080u;
            // 0x3c5084: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5094u;
            goto label_3c5094;
        }
    }
    ctx->pc = 0x3C5088u;
    // 0x3c5088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c5088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c508c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c508cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c5090: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c5090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c5094:
    // 0x3c5094: 0x26c51540  addiu       $a1, $s6, 0x1540
    ctx->pc = 0x3c5094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5440));
    // 0x3c5098: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c5098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c509c: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C509Cu;
    SET_GPR_U32(ctx, 31, 0x3C50A4u);
    ctx->pc = 0x3C50A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C509Cu;
    // 0x3c50a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C509Cu, 0x3C50A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C50A4u;
label_3c50a4:
    // 0x3c50a4: 0x83a20040  lb          $v0, 0x40($sp)
    ctx->pc = 0x3c50a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c50a8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3C50A8u;
    {
        const bool branch_taken_0x3c50a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C50ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50A8u;
        // 0x3c50ac: 0x93a30040  lbu         $v1, 0x40($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c50a8) {
            ctx->pc = 0x3C5120u;
            goto label_3c5120;
        }
    }
    ctx->pc = 0x3C50B0u;
    // 0x3c50b0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c50b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c50b4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c50b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c50b8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3C50B8u;
    {
        const bool branch_taken_0x3c50b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c50b8) {
            ctx->pc = 0x3C50BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C50B8u;
            // 0x3c50bc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C50F4u;
            goto label_3c50f4;
        }
    }
    ctx->pc = 0x3C50C0u;
    // 0x3c50c0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c50c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c50c4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x3c50c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c50c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C50C8u;
    {
        const bool branch_taken_0x3c50c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c50c8) {
            ctx->pc = 0x3C50CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C50C8u;
            // 0x3c50cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C50ECu;
            goto label_3c50ec;
        }
    }
    ctx->pc = 0x3C50D0u;
    // 0x3c50d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c50d4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3c50d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c50d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c50dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c50e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c50e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c50e4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3C50E4u;
    {
        const bool branch_taken_0x3c50e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50E4u;
        // 0x3c50e8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c50e4) {
            ctx->pc = 0x3C5174u;
            goto label_3c5174;
        }
    }
    ctx->pc = 0x3C50ECu;
label_3c50ec:
    // 0x3c50ec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3C50ECu;
    {
        const bool branch_taken_0x3c50ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50ECu;
        // 0x3c50f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c50ec) {
            ctx->pc = 0x3C5184u;
            goto label_3c5184;
        }
    }
    ctx->pc = 0x3C50F4u;
label_3c50f4:
    // 0x3c50f4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C50F4u;
    {
        const bool branch_taken_0x3c50f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c50f4) {
            ctx->pc = 0x3C50F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C50F4u;
            // 0x3c50f8: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5108u;
            goto label_3c5108;
        }
    }
    ctx->pc = 0x3C50FCu;
    // 0x3c50fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5100: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c5100u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c5104: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c5104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c5108:
    // 0x3c5108: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3c5108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c510c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3c510cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5110: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C5110u;
    SET_GPR_U32(ctx, 31, 0x3C5118u);
    ctx->pc = 0x3C5114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5110u;
    // 0x3c5114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C5110u, 0x3C5118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5118u;
label_3c5118:
    // 0x3c5118: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3C5118u;
    {
        const bool branch_taken_0x3c5118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5118u;
        // 0x3c511c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5118) {
            ctx->pc = 0x3C51D0u;
            goto label_3c51d0;
        }
    }
    ctx->pc = 0x3C5120u;
label_3c5120:
    // 0x3c5120: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x3c5120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x3c5124: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3C5124u;
    {
        const bool branch_taken_0x3c5124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5124u;
        // 0x3c5128: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5124) {
            ctx->pc = 0x3C51CCu;
            goto label_3c51cc;
        }
    }
    ctx->pc = 0x3C512Cu;
    // 0x3c512c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x3c512cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c5130: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x3c5130u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c5134: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x3c5134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x3c5138: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C5138u;
    {
        const bool branch_taken_0x3c5138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5138u;
        // 0x3c513c: 0xa3b50031  sb          $s5, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5138) {
            ctx->pc = 0x3C51A4u;
            goto label_3c51a4;
        }
    }
    ctx->pc = 0x3C5140u;
    // 0x3c5140: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c5140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5144: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3c5144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3c5148: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3C5148u;
    {
        const bool branch_taken_0x3c5148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5148) {
            ctx->pc = 0x3C514Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5148u;
            // 0x3c514c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5180u;
            goto label_3c5180;
        }
    }
    ctx->pc = 0x3C5150u;
    // 0x3c5150: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c5150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5154: 0x83a50030  lb          $a1, 0x30($sp)
    ctx->pc = 0x3c5154u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5158: 0x83a60031  lb          $a2, 0x31($sp)
    ctx->pc = 0x3c5158u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
    // 0x3c515c: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x3c515cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3c5160: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x3c5160u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x3c5164: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5168: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c5168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c516c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3c516cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3c5170: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3c5170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3c5174:
    // 0x3c5174: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c5174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c5178: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3C5178u;
    {
        const bool branch_taken_0x3c5178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5178u;
        // 0x3c517c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5178) {
            ctx->pc = 0x3C51CCu;
            goto label_3c51cc;
        }
    }
    ctx->pc = 0x3C5180u;
label_3c5180:
    // 0x3c5180: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3c5180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c5184:
    // 0x3c5184: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C5184u;
    SET_GPR_U32(ctx, 31, 0x3C518Cu);
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C5184u, 0x3C518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C518Cu;
label_3c518c:
    // 0x3c518c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c518cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5190: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c5190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5194: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c5194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c5198: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c5198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c519c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3C519Cu;
    {
        const bool branch_taken_0x3c519c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C519Cu;
        // 0x3c51a0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c519c) {
            ctx->pc = 0x3C51CCu;
            goto label_3c51cc;
        }
    }
    ctx->pc = 0x3C51A4u;
label_3c51a4:
    // 0x3c51a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3c51a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c51a8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C51A8u;
    {
        const bool branch_taken_0x3c51a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c51a8) {
            ctx->pc = 0x3C51ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C51A8u;
            // 0x3c51ac: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C51BCu;
            goto label_3c51bc;
        }
    }
    ctx->pc = 0x3C51B0u;
    // 0x3c51b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c51b4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c51b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c51b8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c51b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c51bc:
    // 0x3c51bc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3c51bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c51c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3c51c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c51c4: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C51C4u;
    SET_GPR_U32(ctx, 31, 0x3C51CCu);
    ctx->pc = 0x3C51C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C51C4u;
    // 0x3c51c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C51C4u, 0x3C51CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C51CCu;
label_3c51cc:
    // 0x3c51cc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3c51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3c51d0:
    // 0x3c51d0: 0x17c2005b  bne         $fp, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x3C51D0u;
    {
        const bool branch_taken_0x3c51d0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51D0u;
        // 0x3c51d4: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c51d0) {
            ctx->pc = 0x3C5340u;
            goto label_3c5340;
        }
    }
    ctx->pc = 0x3C51D8u;
    // 0x3c51d8: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3c51d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3c51dc: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x3c51dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3c51e0: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x3c51e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3c51e4: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3C51E4u;
    {
        const bool branch_taken_0x3c51e4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51E4u;
        // 0x3c51e8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c51e4) {
            ctx->pc = 0x3C533Cu;
            goto label_3c533c;
        }
    }
    ctx->pc = 0x3C51ECu;
    // 0x3c51ec: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3C51ECu;
    {
        const bool branch_taken_0x3c51ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C51F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51ECu;
        // 0x3c51f0: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c51ec) {
            ctx->pc = 0x3C52ACu;
            goto label_3c52ac;
        }
    }
    ctx->pc = 0x3C51F4u;
    // 0x3c51f4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3c51f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c51f8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c51f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c51fc: 0x0  nop
    ctx->pc = 0x3c51fcu;
    // NOP
label_3c5200:
    // 0x3c5200: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c5200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c5204: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C5204u;
    {
        const bool branch_taken_0x3c5204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5204) {
            ctx->pc = 0x3C5208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5204u;
            // 0x3c5208: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5280u;
            goto label_3c5280;
        }
    }
    ctx->pc = 0x3C520Cu;
    // 0x3c520c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c520cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5210: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3c5210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c5214: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C5214u;
    {
        const bool branch_taken_0x3c5214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5214) {
            ctx->pc = 0x3C5218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5214u;
            // 0x3c5218: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5260u;
            goto label_3c5260;
        }
    }
    ctx->pc = 0x3C521Cu;
    // 0x3c521c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5220: 0x26461550  addiu       $a2, $s2, 0x1550
    ctx->pc = 0x3c5220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
    // 0x3c5224: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3c5224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3c5228: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x3c5228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3c522c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x3c522cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3c5230: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x3c5230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3c5234: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3c5234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c5238: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3c5238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c523c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3c523cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c5240: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3c5240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c5244: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5248: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c5248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c524c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3c524cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c5250: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3c5250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3c5254: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c5254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c5258: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C5258u;
    {
        const bool branch_taken_0x3c5258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5258u;
        // 0x3c525c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5258) {
            ctx->pc = 0x3C529Cu;
            goto label_3c529c;
        }
    }
    ctx->pc = 0x3C5260u;
label_3c5260:
    // 0x3c5260: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C5260u;
    SET_GPR_U32(ctx, 31, 0x3C5268u);
    ctx->pc = 0x3C5264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5260u;
    // 0x3c5264: 0x26451550  addiu       $a1, $s2, 0x1550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C5260u, 0x3C5268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5268u;
label_3c5268:
    // 0x3c5268: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c526c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5270: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c5270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c5274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c5274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c5278: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C5278u;
    {
        const bool branch_taken_0x3c5278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5278u;
        // 0x3c527c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5278) {
            ctx->pc = 0x3C529Cu;
            goto label_3c529c;
        }
    }
    ctx->pc = 0x3C5280u;
label_3c5280:
    // 0x3c5280: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C5280u;
    {
        const bool branch_taken_0x3c5280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5280) {
            ctx->pc = 0x3C5284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5280u;
            // 0x3c5284: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5288u;
            goto label_3c5288;
        }
    }
    ctx->pc = 0x3C5288u;
label_3c5288:
    // 0x3c5288: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c5288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3c528c: 0x26451550  addiu       $a1, $s2, 0x1550
    ctx->pc = 0x3c528cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
    // 0x3c5290: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3c5290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c5294: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C5294u;
    SET_GPR_U32(ctx, 31, 0x3C529Cu);
    ctx->pc = 0x3C5298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5294u;
    // 0x3c5298: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C5294u, 0x3C529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C529Cu;
label_3c529c:
    // 0x3c529c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3c529cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3c52a0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3c52a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c52a4: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3C52A4u;
    {
        const bool branch_taken_0x3c52a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c52a4) {
            ctx->pc = 0x3C52A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C52A4u;
            // 0x3c52a8: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5200;
        }
    }
    ctx->pc = 0x3C52ACu;
label_3c52ac:
    // 0x3c52ac: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c52acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c52b0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c52b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c52b4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C52B4u;
    {
        const bool branch_taken_0x3c52b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c52b4) {
            ctx->pc = 0x3C52B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C52B4u;
            // 0x3c52b8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5318u;
            goto label_3c5318;
        }
    }
    ctx->pc = 0x3C52BCu;
    // 0x3c52bc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c52bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c52c0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3c52c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3c52c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C52C4u;
    {
        const bool branch_taken_0x3c52c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C52C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C52C4u;
        // 0x3c52c8: 0x26451550  addiu       $a1, $s2, 0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c52c4) {
            ctx->pc = 0x3C52F4u;
            goto label_3c52f4;
        }
    }
    ctx->pc = 0x3C52CCu;
    // 0x3c52cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c52ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c52d0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C52D0u;
    SET_GPR_U32(ctx, 31, 0x3C52D8u);
    ctx->pc = 0x3C52D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C52D0u;
    // 0x3c52d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C52D0u, 0x3C52D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C52D8u;
label_3c52d8:
    // 0x3c52d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c52d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c52dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c52e0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c52e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c52e4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3c52e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c52e8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c52e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c52ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C52ECu;
    {
        const bool branch_taken_0x3c52ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C52ECu;
        // 0x3c52f0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c52ec) {
            ctx->pc = 0x3C533Cu;
            goto label_3c533c;
        }
    }
    ctx->pc = 0x3C52F4u;
label_3c52f4:
    // 0x3c52f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c52f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c52f8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C52F8u;
    SET_GPR_U32(ctx, 31, 0x3C5300u);
    ctx->pc = 0x3C52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C52F8u;
    // 0x3c52fc: 0x26451550  addiu       $a1, $s2, 0x1550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C52F8u, 0x3C5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5300u;
label_3c5300:
    // 0x3c5300: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5304: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c5304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5308: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c5308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c530c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c5310: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C5310u;
    {
        const bool branch_taken_0x3c5310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5310u;
        // 0x3c5314: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5310) {
            ctx->pc = 0x3C533Cu;
            goto label_3c533c;
        }
    }
    ctx->pc = 0x3C5318u;
label_3c5318:
    // 0x3c5318: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5318u;
    {
        const bool branch_taken_0x3c5318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5318) {
            ctx->pc = 0x3C531Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5318u;
            // 0x3c531c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C532Cu;
            goto label_3c532c;
        }
    }
    ctx->pc = 0x3C5320u;
    // 0x3c5320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c5320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5324: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c5324u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c5328: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c5328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c532c:
    // 0x3c532c: 0x26451550  addiu       $a1, $s2, 0x1550
    ctx->pc = 0x3c532cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
    // 0x3c5330: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c5330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5334: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C5334u;
    SET_GPR_U32(ctx, 31, 0x3C533Cu);
    ctx->pc = 0x3C5338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5334u;
    // 0x3c5338: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C5334u, 0x3C533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C533Cu;
label_3c533c:
    // 0x3c533c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x3c533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3c5340:
    // 0x3c5340: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3c5340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3c5344: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x3c5344u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c5348: 0x1a000054  blez        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x3C5348u;
    {
        const bool branch_taken_0x3c5348 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5348u;
        // 0x3c534c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5348) {
            ctx->pc = 0x3C549Cu;
            goto label_3c549c;
        }
    }
    ctx->pc = 0x3C5350u;
    // 0x3c5350: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3C5350u;
    {
        const bool branch_taken_0x3c5350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5350u;
        // 0x3c5354: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5350) {
            ctx->pc = 0x3C540Cu;
            goto label_3c540c;
        }
    }
    ctx->pc = 0x3C5358u;
    // 0x3c5358: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3c5358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c535c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c535cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3c5360:
    // 0x3c5360: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c5360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c5364: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C5364u;
    {
        const bool branch_taken_0x3c5364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5364) {
            ctx->pc = 0x3C5368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5364u;
            // 0x3c5368: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C53E0u;
            goto label_3c53e0;
        }
    }
    ctx->pc = 0x3C536Cu;
    // 0x3c536c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c536cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5370: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3c5370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c5374: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C5374u;
    {
        const bool branch_taken_0x3c5374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5374) {
            ctx->pc = 0x3C5378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5374u;
            // 0x3c5378: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C53C0u;
            goto label_3c53c0;
        }
    }
    ctx->pc = 0x3C537Cu;
    // 0x3c537c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5380: 0x26431550  addiu       $v1, $s2, 0x1550
    ctx->pc = 0x3c5380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
    // 0x3c5384: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x3c5384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3c5388: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x3c5388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3c538c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x3c538cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3c5390: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x3c5390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3c5394: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x3c5394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c5398: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x3c5398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c539c: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x3c539cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c53a0: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x3c53a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c53a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c53a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c53a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c53ac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3c53acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c53b0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3c53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3c53b4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c53b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C53B8u;
    {
        const bool branch_taken_0x3c53b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C53B8u;
        // 0x3c53bc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c53b8) {
            ctx->pc = 0x3C53FCu;
            goto label_3c53fc;
        }
    }
    ctx->pc = 0x3C53C0u;
label_3c53c0:
    // 0x3c53c0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C53C0u;
    SET_GPR_U32(ctx, 31, 0x3C53C8u);
    ctx->pc = 0x3C53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C53C0u;
    // 0x3c53c4: 0x26451550  addiu       $a1, $s2, 0x1550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C53C0u, 0x3C53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C53C8u;
label_3c53c8:
    // 0x3c53c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c53c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c53cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c53d0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c53d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c53d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c53d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c53d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C53D8u;
    {
        const bool branch_taken_0x3c53d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C53DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C53D8u;
        // 0x3c53dc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c53d8) {
            ctx->pc = 0x3C53FCu;
            goto label_3c53fc;
        }
    }
    ctx->pc = 0x3C53E0u;
label_3c53e0:
    // 0x3c53e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C53E0u;
    {
        const bool branch_taken_0x3c53e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c53e0) {
            ctx->pc = 0x3C53E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C53E0u;
            // 0x3c53e4: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C53E8u;
            goto label_3c53e8;
        }
    }
    ctx->pc = 0x3C53E8u;
label_3c53e8:
    // 0x3c53e8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c53e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3c53ec: 0x26451550  addiu       $a1, $s2, 0x1550
    ctx->pc = 0x3c53ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
    // 0x3c53f0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3c53f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c53f4: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C53F4u;
    SET_GPR_U32(ctx, 31, 0x3C53FCu);
    ctx->pc = 0x3C53F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C53F4u;
    // 0x3c53f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C53F4u, 0x3C53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C53FCu;
label_3c53fc:
    // 0x3c53fc: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3c53fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3c5400: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3c5400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c5404: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3C5404u;
    {
        const bool branch_taken_0x3c5404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5404) {
            ctx->pc = 0x3C5408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5404u;
            // 0x3c5408: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5360;
        }
    }
    ctx->pc = 0x3C540Cu;
label_3c540c:
    // 0x3c540c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c540cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c5410: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c5410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c5414: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C5414u;
    {
        const bool branch_taken_0x3c5414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5414) {
            ctx->pc = 0x3C5418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5414u;
            // 0x3c5418: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5478u;
            goto label_3c5478;
        }
    }
    ctx->pc = 0x3C541Cu;
    // 0x3c541c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c541cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5420: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3c5420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3c5424: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C5424u;
    {
        const bool branch_taken_0x3c5424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5424u;
        // 0x3c5428: 0x26451550  addiu       $a1, $s2, 0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5424) {
            ctx->pc = 0x3C5454u;
            goto label_3c5454;
        }
    }
    ctx->pc = 0x3C542Cu;
    // 0x3c542c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c542cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5430: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C5430u;
    SET_GPR_U32(ctx, 31, 0x3C5438u);
    ctx->pc = 0x3C5434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5430u;
    // 0x3c5434: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C5430u, 0x3C5438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5438u;
label_3c5438:
    // 0x3c5438: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c543c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5440: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c5440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c5444: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3c5444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c5448: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c5448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c544c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C544Cu;
    {
        const bool branch_taken_0x3c544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C544Cu;
        // 0x3c5450: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c544c) {
            ctx->pc = 0x3C549Cu;
            goto label_3c549c;
        }
    }
    ctx->pc = 0x3C5454u;
label_3c5454:
    // 0x3c5454: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c5454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5458: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C5458u;
    SET_GPR_U32(ctx, 31, 0x3C5460u);
    ctx->pc = 0x3C545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5458u;
    // 0x3c545c: 0x26451550  addiu       $a1, $s2, 0x1550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C5458u, 0x3C5460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5460u;
label_3c5460:
    // 0x3c5460: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5464: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c5464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5468: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c5468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c546c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c546cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c5470: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C5470u;
    {
        const bool branch_taken_0x3c5470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5470u;
        // 0x3c5474: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5470) {
            ctx->pc = 0x3C549Cu;
            goto label_3c549c;
        }
    }
    ctx->pc = 0x3C5478u;
label_3c5478:
    // 0x3c5478: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5478u;
    {
        const bool branch_taken_0x3c5478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5478) {
            ctx->pc = 0x3C547Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5478u;
            // 0x3c547c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C548Cu;
            goto label_3c548c;
        }
    }
    ctx->pc = 0x3C5480u;
    // 0x3c5480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c5480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5484: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c5484u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c5488: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c5488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c548c:
    // 0x3c548c: 0x26451550  addiu       $a1, $s2, 0x1550
    ctx->pc = 0x3c548cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5456));
    // 0x3c5490: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c5490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5494: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C5494u;
    SET_GPR_U32(ctx, 31, 0x3C549Cu);
    ctx->pc = 0x3C5498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5494u;
    // 0x3c5498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C5494u, 0x3C549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C549Cu;
label_3c549c:
    // 0x3c549c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c549cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c54a0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c54a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c54a4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C54A4u;
    {
        const bool branch_taken_0x3c54a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54A4u;
        // 0x3c54a8: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c54a4) {
            ctx->pc = 0x3C5508u;
            goto label_3c5508;
        }
    }
    ctx->pc = 0x3C54ACu;
    // 0x3c54ac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3c54acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c54b0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x3c54b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c54b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C54B4u;
    {
        const bool branch_taken_0x3c54b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C54B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54B4u;
        // 0x3c54b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c54b4) {
            ctx->pc = 0x3C54E4u;
            goto label_3c54e4;
        }
    }
    ctx->pc = 0x3C54BCu;
    // 0x3c54bc: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C54BCu;
    SET_GPR_U32(ctx, 31, 0x3C54C4u);
    ctx->pc = 0x3C54C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C54BCu;
    // 0x3c54c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C54BCu, 0x3C54C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C54C4u;
label_3c54c4:
    // 0x3c54c4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x3c54c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x3c54c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c54c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c54cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c54d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c54d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c54d4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3c54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c54d8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c54dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3C54DCu;
    {
        const bool branch_taken_0x3c54dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54DCu;
        // 0x3c54e0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c54dc) {
            ctx->pc = 0x3C5530u;
            goto label_3c5530;
        }
    }
    ctx->pc = 0x3C54E4u;
label_3c54e4:
    // 0x3c54e4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3c54e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c54e8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C54E8u;
    SET_GPR_U32(ctx, 31, 0x3C54F0u);
    ctx->pc = 0x3C54ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C54E8u;
    // 0x3c54ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C54E8u, 0x3C54F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C54F0u;
label_3c54f0:
    // 0x3c54f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c54f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c54f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c54f8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c54f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c54fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c54fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c5500: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3C5500u;
    {
        const bool branch_taken_0x3c5500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5500u;
        // 0x3c5504: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5500) {
            ctx->pc = 0x3C5530u;
            goto label_3c5530;
        }
    }
    ctx->pc = 0x3C5508u;
label_3c5508:
    // 0x3c5508: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3c5508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c550c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C550Cu;
    {
        const bool branch_taken_0x3c550c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c550c) {
            ctx->pc = 0x3C5510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C550Cu;
            // 0x3c5510: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5520u;
            goto label_3c5520;
        }
    }
    ctx->pc = 0x3C5514u;
    // 0x3c5514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c5514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5518: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c5518u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c551c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c551cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c5520:
    // 0x3c5520: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c5520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5524: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x3c5524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x3c5528: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C5528u;
    SET_GPR_U32(ctx, 31, 0x3C5530u);
    ctx->pc = 0x3C552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5528u;
    // 0x3c552c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C5528u, 0x3C5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5530u;
label_3c5530:
    // 0x3c5530: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x3c5530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c5534: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3C5534u;
    {
        const bool branch_taken_0x3c5534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5534u;
        // 0x3c5538: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5534) {
            ctx->pc = 0x3C569Cu;
            goto label_3c569c;
        }
    }
    ctx->pc = 0x3C553Cu;
    // 0x3c553c: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x3c553cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3c5540: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x3c5540u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3c5544: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3C5544u;
    {
        const bool branch_taken_0x3c5544 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5544u;
        // 0x3c5548: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5544) {
            ctx->pc = 0x3C569Cu;
            goto label_3c569c;
        }
    }
    ctx->pc = 0x3C554Cu;
    // 0x3c554c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3C554Cu;
    {
        const bool branch_taken_0x3c554c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C554Cu;
        // 0x3c5550: 0x3c160048  lui         $s6, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c554c) {
            ctx->pc = 0x3C560Cu;
            goto label_3c560c;
        }
    }
    ctx->pc = 0x3C5554u;
    // 0x3c5554: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3c5554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5558: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c5558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c555c: 0x0  nop
    ctx->pc = 0x3c555cu;
    // NOP
label_3c5560:
    // 0x3c5560: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c5560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c5564: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C5564u;
    {
        const bool branch_taken_0x3c5564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5564) {
            ctx->pc = 0x3C5568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5564u;
            // 0x3c5568: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C55E0u;
            goto label_3c55e0;
        }
    }
    ctx->pc = 0x3C556Cu;
    // 0x3c556c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c556cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5570: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3c5570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c5574: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C5574u;
    {
        const bool branch_taken_0x3c5574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5574) {
            ctx->pc = 0x3C5578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5574u;
            // 0x3c5578: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C55C0u;
            goto label_3c55c0;
        }
    }
    ctx->pc = 0x3C557Cu;
    // 0x3c557c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5580: 0x26c61540  addiu       $a2, $s6, 0x1540
    ctx->pc = 0x3c5580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 5440));
    // 0x3c5584: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3c5584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3c5588: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x3c5588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3c558c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x3c558cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3c5590: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x3c5590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3c5594: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3c5594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c5598: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3c5598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c559c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3c559cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c55a0: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3c55a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c55a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c55a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c55a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c55ac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3c55acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c55b0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3c55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3c55b4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c55b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c55b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C55B8u;
    {
        const bool branch_taken_0x3c55b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C55B8u;
        // 0x3c55bc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c55b8) {
            ctx->pc = 0x3C55FCu;
            goto label_3c55fc;
        }
    }
    ctx->pc = 0x3C55C0u;
label_3c55c0:
    // 0x3c55c0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C55C0u;
    SET_GPR_U32(ctx, 31, 0x3C55C8u);
    ctx->pc = 0x3C55C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C55C0u;
    // 0x3c55c4: 0x26c51540  addiu       $a1, $s6, 0x1540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C55C0u, 0x3C55C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C55C8u;
label_3c55c8:
    // 0x3c55c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c55c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c55cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c55ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c55d0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c55d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c55d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c55d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c55d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C55D8u;
    {
        const bool branch_taken_0x3c55d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C55D8u;
        // 0x3c55dc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c55d8) {
            ctx->pc = 0x3C55FCu;
            goto label_3c55fc;
        }
    }
    ctx->pc = 0x3C55E0u;
label_3c55e0:
    // 0x3c55e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C55E0u;
    {
        const bool branch_taken_0x3c55e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c55e0) {
            ctx->pc = 0x3C55E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C55E0u;
            // 0x3c55e4: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C55E8u;
            goto label_3c55e8;
        }
    }
    ctx->pc = 0x3C55E8u;
label_3c55e8:
    // 0x3c55e8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c55e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3c55ec: 0x26c51540  addiu       $a1, $s6, 0x1540
    ctx->pc = 0x3c55ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5440));
    // 0x3c55f0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3c55f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c55f4: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C55F4u;
    SET_GPR_U32(ctx, 31, 0x3C55FCu);
    ctx->pc = 0x3C55F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C55F4u;
    // 0x3c55f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C55F4u, 0x3C55FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C55FCu;
label_3c55fc:
    // 0x3c55fc: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3c55fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3c5600: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3c5600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c5604: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3C5604u;
    {
        const bool branch_taken_0x3c5604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5604) {
            ctx->pc = 0x3C5608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5604u;
            // 0x3c5608: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5560;
        }
    }
    ctx->pc = 0x3C560Cu;
label_3c560c:
    // 0x3c560c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c560cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c5610: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c5610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c5614: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C5614u;
    {
        const bool branch_taken_0x3c5614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5614) {
            ctx->pc = 0x3C5618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5614u;
            // 0x3c5618: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5678u;
            goto label_3c5678;
        }
    }
    ctx->pc = 0x3C561Cu;
    // 0x3c561c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c561cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5620: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3c5620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3c5624: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C5624u;
    {
        const bool branch_taken_0x3c5624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5624u;
        // 0x3c5628: 0x26c51540  addiu       $a1, $s6, 0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5624) {
            ctx->pc = 0x3C5654u;
            goto label_3c5654;
        }
    }
    ctx->pc = 0x3C562Cu;
    // 0x3c562c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c562cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5630: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C5630u;
    SET_GPR_U32(ctx, 31, 0x3C5638u);
    ctx->pc = 0x3C5634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5630u;
    // 0x3c5634: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C5630u, 0x3C5638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5638u;
label_3c5638:
    // 0x3c5638: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c563c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5640: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c5640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c5644: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3c5644u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c5648: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c5648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c564c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C564Cu;
    {
        const bool branch_taken_0x3c564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C564Cu;
        // 0x3c5650: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c564c) {
            ctx->pc = 0x3C569Cu;
            goto label_3c569c;
        }
    }
    ctx->pc = 0x3C5654u;
label_3c5654:
    // 0x3c5654: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c5654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5658: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C5658u;
    SET_GPR_U32(ctx, 31, 0x3C5660u);
    ctx->pc = 0x3C565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5658u;
    // 0x3c565c: 0x26c51540  addiu       $a1, $s6, 0x1540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C5658u, 0x3C5660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5660u;
label_3c5660:
    // 0x3c5660: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c5664: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c5668: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c5668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c566c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c566cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c5670: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C5670u;
    {
        const bool branch_taken_0x3c5670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5670u;
        // 0x3c5674: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5670) {
            ctx->pc = 0x3C569Cu;
            goto label_3c569c;
        }
    }
    ctx->pc = 0x3C5678u;
label_3c5678:
    // 0x3c5678: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5678u;
    {
        const bool branch_taken_0x3c5678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5678) {
            ctx->pc = 0x3C567Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5678u;
            // 0x3c567c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C568Cu;
            goto label_3c568c;
        }
    }
    ctx->pc = 0x3C5680u;
    // 0x3c5680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c5680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5684: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c5684u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c5688: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c5688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c568c:
    // 0x3c568c: 0x26c51540  addiu       $a1, $s6, 0x1540
    ctx->pc = 0x3c568cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5440));
    // 0x3c5690: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c5690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5694: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C5694u;
    SET_GPR_U32(ctx, 31, 0x3C569Cu);
    ctx->pc = 0x3C5698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5694u;
    // 0x3c5698: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C5694u, 0x3C569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C569Cu;
label_3c569c:
    // 0x3c569c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3c569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3c56a0: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x3c56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x3c56a4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x3c56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3c56a8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3c56a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c56ac: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3c56acu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3c56b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3c56b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3c56b4: 0x1000fc6a  b           . + 4 + (-0x396 << 2)
    ctx->pc = 0x3C56B4u;
    {
        const bool branch_taken_0x3c56b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C56B4u;
        // 0x3c56b8: 0xafa50050  sw          $a1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c56b4) {
            ctx->pc = 0x3C4860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4860;
        }
    }
    ctx->pc = 0x3C56BCu;
label_3c56bc:
    // 0x3c56bc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c56bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3c56c0:
    // 0x3c56c0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c56c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c56c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C56C4u;
    {
        const bool branch_taken_0x3c56c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C56C4u;
        // 0x3c56c8: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c56c4) {
            ctx->pc = 0x3C56E4u;
            goto label_3c56e4;
        }
    }
    ctx->pc = 0x3C56CCu;
    // 0x3c56cc: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c56ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3c56d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c56d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c56d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c56d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c56d8: 0xc0f11c2  jal         func_3C4708
    ctx->pc = 0x3C56D8u;
    SET_GPR_U32(ctx, 31, 0x3C56E0u);
    ctx->pc = 0x3C56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C56D8u;
    // 0x3c56dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4708u, 0x3C56D8u, 0x3C56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C56E0u;
label_3c56e0:
    // 0x3c56e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3c56e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3c56e4:
    // 0x3c56e4: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x3c56e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3c56e8: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x3c56e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3c56ec: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x3c56ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3c56f0: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x3c56f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3c56f4: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x3c56f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3c56f8: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x3c56f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3c56fc: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x3c56fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3c5700: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x3c5700u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3c5704: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3c5704u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c5708: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3c5708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c570c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C570Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C570Cu;
        // 0x3c5710: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C570Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5714u;
    // 0x3c5714: 0x0  nop
    ctx->pc = 0x3c5714u;
    // NOP
    ctx->pc = 0x3c5718u;
}
