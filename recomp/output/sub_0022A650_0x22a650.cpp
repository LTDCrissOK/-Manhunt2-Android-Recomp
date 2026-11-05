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

// Function: sub_0022A650
// Address: 0x22a650 - 0x22b490
void sub_0022A650_0x22a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A650_0x22a650");
#endif

    switch (ctx->pc) {
        case 0x22a6bcu: goto label_22a6bc;
        case 0x22a730u: goto label_22a730;
        case 0x22a73cu: goto label_22a73c;
        case 0x22a778u: goto label_22a778;
        case 0x22a7b8u: goto label_22a7b8;
        case 0x22a7c8u: goto label_22a7c8;
        case 0x22a7d8u: goto label_22a7d8;
        case 0x22a7ecu: goto label_22a7ec;
        case 0x22a7fcu: goto label_22a7fc;
        case 0x22a80cu: goto label_22a80c;
        case 0x22a818u: goto label_22a818;
        case 0x22a824u: goto label_22a824;
        case 0x22a864u: goto label_22a864;
        case 0x22a87cu: goto label_22a87c;
        case 0x22a8e8u: goto label_22a8e8;
        case 0x22a904u: goto label_22a904;
        case 0x22a918u: goto label_22a918;
        case 0x22a92cu: goto label_22a92c;
        case 0x22a93cu: goto label_22a93c;
        case 0x22a958u: goto label_22a958;
        case 0x22a968u: goto label_22a968;
        case 0x22a97cu: goto label_22a97c;
        case 0x22a98cu: goto label_22a98c;
        case 0x22a9d8u: goto label_22a9d8;
        case 0x22a9f0u: goto label_22a9f0;
        case 0x22aa28u: goto label_22aa28;
        case 0x22aa38u: goto label_22aa38;
        case 0x22aa44u: goto label_22aa44;
        case 0x22aa58u: goto label_22aa58;
        case 0x22aa68u: goto label_22aa68;
        case 0x22aa7cu: goto label_22aa7c;
        case 0x22aa8cu: goto label_22aa8c;
        case 0x22aab4u: goto label_22aab4;
        case 0x22aac4u: goto label_22aac4;
        case 0x22aae4u: goto label_22aae4;
        case 0x22aaf0u: goto label_22aaf0;
        case 0x22ab14u: goto label_22ab14;
        case 0x22ab20u: goto label_22ab20;
        case 0x22ab34u: goto label_22ab34;
        case 0x22abb0u: goto label_22abb0;
        case 0x22abc0u: goto label_22abc0;
        case 0x22abc8u: goto label_22abc8;
        case 0x22abd0u: goto label_22abd0;
        case 0x22abe4u: goto label_22abe4;
        case 0x22abf4u: goto label_22abf4;
        case 0x22ac18u: goto label_22ac18;
        case 0x22ac38u: goto label_22ac38;
        case 0x22ac74u: goto label_22ac74;
        case 0x22acb4u: goto label_22acb4;
        case 0x22acbcu: goto label_22acbc;
        case 0x22acccu: goto label_22accc;
        case 0x22ace0u: goto label_22ace0;
        case 0x22acf0u: goto label_22acf0;
        case 0x22acf8u: goto label_22acf8;
        case 0x22ad10u: goto label_22ad10;
        case 0x22ad24u: goto label_22ad24;
        case 0x22ad40u: goto label_22ad40;
        case 0x22ad60u: goto label_22ad60;
        case 0x22ad74u: goto label_22ad74;
        case 0x22ad90u: goto label_22ad90;
        case 0x22ada0u: goto label_22ada0;
        case 0x22adb0u: goto label_22adb0;
        case 0x22adc0u: goto label_22adc0;
        case 0x22add4u: goto label_22add4;
        case 0x22ade4u: goto label_22ade4;
        case 0x22ae10u: goto label_22ae10;
        case 0x22ae20u: goto label_22ae20;
        case 0x22ae30u: goto label_22ae30;
        case 0x22ae40u: goto label_22ae40;
        case 0x22ae54u: goto label_22ae54;
        case 0x22ae64u: goto label_22ae64;
        case 0x22ae74u: goto label_22ae74;
        case 0x22ae8cu: goto label_22ae8c;
        case 0x22aea8u: goto label_22aea8;
        case 0x22af4cu: goto label_22af4c;
        case 0x22af68u: goto label_22af68;
        case 0x22afa8u: goto label_22afa8;
        case 0x22afbcu: goto label_22afbc;
        case 0x22afccu: goto label_22afcc;
        case 0x22afe0u: goto label_22afe0;
        case 0x22aff4u: goto label_22aff4;
        case 0x22b008u: goto label_22b008;
        case 0x22b014u: goto label_22b014;
        case 0x22b020u: goto label_22b020;
        case 0x22b03cu: goto label_22b03c;
        case 0x22b050u: goto label_22b050;
        case 0x22b088u: goto label_22b088;
        case 0x22b098u: goto label_22b098;
        case 0x22b0b4u: goto label_22b0b4;
        case 0x22b0c8u: goto label_22b0c8;
        case 0x22b0d4u: goto label_22b0d4;
        case 0x22b0e4u: goto label_22b0e4;
        case 0x22b0f8u: goto label_22b0f8;
        case 0x22b190u: goto label_22b190;
        case 0x22b1a0u: goto label_22b1a0;
        case 0x22b1acu: goto label_22b1ac;
        case 0x22b1c8u: goto label_22b1c8;
        case 0x22b1e4u: goto label_22b1e4;
        case 0x22b218u: goto label_22b218;
        case 0x22b294u: goto label_22b294;
        case 0x22b31cu: goto label_22b31c;
        case 0x22b338u: goto label_22b338;
        case 0x22b348u: goto label_22b348;
        case 0x22b354u: goto label_22b354;
        case 0x22b360u: goto label_22b360;
        case 0x22b36cu: goto label_22b36c;
        case 0x22b3b0u: goto label_22b3b0;
        case 0x22b3c8u: goto label_22b3c8;
        case 0x22b3e4u: goto label_22b3e4;
        case 0x22b3f8u: goto label_22b3f8;
        case 0x22b420u: goto label_22b420;
        case 0x22b43cu: goto label_22b43c;
        case 0x22b450u: goto label_22b450;
        case 0x22b45cu: goto label_22b45c;
        default: break;
    }

    ctx->pc = 0x22a650u;

    // 0x22a650: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x22a654: 0x24020410  addiu       $v0, $zero, 0x410
    ctx->pc = 0x22a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x22a658: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x22a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x22a65c: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x22a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x22a660: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22a660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a664: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x22a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x22a668: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22a668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a66c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x22a66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x22a670: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x22a670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a674: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x22a674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x22a678: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x22a678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x22a67c: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x22a67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x22a680: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x22a680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x22a684: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x22a684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x22a688: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x22a688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x22a68c: 0x8e760000  lw          $s6, 0x0($s3)
    ctx->pc = 0x22a68cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22a690: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A690u;
    {
        const bool branch_taken_0x22a690 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A690u;
        // 0x22a694: 0xafa60074  sw          $a2, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a690) {
            ctx->pc = 0x22A6A4u;
            goto label_22a6a4;
        }
    }
    ctx->pc = 0x22A698u;
    // 0x22a698: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x22a698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x22a69c: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A69Cu;
    {
        const bool branch_taken_0x22a69c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x22a69c) {
            ctx->pc = 0x22A6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A69Cu;
            // 0x22a6a0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A6B0u;
            goto label_22a6b0;
        }
    }
    ctx->pc = 0x22A6A4u;
label_22a6a4:
    // 0x22a6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a6a8: 0xae4202b4  sw          $v0, 0x2B4($s2)
    ctx->pc = 0x22a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 692), GPR_U32(ctx, 2));
    // 0x22a6ac: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x22a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_22a6b0:
    // 0x22a6b0: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x22a6b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22a6b4: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x22A6B4u;
    SET_GPR_U32(ctx, 31, 0x22A6BCu);
    ctx->pc = 0x22A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A6B4u;
    // 0x22a6b8: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22A6B4u, 0x22A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A6BCu;
label_22a6bc:
    // 0x22a6bc: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x22a6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x22a6c0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x22a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22a6c4: 0x2c5e0001  sltiu       $fp, $v0, 0x1
    ctx->pc = 0x22a6c4u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x22a6c8: 0x10740004  beq         $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A6C8u;
    {
        const bool branch_taken_0x22a6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x22A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6C8u;
        // 0x22a6cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6c8) {
            ctx->pc = 0x22A6DCu;
            goto label_22a6dc;
        }
    }
    ctx->pc = 0x22A6D0u;
    // 0x22a6d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22a6d4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A6D4u;
    {
        const bool branch_taken_0x22a6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22a6d4) {
            ctx->pc = 0x22A6E0u;
            goto label_22a6e0;
        }
    }
    ctx->pc = 0x22A6DCu;
label_22a6dc:
    // 0x22a6dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a6e0:
    // 0x22a6e0: 0x17c00018  bnez        $fp, . + 4 + (0x18 << 2)
    ctx->pc = 0x22A6E0u;
    {
        const bool branch_taken_0x22a6e0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6E0u;
        // 0x22a6e4: 0x8fa20078  lw          $v0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6e0) {
            ctx->pc = 0x22A744u;
            goto label_22a744;
        }
    }
    ctx->pc = 0x22A6E8u;
    // 0x22a6e8: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22A6E8u;
    {
        const bool branch_taken_0x22a6e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a6e8) {
            ctx->pc = 0x22A744u;
            goto label_22a744;
        }
    }
    ctx->pc = 0x22A6F0u;
    // 0x22a6f0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x22a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x22a6f4: 0x8c570004  lw          $s7, 0x4($v0)
    ctx->pc = 0x22a6f4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22a6f8: 0x12e00012  beqz        $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x22A6F8u;
    {
        const bool branch_taken_0x22a6f8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6F8u;
        // 0x22a6fc: 0x8fa20078  lw          $v0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6f8) {
            ctx->pc = 0x22A744u;
            goto label_22a744;
        }
    }
    ctx->pc = 0x22A700u;
    // 0x22a700: 0x8ee50338  lw          $a1, 0x338($s7)
    ctx->pc = 0x22a700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 824)));
    // 0x22a704: 0x8ee40334  lw          $a0, 0x334($s7)
    ctx->pc = 0x22a704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 820)));
    // 0x22a708: 0x8ca20088  lw          $v0, 0x88($a1)
    ctx->pc = 0x22a708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x22a70c: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x22a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x22a710: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22a710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22a714: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x22a714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x22a718: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22a718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22a71c: 0x38630037  xori        $v1, $v1, 0x37
    ctx->pc = 0x22a71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)55);
    // 0x22a720: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x22a720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22a724: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22a724u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x22a728: 0xc08807a  jal         func_2201E8
    ctx->pc = 0x22A728u;
    SET_GPR_U32(ctx, 31, 0x22A730u);
    ctx->pc = 0x22A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A728u;
    // 0x22a72c: 0xafa30078  sw          $v1, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2201E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2201E8u, 0x22A728u, 0x22A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A730u;
label_22a730:
    // 0x22a730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22a730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a734: 0xc09694c  jal         func_25A530
    ctx->pc = 0x22A734u;
    SET_GPR_U32(ctx, 31, 0x22A73Cu);
    ctx->pc = 0x22A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A734u;
    // 0x22a738: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A530u, 0x22A734u, 0x22A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A73Cu;
label_22a73c:
    // 0x22a73c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22a73cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a740: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a744:
    // 0x22a744: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A744u;
    {
        const bool branch_taken_0x22a744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a744) {
            ctx->pc = 0x22A748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A744u;
            // 0x22a748: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A75Cu;
            goto label_22a75c;
        }
    }
    ctx->pc = 0x22A74Cu;
    // 0x22a74c: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x22a74cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22a750: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A750u;
    {
        const bool branch_taken_0x22a750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A750u;
        // 0x22a754: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a750) {
            ctx->pc = 0x22A764u;
            goto label_22a764;
        }
    }
    ctx->pc = 0x22A758u;
    // 0x22a758: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x22a758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22a75c:
    // 0x22a75c: 0x15a00b  movn        $s4, $zero, $s5
    ctx->pc = 0x22a75cu;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x22a760: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x22a760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_22a764:
    // 0x22a764: 0x8c62ebc8  lw          $v0, -0x1438($v1)
    ctx->pc = 0x22a764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962120)));
    // 0x22a768: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x22A768u;
    {
        const bool branch_taken_0x22a768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a768) {
            ctx->pc = 0x22A824u;
            goto label_22a824;
        }
    }
    ctx->pc = 0x22A770u;
    // 0x22a770: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x22A770u;
    SET_GPR_U32(ctx, 31, 0x22A778u);
    ctx->pc = 0x22A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A770u;
    // 0x22a774: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22A770u, 0x22A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A778u;
label_22a778:
    // 0x22a778: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x22a778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x22a77c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x22A77Cu;
    {
        const bool branch_taken_0x22a77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a77c) {
            ctx->pc = 0x22A824u;
            goto label_22a824;
        }
    }
    ctx->pc = 0x22A784u;
    // 0x22a784: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x22a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x22a788: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22a788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22a78c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x22A78Cu;
    {
        const bool branch_taken_0x22a78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a78c) {
            ctx->pc = 0x22A824u;
            goto label_22a824;
        }
    }
    ctx->pc = 0x22A794u;
    // 0x22a794: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x22a794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x22a798: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22a798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22a79c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x22A79Cu;
    {
        const bool branch_taken_0x22a79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a79c) {
            ctx->pc = 0x22A824u;
            goto label_22a824;
        }
    }
    ctx->pc = 0x22A7A4u;
    // 0x22a7a4: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x22A7A4u;
    {
        const bool branch_taken_0x22a7a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7A4u;
        // 0x22a7a8: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7a4) {
            ctx->pc = 0x22A7E0u;
            goto label_22a7e0;
        }
    }
    ctx->pc = 0x22A7ACu;
    // 0x22a7ac: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22a7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22a7b0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A7B0u;
    SET_GPR_U32(ctx, 31, 0x22A7B8u);
    ctx->pc = 0x22A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7B0u;
    // 0x22a7b4: 0x24060568  addiu       $a2, $zero, 0x568 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A7B0u, 0x22A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7B8u;
label_22a7b8:
    // 0x22a7b8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a7bc: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22a7c0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A7C0u;
    SET_GPR_U32(ctx, 31, 0x22A7C8u);
    ctx->pc = 0x22A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7C0u;
    // 0x22a7c4: 0x24060595  addiu       $a2, $zero, 0x595 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1429));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A7C0u, 0x22A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7C8u;
label_22a7c8:
    // 0x22a7c8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a7cc: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22a7d0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A7D0u;
    SET_GPR_U32(ctx, 31, 0x22A7D8u);
    ctx->pc = 0x22A7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7D0u;
    // 0x22a7d4: 0x240605ad  addiu       $a2, $zero, 0x5AD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1453));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A7D0u, 0x22A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7D8u;
label_22a7d8:
    // 0x22a7d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22A7D8u;
    {
        const bool branch_taken_0x22a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7D8u;
        // 0x22a7dc: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7d8) {
            ctx->pc = 0x22A810u;
            goto label_22a810;
        }
    }
    ctx->pc = 0x22A7E0u;
label_22a7e0:
    // 0x22a7e0: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22a7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22a7e4: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A7E4u;
    SET_GPR_U32(ctx, 31, 0x22A7ECu);
    ctx->pc = 0x22A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7E4u;
    // 0x22a7e8: 0x24060567  addiu       $a2, $zero, 0x567 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A7E4u, 0x22A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7ECu;
label_22a7ec:
    // 0x22a7ec: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a7f0: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22a7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22a7f4: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A7F4u;
    SET_GPR_U32(ctx, 31, 0x22A7FCu);
    ctx->pc = 0x22A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7F4u;
    // 0x22a7f8: 0x24060594  addiu       $a2, $zero, 0x594 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A7F4u, 0x22A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7FCu;
label_22a7fc:
    // 0x22a7fc: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a800: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22a800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22a804: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A804u;
    SET_GPR_U32(ctx, 31, 0x22A80Cu);
    ctx->pc = 0x22A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A804u;
    // 0x22a808: 0x240605ac  addiu       $a2, $zero, 0x5AC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A804u, 0x22A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A80Cu;
label_22a80c:
    // 0x22a80c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22a810:
    // 0x22a810: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x22A810u;
    SET_GPR_U32(ctx, 31, 0x22A818u);
    ctx->pc = 0x22A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A810u;
    // 0x22a814: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x22A810u, 0x22A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A818u;
label_22a818:
    // 0x22a818: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a81c: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22A81Cu;
    SET_GPR_U32(ctx, 31, 0x22A824u);
    ctx->pc = 0x22A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A81Cu;
    // 0x22a820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22A81Cu, 0x22A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A824u;
label_22a824:
    // 0x22a824: 0x17c0009b  bnez        $fp, . + 4 + (0x9B << 2)
    ctx->pc = 0x22A824u;
    {
        const bool branch_taken_0x22a824 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A824u;
        // 0x22a828: 0x8e450334  lw          $a1, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a824) {
            ctx->pc = 0x22AA94u;
            goto label_22aa94;
        }
    }
    ctx->pc = 0x22A82Cu;
    // 0x22a82c: 0x8cb10150  lw          $s1, 0x150($a1)
    ctx->pc = 0x22a82cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x22a830: 0x2622ffd9  addiu       $v0, $s1, -0x27
    ctx->pc = 0x22a830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967257));
    // 0x22a834: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x22a834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x22a838: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A838u;
    {
        const bool branch_taken_0x22a838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A838u;
        // 0x22a83c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a838) {
            ctx->pc = 0x22A854u;
            goto label_22a854;
        }
    }
    ctx->pc = 0x22A840u;
    // 0x22a840: 0x8ca3014c  lw          $v1, 0x14C($a1)
    ctx->pc = 0x22a840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 332)));
    // 0x22a844: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x22a844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22a848: 0x54620093  bnel        $v1, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x22A848u;
    {
        const bool branch_taken_0x22a848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22a848) {
            ctx->pc = 0x22A84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A848u;
            // 0x22a84c: 0x8ca20150  lw          $v0, 0x150($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AA98u;
            goto label_22aa98;
        }
    }
    ctx->pc = 0x22A850u;
    // 0x22a850: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x22a850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_22a854:
    // 0x22a854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22a854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a858: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22a85c: 0xc08a982  jal         func_22A608
    ctx->pc = 0x22A85Cu;
    SET_GPR_U32(ctx, 31, 0x22A864u);
    ctx->pc = 0x22A860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A85Cu;
    // 0x22a860: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A608u, 0x22A85Cu, 0x22A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A864u;
label_22a864:
    // 0x22a864: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x22A864u;
    {
        const bool branch_taken_0x22a864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A864u;
        // 0x22a868: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a864) {
            ctx->pc = 0x22A994u;
            goto label_22a994;
        }
    }
    ctx->pc = 0x22A86Cu;
    // 0x22a86c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22a86cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a870: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22a870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22a874: 0xc096a2e  jal         func_25A8B8
    ctx->pc = 0x22A874u;
    SET_GPR_U32(ctx, 31, 0x22A87Cu);
    ctx->pc = 0x22A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A874u;
    // 0x22a878: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8B8u, 0x22A874u, 0x22A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A87Cu;
label_22a87c:
    // 0x22a87c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x22a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x22a880: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x22a880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22a884: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x22a884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22a888: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x22a888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x22a88c: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x22a88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x22a890: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22a890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a894: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x22a894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a898: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x22a898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a89c: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x22a89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a8a0: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x22a8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a8a4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x22a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x22a8a8: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A8A8u;
    {
        const bool branch_taken_0x22a8a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8A8u;
        // 0x22a8ac: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8a8) {
            ctx->pc = 0x22A8C4u;
            goto label_22a8c4;
        }
    }
    ctx->pc = 0x22A8B0u;
    // 0x22a8b0: 0x2662fa58  addiu       $v0, $s3, -0x5A8
    ctx->pc = 0x22a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965848));
    // 0x22a8b4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22a8b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x22a8b8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A8B8u;
    {
        const bool branch_taken_0x22a8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a8b8) {
            ctx->pc = 0x22A8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A8B8u;
            // 0x22a8bc: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A8DCu;
            goto label_22a8dc;
        }
    }
    ctx->pc = 0x22A8C0u;
    // 0x22a8c0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x22a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_22a8c4:
    // 0x22a8c4: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22A8C4u;
    {
        const bool branch_taken_0x22a8c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x22a8c4) {
            ctx->pc = 0x22A8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A8C4u;
            // 0x22a8c8: 0x9242047d  lbu         $v0, 0x47D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A8F0u;
            goto label_22a8f0;
        }
    }
    ctx->pc = 0x22A8CCu;
    // 0x22a8cc: 0x240205a2  addiu       $v0, $zero, 0x5A2
    ctx->pc = 0x22a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1442));
    // 0x22a8d0: 0x56620007  bnel        $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A8D0u;
    {
        const bool branch_taken_0x22a8d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x22a8d0) {
            ctx->pc = 0x22A8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A8D0u;
            // 0x22a8d4: 0x9242047d  lbu         $v0, 0x47D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A8F0u;
            goto label_22a8f0;
        }
    }
    ctx->pc = 0x22A8D8u;
    // 0x22a8d8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22a8dc:
    // 0x22a8dc: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22a8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22a8e0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A8E0u;
    SET_GPR_U32(ctx, 31, 0x22A8E8u);
    ctx->pc = 0x22A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8E0u;
    // 0x22a8e4: 0x240605b1  addiu       $a2, $zero, 0x5B1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1457));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A8E0u, 0x22A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8E8u;
label_22a8e8:
    // 0x22a8e8: 0x100002dd  b           . + 4 + (0x2DD << 2)
    ctx->pc = 0x22A8E8u;
    {
        const bool branch_taken_0x22a8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8E8u;
        // 0x22a8ec: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8e8) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22A8F0u;
label_22a8f0:
    // 0x22a8f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A8F0u;
    {
        const bool branch_taken_0x22a8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8F0u;
        // 0x22a8f4: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8f0) {
            ctx->pc = 0x22A90Cu;
            goto label_22a90c;
        }
    }
    ctx->pc = 0x22A8F8u;
    // 0x22a8f8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a8fc: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A8FCu;
    SET_GPR_U32(ctx, 31, 0x22A904u);
    ctx->pc = 0x22A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8FCu;
    // 0x22a900: 0x240605b2  addiu       $a2, $zero, 0x5B2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1458));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A8FCu, 0x22A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A904u;
label_22a904:
    // 0x22a904: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x22A904u;
    {
        const bool branch_taken_0x22a904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A904u;
        // 0x22a908: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a904) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22A90Cu;
label_22a90c:
    // 0x22a90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a910: 0xc096aa8  jal         func_25AAA0
    ctx->pc = 0x22A910u;
    SET_GPR_U32(ctx, 31, 0x22A918u);
    ctx->pc = 0x22A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A910u;
    // 0x22a914: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AAA0u, 0x22A910u, 0x22A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A918u;
label_22a918:
    // 0x22a918: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22A918u;
    {
        const bool branch_taken_0x22a918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A918u;
        // 0x22a91c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a918) {
            ctx->pc = 0x22A94Cu;
            goto label_22a94c;
        }
    }
    ctx->pc = 0x22A920u;
    // 0x22a920: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22a920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22a924: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A924u;
    SET_GPR_U32(ctx, 31, 0x22A92Cu);
    ctx->pc = 0x22A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A924u;
    // 0x22a928: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A924u, 0x22A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A92Cu;
label_22a92c:
    // 0x22a92c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x22a92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22a930: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22a930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22a934: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A934u;
    SET_GPR_U32(ctx, 31, 0x22A93Cu);
    ctx->pc = 0x22A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A934u;
    // 0x22a938: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A934u, 0x22A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A93Cu;
label_22a93c:
    // 0x22a93c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a940: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22a940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x22a944: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22A944u;
    {
        const bool branch_taken_0x22a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A944u;
        // 0x22a948: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a944) {
            ctx->pc = 0x22A974u;
            goto label_22a974;
        }
    }
    ctx->pc = 0x22A94Cu;
label_22a94c:
    // 0x22a94c: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22a94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22a950: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A950u;
    SET_GPR_U32(ctx, 31, 0x22A958u);
    ctx->pc = 0x22A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A950u;
    // 0x22a954: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A950u, 0x22A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A958u;
label_22a958:
    // 0x22a958: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x22a958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22a95c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22a95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22a960: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A960u;
    SET_GPR_U32(ctx, 31, 0x22A968u);
    ctx->pc = 0x22A964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A960u;
    // 0x22a964: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A960u, 0x22A968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A968u;
label_22a968:
    // 0x22a968: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a96c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22a96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x22a970: 0x240605a1  addiu       $a2, $zero, 0x5A1
    ctx->pc = 0x22a970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1441));
label_22a974:
    // 0x22a974: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A974u;
    SET_GPR_U32(ctx, 31, 0x22A97Cu);
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A974u, 0x22A97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A97Cu;
label_22a97c:
    // 0x22a97c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a980: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22a980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22a984: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A984u;
    SET_GPR_U32(ctx, 31, 0x22A98Cu);
    ctx->pc = 0x22A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A984u;
    // 0x22a988: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A984u, 0x22A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A98Cu;
label_22a98c:
    // 0x22a98c: 0x100002b4  b           . + 4 + (0x2B4 << 2)
    ctx->pc = 0x22A98Cu;
    {
        const bool branch_taken_0x22a98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A98Cu;
        // 0x22a990: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a98c) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22A994u;
label_22a994:
    // 0x22a994: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x22a994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x22a998: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A998u;
    {
        const bool branch_taken_0x22a998 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A998u;
        // 0x22a99c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a998) {
            ctx->pc = 0x22A9B4u;
            goto label_22a9b4;
        }
    }
    ctx->pc = 0x22A9A0u;
    // 0x22a9a0: 0x2662fa58  addiu       $v0, $s3, -0x5A8
    ctx->pc = 0x22a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965848));
    // 0x22a9a4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22a9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x22a9a8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A9A8u;
    {
        const bool branch_taken_0x22a9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a9a8) {
            ctx->pc = 0x22A9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A9A8u;
            // 0x22a9ac: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A9CCu;
            goto label_22a9cc;
        }
    }
    ctx->pc = 0x22A9B0u;
    // 0x22a9b0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x22a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_22a9b4:
    // 0x22a9b4: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22A9B4u;
    {
        const bool branch_taken_0x22a9b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9B4u;
        // 0x22a9b8: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a9b4) {
            ctx->pc = 0x22A9E0u;
            goto label_22a9e0;
        }
    }
    ctx->pc = 0x22A9BCu;
    // 0x22a9bc: 0x240205a2  addiu       $v0, $zero, 0x5A2
    ctx->pc = 0x22a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1442));
    // 0x22a9c0: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A9C0u;
    {
        const bool branch_taken_0x22a9c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9C0u;
        // 0x22a9c4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a9c0) {
            ctx->pc = 0x22A9E4u;
            goto label_22a9e4;
        }
    }
    ctx->pc = 0x22A9C8u;
    // 0x22a9c8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22a9cc:
    // 0x22a9cc: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x22a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22a9d0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A9D0u;
    SET_GPR_U32(ctx, 31, 0x22A9D8u);
    ctx->pc = 0x22A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9D0u;
    // 0x22a9d4: 0x24060683  addiu       $a2, $zero, 0x683 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1667));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A9D0u, 0x22A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9D8u;
label_22a9d8:
    // 0x22a9d8: 0x100002a1  b           . + 4 + (0x2A1 << 2)
    ctx->pc = 0x22A9D8u;
    {
        const bool branch_taken_0x22a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9D8u;
        // 0x22a9dc: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a9d8) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22A9E0u;
label_22a9e0:
    // 0x22a9e0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22a9e4:
    // 0x22a9e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22a9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9e8: 0xc096a10  jal         func_25A840
    ctx->pc = 0x22A9E8u;
    SET_GPR_U32(ctx, 31, 0x22A9F0u);
    ctx->pc = 0x22A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9E8u;
    // 0x22a9ec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A840u, 0x22A9E8u, 0x22A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9F0u;
label_22a9f0:
    // 0x22a9f0: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x22a9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22a9f4: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x22a9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22a9f8: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x22a9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22a9fc: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x22a9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22aa00: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22aa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22aa04: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x22aa04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22aa08: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x22aa08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22aa0c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x22aa0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22aa10: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x22aa10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22aa14: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22aa18: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22aa1c: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22aa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22aa20: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AA20u;
    SET_GPR_U32(ctx, 31, 0x22AA28u);
    ctx->pc = 0x22AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA20u;
    // 0x22aa24: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AA20u, 0x22AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA28u;
label_22aa28:
    // 0x22aa28: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22aa2c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22aa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22aa30: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AA30u;
    SET_GPR_U32(ctx, 31, 0x22AA38u);
    ctx->pc = 0x22AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA30u;
    // 0x22aa34: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AA30u, 0x22AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA38u;
label_22aa38:
    // 0x22aa38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22aa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa3c: 0xc096aa8  jal         func_25AAA0
    ctx->pc = 0x22AA3Cu;
    SET_GPR_U32(ctx, 31, 0x22AA44u);
    ctx->pc = 0x22AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA3Cu;
    // 0x22aa40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AAA0u, 0x22AA3Cu, 0x22AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA44u;
label_22aa44:
    // 0x22aa44: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22AA44u;
    {
        const bool branch_taken_0x22aa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA44u;
        // 0x22aa48: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa44) {
            ctx->pc = 0x22AA70u;
            goto label_22aa70;
        }
    }
    ctx->pc = 0x22AA4Cu;
    // 0x22aa4c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22aa50: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AA50u;
    SET_GPR_U32(ctx, 31, 0x22AA58u);
    ctx->pc = 0x22AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA50u;
    // 0x22aa54: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AA50u, 0x22AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA58u;
label_22aa58:
    // 0x22aa58: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22aa5c: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x22aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22aa60: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AA60u;
    SET_GPR_U32(ctx, 31, 0x22AA68u);
    ctx->pc = 0x22AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA60u;
    // 0x22aa64: 0x24060685  addiu       $a2, $zero, 0x685 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1669));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AA60u, 0x22AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA68u;
label_22aa68:
    // 0x22aa68: 0x1000027d  b           . + 4 + (0x27D << 2)
    ctx->pc = 0x22AA68u;
    {
        const bool branch_taken_0x22aa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA68u;
        // 0x22aa6c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa68) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22AA70u;
label_22aa70:
    // 0x22aa70: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22aa74: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AA74u;
    SET_GPR_U32(ctx, 31, 0x22AA7Cu);
    ctx->pc = 0x22AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA74u;
    // 0x22aa78: 0x240605a1  addiu       $a2, $zero, 0x5A1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1441));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AA74u, 0x22AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA7Cu;
label_22aa7c:
    // 0x22aa7c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22aa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22aa80: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x22aa80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22aa84: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AA84u;
    SET_GPR_U32(ctx, 31, 0x22AA8Cu);
    ctx->pc = 0x22AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA84u;
    // 0x22aa88: 0x24060686  addiu       $a2, $zero, 0x686 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1670));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AA84u, 0x22AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA8Cu;
label_22aa8c:
    // 0x22aa8c: 0x10000274  b           . + 4 + (0x274 << 2)
    ctx->pc = 0x22AA8Cu;
    {
        const bool branch_taken_0x22aa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA8Cu;
        // 0x22aa90: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa8c) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22AA94u;
label_22aa94:
    // 0x22aa94: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x22aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_22aa98:
    // 0x22aa98: 0x2442ffea  addiu       $v0, $v0, -0x16
    ctx->pc = 0x22aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967274));
    // 0x22aa9c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x22aa9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22aaa0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x22AAA0u;
    {
        const bool branch_taken_0x22aaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAA0u;
        // 0x22aaa4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aaa0) {
            ctx->pc = 0x22AB3Cu;
            goto label_22ab3c;
        }
    }
    ctx->pc = 0x22AAA8u;
    // 0x22aaa8: 0x24060563  addiu       $a2, $zero, 0x563
    ctx->pc = 0x22aaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
    // 0x22aaac: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AAACu;
    SET_GPR_U32(ctx, 31, 0x22AAB4u);
    ctx->pc = 0x22AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AAACu;
    // 0x22aab0: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AAACu, 0x22AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAB4u;
label_22aab4:
    // 0x22aab4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22aab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22aab8: 0x24060590  addiu       $a2, $zero, 0x590
    ctx->pc = 0x22aab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
    // 0x22aabc: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AABCu;
    SET_GPR_U32(ctx, 31, 0x22AAC4u);
    ctx->pc = 0x22AAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AABCu;
    // 0x22aac0: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AABCu, 0x22AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAC4u;
label_22aac4:
    // 0x22aac4: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x22aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22aac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aacc: 0x2405080d  addiu       $a1, $zero, 0x80D
    ctx->pc = 0x22aaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x22aad0: 0xa06001a4  sb          $zero, 0x1A4($v1)
    ctx->pc = 0x22aad0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 420), (uint8_t)GPR_U32(ctx, 0));
    // 0x22aad4: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x22aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22aad8: 0xa04401a5  sb          $a0, 0x1A5($v0)
    ctx->pc = 0x22aad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 421), (uint8_t)GPR_U32(ctx, 4));
    // 0x22aadc: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x22AADCu;
    SET_GPR_U32(ctx, 31, 0x22AAE4u);
    ctx->pc = 0x22AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AADCu;
    // 0x22aae0: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x22AADCu, 0x22AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAE4u;
label_22aae4:
    // 0x22aae4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22aae8: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22AAE8u;
    SET_GPR_U32(ctx, 31, 0x22AAF0u);
    ctx->pc = 0x22AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AAE8u;
    // 0x22aaec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22AAE8u, 0x22AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAF0u;
label_22aaf0:
    // 0x22aaf0: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x22aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x22aaf4: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x22aaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x22aaf8: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x22aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x22aafc: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x22aafcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x22ab00: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x22ab00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x22ab04: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x22ab04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x22ab08: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x22ab08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ab0c: 0xc07682a  jal         func_1DA0A8
    ctx->pc = 0x22AB0Cu;
    SET_GPR_U32(ctx, 31, 0x22AB14u);
    ctx->pc = 0x22AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB0Cu;
    // 0x22ab10: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x22AB0Cu, 0x22AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB14u;
label_22ab14:
    // 0x22ab14: 0xae400fd0  sw          $zero, 0xFD0($s2)
    ctx->pc = 0x22ab14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4048), GPR_U32(ctx, 0));
    // 0x22ab18: 0xc08998c  jal         func_226630
    ctx->pc = 0x22AB18u;
    SET_GPR_U32(ctx, 31, 0x22AB20u);
    ctx->pc = 0x22AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB18u;
    // 0x22ab1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226630u, 0x22AB18u, 0x22AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB20u;
label_22ab20:
    // 0x22ab20: 0x8e440388  lw          $a0, 0x388($s2)
    ctx->pc = 0x22ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 904)));
    // 0x22ab24: 0x1080024e  beqz        $a0, . + 4 + (0x24E << 2)
    ctx->pc = 0x22AB24u;
    {
        const bool branch_taken_0x22ab24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB24u;
        // 0x22ab28: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab24) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22AB2Cu;
    // 0x22ab2c: 0xc09bf28  jal         func_26FCA0
    ctx->pc = 0x22AB2Cu;
    SET_GPR_U32(ctx, 31, 0x22AB34u);
    ctx->pc = 0x26FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FCA0u, 0x22AB2Cu, 0x22AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB34u;
label_22ab34:
    // 0x22ab34: 0x1000024a  b           . + 4 + (0x24A << 2)
    ctx->pc = 0x22AB34u;
    {
        const bool branch_taken_0x22ab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB34u;
        // 0x22ab38: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab34) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22AB3Cu;
label_22ab3c:
    // 0x22ab3c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x22ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22ab40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ab44: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22AB44u;
    {
        const bool branch_taken_0x22ab44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB44u;
        // 0x22ab48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab44) {
            ctx->pc = 0x22AB60u;
            goto label_22ab60;
        }
    }
    ctx->pc = 0x22AB4Cu;
    // 0x22ab4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22ab50: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AB50u;
    {
        const bool branch_taken_0x22ab50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB50u;
        // 0x22ab54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab50) {
            ctx->pc = 0x22AB60u;
            goto label_22ab60;
        }
    }
    ctx->pc = 0x22AB58u;
    // 0x22ab58: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22AB58u;
    {
        const bool branch_taken_0x22ab58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x22ab58) {
            ctx->pc = 0x22AB64u;
            goto label_22ab64;
        }
    }
    ctx->pc = 0x22AB60u;
label_22ab60:
    // 0x22ab60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ab64:
    // 0x22ab64: 0x106000a3  beqz        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x22AB64u;
    {
        const bool branch_taken_0x22ab64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ab64) {
            ctx->pc = 0x22ADF4u;
            goto label_22adf4;
        }
    }
    ctx->pc = 0x22AB6Cu;
    // 0x22ab6c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x22ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x22ab70: 0x8ee200bc  lw          $v0, 0xBC($s7)
    ctx->pc = 0x22ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 188)));
    // 0x22ab74: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22ab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22ab78: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x22AB78u;
    {
        const bool branch_taken_0x22ab78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB78u;
        // 0x22ab7c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab78) {
            ctx->pc = 0x22AC04u;
            goto label_22ac04;
        }
    }
    ctx->pc = 0x22AB80u;
    // 0x22ab80: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x22ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x22ab84: 0x8c43ebd0  lw          $v1, -0x1430($v0)
    ctx->pc = 0x22ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x46EBD0u));
    // 0x22ab88: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x22AB88u;
    {
        const bool branch_taken_0x22ab88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB88u;
        // 0x22ab8c: 0x38820003  xori        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab88) {
            ctx->pc = 0x22AC08u;
            goto label_22ac08;
        }
    }
    ctx->pc = 0x22AB90u;
    // 0x22ab90: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x22ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x22ab94: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x22AB94u;
    {
        const bool branch_taken_0x22ab94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB94u;
        // 0x22ab98: 0x38820003  xori        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab94) {
            ctx->pc = 0x22AC08u;
            goto label_22ac08;
        }
    }
    ctx->pc = 0x22AB9Cu;
    // 0x22ab9c: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x22AB9Cu;
    {
        const bool branch_taken_0x22ab9c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB9Cu;
        // 0x22aba0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab9c) {
            ctx->pc = 0x22ABD8u;
            goto label_22abd8;
        }
    }
    ctx->pc = 0x22ABA4u;
    // 0x22aba4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x22aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22aba8: 0xc096a2e  jal         func_25A8B8
    ctx->pc = 0x22ABA8u;
    SET_GPR_U32(ctx, 31, 0x22ABB0u);
    ctx->pc = 0x22ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABA8u;
    // 0x22abac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8B8u, 0x22ABA8u, 0x22ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABB0u;
label_22abb0:
    // 0x22abb0: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22abb4: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22abb8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22ABB8u;
    SET_GPR_U32(ctx, 31, 0x22ABC0u);
    ctx->pc = 0x22ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABB8u;
    // 0x22abbc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22ABB8u, 0x22ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABC0u;
label_22abc0:
    // 0x22abc0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x22abc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22abc4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22abc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_22abc8:
    // 0x22abc8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22ABC8u;
    SET_GPR_U32(ctx, 31, 0x22ABD0u);
    ctx->pc = 0x22ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABC8u;
    // 0x22abcc: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22ABC8u, 0x22ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABD0u;
label_22abd0:
    // 0x22abd0: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x22ABD0u;
    {
        const bool branch_taken_0x22abd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABD0u;
        // 0x22abd4: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22abd0) {
            ctx->pc = 0x22B00Cu;
            goto label_22b00c;
        }
    }
    ctx->pc = 0x22ABD8u;
label_22abd8:
    // 0x22abd8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x22abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22abdc: 0xc096a2e  jal         func_25A8B8
    ctx->pc = 0x22ABDCu;
    SET_GPR_U32(ctx, 31, 0x22ABE4u);
    ctx->pc = 0x22ABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABDCu;
    // 0x22abe0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8B8u, 0x22ABDCu, 0x22ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABE4u;
label_22abe4:
    // 0x22abe4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22abe8: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22abec: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22ABECu;
    SET_GPR_U32(ctx, 31, 0x22ABF4u);
    ctx->pc = 0x22ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABECu;
    // 0x22abf0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22ABECu, 0x22ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABF4u;
label_22abf4:
    // 0x22abf4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x22abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22abf8: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22abf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22abfc: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x22ABFCu;
    {
        const bool branch_taken_0x22abfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABFCu;
        // 0x22ac00: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22abfc) {
            ctx->pc = 0x22B000u;
            goto label_22b000;
        }
    }
    ctx->pc = 0x22AC04u;
label_22ac04:
    // 0x22ac04: 0x38820003  xori        $v0, $a0, 0x3
    ctx->pc = 0x22ac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
label_22ac08:
    // 0x22ac08: 0x12a00058  beqz        $s5, . + 4 + (0x58 << 2)
    ctx->pc = 0x22AC08u;
    {
        const bool branch_taken_0x22ac08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC08u;
        // 0x22ac0c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac08) {
            ctx->pc = 0x22AD6Cu;
            goto label_22ad6c;
        }
    }
    ctx->pc = 0x22AC10u;
    // 0x22ac10: 0xc08a982  jal         func_22A608
    ctx->pc = 0x22AC10u;
    SET_GPR_U32(ctx, 31, 0x22AC18u);
    ctx->pc = 0x22AC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC10u;
    // 0x22ac14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A608u, 0x22AC10u, 0x22AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC18u;
label_22ac18:
    // 0x22ac18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AC18u;
    {
        const bool branch_taken_0x22ac18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC18u;
        // 0x22ac1c: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac18) {
            ctx->pc = 0x22AC28u;
            goto label_22ac28;
        }
    }
    ctx->pc = 0x22AC20u;
    // 0x22ac20: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x22AC20u;
    {
        const bool branch_taken_0x22ac20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC20u;
        // 0x22ac24: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac20) {
            ctx->pc = 0x22AC68u;
            goto label_22ac68;
        }
    }
    ctx->pc = 0x22AC28u;
label_22ac28:
    // 0x22ac28: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22ac28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x22ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22ac30: 0xc096a2e  jal         func_25A8B8
    ctx->pc = 0x22AC30u;
    SET_GPR_U32(ctx, 31, 0x22AC38u);
    ctx->pc = 0x22AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC30u;
    // 0x22ac34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8B8u, 0x22AC30u, 0x22AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC38u;
label_22ac38:
    // 0x22ac38: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x22ac38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x22ac3c: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x22ac3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x22ac40: 0x6ba2004f  ldl         $v0, 0x4F($sp)
    ctx->pc = 0x22ac40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22ac44: 0x6fa20048  ldr         $v0, 0x48($sp)
    ctx->pc = 0x22ac44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22ac48: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x22ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ac4c: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x22ac4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ac50: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x22ac50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ac54: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x22ac54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ac58: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x22ac58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ac5c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x22ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x22ac60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22AC60u;
    {
        const bool branch_taken_0x22ac60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC60u;
        // 0x22ac64: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac60) {
            ctx->pc = 0x22ACA0u;
            goto label_22aca0;
        }
    }
    ctx->pc = 0x22AC68u;
label_22ac68:
    // 0x22ac68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22ac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac6c: 0xc096a10  jal         func_25A840
    ctx->pc = 0x22AC6Cu;
    SET_GPR_U32(ctx, 31, 0x22AC74u);
    ctx->pc = 0x22AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC6Cu;
    // 0x22ac70: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A840u, 0x22AC6Cu, 0x22AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC74u;
label_22ac74:
    // 0x22ac74: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x22ac74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x22ac78: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x22ac78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x22ac7c: 0x6ba6004f  ldl         $a2, 0x4F($sp)
    ctx->pc = 0x22ac7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x22ac80: 0x6fa60048  ldr         $a2, 0x48($sp)
    ctx->pc = 0x22ac80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x22ac84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ac88: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x22ac88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ac8c: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x22ac8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ac90: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x22ac90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ac94: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x22ac94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ac98: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x22ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x22ac9c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22aca0:
    // 0x22aca0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x22ACA0u;
    {
        const bool branch_taken_0x22aca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACA0u;
        // 0x22aca4: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aca0) {
            ctx->pc = 0x22ACD4u;
            goto label_22acd4;
        }
    }
    ctx->pc = 0x22ACA8u;
    // 0x22aca8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22acac: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22ACACu;
    SET_GPR_U32(ctx, 31, 0x22ACB4u);
    ctx->pc = 0x22ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACACu;
    // 0x22acb0: 0x24060570  addiu       $a2, $zero, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22ACACu, 0x22ACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACB4u;
label_22acb4:
    // 0x22acb4: 0xc08a982  jal         func_22A608
    ctx->pc = 0x22ACB4u;
    SET_GPR_U32(ctx, 31, 0x22ACBCu);
    ctx->pc = 0x22ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACB4u;
    // 0x22acb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A608u, 0x22ACB4u, 0x22ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACBCu;
label_22acbc:
    // 0x22acbc: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22acc0: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22acc4: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22ACC4u;
    SET_GPR_U32(ctx, 31, 0x22ACCCu);
    ctx->pc = 0x22ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACC4u;
    // 0x22acc8: 0x2406059d  addiu       $a2, $zero, 0x59D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1437));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22ACC4u, 0x22ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACCCu;
label_22accc:
    // 0x22accc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22ACCCu;
    {
        const bool branch_taken_0x22accc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22accc) {
            ctx->pc = 0x22ACF0u;
            goto label_22acf0;
        }
    }
    ctx->pc = 0x22ACD4u;
label_22acd4:
    // 0x22acd4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22acd8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22ACD8u;
    SET_GPR_U32(ctx, 31, 0x22ACE0u);
    ctx->pc = 0x22ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACD8u;
    // 0x22acdc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22ACD8u, 0x22ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACE0u;
label_22ace0:
    // 0x22ace0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x22ace0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22ace4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22ace4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22ace8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22ACE8u;
    SET_GPR_U32(ctx, 31, 0x22ACF0u);
    ctx->pc = 0x22ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACE8u;
    // 0x22acec: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22ACE8u, 0x22ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACF0u;
label_22acf0:
    // 0x22acf0: 0xc08a982  jal         func_22A608
    ctx->pc = 0x22ACF0u;
    SET_GPR_U32(ctx, 31, 0x22ACF8u);
    ctx->pc = 0x22ACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACF0u;
    // 0x22acf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A608u, 0x22ACF0u, 0x22ACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACF8u;
label_22acf8:
    // 0x22acf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22ACF8u;
    {
        const bool branch_taken_0x22acf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACF8u;
        // 0x22acfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22acf8) {
            ctx->pc = 0x22AD08u;
            goto label_22ad08;
        }
    }
    ctx->pc = 0x22AD00u;
    // 0x22ad00: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x22AD00u;
    {
        const bool branch_taken_0x22ad00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD00u;
        // 0x22ad04: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad00) {
            ctx->pc = 0x22AD50u;
            goto label_22ad50;
        }
    }
    ctx->pc = 0x22AD08u;
label_22ad08:
    // 0x22ad08: 0xc096aa8  jal         func_25AAA0
    ctx->pc = 0x22AD08u;
    SET_GPR_U32(ctx, 31, 0x22AD10u);
    ctx->pc = 0x22AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD08u;
    // 0x22ad0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AAA0u, 0x22AD08u, 0x22AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD10u;
label_22ad10:
    // 0x22ad10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22AD10u;
    {
        const bool branch_taken_0x22ad10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD10u;
        // 0x22ad14: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad10) {
            ctx->pc = 0x22AD34u;
            goto label_22ad34;
        }
    }
    ctx->pc = 0x22AD18u;
    // 0x22ad18: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22ad18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x22ad1c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AD1Cu;
    SET_GPR_U32(ctx, 31, 0x22AD24u);
    ctx->pc = 0x22AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD1Cu;
    // 0x22ad20: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AD1Cu, 0x22AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD24u;
label_22ad24:
    // 0x22ad24: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22ad24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22ad28: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22ad28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22ad2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22AD2Cu;
    {
        const bool branch_taken_0x22ad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD2Cu;
        // 0x22ad30: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad2c) {
            ctx->pc = 0x22AD58u;
            goto label_22ad58;
        }
    }
    ctx->pc = 0x22AD34u;
label_22ad34:
    // 0x22ad34: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22ad34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x22ad38: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AD38u;
    SET_GPR_U32(ctx, 31, 0x22AD40u);
    ctx->pc = 0x22AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD38u;
    // 0x22ad3c: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AD38u, 0x22AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD40u;
label_22ad40:
    // 0x22ad40: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22ad44: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22ad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22ad48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22AD48u;
    {
        const bool branch_taken_0x22ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD48u;
        // 0x22ad4c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad48) {
            ctx->pc = 0x22AD58u;
            goto label_22ad58;
        }
    }
    ctx->pc = 0x22AD50u;
label_22ad50:
    // 0x22ad50: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22ad50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x22ad54: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22ad58:
    // 0x22ad58: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AD58u;
    SET_GPR_U32(ctx, 31, 0x22AD60u);
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AD58u, 0x22AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD60u;
label_22ad60:
    // 0x22ad60: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x22ad60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22ad64: 0x1000ff98  b           . + 4 + (-0x68 << 2)
    ctx->pc = 0x22AD64u;
    {
        const bool branch_taken_0x22ad64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD64u;
        // 0x22ad68: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad64) {
            ctx->pc = 0x22ABC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22abc8;
        }
    }
    ctx->pc = 0x22AD6Cu;
label_22ad6c:
    // 0x22ad6c: 0xc08a982  jal         func_22A608
    ctx->pc = 0x22AD6Cu;
    SET_GPR_U32(ctx, 31, 0x22AD74u);
    ctx->pc = 0x22AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD6Cu;
    // 0x22ad70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A608u, 0x22AD6Cu, 0x22AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD74u;
label_22ad74:
    // 0x22ad74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AD74u;
    {
        const bool branch_taken_0x22ad74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD74u;
        // 0x22ad78: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad74) {
            ctx->pc = 0x22AD84u;
            goto label_22ad84;
        }
    }
    ctx->pc = 0x22AD7Cu;
    // 0x22ad7c: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x22AD7Cu;
    {
        const bool branch_taken_0x22ad7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ad7c) {
            ctx->pc = 0x22ADC8u;
            goto label_22adc8;
        }
    }
    ctx->pc = 0x22AD84u;
label_22ad84:
    // 0x22ad84: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22ad88: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AD88u;
    SET_GPR_U32(ctx, 31, 0x22AD90u);
    ctx->pc = 0x22AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD88u;
    // 0x22ad8c: 0x24060570  addiu       $a2, $zero, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AD88u, 0x22AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD90u;
label_22ad90:
    // 0x22ad90: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22ad94: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22ad98: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AD98u;
    SET_GPR_U32(ctx, 31, 0x22ADA0u);
    ctx->pc = 0x22AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD98u;
    // 0x22ad9c: 0x2406059d  addiu       $a2, $zero, 0x59D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1437));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AD98u, 0x22ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADA0u;
label_22ada0:
    // 0x22ada0: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22ada4: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22ada4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x22ada8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22ADA8u;
    SET_GPR_U32(ctx, 31, 0x22ADB0u);
    ctx->pc = 0x22ADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADA8u;
    // 0x22adac: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22ADA8u, 0x22ADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADB0u;
label_22adb0:
    // 0x22adb0: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22adb4: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22adb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22adb8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22ADB8u;
    SET_GPR_U32(ctx, 31, 0x22ADC0u);
    ctx->pc = 0x22ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADB8u;
    // 0x22adbc: 0x2406067b  addiu       $a2, $zero, 0x67B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1659));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22ADB8u, 0x22ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADC0u;
label_22adc0:
    // 0x22adc0: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x22ADC0u;
    {
        const bool branch_taken_0x22adc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADC0u;
        // 0x22adc4: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22adc0) {
            ctx->pc = 0x22B00Cu;
            goto label_22b00c;
        }
    }
    ctx->pc = 0x22ADC8u;
label_22adc8:
    // 0x22adc8: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22adcc: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22ADCCu;
    SET_GPR_U32(ctx, 31, 0x22ADD4u);
    ctx->pc = 0x22ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADCCu;
    // 0x22add0: 0x2406056c  addiu       $a2, $zero, 0x56C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22ADCCu, 0x22ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADD4u;
label_22add4:
    // 0x22add4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22add4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22add8: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22add8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22addc: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22ADDCu;
    SET_GPR_U32(ctx, 31, 0x22ADE4u);
    ctx->pc = 0x22ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADDCu;
    // 0x22ade0: 0x24060599  addiu       $a2, $zero, 0x599 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1433));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22ADDCu, 0x22ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADE4u;
label_22ade4:
    // 0x22ade4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22ade8: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x22ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22adec: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x22ADECu;
    {
        const bool branch_taken_0x22adec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADECu;
        // 0x22adf0: 0x24060681  addiu       $a2, $zero, 0x681 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1665));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22adec) {
            ctx->pc = 0x22B000u;
            goto label_22b000;
        }
    }
    ctx->pc = 0x22ADF4u;
label_22adf4:
    // 0x22adf4: 0x13c00023  beqz        $fp, . + 4 + (0x23 << 2)
    ctx->pc = 0x22ADF4u;
    {
        const bool branch_taken_0x22adf4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x22adf4) {
            ctx->pc = 0x22AE84u;
            goto label_22ae84;
        }
    }
    ctx->pc = 0x22ADFCu;
    // 0x22adfc: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x22ADFCu;
    {
        const bool branch_taken_0x22adfc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADFCu;
        // 0x22ae00: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22adfc) {
            ctx->pc = 0x22AE48u;
            goto label_22ae48;
        }
    }
    ctx->pc = 0x22AE04u;
    // 0x22ae04: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22ae04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22ae08: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AE08u;
    SET_GPR_U32(ctx, 31, 0x22AE10u);
    ctx->pc = 0x22AE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE08u;
    // 0x22ae0c: 0x2406056d  addiu       $a2, $zero, 0x56D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1389));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AE08u, 0x22AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE10u;
label_22ae10:
    // 0x22ae10: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22ae14: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22ae18: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AE18u;
    SET_GPR_U32(ctx, 31, 0x22AE20u);
    ctx->pc = 0x22AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE18u;
    // 0x22ae1c: 0x2406059a  addiu       $a2, $zero, 0x59A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1434));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AE18u, 0x22AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE20u;
label_22ae20:
    // 0x22ae20: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22ae24: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22ae24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x22ae28: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AE28u;
    SET_GPR_U32(ctx, 31, 0x22AE30u);
    ctx->pc = 0x22AE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE28u;
    // 0x22ae2c: 0x240605a1  addiu       $a2, $zero, 0x5A1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1441));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AE28u, 0x22AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE30u;
label_22ae30:
    // 0x22ae30: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22ae34: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22ae34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22ae38: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AE38u;
    SET_GPR_U32(ctx, 31, 0x22AE40u);
    ctx->pc = 0x22AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE38u;
    // 0x22ae3c: 0x2406067a  addiu       $a2, $zero, 0x67A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1658));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AE38u, 0x22AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE40u;
label_22ae40:
    // 0x22ae40: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x22AE40u;
    {
        const bool branch_taken_0x22ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE40u;
        // 0x22ae44: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae40) {
            ctx->pc = 0x22B00Cu;
            goto label_22b00c;
        }
    }
    ctx->pc = 0x22AE48u;
label_22ae48:
    // 0x22ae48: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22ae48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22ae4c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AE4Cu;
    SET_GPR_U32(ctx, 31, 0x22AE54u);
    ctx->pc = 0x22AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE4Cu;
    // 0x22ae50: 0x24060570  addiu       $a2, $zero, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AE4Cu, 0x22AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE54u;
label_22ae54:
    // 0x22ae54: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22ae58: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22ae5c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AE5Cu;
    SET_GPR_U32(ctx, 31, 0x22AE64u);
    ctx->pc = 0x22AE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE5Cu;
    // 0x22ae60: 0x2406059d  addiu       $a2, $zero, 0x59D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1437));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AE5Cu, 0x22AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE64u;
label_22ae64:
    // 0x22ae64: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22ae68: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22ae68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x22ae6c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AE6Cu;
    SET_GPR_U32(ctx, 31, 0x22AE74u);
    ctx->pc = 0x22AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE6Cu;
    // 0x22ae70: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AE6Cu, 0x22AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE74u;
label_22ae74:
    // 0x22ae74: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22ae78: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22ae78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22ae7c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x22AE7Cu;
    {
        const bool branch_taken_0x22ae7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE7Cu;
        // 0x22ae80: 0x2406067b  addiu       $a2, $zero, 0x67B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1659));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae7c) {
            ctx->pc = 0x22B000u;
            goto label_22b000;
        }
    }
    ctx->pc = 0x22AE84u;
label_22ae84:
    // 0x22ae84: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x22AE84u;
    SET_GPR_U32(ctx, 31, 0x22AE8Cu);
    ctx->pc = 0x22AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE84u;
    // 0x22ae88: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22AE84u, 0x22AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE8Cu;
label_22ae8c:
    // 0x22ae8c: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x22ae8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x22ae90: 0x54400071  bnel        $v0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x22AE90u;
    {
        const bool branch_taken_0x22ae90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ae90) {
            ctx->pc = 0x22AE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AE90u;
            // 0x22ae94: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B058u;
            goto label_22b058;
        }
    }
    ctx->pc = 0x22AE98u;
    // 0x22ae98: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x22ae98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22ae9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22ae9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aea0: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x22AEA0u;
    SET_GPR_U32(ctx, 31, 0x22AEA8u);
    ctx->pc = 0x22AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AEA0u;
    // 0x22aea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x22AEA0u, 0x22AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEA8u;
label_22aea8:
    // 0x22aea8: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x22aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x22aeac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22aeb0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x22aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x22aeb4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x22aeb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22aeb8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22aeb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22aebc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22aebcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22aec0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x22aec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22aec4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x22aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22aec8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x22aec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22aecc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x22aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22aed0: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x22aed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22aed4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22aed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22aed8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22aed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22aedc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x22aedcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22aee0: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x22aee0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22aee4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x22aee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22aee8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x22aee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22aeec: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x22aeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22aef0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x22aef0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x22aef4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x22aef4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x22aef8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x22aef8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x22aefc: 0x46010044  c1          0x10044
    ctx->pc = 0x22aefcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x22af00: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x22af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22af04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22af04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22af08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22af08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22af0c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x22af0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22af10: 0x0  nop
    ctx->pc = 0x22af10u;
    // NOP
    // 0x22af14: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x22af14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x22af18: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x22af18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22af1c: 0x0  nop
    ctx->pc = 0x22af1cu;
    // NOP
    // 0x22af20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x22AF20u;
    {
        const bool branch_taken_0x22af20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22af20) {
            ctx->pc = 0x22AF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AF20u;
            // 0x22af24: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AF28u;
            goto label_22af28;
        }
    }
    ctx->pc = 0x22AF28u;
label_22af28:
    // 0x22af28: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x22af28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x22af2c: 0x8ca2ebc8  lw          $v0, -0x1438($a1)
    ctx->pc = 0x22af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x46EBC8u));
    // 0x22af30: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22AF30u;
    {
        const bool branch_taken_0x22af30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af30) {
            ctx->pc = 0x22AF78u;
            goto label_22af78;
        }
    }
    ctx->pc = 0x22AF38u;
    // 0x22af38: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x22AF38u;
    {
        const bool branch_taken_0x22af38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF38u;
        // 0x22af3c: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af38) {
            ctx->pc = 0x22AF5Cu;
            goto label_22af5c;
        }
    }
    ctx->pc = 0x22AF40u;
    // 0x22af40: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22af40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22af44: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AF44u;
    SET_GPR_U32(ctx, 31, 0x22AF4Cu);
    ctx->pc = 0x22AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF44u;
    // 0x22af48: 0x24060568  addiu       $a2, $zero, 0x568 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AF44u, 0x22AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF4Cu;
label_22af4c:
    // 0x22af4c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22af50: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22af50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22af54: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22AF54u;
    {
        const bool branch_taken_0x22af54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF54u;
        // 0x22af58: 0x24060595  addiu       $a2, $zero, 0x595 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af54) {
            ctx->pc = 0x22AFB4u;
            goto label_22afb4;
        }
    }
    ctx->pc = 0x22AF5Cu;
label_22af5c:
    // 0x22af5c: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22af5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22af60: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AF60u;
    SET_GPR_U32(ctx, 31, 0x22AF68u);
    ctx->pc = 0x22AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF60u;
    // 0x22af64: 0x24060567  addiu       $a2, $zero, 0x567 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AF60u, 0x22AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF68u;
label_22af68:
    // 0x22af68: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22af68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22af6c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22af6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22af70: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22AF70u;
    {
        const bool branch_taken_0x22af70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF70u;
        // 0x22af74: 0x24060594  addiu       $a2, $zero, 0x594 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af70) {
            ctx->pc = 0x22AFECu;
            goto label_22afec;
        }
    }
    ctx->pc = 0x22AF78u;
label_22af78:
    // 0x22af78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22af78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22af7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22af7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22af80: 0x0  nop
    ctx->pc = 0x22af80u;
    // NOP
    // 0x22af84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22af84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22af88: 0x0  nop
    ctx->pc = 0x22af88u;
    // NOP
    // 0x22af8c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x22AF8Cu;
    {
        const bool branch_taken_0x22af8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22af8c) {
            ctx->pc = 0x22B028u;
            goto label_22b028;
        }
    }
    ctx->pc = 0x22AF94u;
    // 0x22af94: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x22AF94u;
    {
        const bool branch_taken_0x22af94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF94u;
        // 0x22af98: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af94) {
            ctx->pc = 0x22AFD4u;
            goto label_22afd4;
        }
    }
    ctx->pc = 0x22AF9Cu;
    // 0x22af9c: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22af9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22afa0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AFA0u;
    SET_GPR_U32(ctx, 31, 0x22AFA8u);
    ctx->pc = 0x22AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AFA0u;
    // 0x22afa4: 0x24060554  addiu       $a2, $zero, 0x554 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AFA0u, 0x22AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFA8u;
label_22afa8:
    // 0x22afa8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22afac: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22afacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22afb0: 0x2406057c  addiu       $a2, $zero, 0x57C
    ctx->pc = 0x22afb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1404));
label_22afb4:
    // 0x22afb4: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AFB4u;
    SET_GPR_U32(ctx, 31, 0x22AFBCu);
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AFB4u, 0x22AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFBCu;
label_22afbc:
    // 0x22afbc: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22afc0: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22afc4: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AFC4u;
    SET_GPR_U32(ctx, 31, 0x22AFCCu);
    ctx->pc = 0x22AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AFC4u;
    // 0x22afc8: 0x240605ad  addiu       $a2, $zero, 0x5AD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1453));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AFC4u, 0x22AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFCCu;
label_22afcc:
    // 0x22afcc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22AFCCu;
    {
        const bool branch_taken_0x22afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFCCu;
        // 0x22afd0: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afcc) {
            ctx->pc = 0x22B00Cu;
            goto label_22b00c;
        }
    }
    ctx->pc = 0x22AFD4u;
label_22afd4:
    // 0x22afd4: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22afd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22afd8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AFD8u;
    SET_GPR_U32(ctx, 31, 0x22AFE0u);
    ctx->pc = 0x22AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AFD8u;
    // 0x22afdc: 0x24060553  addiu       $a2, $zero, 0x553 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1363));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AFD8u, 0x22AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFE0u;
label_22afe0:
    // 0x22afe0: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22afe4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22afe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22afe8: 0x2406057b  addiu       $a2, $zero, 0x57B
    ctx->pc = 0x22afe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1403));
label_22afec:
    // 0x22afec: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22AFECu;
    SET_GPR_U32(ctx, 31, 0x22AFF4u);
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22AFECu, 0x22AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFF4u;
label_22aff4:
    // 0x22aff4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22aff8: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x22aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x22affc: 0x240605ac  addiu       $a2, $zero, 0x5AC
    ctx->pc = 0x22affcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1452));
label_22b000:
    // 0x22b000: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B000u;
    SET_GPR_U32(ctx, 31, 0x22B008u);
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B000u, 0x22B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B008u;
label_22b008:
    // 0x22b008: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22b00c:
    // 0x22b00c: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x22B00Cu;
    SET_GPR_U32(ctx, 31, 0x22B014u);
    ctx->pc = 0x22B010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B00Cu;
    // 0x22b010: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x22B00Cu, 0x22B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B014u;
label_22b014:
    // 0x22b014: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b018: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22B018u;
    SET_GPR_U32(ctx, 31, 0x22B020u);
    ctx->pc = 0x22B01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B018u;
    // 0x22b01c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22B018u, 0x22B020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B020u;
label_22b020:
    // 0x22b020: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x22B020u;
    {
        const bool branch_taken_0x22b020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B020u;
        // 0x22b024: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b020) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B028u;
label_22b028:
    // 0x22b028: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x22B028u;
    {
        const bool branch_taken_0x22b028 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B028u;
        // 0x22b02c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b028) {
            ctx->pc = 0x22B044u;
            goto label_22b044;
        }
    }
    ctx->pc = 0x22B030u;
    // 0x22b030: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b034: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B034u;
    SET_GPR_U32(ctx, 31, 0x22B03Cu);
    ctx->pc = 0x22B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B034u;
    // 0x22b038: 0x24060372  addiu       $a2, $zero, 0x372 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 882));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B034u, 0x22B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B03Cu;
label_22b03c:
    // 0x22b03c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x22B03Cu;
    {
        const bool branch_taken_0x22b03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B03Cu;
        // 0x22b040: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b03c) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B044u;
label_22b044:
    // 0x22b044: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b048: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B048u;
    SET_GPR_U32(ctx, 31, 0x22B050u);
    ctx->pc = 0x22B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B048u;
    // 0x22b04c: 0x24060373  addiu       $a2, $zero, 0x373 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 883));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B048u, 0x22B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B050u;
label_22b050:
    // 0x22b050: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x22B050u;
    {
        const bool branch_taken_0x22b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B050u;
        // 0x22b054: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b050) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B058u;
label_22b058:
    // 0x22b058: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22b058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22b05c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B05Cu;
    {
        const bool branch_taken_0x22b05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B05Cu;
        // 0x22b060: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b05c) {
            ctx->pc = 0x22B06Cu;
            goto label_22b06c;
        }
    }
    ctx->pc = 0x22B064u;
    // 0x22b064: 0x146200fe  bne         $v1, $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x22B064u;
    {
        const bool branch_taken_0x22b064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B064u;
        // 0x22b068: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b064) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B06Cu;
label_22b06c:
    // 0x22b06c: 0x86c2000c  lh          $v0, 0xC($s6)
    ctx->pc = 0x22b06cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x22b070: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22b070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b074: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B074u;
    {
        const bool branch_taken_0x22b074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B074u;
        // 0x22b078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b074) {
            ctx->pc = 0x22B080u;
            goto label_22b080;
        }
    }
    ctx->pc = 0x22B07Cu;
    // 0x22b07c: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x22b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_22b080:
    // 0x22b080: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x22B080u;
    SET_GPR_U32(ctx, 31, 0x22B088u);
    ctx->pc = 0x22B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B080u;
    // 0x22b084: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x22B080u, 0x22B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B088u;
label_22b088:
    // 0x22b088: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22b088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22b08c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22b08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b090: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22B090u;
    SET_GPR_U32(ctx, 31, 0x22B098u);
    ctx->pc = 0x22B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B090u;
    // 0x22b094: 0x24a54518  addiu       $a1, $a1, 0x4518 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22B090u, 0x22B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B098u;
label_22b098:
    // 0x22b098: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22b098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22b09c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22B09Cu;
    {
        const bool branch_taken_0x22b09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b09c) {
            ctx->pc = 0x22B0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B09Cu;
            // 0x22b0a0: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B0C0u;
            goto label_22b0c0;
        }
    }
    ctx->pc = 0x22B0A4u;
    // 0x22b0a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22b0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22b0a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22b0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b0ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22B0ACu;
    SET_GPR_U32(ctx, 31, 0x22B0B4u);
    ctx->pc = 0x22B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0ACu;
    // 0x22b0b0: 0x24a54528  addiu       $a1, $a1, 0x4528 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22B0ACu, 0x22B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0B4u;
label_22b0b4:
    // 0x22b0b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22b0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22b0b8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x22B0B8u;
    {
        const bool branch_taken_0x22b0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0B8u;
        // 0x22b0bc: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0b8) {
            ctx->pc = 0x22B160u;
            goto label_22b160;
        }
    }
    ctx->pc = 0x22B0C0u;
label_22b0c0:
    // 0x22b0c0: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x22B0C0u;
    SET_GPR_U32(ctx, 31, 0x22B0C8u);
    ctx->pc = 0x22B0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0C0u;
    // 0x22b0c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x22B0C0u, 0x22B0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0C8u;
label_22b0c8:
    // 0x22b0c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b0cc: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x22B0CCu;
    SET_GPR_U32(ctx, 31, 0x22B0D4u);
    ctx->pc = 0x22B0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0CCu;
    // 0x22b0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x22B0CCu, 0x22B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0D4u;
label_22b0d4:
    // 0x22b0d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B0D4u;
    {
        const bool branch_taken_0x22b0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0D4u;
        // 0x22b0d8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0d4) {
            ctx->pc = 0x22B0E8u;
            goto label_22b0e8;
        }
    }
    ctx->pc = 0x22B0DCu;
    // 0x22b0dc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x22B0DCu;
    SET_GPR_U32(ctx, 31, 0x22B0E4u);
    ctx->pc = 0x22B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0DCu;
    // 0x22b0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x22B0DCu, 0x22B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0E4u;
label_22b0e4:
    // 0x22b0e4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x22b0e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22b0e8:
    // 0x22b0e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22b0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b0ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b0f0: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x22B0F0u;
    SET_GPR_U32(ctx, 31, 0x22B0F8u);
    ctx->pc = 0x22B0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0F0u;
    // 0x22b0f4: 0x261000b0  addiu       $s0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x22B0F0u, 0x22B0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0F8u;
label_22b0f8:
    // 0x22b0f8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x22b0f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22b0fc: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x22b0fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22b100: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x22b100u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22b104: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x22b104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22b108: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x22b108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22b10c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x22b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22b110: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x22b110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b114: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x22b114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b118: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x22b118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22b11c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x22b11cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x22b120: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x22b120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x22b124: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x22b124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x22b128: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x22b128u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x22b12c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x22b12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22b130: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x22b130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22b134: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x22b134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22b138: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x22b138u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x22b13c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x22b13cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x22b140: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x22b140u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x22b144: 0x46010044  c1          0x10044
    ctx->pc = 0x22b144u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x22b148: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x22b148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x22b14c: 0xc44096ec  lwc1        $f0, -0x6914($v0)
    ctx->pc = 0x22b14cu;
    { uint32_t bits = FAST_READ32(0x3F96ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b150: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22b150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b154: 0x0  nop
    ctx->pc = 0x22b154u;
    // NOP
    // 0x22b158: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x22B158u;
    {
        const bool branch_taken_0x22b158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b158) {
            ctx->pc = 0x22B15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B158u;
            // 0x22b15c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B160u;
            goto label_22b160;
        }
    }
    ctx->pc = 0x22B160u;
label_22b160:
    // 0x22b160: 0x52800014  beql        $s4, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x22B160u;
    {
        const bool branch_taken_0x22b160 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b160) {
            ctx->pc = 0x22B164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B160u;
            // 0x22b164: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B1B4u;
            goto label_22b1b4;
        }
    }
    ctx->pc = 0x22B168u;
    // 0x22b168: 0x8e42032c  lw          $v0, 0x32C($s2)
    ctx->pc = 0x22b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
    // 0x22b16c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B16Cu;
    {
        const bool branch_taken_0x22b16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b16c) {
            ctx->pc = 0x22B180u;
            goto label_22b180;
        }
    }
    ctx->pc = 0x22B174u;
    // 0x22b174: 0x8c420228  lw          $v0, 0x228($v0)
    ctx->pc = 0x22b174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 552)));
    // 0x22b178: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x22B178u;
    {
        const bool branch_taken_0x22b178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b178) {
            ctx->pc = 0x22B17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B178u;
            // 0x22b17c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B1B4u;
            goto label_22b1b4;
        }
    }
    ctx->pc = 0x22B180u;
label_22b180:
    // 0x22b180: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B180u;
    {
        const bool branch_taken_0x22b180 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B180u;
        // 0x22b184: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b180) {
            ctx->pc = 0x22B198u;
            goto label_22b198;
        }
    }
    ctx->pc = 0x22B188u;
    // 0x22b188: 0xc06991c  jal         func_1A6470
    ctx->pc = 0x22B188u;
    SET_GPR_U32(ctx, 31, 0x22B190u);
    ctx->pc = 0x22B18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B188u;
    // 0x22b18c: 0x24050373  addiu       $a1, $zero, 0x373 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 883));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6470u, 0x22B188u, 0x22B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B190u;
label_22b190:
    // 0x22b190: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22B190u;
    {
        const bool branch_taken_0x22b190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B190u;
        // 0x22b194: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b190) {
            ctx->pc = 0x22B1A4u;
            goto label_22b1a4;
        }
    }
    ctx->pc = 0x22B198u;
label_22b198:
    // 0x22b198: 0xc06991c  jal         func_1A6470
    ctx->pc = 0x22B198u;
    SET_GPR_U32(ctx, 31, 0x22B1A0u);
    ctx->pc = 0x22B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B198u;
    // 0x22b19c: 0x24050372  addiu       $a1, $zero, 0x372 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 882));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6470u, 0x22B198u, 0x22B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1A0u;
label_22b1a0:
    // 0x22b1a0: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22b1a4:
    // 0x22b1a4: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22B1A4u;
    SET_GPR_U32(ctx, 31, 0x22B1ACu);
    ctx->pc = 0x22B1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1A4u;
    // 0x22b1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22B1A4u, 0x22B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1ACu;
label_22b1ac:
    // 0x22b1ac: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x22B1ACu;
    {
        const bool branch_taken_0x22b1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1ACu;
        // 0x22b1b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1ac) {
            ctx->pc = 0x22B454u;
            goto label_22b454;
        }
    }
    ctx->pc = 0x22B1B4u;
label_22b1b4:
    // 0x22b1b4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x22b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22b1b8: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22B1B8u;
    {
        const bool branch_taken_0x22b1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b1b8) {
            ctx->pc = 0x22B1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B1B8u;
            // 0x22b1bc: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B1ECu;
            goto label_22b1ec;
        }
    }
    ctx->pc = 0x22B1C0u;
    // 0x22b1c0: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x22B1C0u;
    SET_GPR_U32(ctx, 31, 0x22B1C8u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x22B1C0u, 0x22B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1C8u;
label_22b1c8:
    // 0x22b1c8: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x22b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x22b1cc: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B1CCu;
    {
        const bool branch_taken_0x22b1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b1cc) {
            ctx->pc = 0x22B1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B1CCu;
            // 0x22b1d0: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B1ECu;
            goto label_22b1ec;
        }
    }
    ctx->pc = 0x22B1D4u;
    // 0x22b1d4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b1d8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x22b1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22b1dc: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B1DCu;
    SET_GPR_U32(ctx, 31, 0x22B1E4u);
    ctx->pc = 0x22B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1DCu;
    // 0x22b1e0: 0x2406044f  addiu       $a2, $zero, 0x44F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1103));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B1DCu, 0x22B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1E4u;
label_22b1e4:
    // 0x22b1e4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x22B1E4u;
    {
        const bool branch_taken_0x22b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1E4u;
        // 0x22b1e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1e4) {
            ctx->pc = 0x22B364u;
            goto label_22b364;
        }
    }
    ctx->pc = 0x22B1ECu;
label_22b1ec:
    // 0x22b1ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22b1ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1f0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x22b1f4: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x22b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x22b1f8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22b1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22b1fc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22B1FCu;
    {
        const bool branch_taken_0x22b1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1FCu;
        // 0x22b200: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1fc) {
            ctx->pc = 0x22B238u;
            goto label_22b238;
        }
    }
    ctx->pc = 0x22B204u;
    // 0x22b204: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x22b204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22b208: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22B208u;
    {
        const bool branch_taken_0x22b208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b208) {
            ctx->pc = 0x22B20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B208u;
            // 0x22b20c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B23Cu;
            goto label_22b23c;
        }
    }
    ctx->pc = 0x22B210u;
    // 0x22b210: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x22B210u;
    SET_GPR_U32(ctx, 31, 0x22B218u);
    ctx->pc = 0x22B214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B210u;
    // 0x22b214: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x22B210u, 0x22B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B218u;
label_22b218:
    // 0x22b218: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22B218u;
    {
        const bool branch_taken_0x22b218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b218) {
            ctx->pc = 0x22B21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B218u;
            // 0x22b21c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B23Cu;
            goto label_22b23c;
        }
    }
    ctx->pc = 0x22B220u;
    // 0x22b220: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22b220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x22b224: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x22b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x22b228: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B228u;
    {
        const bool branch_taken_0x22b228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B228u;
        // 0x22b22c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b228) {
            ctx->pc = 0x22B238u;
            goto label_22b238;
        }
    }
    ctx->pc = 0x22B230u;
    // 0x22b230: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B230u;
    {
        const bool branch_taken_0x22b230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b230) {
            ctx->pc = 0x22B23Cu;
            goto label_22b23c;
        }
    }
    ctx->pc = 0x22B238u;
label_22b238:
    // 0x22b238: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22b238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b23c:
    // 0x22b23c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B23Cu;
    {
        const bool branch_taken_0x22b23c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b23c) {
            ctx->pc = 0x22B25Cu;
            goto label_22b25c;
        }
    }
    ctx->pc = 0x22B244u;
    // 0x22b244: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x22b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x22b248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22b248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22b24c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22b250: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22b250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b254: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x22b254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x22b258: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x22b258u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22b25c:
    // 0x22b25c: 0x56600021  bnel        $s3, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x22B25Cu;
    {
        const bool branch_taken_0x22b25c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b25c) {
            ctx->pc = 0x22B260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B25Cu;
            // 0x22b260: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B2E4u;
            goto label_22b2e4;
        }
    }
    ctx->pc = 0x22B264u;
    // 0x22b264: 0x8e500334  lw          $s0, 0x334($s2)
    ctx->pc = 0x22b264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b268: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22b268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b26c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x22b270: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x22b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x22b274: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22b274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22b278: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22B278u;
    {
        const bool branch_taken_0x22b278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B278u;
        // 0x22b27c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b278) {
            ctx->pc = 0x22B2B4u;
            goto label_22b2b4;
        }
    }
    ctx->pc = 0x22B280u;
    // 0x22b280: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x22b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22b284: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22B284u;
    {
        const bool branch_taken_0x22b284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b284) {
            ctx->pc = 0x22B288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B284u;
            // 0x22b288: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B2B8u;
            goto label_22b2b8;
        }
    }
    ctx->pc = 0x22B28Cu;
    // 0x22b28c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x22B28Cu;
    SET_GPR_U32(ctx, 31, 0x22B294u);
    ctx->pc = 0x22B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B28Cu;
    // 0x22b290: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x22B28Cu, 0x22B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B294u;
label_22b294:
    // 0x22b294: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22B294u;
    {
        const bool branch_taken_0x22b294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b294) {
            ctx->pc = 0x22B298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B294u;
            // 0x22b298: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B2B8u;
            goto label_22b2b8;
        }
    }
    ctx->pc = 0x22B29Cu;
    // 0x22b29c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x22b2a0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x22b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x22b2a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B2A4u;
    {
        const bool branch_taken_0x22b2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2A4u;
        // 0x22b2a8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2a4) {
            ctx->pc = 0x22B2B4u;
            goto label_22b2b4;
        }
    }
    ctx->pc = 0x22B2ACu;
    // 0x22b2ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B2ACu;
    {
        const bool branch_taken_0x22b2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b2ac) {
            ctx->pc = 0x22B2B8u;
            goto label_22b2b8;
        }
    }
    ctx->pc = 0x22B2B4u;
label_22b2b4:
    // 0x22b2b4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22b2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b2b8:
    // 0x22b2b8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B2B8u;
    {
        const bool branch_taken_0x22b2b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b2b8) {
            ctx->pc = 0x22B2D8u;
            goto label_22b2d8;
        }
    }
    ctx->pc = 0x22B2C0u;
    // 0x22b2c0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x22b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x22b2c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22b2c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22b2cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b2d0: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x22b2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x22b2d4: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x22b2d4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22b2d8:
    // 0x22b2d8: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x22B2D8u;
    {
        const bool branch_taken_0x22b2d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2D8u;
        // 0x22b2dc: 0x8fa60074  lw          $a2, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2d8) {
            ctx->pc = 0x22B378u;
            goto label_22b378;
        }
    }
    ctx->pc = 0x22B2E0u;
    // 0x22b2e0: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22b2e4:
    // 0x22b2e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22b2e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b2e8: 0xc4800170  lwc1        $f0, 0x170($a0)
    ctx->pc = 0x22b2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b2ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b2f0: 0x0  nop
    ctx->pc = 0x22b2f0u;
    // NOP
    // 0x22b2f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22B2F4u;
    {
        const bool branch_taken_0x22b2f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2F4u;
        // 0x22b2f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2f4) {
            ctx->pc = 0x22B300u;
            goto label_22b300;
        }
    }
    ctx->pc = 0x22B2FCu;
    // 0x22b2fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22b2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b300:
    // 0x22b300: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x22B300u;
    {
        const bool branch_taken_0x22b300 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b300) {
            ctx->pc = 0x22B328u;
            goto label_22b328;
        }
    }
    ctx->pc = 0x22B308u;
    // 0x22b308: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22B308u;
    {
        const bool branch_taken_0x22b308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B308u;
        // 0x22b30c: 0x8fa60074  lw          $a2, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b308) {
            ctx->pc = 0x22B378u;
            goto label_22b378;
        }
    }
    ctx->pc = 0x22B310u;
    // 0x22b310: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x22b310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22b314: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B314u;
    SET_GPR_U32(ctx, 31, 0x22B31Cu);
    ctx->pc = 0x22B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B314u;
    // 0x22b318: 0x2406056d  addiu       $a2, $zero, 0x56D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1389));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B314u, 0x22B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B31Cu;
label_22b31c:
    // 0x22b31c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b320: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22B320u;
    {
        const bool branch_taken_0x22b320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B320u;
        // 0x22b324: 0x2406059a  addiu       $a2, $zero, 0x59A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1434));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b320) {
            ctx->pc = 0x22B340u;
            goto label_22b340;
        }
    }
    ctx->pc = 0x22B328u;
label_22b328:
    // 0x22b328: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22B328u;
    {
        const bool branch_taken_0x22b328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B328u;
        // 0x22b32c: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b328) {
            ctx->pc = 0x22B374u;
            goto label_22b374;
        }
    }
    ctx->pc = 0x22B330u;
    // 0x22b330: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B330u;
    SET_GPR_U32(ctx, 31, 0x22B338u);
    ctx->pc = 0x22B334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B330u;
    // 0x22b334: 0x24060570  addiu       $a2, $zero, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B330u, 0x22B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B338u;
label_22b338:
    // 0x22b338: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b33c: 0x2406059d  addiu       $a2, $zero, 0x59D
    ctx->pc = 0x22b33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1437));
label_22b340:
    // 0x22b340: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B340u;
    SET_GPR_U32(ctx, 31, 0x22B348u);
    ctx->pc = 0x22B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B340u;
    // 0x22b344: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B340u, 0x22B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B348u;
label_22b348:
    // 0x22b348: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b34c: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x22B34Cu;
    SET_GPR_U32(ctx, 31, 0x22B354u);
    ctx->pc = 0x22B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B34Cu;
    // 0x22b350: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x22B34Cu, 0x22B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B354u;
label_22b354:
    // 0x22b354: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b358: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22B358u;
    SET_GPR_U32(ctx, 31, 0x22B360u);
    ctx->pc = 0x22B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B358u;
    // 0x22b35c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22B358u, 0x22B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B360u;
label_22b360:
    // 0x22b360: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22b360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b364:
    // 0x22b364: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x22B364u;
    SET_GPR_U32(ctx, 31, 0x22B36Cu);
    ctx->pc = 0x22B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B364u;
    // 0x22b368: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x22B364u, 0x22B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B36Cu;
label_22b36c:
    // 0x22b36c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x22B36Cu;
    {
        const bool branch_taken_0x22b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B36Cu;
        // 0x22b370: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b36c) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B374u;
label_22b374:
    // 0x22b374: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x22b374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_22b378:
    // 0x22b378: 0x24c3fc17  addiu       $v1, $a2, -0x3E9
    ctx->pc = 0x22b378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966295));
    // 0x22b37c: 0x2c620060  sltiu       $v0, $v1, 0x60
    ctx->pc = 0x22b37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x22b380: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x22B380u;
    {
        const bool branch_taken_0x22b380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B380u;
        // 0x22b384: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b380) {
            ctx->pc = 0x22B450u;
            goto label_22b450;
        }
    }
    ctx->pc = 0x22B388u;
    // 0x22b388: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22b388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22b38c: 0x24424540  addiu       $v0, $v0, 0x4540
    ctx->pc = 0x22b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17728));
    // 0x22b390: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b394: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22b394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b398: 0x800008  jr          $a0
    ctx->pc = 0x22B398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B3A0u: goto label_22b3a0;
            case 0x22B3B8u: goto label_22b3b8;
            case 0x22B3D0u: goto label_22b3d0;
            case 0x22B400u: goto label_22b400;
            case 0x22B450u: goto label_22b450;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B398u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22B3A0u;
label_22b3a0:
    // 0x22b3a0: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b3a4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x22b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22b3a8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B3A8u;
    SET_GPR_U32(ctx, 31, 0x22B3B0u);
    ctx->pc = 0x22B3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3A8u;
    // 0x22b3ac: 0x2406036c  addiu       $a2, $zero, 0x36C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B3A8u, 0x22B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3B0u;
label_22b3b0:
    // 0x22b3b0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x22B3B0u;
    {
        const bool branch_taken_0x22b3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3B0u;
        // 0x22b3b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3b0) {
            ctx->pc = 0x22B454u;
            goto label_22b454;
        }
    }
    ctx->pc = 0x22B3B8u;
label_22b3b8:
    // 0x22b3b8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b3bc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x22b3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22b3c0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B3C0u;
    SET_GPR_U32(ctx, 31, 0x22B3C8u);
    ctx->pc = 0x22B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3C0u;
    // 0x22b3c4: 0x2406036d  addiu       $a2, $zero, 0x36D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 877));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B3C0u, 0x22B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3C8u;
label_22b3c8:
    // 0x22b3c8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x22B3C8u;
    {
        const bool branch_taken_0x22b3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3C8u;
        // 0x22b3cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3c8) {
            ctx->pc = 0x22B454u;
            goto label_22b454;
        }
    }
    ctx->pc = 0x22B3D0u;
label_22b3d0:
    // 0x22b3d0: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x22B3D0u;
    {
        const bool branch_taken_0x22b3d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3D0u;
        // 0x22b3d4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3d0) {
            ctx->pc = 0x22B3ECu;
            goto label_22b3ec;
        }
    }
    ctx->pc = 0x22B3D8u;
    // 0x22b3d8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b3dc: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B3DCu;
    SET_GPR_U32(ctx, 31, 0x22B3E4u);
    ctx->pc = 0x22B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3DCu;
    // 0x22b3e0: 0x2406036f  addiu       $a2, $zero, 0x36F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 879));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B3DCu, 0x22B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3E4u;
label_22b3e4:
    // 0x22b3e4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x22B3E4u;
    {
        const bool branch_taken_0x22b3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3E4u;
        // 0x22b3e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3e4) {
            ctx->pc = 0x22B454u;
            goto label_22b454;
        }
    }
    ctx->pc = 0x22B3ECu;
label_22b3ec:
    // 0x22b3ec: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b3f0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B3F0u;
    SET_GPR_U32(ctx, 31, 0x22B3F8u);
    ctx->pc = 0x22B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3F0u;
    // 0x22b3f4: 0x2406036e  addiu       $a2, $zero, 0x36E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 878));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B3F0u, 0x22B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3F8u;
label_22b3f8:
    // 0x22b3f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22B3F8u;
    {
        const bool branch_taken_0x22b3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3F8u;
        // 0x22b3fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3f8) {
            ctx->pc = 0x22B454u;
            goto label_22b454;
        }
    }
    ctx->pc = 0x22B400u;
label_22b400:
    // 0x22b400: 0x8e42032c  lw          $v0, 0x32C($s2)
    ctx->pc = 0x22b400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
    // 0x22b404: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x22b404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x22b408: 0x8c6401b4  lw          $a0, 0x1B4($v1)
    ctx->pc = 0x22b408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x22b40c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22B40Cu;
    {
        const bool branch_taken_0x22b40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B40Cu;
        // 0x22b410: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b40c) {
            ctx->pc = 0x22B428u;
            goto label_22b428;
        }
    }
    ctx->pc = 0x22B414u;
    // 0x22b414: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22b414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22b418: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B418u;
    SET_GPR_U32(ctx, 31, 0x22B420u);
    ctx->pc = 0x22B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B418u;
    // 0x22b41c: 0x24060368  addiu       $a2, $zero, 0x368 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B418u, 0x22B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B420u;
label_22b420:
    // 0x22b420: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22B420u;
    {
        const bool branch_taken_0x22b420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B420u;
        // 0x22b424: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b420) {
            ctx->pc = 0x22B454u;
            goto label_22b454;
        }
    }
    ctx->pc = 0x22B428u;
label_22b428:
    // 0x22b428: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x22B428u;
    {
        const bool branch_taken_0x22b428 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B428u;
        // 0x22b42c: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b428) {
            ctx->pc = 0x22B444u;
            goto label_22b444;
        }
    }
    ctx->pc = 0x22B430u;
    // 0x22b430: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x22b430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22b434: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B434u;
    SET_GPR_U32(ctx, 31, 0x22B43Cu);
    ctx->pc = 0x22B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B434u;
    // 0x22b438: 0x24060371  addiu       $a2, $zero, 0x371 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 881));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B434u, 0x22B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B43Cu;
label_22b43c:
    // 0x22b43c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22B43Cu;
    {
        const bool branch_taken_0x22b43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B43Cu;
        // 0x22b440: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b43c) {
            ctx->pc = 0x22B454u;
            goto label_22b454;
        }
    }
    ctx->pc = 0x22B444u;
label_22b444:
    // 0x22b444: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x22b444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22b448: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22B448u;
    SET_GPR_U32(ctx, 31, 0x22B450u);
    ctx->pc = 0x22B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B448u;
    // 0x22b44c: 0x24060370  addiu       $a2, $zero, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22B448u, 0x22B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B450u;
label_22b450:
    // 0x22b450: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22b450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b454:
    // 0x22b454: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x22B454u;
    SET_GPR_U32(ctx, 31, 0x22B45Cu);
    ctx->pc = 0x22B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B454u;
    // 0x22b458: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x22B454u, 0x22B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B45Cu;
label_22b45c:
    // 0x22b45c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x22b45cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22b460:
    // 0x22b460: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x22b460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22b464: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x22b464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22b468: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x22b468u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x22b46c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x22b46cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b470: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x22b470u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22b474: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x22b474u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b478: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x22b478u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b47c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x22b47cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b480: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x22b480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x22b484: 0x3e00008  jr          $ra
    ctx->pc = 0x22B484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B484u;
        // 0x22b488: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B48Cu;
    // 0x22b48c: 0x0  nop
    ctx->pc = 0x22b48cu;
    // NOP
    ctx->pc = 0x22b490u;
}
