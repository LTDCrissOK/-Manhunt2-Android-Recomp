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

// Function: sub_00383260
// Address: 0x383260 - 0x383858
void sub_00383260_0x383260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383260_0x383260");
#endif

    switch (ctx->pc) {
        case 0x3832f0u: goto label_3832f0;
        case 0x383350u: goto label_383350;
        case 0x383388u: goto label_383388;
        case 0x3833c8u: goto label_3833c8;
        case 0x383400u: goto label_383400;
        case 0x383438u: goto label_383438;
        case 0x383468u: goto label_383468;
        case 0x3834f8u: goto label_3834f8;
        case 0x383540u: goto label_383540;
        case 0x383570u: goto label_383570;
        case 0x3835c8u: goto label_3835c8;
        case 0x383648u: goto label_383648;
        case 0x3836a8u: goto label_3836a8;
        case 0x383750u: goto label_383750;
        case 0x383788u: goto label_383788;
        case 0x3837d0u: goto label_3837d0;
        default: break;
    }

    ctx->pc = 0x383260u;

    // 0x383260: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x383260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x383264: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x383264u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383268: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x383268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x38326c: 0x1e0c02d  daddu       $t8, $t7, $zero
    ctx->pc = 0x38326cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383270: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x383270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x383274: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x383274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x383278: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x383278u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38327c: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x38327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x383280: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x383280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x383284: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x383284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x383288: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x383288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x38328c: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x38328cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x383290: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x383290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x383294: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x383294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x383298: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x383298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x38329c: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x38329cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
    // 0x3832a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3832a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3832a4: 0xafa800dc  sw          $t0, 0xDC($sp)
    ctx->pc = 0x3832a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 8));
    // 0x3832a8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3832a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3832ac: 0xafa900e0  sw          $t1, 0xE0($sp)
    ctx->pc = 0x3832acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 9));
    // 0x3832b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3832b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3832b4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3832b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x3832b8: 0xafab00e4  sw          $t3, 0xE4($sp)
    ctx->pc = 0x3832b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 11));
    // 0x3832bc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3832bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x3832c0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3832c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x3832c4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3832c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x3832c8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x3832c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x3832cc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3832ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3832d0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3832d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3832d4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3832d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x3832d8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3832d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x3832dc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3832dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x3832e0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3832e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x3832e4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3832e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x3832e8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3832e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x3832ec: 0x0  nop
    ctx->pc = 0x3832ecu;
    // NOP
label_3832f0:
    // 0x3832f0: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x3832f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3832f4: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3832f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x3832f8: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x3832f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x3832fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3832fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x383300: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x383300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x383304: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x383304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x383308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x383308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38330c: 0x15a0fff8  bnez        $t5, . + 4 + (-0x8 << 2)
    ctx->pc = 0x38330Cu;
    {
        const bool branch_taken_0x38330c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x383310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38330Cu;
        // 0x383310: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38330c) {
            ctx->pc = 0x3832F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3832f0;
        }
    }
    ctx->pc = 0x383314u;
    // 0x383314: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x383314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383318: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x383318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x38331c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38331Cu;
    {
        const bool branch_taken_0x38331c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x383320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38331Cu;
        // 0x383320: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38331c) {
            ctx->pc = 0x383338u;
            goto label_383338;
        }
    }
    ctx->pc = 0x383324u;
    // 0x383324: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x383324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x383328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x383328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38332c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x38332cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x383330: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x383330u;
    {
        const bool branch_taken_0x383330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383330u;
        // 0x383334: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383330) {
            ctx->pc = 0x38382Cu;
            goto label_38382c;
        }
    }
    ctx->pc = 0x383338u;
label_383338:
    // 0x383338: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x383338u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38333c: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x38333cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x383340: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x383340u;
    {
        const bool branch_taken_0x383340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383340u;
        // 0x383344: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383340) {
            ctx->pc = 0x383368u;
            goto label_383368;
        }
    }
    ctx->pc = 0x383348u;
    // 0x383348: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x383348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x38334c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x38334cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_383350:
    // 0x383350: 0x2d820010  sltiu       $v0, $t4, 0x10
    ctx->pc = 0x383350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x383354: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x383354u;
    {
        const bool branch_taken_0x383354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383354u;
        // 0x383358: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383354) {
            ctx->pc = 0x383368u;
            goto label_383368;
        }
    }
    ctx->pc = 0x38335Cu;
    // 0x38335c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38335cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x383360: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x383360u;
    {
        const bool branch_taken_0x383360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383360) {
            ctx->pc = 0x383364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383360u;
            // 0x383364: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383350;
        }
    }
    ctx->pc = 0x383368u;
label_383368:
    // 0x383368: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x383368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38336c: 0x240d000f  addiu       $t5, $zero, 0xF
    ctx->pc = 0x38336cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x383370: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x383370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x383374: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x383374u;
    {
        const bool branch_taken_0x383374 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x383378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383374u;
        // 0x383378: 0x222300b  movn        $a2, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383374) {
            ctx->pc = 0x3833A0u;
            goto label_3833a0;
        }
    }
    ctx->pc = 0x38337Cu;
    // 0x38337c: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x38337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x383380: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x383380u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x383384: 0x0  nop
    ctx->pc = 0x383384u;
    // NOP
label_383388:
    // 0x383388: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x383388u;
    {
        const bool branch_taken_0x383388 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x38338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383388u;
        // 0x38338c: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383388) {
            ctx->pc = 0x3833A0u;
            goto label_3833a0;
        }
    }
    ctx->pc = 0x383390u;
    // 0x383390: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x383390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x383394: 0x0  nop
    ctx->pc = 0x383394u;
    // NOP
    // 0x383398: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x383398u;
    {
        const bool branch_taken_0x383398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383398) {
            ctx->pc = 0x38339Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383398u;
            // 0x38339c: 0x25adffff  addiu       $t5, $t5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383388;
        }
    }
    ctx->pc = 0x3833A0u;
label_3833a0:
    // 0x3833a0: 0x1a0b82d  daddu       $s7, $t5, $zero
    ctx->pc = 0x3833a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3833a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3833a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3833a8: 0x2e6182b  sltu        $v1, $s7, $a2
    ctx->pc = 0x3833a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3833ac: 0x1829804  sllv        $s3, $v0, $t4
    ctx->pc = 0x3833acu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 12) & 0x1F));
    // 0x3833b0: 0x2e3300b  movn        $a2, $s7, $v1
    ctx->pc = 0x3833b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 23));
    // 0x3833b4: 0x197102b  sltu        $v0, $t4, $s7
    ctx->pc = 0x3833b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x3833b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3833B8u;
    {
        const bool branch_taken_0x3833b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3833BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3833B8u;
        // 0x3833bc: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3833b8) {
            ctx->pc = 0x3833E8u;
            goto label_3833e8;
        }
    }
    ctx->pc = 0x3833C0u;
    // 0x3833c0: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x3833c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x3833c4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x3833c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3833c8:
    // 0x3833c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3833c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3833cc: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x3833ccu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3833d0: 0x660000b  bltz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x3833D0u;
    {
        const bool branch_taken_0x3833d0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x3833D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3833D0u;
        // 0x3833d4: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3833d0) {
            ctx->pc = 0x383400u;
            goto label_383400;
        }
    }
    ctx->pc = 0x3833D8u;
    // 0x3833d8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3833d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3833dc: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x3833dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3833e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3833E0u;
    {
        const bool branch_taken_0x3833e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3833E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3833E0u;
        // 0x3833e4: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3833e0) {
            ctx->pc = 0x3833C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3833c8;
        }
    }
    ctx->pc = 0x3833E8u;
label_3833e8:
    // 0x3833e8: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x3833e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x3833ec: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3833ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3833f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3833f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3833f4: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x3833f4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3833f8: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3833F8u;
    {
        const bool branch_taken_0x3833f8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x3833FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3833F8u;
        // 0x3833fc: 0x531021  addu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3833f8) {
            ctx->pc = 0x383408u;
            goto label_383408;
        }
    }
    ctx->pc = 0x383400u;
label_383400:
    // 0x383400: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x383400u;
    {
        const bool branch_taken_0x383400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383400u;
        // 0x383404: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383400) {
            ctx->pc = 0x38382Cu;
            goto label_38382c;
        }
    }
    ctx->pc = 0x383408u;
label_383408:
    // 0x383408: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x383408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x38340c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x38340cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x383410: 0x27b80004  addiu       $t8, $sp, 0x4
    ctx->pc = 0x383410u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x383414: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x383414u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383418: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x383418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x38341c: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x38341cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x383420: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x383420u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x383424: 0xafa700f4  sw          $a3, 0xF4($sp)
    ctx->pc = 0x383424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 7));
    // 0x383428: 0x177080  sll         $t6, $s7, 2
    ctx->pc = 0x383428u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x38342c: 0x65023  negu        $t2, $a2
    ctx->pc = 0x38342cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x383430: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x383430u;
    {
        const bool branch_taken_0x383430 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x383434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383430u;
        // 0x383434: 0x2f1802a  slt         $s0, $s7, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383430) {
            ctx->pc = 0x383454u;
            goto label_383454;
        }
    }
    ctx->pc = 0x383438u;
label_383438:
    // 0x383438: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x383438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x38343c: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x38343cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x383440: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x383440u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x383444: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x383444u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x383448: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x383448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x38344c: 0x15a0fffa  bnez        $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38344Cu;
    {
        const bool branch_taken_0x38344c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x383450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38344Cu;
        // 0x383450: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38344c) {
            ctx->pc = 0x383438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383438;
        }
    }
    ctx->pc = 0x383454u;
label_383454:
    // 0x383454: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x383454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x383458: 0x1e0c02d  daddu       $t8, $t7, $zero
    ctx->pc = 0x383458u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38345c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x38345cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383460: 0x8f0c0000  lw          $t4, 0x0($t8)
    ctx->pc = 0x383460u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x383464: 0x0  nop
    ctx->pc = 0x383464u;
    // NOP
label_383468:
    // 0x383468: 0x1180000a  beqz        $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x383468u;
    {
        const bool branch_taken_0x383468 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x38346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383468u;
        // 0x38346c: 0x27180004  addiu       $t8, $t8, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383468) {
            ctx->pc = 0x383494u;
            goto label_383494;
        }
    }
    ctx->pc = 0x383470u;
    // 0x383470: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x383470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x383474: 0x8fa80198  lw          $t0, 0x198($sp)
    ctx->pc = 0x383474u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x383478: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x383478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x38347c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38347cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x383480: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x383480u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x383484: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x383484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383488: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x383488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x38348c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38348cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x383490: 0xac8d0000  sw          $t5, 0x0($a0)
    ctx->pc = 0x383490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 13));
label_383494:
    // 0x383494: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x383494u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x383498: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x383498u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x38349c: 0x1a9102b  sltu        $v0, $t5, $t1
    ctx->pc = 0x38349cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3834a0: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x3834A0u;
    {
        const bool branch_taken_0x3834a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3834a0) {
            ctx->pc = 0x3834A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3834A0u;
            // 0x3834a4: 0x8f0c0000  lw          $t4, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383468;
        }
    }
    ctx->pc = 0x3834A8u;
    // 0x3834a8: 0x8fab00f4  lw          $t3, 0xF4($sp)
    ctx->pc = 0x3834a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x3834ac: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x3834acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3834b0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3834b0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3834b4: 0x8fb80198  lw          $t8, 0x198($sp)
    ctx->pc = 0x3834b4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3834b8: 0x16e1021  addu        $v0, $t3, $t6
    ctx->pc = 0x3834b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x3834bc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x3834bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3834c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3834c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3834c4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x3834c4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3834c8: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3834c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x3834cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3834ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3834d0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3834d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x3834d4: 0x160000cf  bnez        $s0, . + 4 + (0xCF << 2)
    ctx->pc = 0x3834D4u;
    {
        const bool branch_taken_0x3834d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3834D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834D4u;
        // 0x3834d8: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834d4) {
            ctx->pc = 0x383814u;
            goto label_383814;
        }
    }
    ctx->pc = 0x3834DCu;
    // 0x3834dc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3834dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3834e0: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x3834e0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x3834e4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3834e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3834e8: 0xafab00f0  sw          $t3, 0xF0($sp)
    ctx->pc = 0x3834e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 11));
    // 0x3834ec: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x3834ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x3834f0: 0x37deffff  ori         $fp, $fp, 0xFFFF
    ctx->pc = 0x3834f0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x3834f4: 0x0  nop
    ctx->pc = 0x3834f4u;
    // NOP
label_3834f8:
    // 0x3834f8: 0x8fac00fc  lw          $t4, 0xFC($sp)
    ctx->pc = 0x3834f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x3834fc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3834fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x383500: 0x8d990000  lw          $t9, 0x0($t4)
    ctx->pc = 0x383500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x383504: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x383504u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x383508: 0x133e00bc  beq         $t9, $fp, . + 4 + (0xBC << 2)
    ctx->pc = 0x383508u;
    {
        const bool branch_taken_0x383508 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 30));
        ctx->pc = 0x38350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383508u;
        // 0x38350c: 0xafa200f8  sw          $v0, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383508) {
            ctx->pc = 0x3837FCu;
            goto label_3837fc;
        }
    }
    ctx->pc = 0x383510u;
    // 0x383510: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x383510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x383514: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x383514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x383518: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x383518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38351c: 0x8fa800f4  lw          $t0, 0xF4($sp)
    ctx->pc = 0x38351cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x383520: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x383520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x383524: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x383524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x383528: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x383528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x38352c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x38352cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x383530: 0xafa800e8  sw          $t0, 0xE8($sp)
    ctx->pc = 0x383530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 8));
    // 0x383534: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x383534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x383538: 0x1e65021  addu        $t2, $t7, $a2
    ctx->pc = 0x383538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x38353c: 0x0  nop
    ctx->pc = 0x38353cu;
    // NOP
label_383540:
    // 0x383540: 0x151102a  slt         $v0, $t2, $s1
    ctx->pc = 0x383540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x383544: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x383544u;
    {
        const bool branch_taken_0x383544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383544u;
        // 0x383548: 0x8fac00e8  lw          $t4, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383544) {
            ctx->pc = 0x38368Cu;
            goto label_38368c;
        }
    }
    ctx->pc = 0x38354Cu;
    // 0x38354c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x38354cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x383550: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x383550u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x383554: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x383554u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383558: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x383558u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38355c: 0x27360001  addiu       $s6, $t9, 0x1
    ctx->pc = 0x38355cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x383560: 0x2449fffc  addiu       $t1, $v0, -0x4
    ctx->pc = 0x383560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x383564: 0x4c4021  addu        $t0, $v0, $t4
    ctx->pc = 0x383564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x383568: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x383568u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38356c: 0x0  nop
    ctx->pc = 0x38356cu;
    // NOP
label_383570:
    // 0x383570: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x383570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x383574: 0x2ef3823  subu        $a3, $s7, $t7
    ctx->pc = 0x383574u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 15)));
    // 0x383578: 0x22f6023  subu        $t4, $s1, $t7
    ctx->pc = 0x383578u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x38357c: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x38357cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x383580: 0x1942004  sllv        $a0, $s4, $t4
    ctx->pc = 0x383580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 12) & 0x1F));
    // 0x383584: 0xc2380b  movn        $a3, $a2, $v0
    ctx->pc = 0x383584u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x383588: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x383588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x38358c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x38358cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x383590: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x383590u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x383594: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x383594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x383598: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x383598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x38359c: 0x2c4102b  sltu        $v0, $s6, $a0
    ctx->pc = 0x38359cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3835a0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3835A0u;
    {
        const bool branch_taken_0x3835a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3835A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835A0u;
        // 0x3835a4: 0x8c6e0000  lw          $t6, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3835a0) {
            ctx->pc = 0x3835F0u;
            goto label_3835f0;
        }
    }
    ctx->pc = 0x3835A8u;
    // 0x3835a8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3835a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3835ac: 0x3b52821  addu        $a1, $sp, $s5
    ctx->pc = 0x3835acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
    // 0x3835b0: 0x187102b  sltu        $v0, $t4, $a3
    ctx->pc = 0x3835b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3835b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3835B4u;
    {
        const bool branch_taken_0x3835b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3835B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835B4u;
        // 0x3835b8: 0x792023  subu        $a0, $v1, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3835b4) {
            ctx->pc = 0x3835F0u;
            goto label_3835f0;
        }
    }
    ctx->pc = 0x3835BCu;
    // 0x3835bc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3835bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3835c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3835C0u;
    {
        const bool branch_taken_0x3835c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3835C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835C0u;
        // 0x3835c4: 0x187102b  sltu        $v0, $t4, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3835c0) {
            ctx->pc = 0x3835D4u;
            goto label_3835d4;
        }
    }
    ctx->pc = 0x3835C8u;
label_3835c8:
    // 0x3835c8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3835c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3835cc: 0x187102b  sltu        $v0, $t4, $a3
    ctx->pc = 0x3835ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3835d0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x3835d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3835d4:
    // 0x3835d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3835D4u;
    {
        const bool branch_taken_0x3835d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3835D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835D4u;
        // 0x3835d8: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3835d4) {
            ctx->pc = 0x3835F0u;
            goto label_3835f0;
        }
    }
    ctx->pc = 0x3835DCu;
    // 0x3835dc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3835dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3835e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3835e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3835e4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3835e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3835e8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3835E8u;
    {
        const bool branch_taken_0x3835e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3835e8) {
            ctx->pc = 0x3835ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3835E8u;
            // 0x3835ec: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3835C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3835c8;
        }
    }
    ctx->pc = 0x3835F0u;
label_3835f0:
    // 0x3835f0: 0x1943804  sllv        $a3, $s4, $t4
    ctx->pc = 0x3835f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 12) & 0x1F));
    // 0x3835f4: 0x1c72021  addu        $a0, $t6, $a3
    ctx->pc = 0x3835f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x3835f8: 0x2c8205a1  sltiu       $v0, $a0, 0x5A1
    ctx->pc = 0x3835f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1441) ? 1 : 0);
    // 0x3835fc: 0x1040ff80  beqz        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x3835FCu;
    {
        const bool branch_taken_0x3835fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835FCu;
        // 0x383600: 0x8fa200e4  lw          $v0, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3835fc) {
            ctx->pc = 0x383400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383400;
        }
    }
    ctx->pc = 0x383604u;
    // 0x383604: 0xe18c0  sll         $v1, $t6, 3
    ctx->pc = 0x383604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x383608: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x383608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38360c: 0x437021  addu        $t6, $v0, $v1
    ctx->pc = 0x38360cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x383610: 0xab1021  addu        $v0, $a1, $t3
    ctx->pc = 0x383610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x383614: 0xac4e0000  sw          $t6, 0x0($v0)
    ctx->pc = 0x383614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
    // 0x383618: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x383618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x38361c: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x38361Cu;
    {
        const bool branch_taken_0x38361c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x383620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38361Cu;
        // 0x383620: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38361c) {
            ctx->pc = 0x383674u;
            goto label_383674;
        }
    }
    ctx->pc = 0x383624u;
    // 0x383624: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x383624u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
    // 0x383628: 0x1461023  subu        $v0, $t2, $a2
    ctx->pc = 0x383628u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x38362c: 0xa3ac0040  sb          $t4, 0x40($sp)
    ctx->pc = 0x38362cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 12));
    // 0x383630: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x383630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x383634: 0xa3a60041  sb          $a2, 0x41($sp)
    ctx->pc = 0x383634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 6));
    // 0x383638: 0x4d6006  srlv        $t4, $t5, $v0
    ctx->pc = 0x383638u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x38363c: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x38363cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x383640: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x383640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x383644: 0x1c21023  subu        $v0, $t6, $v0
    ctx->pc = 0x383644u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_383648:
    // 0x383648: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x383648u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x38364c: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x38364cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x383650: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x383650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x383654: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x383654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x383658: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x383658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38365c: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x38365cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x383660: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x383660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x383664: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x383664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x383668: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x383668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38366c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38366Cu;
    {
        const bool branch_taken_0x38366c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38366Cu;
        // 0x383670: 0x1465021  addu        $t2, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38366c) {
            ctx->pc = 0x383680u;
            goto label_383680;
        }
    }
    ctx->pc = 0x383674u;
label_383674:
    // 0x383674: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x383674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x383678: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x383678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
    // 0x38367c: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x38367cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_383680:
    // 0x383680: 0x151102a  slt         $v0, $t2, $s1
    ctx->pc = 0x383680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x383684: 0x5440ffba  bnel        $v0, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x383684u;
    {
        const bool branch_taken_0x383684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383684) {
            ctx->pc = 0x383688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383684u;
            // 0x383688: 0x140782d  daddu       $t7, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383570;
        }
    }
    ctx->pc = 0x38368Cu;
label_38368c:
    // 0x38368c: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x38368cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x383690: 0x22f1023  subu        $v0, $s1, $t7
    ctx->pc = 0x383690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x383694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x383694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383698: 0x305182b  sltu        $v1, $t8, $a1
    ctx->pc = 0x383698u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x38369c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38369Cu;
    {
        const bool branch_taken_0x38369c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3836A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38369Cu;
        // 0x3836a0: 0xa3a20041  sb          $v0, 0x41($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38369c) {
            ctx->pc = 0x3836B0u;
            goto label_3836b0;
        }
    }
    ctx->pc = 0x3836A4u;
    // 0x3836a4: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x3836a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_3836a8:
    // 0x3836a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3836A8u;
    {
        const bool branch_taken_0x3836a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3836ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836A8u;
        // 0x3836ac: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836a8) {
            ctx->pc = 0x383724u;
            goto label_383724;
        }
    }
    ctx->pc = 0x3836B0u;
label_3836b0:
    // 0x3836b0: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x3836b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3836b4: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x3836b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x3836b8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3836b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3836bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3836BCu;
    {
        const bool branch_taken_0x3836bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3836C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836BCu;
        // 0x3836c0: 0x2c620100  sltiu       $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836bc) {
            ctx->pc = 0x3836E4u;
            goto label_3836e4;
        }
    }
    ctx->pc = 0x3836C4u;
    // 0x3836c4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3836C4u;
    {
        const bool branch_taken_0x3836c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3836C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836C4u;
        // 0x3836c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836c4) {
            ctx->pc = 0x3836D0u;
            goto label_3836d0;
        }
    }
    ctx->pc = 0x3836CCu;
    // 0x3836cc: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x3836ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3836d0:
    // 0x3836d0: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x3836d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x3836d4: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x3836d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3836d8: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x3836d8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x3836dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3836DCu;
    {
        const bool branch_taken_0x3836dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3836E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836DCu;
        // 0x3836e0: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836dc) {
            ctx->pc = 0x383724u;
            goto label_383724;
        }
    }
    ctx->pc = 0x3836E4u;
label_3836e4:
    // 0x3836e4: 0x8fa900d4  lw          $t1, 0xD4($sp)
    ctx->pc = 0x3836e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x3836e8: 0x8fab00dc  lw          $t3, 0xDC($sp)
    ctx->pc = 0x3836e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x3836ec: 0x691023  subu        $v0, $v1, $t1
    ctx->pc = 0x3836ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3836f0: 0x8fac00d8  lw          $t4, 0xD8($sp)
    ctx->pc = 0x3836f0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3836f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3836f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3836f8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3836f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3836fc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3836fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x383700: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x383700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x383704: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x383704u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x383708: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x383708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x38370c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x38370cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x383710: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x383710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x383714: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x383714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x383718: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x383718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x38371c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38371cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x383720: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x383720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_383724:
    // 0x383724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x383724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383728: 0x1ed6006  srlv        $t4, $t5, $t7
    ctx->pc = 0x383728u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x38372c: 0x822004  sllv        $a0, $v0, $a0
    ctx->pc = 0x38372cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x383730: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x383730u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x383734: 0x187102b  sltu        $v0, $t4, $a3
    ctx->pc = 0x383734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x383738: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x383738u;
    {
        const bool branch_taken_0x383738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383738u;
        // 0x38373c: 0x262affff  addiu       $t2, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383738) {
            ctx->pc = 0x383770u;
            goto label_383770;
        }
    }
    ctx->pc = 0x383740u;
    // 0x383740: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x383740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x383744: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x383744u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x383748: 0x4e1821  addu        $v1, $v0, $t6
    ctx->pc = 0x383748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x38374c: 0x0  nop
    ctx->pc = 0x38374cu;
    // NOP
label_383750:
    // 0x383750: 0x6ba80047  ldl         $t0, 0x47($sp)
    ctx->pc = 0x383750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x383754: 0x6fa80040  ldr         $t0, 0x40($sp)
    ctx->pc = 0x383754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x383758: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x383758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38375c: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x38375cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x383760: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x383760u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x383764: 0x187102b  sltu        $v0, $t4, $a3
    ctx->pc = 0x383764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x383768: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x383768u;
    {
        const bool branch_taken_0x383768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383768u;
        // 0x38376c: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383768) {
            ctx->pc = 0x383750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383750;
        }
    }
    ctx->pc = 0x383770u;
label_383770:
    // 0x383770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x383770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383774: 0x1436004  sllv        $t4, $v1, $t2
    ctx->pc = 0x383774u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 10) & 0x1F));
    // 0x383778: 0x1ac1024  and         $v0, $t5, $t4
    ctx->pc = 0x383778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x38377c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x38377Cu;
    {
        const bool branch_taken_0x38377c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38377c) {
            ctx->pc = 0x383780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38377Cu;
            // 0x383780: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3837A4u;
            goto label_3837a4;
        }
    }
    ctx->pc = 0x383784u;
    // 0x383784: 0x1ac6826  xor         $t5, $t5, $t4
    ctx->pc = 0x383784u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 12));
label_383788:
    // 0x383788: 0xc6042  srl         $t4, $t4, 1
    ctx->pc = 0x383788u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
    // 0x38378c: 0x1ac1024  and         $v0, $t5, $t4
    ctx->pc = 0x38378cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x383790: 0x0  nop
    ctx->pc = 0x383790u;
    // NOP
    // 0x383794: 0x0  nop
    ctx->pc = 0x383794u;
    // NOP
    // 0x383798: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x383798u;
    {
        const bool branch_taken_0x383798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383798) {
            ctx->pc = 0x38379Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383798u;
            // 0x38379c: 0x1ac6826  xor         $t5, $t5, $t4 (Delay Slot)
            SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383788;
        }
    }
    ctx->pc = 0x3837A0u;
    // 0x3837a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3837a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3837a4:
    // 0x3837a4: 0x1ac6826  xor         $t5, $t5, $t4
    ctx->pc = 0x3837a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 12));
    // 0x3837a8: 0x1e41004  sllv        $v0, $a0, $t7
    ctx->pc = 0x3837a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 15) & 0x1F));
    // 0x3837ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3837acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3837b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3837b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3837b4: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x3837b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x3837b8: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3837B8u;
    {
        const bool branch_taken_0x3837b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3837BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837B8u;
        // 0x3837bc: 0x8fa800f4  lw          $t0, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3837b8) {
            ctx->pc = 0x3837F4u;
            goto label_3837f4;
        }
    }
    ctx->pc = 0x3837C0u;
    // 0x3837c0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3837c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3837c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3837c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3837c8: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x3837c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3837cc: 0x0  nop
    ctx->pc = 0x3837ccu;
    // NOP
label_3837d0:
    // 0x3837d0: 0x1e67823  subu        $t7, $t7, $a2
    ctx->pc = 0x3837d0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x3837d4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3837d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x3837d8: 0x1e51004  sllv        $v0, $a1, $t7
    ctx->pc = 0x3837d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 15) & 0x1F));
    // 0x3837dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3837dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3837e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3837e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3837e4: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x3837e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x3837e8: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x3837e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x3837ec: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3837ECu;
    {
        const bool branch_taken_0x3837ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3837F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837ECu;
        // 0x3837f0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3837ec) {
            ctx->pc = 0x3837D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3837d0;
        }
    }
    ctx->pc = 0x3837F4u;
label_3837f4:
    // 0x3837f4: 0x173eff52  bne         $t9, $fp, . + 4 + (-0xAE << 2)
    ctx->pc = 0x3837F4u;
    {
        const bool branch_taken_0x3837f4 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 30));
        ctx->pc = 0x3837F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3837F4u;
        // 0x3837f8: 0x1e65021  addu        $t2, $t7, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3837f4) {
            ctx->pc = 0x383540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383540;
        }
    }
    ctx->pc = 0x3837FCu;
label_3837fc:
    // 0x3837fc: 0x8fa900fc  lw          $t1, 0xFC($sp)
    ctx->pc = 0x3837fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x383800: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x383800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x383804: 0x2f1102a  slt         $v0, $s7, $s1
    ctx->pc = 0x383804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x383808: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x383808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x38380c: 0x1040ff3a  beqz        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x38380Cu;
    {
        const bool branch_taken_0x38380c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38380Cu;
        // 0x383810: 0xafa900fc  sw          $t1, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38380c) {
            ctx->pc = 0x3834F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3834f8;
        }
    }
    ctx->pc = 0x383814u;
label_383814:
    // 0x383814: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x383814u;
    {
        const bool branch_taken_0x383814 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x383818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383814u;
        // 0x383818: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383814) {
            ctx->pc = 0x383828u;
            goto label_383828;
        }
    }
    ctx->pc = 0x38381Cu;
    // 0x38381c: 0x3ae20001  xori        $v0, $s7, 0x1
    ctx->pc = 0x38381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1);
    // 0x383820: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x383820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x383824: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x383824u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_383828:
    // 0x383828: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x383828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38382c:
    // 0x38382c: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x38382cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x383830: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x383830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x383834: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x383834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x383838: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x383838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x38383c: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x38383cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x383840: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x383840u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x383844: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x383844u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x383848: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x383848u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x38384c: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x38384cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x383850: 0x3e00008  jr          $ra
    ctx->pc = 0x383850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383850u;
        // 0x383854: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383858u;
}
