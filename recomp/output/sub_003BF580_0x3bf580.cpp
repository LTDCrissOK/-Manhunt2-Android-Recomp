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

// Function: sub_003BF580
// Address: 0x3bf580 - 0x3bf750
void sub_003BF580_0x3bf580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF580_0x3bf580");
#endif

    switch (ctx->pc) {
        case 0x3bf6c0u: goto label_3bf6c0;
        case 0x3bf6f8u: goto label_3bf6f8;
        case 0x3bf728u: goto label_3bf728;
        default: break;
    }

    ctx->pc = 0x3bf580u;

    // 0x3bf580: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3bf580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf584: 0xa43825  or          $a3, $a1, $a0
    ctx->pc = 0x3bf584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3bf588: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3bf588u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3bf58c: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x3bf58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x3bf590: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x3bf590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3bf594: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x3BF594u;
    {
        const bool branch_taken_0x3bf594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF594u;
        // 0x3bf598: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf594) {
            ctx->pc = 0x3BF6F8u;
            goto label_3bf6f8;
        }
    }
    ctx->pc = 0x3BF59Cu;
    // 0x3bf59c: 0x142480a  movz        $t1, $t2, $v0
    ctx->pc = 0x3bf59cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x3bf5a0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3BF5A0u;
    {
        const bool branch_taken_0x3bf5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF5A0u;
        // 0x3bf5a4: 0xc9102b  sltu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf5a0) {
            ctx->pc = 0x3BF65Cu;
            goto label_3bf65c;
        }
    }
    ctx->pc = 0x3BF5A8u;
    // 0x3bf5a8: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x3BF5A8u;
    {
        const bool branch_taken_0x3bf5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf5a8) {
            ctx->pc = 0x3BF6F8u;
            goto label_3bf6f8;
        }
    }
    ctx->pc = 0x3BF5B0u;
    // 0x3bf5b0: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x3bf5b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf5b4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3bf5b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3bf5b8: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3bf5b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3bf5bc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3bf5bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3bf5c0: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3bf5c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3bf5c4: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x3bf5c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x3bf5c8: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x3bf5c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x3bf5cc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3bf5ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf5d0: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x3bf5d0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x3bf5d4: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x3bf5d4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x3bf5d8: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x3bf5d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf5dc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3bf5dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3bf5e0: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3bf5e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3bf5e4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3bf5e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3bf5e8: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3bf5e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3bf5ec: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3bf5ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3bf5f0: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3bf5f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3bf5f4: 0x70691248  psubb       $v0, $v1, $t1
    ctx->pc = 0x3bf5f4u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3bf5f8: 0x70e75389  pcpyld      $t2, $a3, $a3
    ctx->pc = 0x3bf5f8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x3bf5fc: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3bf5fcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3bf600: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x3bf600u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3bf604: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x3bf604u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3bf608: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3bf608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3bf60c: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3BF60Cu;
    {
        const bool branch_taken_0x3bf60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF60Cu;
        // 0x3bf610: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf60c) {
            ctx->pc = 0x3BF6F4u;
            goto label_3bf6f4;
        }
    }
    ctx->pc = 0x3BF614u;
    // 0x3bf614: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3bf614u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf618: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x3bf618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3bf61c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3bf61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3bf620: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x3bf620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3bf624: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3bf624u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3bf628: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3BF628u;
    {
        const bool branch_taken_0x3bf628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF628u;
        // 0x3bf62c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf628) {
            ctx->pc = 0x3BF6F4u;
            goto label_3bf6f4;
        }
    }
    ctx->pc = 0x3BF630u;
    // 0x3bf630: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3bf630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf634: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3bf634u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3bf638: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x3bf638u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3bf63c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3bf63cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3bf640: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x3bf640u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3bf644: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x3bf644u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3bf648: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3bf648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3bf64c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3BF64Cu;
    {
        const bool branch_taken_0x3bf64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf64c) {
            ctx->pc = 0x3BF650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF64Cu;
            // 0x3bf650: 0x78a30000  lq          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF6C0u;
            goto label_3bf6c0;
        }
    }
    ctx->pc = 0x3BF654u;
    // 0x3bf654: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3BF654u;
    {
        const bool branch_taken_0x3bf654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF654u;
        // 0x3bf658: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf654) {
            ctx->pc = 0x3BF6F8u;
            goto label_3bf6f8;
        }
    }
    ctx->pc = 0x3BF65Cu;
label_3bf65c:
    // 0x3bf65c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3BF65Cu;
    {
        const bool branch_taken_0x3bf65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf65c) {
            ctx->pc = 0x3BF6F8u;
            goto label_3bf6f8;
        }
    }
    ctx->pc = 0x3BF664u;
    // 0x3bf664: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3bf664u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf668: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x3bf668u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf66c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3bf66cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3bf670: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3bf670u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3bf674: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3bf674u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3bf678: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3bf678u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3bf67c: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x3bf67cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x3bf680: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x3bf680u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x3bf684: 0x340a8080  ori         $t2, $zero, 0x8080
    ctx->pc = 0x3bf684u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf688: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3bf688u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3bf68c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x3bf68cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3bf690: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3bf690u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3bf694: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x3bf694u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3bf698: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3bf698u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3bf69c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x3bf69cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3bf6a0: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x3bf6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x3bf6a4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x3bf6a4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x3bf6a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bf6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bf6ac: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x3bf6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x3bf6b0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BF6B0u;
    {
        const bool branch_taken_0x3bf6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6B0u;
        // 0x3bf6b4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf6b0) {
            ctx->pc = 0x3BF6F4u;
            goto label_3bf6f4;
        }
    }
    ctx->pc = 0x3BF6B8u;
    // 0x3bf6b8: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3bf6b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf6bc: 0x0  nop
    ctx->pc = 0x3bf6bcu;
    // NOP
label_3bf6c0:
    // 0x3bf6c0: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3bf6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3bf6c4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3bf6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3bf6c8: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3bf6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3bf6cc: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x3bf6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x3bf6d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BF6D0u;
    {
        const bool branch_taken_0x3bf6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6D0u;
        // 0x3bf6d4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf6d0) {
            ctx->pc = 0x3BF6F4u;
            goto label_3bf6f4;
        }
    }
    ctx->pc = 0x3BF6D8u;
    // 0x3bf6d8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x3bf6d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf6dc: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3bf6dcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3bf6e0: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x3bf6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x3bf6e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bf6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bf6e8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x3bf6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x3bf6ec: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3BF6ECu;
    {
        const bool branch_taken_0x3bf6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf6ec) {
            ctx->pc = 0x3BF6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF6ECu;
            // 0x3bf6f0: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf6c0;
        }
    }
    ctx->pc = 0x3BF6F4u;
label_3bf6f4:
    // 0x3bf6f4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3bf6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3bf6f8:
    // 0x3bf6f8: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BF6F8u;
    {
        const bool branch_taken_0x3bf6f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF6F8u;
        // 0x3bf6fc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf6f8) {
            ctx->pc = 0x3BF740u;
            goto label_3bf740;
        }
    }
    ctx->pc = 0x3BF700u;
    // 0x3bf700: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3bf700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf704: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3bf704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3bf708: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3bf708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3bf70c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3bf70cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bf710: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3bf710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3bf714: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3BF714u;
    {
        const bool branch_taken_0x3bf714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF714u;
        // 0x3bf718: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf714) {
            ctx->pc = 0x3BF6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf6f8;
        }
    }
    ctx->pc = 0x3BF71Cu;
    // 0x3bf71c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3bf71cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf720: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BF720u;
    {
        const bool branch_taken_0x3bf720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF720u;
        // 0x3bf724: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf720) {
            ctx->pc = 0x3BF740u;
            goto label_3bf740;
        }
    }
    ctx->pc = 0x3BF728u;
label_3bf728:
    // 0x3bf728: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3bf728u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bf72c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3bf72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf730: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3bf730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3bf734: 0x0  nop
    ctx->pc = 0x3bf734u;
    // NOP
    // 0x3bf738: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BF738u;
    {
        const bool branch_taken_0x3bf738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF738u;
        // 0x3bf73c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf738) {
            ctx->pc = 0x3BF728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf728;
        }
    }
    ctx->pc = 0x3BF740u;
label_3bf740:
    // 0x3bf740: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF740u;
        // 0x3bf744: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF748u;
    // 0x3bf748: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3bf748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3bf74c: 0x0  nop
    ctx->pc = 0x3bf74cu;
    // NOP
    ctx->pc = 0x3bf750u;
}
