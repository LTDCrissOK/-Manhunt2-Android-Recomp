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

// Function: sub_00381578
// Address: 0x381578 - 0x381708
void sub_00381578_0x381578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381578_0x381578");
#endif

    switch (ctx->pc) {
        case 0x3815b8u: goto label_3815b8;
        case 0x3815d0u: goto label_3815d0;
        case 0x3816a8u: goto label_3816a8;
        case 0x3816ccu: goto label_3816cc;
        case 0x3816dcu: goto label_3816dc;
        case 0x3816fcu: goto label_3816fc;
        default: break;
    }

    ctx->pc = 0x381578u;

    // 0x381578: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x381578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38157c: 0x4143a  dsrl        $v0, $a0, 16
    ctx->pc = 0x38157cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 16);
    // 0x381580: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x381580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x381584: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x381584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x381588: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x381588u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x38158c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38158cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x381590: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x381590u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x381594: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x381594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x381598: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x381598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38159c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3815a0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3815A0u;
    {
        const bool branch_taken_0x3815a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3815A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3815A0u;
        // 0x3815a4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3815a0) {
            ctx->pc = 0x3815B0u;
            goto label_3815b0;
        }
    }
    ctx->pc = 0x3815A8u;
    // 0x3815a8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x3815A8u;
    {
        const bool branch_taken_0x3815a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3815ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3815A8u;
        // 0x3815ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3815a8) {
            ctx->pc = 0x3816ECu;
            goto label_3816ec;
        }
    }
    ctx->pc = 0x3815B0u;
label_3815b0:
    // 0x3815b0: 0x1260004d  beqz        $s3, . + 4 + (0x4D << 2)
    ctx->pc = 0x3815B0u;
    {
        const bool branch_taken_0x3815b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3815B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3815B0u;
        // 0x3815b4: 0x111438  dsll        $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3815b0) {
            ctx->pc = 0x3816E8u;
            goto label_3816e8;
        }
    }
    ctx->pc = 0x3815B8u;
label_3815b8:
    // 0x3815b8: 0x2e6215b1  sltiu       $v0, $s3, 0x15B1
    ctx->pc = 0x3815b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5553) ? 1 : 0);
    // 0x3815bc: 0x240c15b0  addiu       $t4, $zero, 0x15B0
    ctx->pc = 0x3815bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5552));
    // 0x3815c0: 0x262600b  movn        $t4, $s3, $v0
    ctx->pc = 0x3815c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 19));
    // 0x3815c4: 0x29820010  slti        $v0, $t4, 0x10
    ctx->pc = 0x3815c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3815c8: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3815C8u;
    {
        const bool branch_taken_0x3815c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3815CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3815C8u;
        // 0x3815cc: 0x26c9823  subu        $s3, $s3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3815c8) {
            ctx->pc = 0x3816A0u;
            goto label_3816a0;
        }
    }
    ctx->pc = 0x3815D0u;
label_3815d0:
    // 0x3815d0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3815d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3815d4: 0x258cfff0  addiu       $t4, $t4, -0x10
    ctx->pc = 0x3815d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967280));
    // 0x3815d8: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x3815d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3815dc: 0x298b0010  slti        $t3, $t4, 0x10
    ctx->pc = 0x3815dcu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3815e0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3815e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3815e4: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x3815e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3815e8: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3815e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3815ec: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3815ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3815f0: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x3815f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3815f4: 0x92450004  lbu         $a1, 0x4($s2)
    ctx->pc = 0x3815f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3815f8: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3815f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3815fc: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x3815fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x381600: 0x204802d  daddu       $s0, $s0, $a0
    ctx->pc = 0x381600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x381604: 0x92460006  lbu         $a2, 0x6($s2)
    ctx->pc = 0x381604u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x381608: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x38160c: 0x92440007  lbu         $a0, 0x7($s2)
    ctx->pc = 0x38160cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x381610: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x381610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x381614: 0x92470008  lbu         $a3, 0x8($s2)
    ctx->pc = 0x381614u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x381618: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x38161c: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x38161cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x381620: 0x205802d  daddu       $s0, $s0, $a1
    ctx->pc = 0x381620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 5));
    // 0x381624: 0x9248000a  lbu         $t0, 0xA($s2)
    ctx->pc = 0x381624u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x381628: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x38162c: 0x9245000b  lbu         $a1, 0xB($s2)
    ctx->pc = 0x38162cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x381630: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x381630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x381634: 0x9249000c  lbu         $t1, 0xC($s2)
    ctx->pc = 0x381634u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x381638: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x38163c: 0x9243000d  lbu         $v1, 0xD($s2)
    ctx->pc = 0x38163cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x381640: 0x206802d  daddu       $s0, $s0, $a2
    ctx->pc = 0x381640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 6));
    // 0x381644: 0x924a000e  lbu         $t2, 0xE($s2)
    ctx->pc = 0x381644u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x381648: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x38164c: 0x9246000f  lbu         $a2, 0xF($s2)
    ctx->pc = 0x38164cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    // 0x381650: 0x204802d  daddu       $s0, $s0, $a0
    ctx->pc = 0x381650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x381654: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x381654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x381658: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x38165c: 0x207802d  daddu       $s0, $s0, $a3
    ctx->pc = 0x38165cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 7));
    // 0x381660: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x381664: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x381664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x381668: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x38166c: 0x208802d  daddu       $s0, $s0, $t0
    ctx->pc = 0x38166cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 8));
    // 0x381670: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x381674: 0x205802d  daddu       $s0, $s0, $a1
    ctx->pc = 0x381674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 5));
    // 0x381678: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x38167c: 0x209802d  daddu       $s0, $s0, $t1
    ctx->pc = 0x38167cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 9));
    // 0x381680: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x381684: 0x203802d  daddu       $s0, $s0, $v1
    ctx->pc = 0x381684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
    // 0x381688: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x38168c: 0x20a802d  daddu       $s0, $s0, $t2
    ctx->pc = 0x38168cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 10));
    // 0x381690: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x381690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x381694: 0x206802d  daddu       $s0, $s0, $a2
    ctx->pc = 0x381694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 6));
    // 0x381698: 0x1160ffcd  beqz        $t3, . + 4 + (-0x33 << 2)
    ctx->pc = 0x381698u;
    {
        const bool branch_taken_0x381698 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x38169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381698u;
        // 0x38169c: 0x230882d  daddu       $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381698) {
            ctx->pc = 0x3815D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3815d0;
        }
    }
    ctx->pc = 0x3816A0u;
label_3816a0:
    // 0x3816a0: 0x11800008  beqz        $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x3816A0u;
    {
        const bool branch_taken_0x3816a0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3816A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3816A0u;
        // 0x3816a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3816a0) {
            ctx->pc = 0x3816C4u;
            goto label_3816c4;
        }
    }
    ctx->pc = 0x3816A8u;
label_3816a8:
    // 0x3816a8: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3816a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3816ac: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x3816acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x3816b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3816b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3816b4: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3816b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3816b8: 0x1580fffb  bnez        $t4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3816B8u;
    {
        const bool branch_taken_0x3816b8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3816BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3816B8u;
        // 0x3816bc: 0x230882d  daddu       $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3816b8) {
            ctx->pc = 0x3816A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3816a8;
        }
    }
    ctx->pc = 0x3816C0u;
    // 0x3816c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3816c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3816c4:
    // 0x3816c4: 0xc0f4d12  jal         func_3D3448
    ctx->pc = 0x3816C4u;
    SET_GPR_U32(ctx, 31, 0x3816CCu);
    ctx->pc = 0x3816C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3816C4u;
    // 0x3816c8: 0x3405fff1  ori         $a1, $zero, 0xFFF1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3448u, 0x3816C4u, 0x3816CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3816CCu;
label_3816cc:
    // 0x3816cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3816ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3816d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3816d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3816d4: 0xc0f4d12  jal         func_3D3448
    ctx->pc = 0x3816D4u;
    SET_GPR_U32(ctx, 31, 0x3816DCu);
    ctx->pc = 0x3816D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3816D4u;
    // 0x3816d8: 0x3405fff1  ori         $a1, $zero, 0xFFF1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3448u, 0x3816D4u, 0x3816DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3816DCu;
label_3816dc:
    // 0x3816dc: 0x1660ffb6  bnez        $s3, . + 4 + (-0x4A << 2)
    ctx->pc = 0x3816DCu;
    {
        const bool branch_taken_0x3816dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3816E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3816DCu;
        // 0x3816e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3816dc) {
            ctx->pc = 0x3815B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3815b8;
        }
    }
    ctx->pc = 0x3816E4u;
    // 0x3816e4: 0x111438  dsll        $v0, $s1, 16
    ctx->pc = 0x3816e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 16);
label_3816e8:
    // 0x3816e8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x3816e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_3816ec:
    // 0x3816ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3816ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3816f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3816f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3816f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3816f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3816f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3816f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3816fc:
    // 0x3816fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3816fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381700: 0x3e00008  jr          $ra
    ctx->pc = 0x381700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381700u;
        // 0x381704: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381708u;
}
