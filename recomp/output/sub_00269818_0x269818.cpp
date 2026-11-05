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

// Function: sub_00269818
// Address: 0x269818 - 0x269b48
void sub_00269818_0x269818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269818_0x269818");
#endif

    switch (ctx->pc) {
        case 0x269818u: goto label_269818;
        case 0x26981cu: goto label_26981c;
        case 0x269820u: goto label_269820;
        case 0x269824u: goto label_269824;
        case 0x269828u: goto label_269828;
        case 0x26982cu: goto label_26982c;
        case 0x269830u: goto label_269830;
        case 0x269834u: goto label_269834;
        case 0x269838u: goto label_269838;
        case 0x26983cu: goto label_26983c;
        case 0x269840u: goto label_269840;
        case 0x269844u: goto label_269844;
        case 0x269848u: goto label_269848;
        case 0x26984cu: goto label_26984c;
        case 0x269850u: goto label_269850;
        case 0x269854u: goto label_269854;
        case 0x269858u: goto label_269858;
        case 0x26985cu: goto label_26985c;
        case 0x269860u: goto label_269860;
        case 0x269864u: goto label_269864;
        case 0x269868u: goto label_269868;
        case 0x26986cu: goto label_26986c;
        case 0x269870u: goto label_269870;
        case 0x269874u: goto label_269874;
        case 0x269878u: goto label_269878;
        case 0x26987cu: goto label_26987c;
        case 0x269880u: goto label_269880;
        case 0x269884u: goto label_269884;
        case 0x269888u: goto label_269888;
        case 0x26988cu: goto label_26988c;
        case 0x269890u: goto label_269890;
        case 0x269894u: goto label_269894;
        case 0x269898u: goto label_269898;
        case 0x26989cu: goto label_26989c;
        case 0x2698a0u: goto label_2698a0;
        case 0x2698a4u: goto label_2698a4;
        case 0x2698a8u: goto label_2698a8;
        case 0x2698acu: goto label_2698ac;
        case 0x2698b0u: goto label_2698b0;
        case 0x2698b4u: goto label_2698b4;
        case 0x2698b8u: goto label_2698b8;
        case 0x2698bcu: goto label_2698bc;
        case 0x2698c0u: goto label_2698c0;
        case 0x2698c4u: goto label_2698c4;
        case 0x2698c8u: goto label_2698c8;
        case 0x2698ccu: goto label_2698cc;
        case 0x2698d0u: goto label_2698d0;
        case 0x2698d4u: goto label_2698d4;
        case 0x2698d8u: goto label_2698d8;
        case 0x2698dcu: goto label_2698dc;
        case 0x2698e0u: goto label_2698e0;
        case 0x2698e4u: goto label_2698e4;
        case 0x2698e8u: goto label_2698e8;
        case 0x2698ecu: goto label_2698ec;
        case 0x2698f0u: goto label_2698f0;
        case 0x2698f4u: goto label_2698f4;
        case 0x2698f8u: goto label_2698f8;
        case 0x2698fcu: goto label_2698fc;
        case 0x269900u: goto label_269900;
        case 0x269904u: goto label_269904;
        case 0x269908u: goto label_269908;
        case 0x26990cu: goto label_26990c;
        case 0x269910u: goto label_269910;
        case 0x269914u: goto label_269914;
        case 0x269918u: goto label_269918;
        case 0x26991cu: goto label_26991c;
        case 0x269920u: goto label_269920;
        case 0x269924u: goto label_269924;
        case 0x269928u: goto label_269928;
        case 0x26992cu: goto label_26992c;
        case 0x269930u: goto label_269930;
        case 0x269934u: goto label_269934;
        case 0x269938u: goto label_269938;
        case 0x26993cu: goto label_26993c;
        case 0x269940u: goto label_269940;
        case 0x269944u: goto label_269944;
        case 0x269948u: goto label_269948;
        case 0x26994cu: goto label_26994c;
        case 0x269950u: goto label_269950;
        case 0x269954u: goto label_269954;
        case 0x269958u: goto label_269958;
        case 0x26995cu: goto label_26995c;
        case 0x269960u: goto label_269960;
        case 0x269964u: goto label_269964;
        case 0x269968u: goto label_269968;
        case 0x26996cu: goto label_26996c;
        case 0x269970u: goto label_269970;
        case 0x269974u: goto label_269974;
        case 0x269978u: goto label_269978;
        case 0x26997cu: goto label_26997c;
        case 0x269980u: goto label_269980;
        case 0x269984u: goto label_269984;
        case 0x269988u: goto label_269988;
        case 0x26998cu: goto label_26998c;
        case 0x269990u: goto label_269990;
        case 0x269994u: goto label_269994;
        case 0x269998u: goto label_269998;
        case 0x26999cu: goto label_26999c;
        case 0x2699a0u: goto label_2699a0;
        case 0x2699a4u: goto label_2699a4;
        case 0x2699a8u: goto label_2699a8;
        case 0x2699acu: goto label_2699ac;
        case 0x2699b0u: goto label_2699b0;
        case 0x2699b4u: goto label_2699b4;
        case 0x2699b8u: goto label_2699b8;
        case 0x2699bcu: goto label_2699bc;
        case 0x2699c0u: goto label_2699c0;
        case 0x2699c4u: goto label_2699c4;
        case 0x2699c8u: goto label_2699c8;
        case 0x2699ccu: goto label_2699cc;
        case 0x2699d0u: goto label_2699d0;
        case 0x2699d4u: goto label_2699d4;
        case 0x2699d8u: goto label_2699d8;
        case 0x2699dcu: goto label_2699dc;
        case 0x2699e0u: goto label_2699e0;
        case 0x2699e4u: goto label_2699e4;
        case 0x2699e8u: goto label_2699e8;
        case 0x2699ecu: goto label_2699ec;
        case 0x2699f0u: goto label_2699f0;
        case 0x2699f4u: goto label_2699f4;
        case 0x2699f8u: goto label_2699f8;
        case 0x2699fcu: goto label_2699fc;
        case 0x269a00u: goto label_269a00;
        case 0x269a04u: goto label_269a04;
        case 0x269a08u: goto label_269a08;
        case 0x269a0cu: goto label_269a0c;
        case 0x269a10u: goto label_269a10;
        case 0x269a14u: goto label_269a14;
        case 0x269a18u: goto label_269a18;
        case 0x269a1cu: goto label_269a1c;
        case 0x269a20u: goto label_269a20;
        case 0x269a24u: goto label_269a24;
        case 0x269a28u: goto label_269a28;
        case 0x269a2cu: goto label_269a2c;
        case 0x269a30u: goto label_269a30;
        case 0x269a34u: goto label_269a34;
        case 0x269a38u: goto label_269a38;
        case 0x269a3cu: goto label_269a3c;
        case 0x269a40u: goto label_269a40;
        case 0x269a44u: goto label_269a44;
        case 0x269a48u: goto label_269a48;
        case 0x269a4cu: goto label_269a4c;
        case 0x269a50u: goto label_269a50;
        case 0x269a54u: goto label_269a54;
        case 0x269a58u: goto label_269a58;
        case 0x269a5cu: goto label_269a5c;
        case 0x269a60u: goto label_269a60;
        case 0x269a64u: goto label_269a64;
        case 0x269a68u: goto label_269a68;
        case 0x269a6cu: goto label_269a6c;
        case 0x269a70u: goto label_269a70;
        case 0x269a74u: goto label_269a74;
        case 0x269a78u: goto label_269a78;
        case 0x269a7cu: goto label_269a7c;
        case 0x269a80u: goto label_269a80;
        case 0x269a84u: goto label_269a84;
        case 0x269a88u: goto label_269a88;
        case 0x269a8cu: goto label_269a8c;
        case 0x269a90u: goto label_269a90;
        case 0x269a94u: goto label_269a94;
        case 0x269a98u: goto label_269a98;
        case 0x269a9cu: goto label_269a9c;
        case 0x269aa0u: goto label_269aa0;
        case 0x269aa4u: goto label_269aa4;
        case 0x269aa8u: goto label_269aa8;
        case 0x269aacu: goto label_269aac;
        case 0x269ab0u: goto label_269ab0;
        case 0x269ab4u: goto label_269ab4;
        case 0x269ab8u: goto label_269ab8;
        case 0x269abcu: goto label_269abc;
        case 0x269ac0u: goto label_269ac0;
        case 0x269ac4u: goto label_269ac4;
        case 0x269ac8u: goto label_269ac8;
        case 0x269accu: goto label_269acc;
        case 0x269ad0u: goto label_269ad0;
        case 0x269ad4u: goto label_269ad4;
        case 0x269ad8u: goto label_269ad8;
        case 0x269adcu: goto label_269adc;
        case 0x269ae0u: goto label_269ae0;
        case 0x269ae4u: goto label_269ae4;
        case 0x269ae8u: goto label_269ae8;
        case 0x269aecu: goto label_269aec;
        case 0x269af0u: goto label_269af0;
        case 0x269af4u: goto label_269af4;
        case 0x269af8u: goto label_269af8;
        case 0x269afcu: goto label_269afc;
        case 0x269b00u: goto label_269b00;
        case 0x269b04u: goto label_269b04;
        case 0x269b08u: goto label_269b08;
        case 0x269b0cu: goto label_269b0c;
        case 0x269b10u: goto label_269b10;
        case 0x269b14u: goto label_269b14;
        case 0x269b18u: goto label_269b18;
        case 0x269b1cu: goto label_269b1c;
        case 0x269b20u: goto label_269b20;
        case 0x269b24u: goto label_269b24;
        case 0x269b28u: goto label_269b28;
        case 0x269b2cu: goto label_269b2c;
        case 0x269b30u: goto label_269b30;
        case 0x269b34u: goto label_269b34;
        case 0x269b38u: goto label_269b38;
        case 0x269b3cu: goto label_269b3c;
        case 0x269b40u: goto label_269b40;
        case 0x269b44u: goto label_269b44;
        default: break;
    }

    ctx->pc = 0x269818u;

label_269818:
    // 0x269818: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x269818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_26981c:
    // 0x26981c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x26981cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_269820:
    // 0x269820: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x269820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_269824:
    // 0x269824: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x269824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_269828:
    // 0x269828: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x269828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_26982c:
    // 0x26982c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x26982cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_269830:
    // 0x269830: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x269830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_269834:
    // 0x269834: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x269834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_269838:
    // 0x269838: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x269838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_26983c:
    // 0x26983c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x26983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_269840:
    // 0x269840: 0xc076430  jal         func_1D90C0
label_269844:
    if (ctx->pc == 0x269844u) {
        ctx->pc = 0x269844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269840u;
        // 0x269844: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269848u;
        goto label_269848;
    }
    ctx->pc = 0x269840u;
    SET_GPR_U32(ctx, 31, 0x269848u);
    ctx->pc = 0x269844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269840u;
    // 0x269844: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D90C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D90C0u, 0x269840u, 0x269848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269848u;
label_269848:
    // 0x269848: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_26984c:
    if (ctx->pc == 0x26984Cu) {
        ctx->pc = 0x26984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269848u;
        // 0x26984c: 0x8e6291f0  lw          $v0, -0x6E10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269850u;
        goto label_269850;
    }
    ctx->pc = 0x269848u;
    {
        const bool branch_taken_0x269848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269848u;
        // 0x26984c: 0x8e6291f0  lw          $v0, -0x6E10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269848) {
            ctx->pc = 0x269880u;
            goto label_269880;
        }
    }
    ctx->pc = 0x269850u;
label_269850:
    // 0x269850: 0x8e6391f0  lw          $v1, -0x6E10($s3)
    ctx->pc = 0x269850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
label_269854:
    // 0x269854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269858:
    // 0x269858: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_26985c:
    if (ctx->pc == 0x26985Cu) {
        ctx->pc = 0x26985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269858u;
        // 0x26985c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x269860u;
        goto label_269860;
    }
    ctx->pc = 0x269858u;
    {
        const bool branch_taken_0x269858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x269858) {
            ctx->pc = 0x26985Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269858u;
            // 0x26985c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x269878u;
            goto label_269878;
        }
    }
    ctx->pc = 0x269860u;
label_269860:
    // 0x269860: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x269860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_269864:
    // 0x269864: 0x8c4391ec  lw          $v1, -0x6E14($v0)
    ctx->pc = 0x269864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939116)));
label_269868:
    // 0x269868: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x269868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26986c:
    // 0x26986c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x26986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_269870:
    // 0x269870: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x269870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_269874:
    // 0x269874: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x269874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_269878:
    // 0x269878: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
label_26987c:
    if (ctx->pc == 0x26987Cu) {
        ctx->pc = 0x26987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269878u;
        // 0x26987c: 0x8e6291f0  lw          $v0, -0x6E10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269880u;
        goto label_269880;
    }
    ctx->pc = 0x269878u;
    {
        const bool branch_taken_0x269878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269878u;
        // 0x26987c: 0x8e6291f0  lw          $v0, -0x6E10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269878) {
            ctx->pc = 0x269AF4u;
            goto label_269af4;
        }
    }
    ctx->pc = 0x269880u;
label_269880:
    // 0x269880: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_269884:
    if (ctx->pc == 0x269884u) {
        ctx->pc = 0x269884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269880u;
        // 0x269884: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269888u;
        goto label_269888;
    }
    ctx->pc = 0x269880u;
    {
        const bool branch_taken_0x269880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269880u;
        // 0x269884: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269880) {
            ctx->pc = 0x269984u;
            goto label_269984;
        }
    }
    ctx->pc = 0x269888u;
label_269888:
    // 0x269888: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x269888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_26988c:
    // 0x26988c: 0x0  nop
    ctx->pc = 0x26988cu;
    // NOP
label_269890:
    // 0x269890: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x269890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_269894:
    // 0x269894: 0x8c8291ec  lw          $v0, -0x6E14($a0)
    ctx->pc = 0x269894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939116)));
label_269898:
    // 0x269898: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x269898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26989c:
    // 0x26989c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x26989cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2698a0:
    // 0x2698a0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2698a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2698a4:
    // 0x2698a4: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x2698a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_2698a8:
    // 0x2698a8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_2698ac:
    if (ctx->pc == 0x2698ACu) {
        ctx->pc = 0x2698ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698A8u;
        // 0x2698ac: 0x8e6291f0  lw          $v0, -0x6E10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2698B0u;
        goto label_2698b0;
    }
    ctx->pc = 0x2698A8u;
    {
        const bool branch_taken_0x2698a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2698ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698A8u;
        // 0x2698ac: 0x8e6291f0  lw          $v0, -0x6E10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698a8) {
            ctx->pc = 0x269974u;
            goto label_269974;
        }
    }
    ctx->pc = 0x2698B0u;
label_2698b0:
    // 0x2698b0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2698b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2698b4:
    // 0x2698b4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x2698b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_2698b8:
    // 0x2698b8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_2698bc:
    if (ctx->pc == 0x2698BCu) {
        ctx->pc = 0x2698BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698B8u;
        // 0x2698bc: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2698C0u;
        goto label_2698c0;
    }
    ctx->pc = 0x2698B8u;
    {
        const bool branch_taken_0x2698b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2698b8) {
            ctx->pc = 0x2698BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2698B8u;
            // 0x2698bc: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269950u;
            goto label_269950;
        }
    }
    ctx->pc = 0x2698C0u;
label_2698c0:
    // 0x2698c0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2698c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2698c4:
    // 0x2698c4: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2698c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2698c8:
    // 0x2698c8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2698cc:
    if (ctx->pc == 0x2698CCu) {
        ctx->pc = 0x2698CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698C8u;
        // 0x2698cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2698D0u;
        goto label_2698d0;
    }
    ctx->pc = 0x2698C8u;
    {
        const bool branch_taken_0x2698c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2698CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698C8u;
        // 0x2698cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698c8) {
            ctx->pc = 0x2698D4u;
            goto label_2698d4;
        }
    }
    ctx->pc = 0x2698D0u;
label_2698d0:
    // 0x2698d0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2698d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2698d4:
    // 0x2698d4: 0x8c64010c  lw          $a0, 0x10C($v1)
    ctx->pc = 0x2698d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2698d8:
    // 0x2698d8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2698d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2698dc:
    // 0x2698dc: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2698dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_2698e0:
    // 0x2698e0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2698e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2698e4:
    // 0x2698e4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2698e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2698e8:
    // 0x2698e8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2698e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2698ec:
    // 0x2698ec: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2698ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2698f0:
    // 0x2698f0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2698f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2698f4:
    // 0x2698f4: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2698f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2698f8:
    // 0x2698f8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2698f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2698fc:
    // 0x2698fc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2698fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_269900:
    // 0x269900: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x269900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_269904:
    // 0x269904: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x269904u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_269908:
    // 0x269908: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x269908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26990c:
    // 0x26990c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26990cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_269910:
    // 0x269910: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x269910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_269914:
    // 0x269914: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x269914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_269918:
    // 0x269918: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x269918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_26991c:
    // 0x26991c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_269920:
    if (ctx->pc == 0x269920u) {
        ctx->pc = 0x269920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26991Cu;
        // 0x269920: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269924u;
        goto label_269924;
    }
    ctx->pc = 0x26991Cu;
    {
        const bool branch_taken_0x26991c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26991Cu;
        // 0x269920: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26991c) {
            ctx->pc = 0x269928u;
            goto label_269928;
        }
    }
    ctx->pc = 0x269924u;
label_269924:
    // 0x269924: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x269924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_269928:
    // 0x269928: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x269928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_26992c:
    // 0x26992c: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x26992cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_269930:
    // 0x269930: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x269930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_269934:
    // 0x269934: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_269938:
    if (ctx->pc == 0x269938u) {
        ctx->pc = 0x269938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269934u;
        // 0x269938: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26993Cu;
        goto label_26993c;
    }
    ctx->pc = 0x269934u;
    {
        const bool branch_taken_0x269934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269934) {
            ctx->pc = 0x269938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269934u;
            // 0x269938: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26993Cu;
            goto label_26993c;
        }
    }
    ctx->pc = 0x26993Cu;
label_26993c:
    // 0x26993c: 0xc0b7264  jal         func_2DC990
label_269940:
    if (ctx->pc == 0x269940u) {
        ctx->pc = 0x269940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26993Cu;
        // 0x269940: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269944u;
        goto label_269944;
    }
    ctx->pc = 0x26993Cu;
    SET_GPR_U32(ctx, 31, 0x269944u);
    ctx->pc = 0x269940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26993Cu;
    // 0x269940: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x26993Cu, 0x269944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269944u;
label_269944:
    // 0x269944: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x269944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_269948:
    // 0x269948: 0x10000009  b           . + 4 + (0x9 << 2)
label_26994c:
    if (ctx->pc == 0x26994Cu) {
        ctx->pc = 0x26994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269948u;
        // 0x26994c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269950u;
        goto label_269950;
    }
    ctx->pc = 0x269948u;
    {
        const bool branch_taken_0x269948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269948u;
        // 0x26994c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269948) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x269950u;
label_269950:
    // 0x269950: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_269954:
    if (ctx->pc == 0x269954u) {
        ctx->pc = 0x269954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269950u;
        // 0x269954: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269958u;
        goto label_269958;
    }
    ctx->pc = 0x269950u;
    {
        const bool branch_taken_0x269950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269950u;
        // 0x269954: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269950) {
            ctx->pc = 0x269964u;
            goto label_269964;
        }
    }
    ctx->pc = 0x269958u;
label_269958:
    // 0x269958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x269958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26995c:
    // 0x26995c: 0x10000004  b           . + 4 + (0x4 << 2)
label_269960:
    if (ctx->pc == 0x269960u) {
        ctx->pc = 0x269960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26995Cu;
        // 0x269960: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269964u;
        goto label_269964;
    }
    ctx->pc = 0x26995Cu;
    {
        const bool branch_taken_0x26995c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26995Cu;
        // 0x269960: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26995c) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x269964u;
label_269964:
    // 0x269964: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x269964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_269968:
    // 0x269968: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x269968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26996c:
    // 0x26996c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x26996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_269970:
    // 0x269970: 0x8e6291f0  lw          $v0, -0x6E10($s3)
    ctx->pc = 0x269970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
label_269974:
    // 0x269974: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x269974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_269978:
    // 0x269978: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x269978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26997c:
    // 0x26997c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_269980:
    if (ctx->pc == 0x269980u) {
        ctx->pc = 0x269980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26997Cu;
        // 0x269980: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269984u;
        goto label_269984;
    }
    ctx->pc = 0x26997Cu;
    {
        const bool branch_taken_0x26997c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26997Cu;
        // 0x269980: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26997c) {
            ctx->pc = 0x269890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269890;
        }
    }
    ctx->pc = 0x269984u;
label_269984:
    // 0x269984: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x269984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_269988:
    // 0x269988: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_26998c:
    if (ctx->pc == 0x26998Cu) {
        ctx->pc = 0x26998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269988u;
        // 0x26998c: 0xae400260  sw          $zero, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269990u;
        goto label_269990;
    }
    ctx->pc = 0x269988u;
    {
        const bool branch_taken_0x269988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269988u;
        // 0x26998c: 0xae400260  sw          $zero, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269988) {
            ctx->pc = 0x269AA4u;
            goto label_269aa4;
        }
    }
    ctx->pc = 0x269990u;
label_269990:
    // 0x269990: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x269990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_269994:
    // 0x269994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_269998:
    // 0x269998: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x269998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_26999c:
    // 0x26999c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26999cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2699a0:
    // 0x2699a0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2699a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2699a4:
    // 0x2699a4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2699a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2699a8:
    // 0x2699a8: 0x8e6291f0  lw          $v0, -0x6E10($s3)
    ctx->pc = 0x2699a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
label_2699ac:
    // 0x2699ac: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_2699b0:
    if (ctx->pc == 0x2699B0u) {
        ctx->pc = 0x2699B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699ACu;
        // 0x2699b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2699B4u;
        goto label_2699b4;
    }
    ctx->pc = 0x2699ACu;
    {
        const bool branch_taken_0x2699ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699ACu;
        // 0x2699b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699ac) {
            ctx->pc = 0x269AA4u;
            goto label_269aa4;
        }
    }
    ctx->pc = 0x2699B4u;
label_2699b4:
    // 0x2699b4: 0x3c013f5d  lui         $at, 0x3F5D
    ctx->pc = 0x2699b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16221 << 16));
label_2699b8:
    // 0x2699b8: 0x3421b22d  ori         $at, $at, 0xB22D
    ctx->pc = 0x2699b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45613);
label_2699bc:
    // 0x2699bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2699bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2699c0:
    // 0x2699c0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2699c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2699c4:
    // 0x2699c4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2699c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2699c8:
    // 0x2699c8: 0x8c8291ec  lw          $v0, -0x6E14($a0)
    ctx->pc = 0x2699c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939116)));
label_2699cc:
    // 0x2699cc: 0x0  nop
    ctx->pc = 0x2699ccu;
    // NOP
label_2699d0:
    // 0x2699d0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2699d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2699d4:
    // 0x2699d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2699d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2699d8:
    // 0x2699d8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2699d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2699dc:
    // 0x2699dc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2699dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2699e0:
    // 0x2699e0: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2699e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2699e4:
    // 0x2699e4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_2699e8:
    if (ctx->pc == 0x2699E8u) {
        ctx->pc = 0x2699E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699E4u;
        // 0x2699e8: 0x8e6291f0  lw          $v0, -0x6E10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2699ECu;
        goto label_2699ec;
    }
    ctx->pc = 0x2699E4u;
    {
        const bool branch_taken_0x2699e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2699E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699E4u;
        // 0x2699e8: 0x8e6291f0  lw          $v0, -0x6E10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699e4) {
            ctx->pc = 0x269A94u;
            goto label_269a94;
        }
    }
    ctx->pc = 0x2699ECu;
label_2699ec:
    // 0x2699ec: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2699ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2699f0:
    // 0x2699f0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2699f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2699f4:
    // 0x2699f4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2699f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2699f8:
    // 0x2699f8: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x2699f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_2699fc:
    // 0x2699fc: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_269a00:
    if (ctx->pc == 0x269A00u) {
        ctx->pc = 0x269A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699FCu;
        // 0x269a00: 0x8e6291f0  lw          $v0, -0x6E10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A04u;
        goto label_269a04;
    }
    ctx->pc = 0x2699FCu;
    {
        const bool branch_taken_0x2699fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699FCu;
        // 0x269a00: 0x8e6291f0  lw          $v0, -0x6E10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699fc) {
            ctx->pc = 0x269A94u;
            goto label_269a94;
        }
    }
    ctx->pc = 0x269A04u;
label_269a04:
    // 0x269a04: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x269a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_269a08:
    // 0x269a08: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x269a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_269a0c:
    // 0x269a0c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x269a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_269a10:
    // 0x269a10: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x269a10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_269a14:
    // 0x269a14: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x269a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_269a18:
    // 0x269a18: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x269a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_269a1c:
    // 0x269a1c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x269a1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_269a20:
    // 0x269a20: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x269a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_269a24:
    // 0x269a24: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x269a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_269a28:
    // 0x269a28: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x269a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_269a2c:
    // 0x269a2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x269a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_269a30:
    // 0x269a30: 0x0  nop
    ctx->pc = 0x269a30u;
    // NOP
label_269a34:
    // 0x269a34: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_269a38:
    if (ctx->pc == 0x269A38u) {
        ctx->pc = 0x269A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A34u;
        // 0x269a38: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A3Cu;
        goto label_269a3c;
    }
    ctx->pc = 0x269A34u;
    {
        const bool branch_taken_0x269a34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A34u;
        // 0x269a38: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a34) {
            ctx->pc = 0x269A90u;
            goto label_269a90;
        }
    }
    ctx->pc = 0x269A3Cu;
label_269a3c:
    // 0x269a3c: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x269a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_269a40:
    // 0x269a40: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x269a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_269a44:
    // 0x269a44: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x269a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_269a48:
    // 0x269a48: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x269a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_269a4c:
    // 0x269a4c: 0xc0b7264  jal         func_2DC990
label_269a50:
    if (ctx->pc == 0x269A50u) {
        ctx->pc = 0x269A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A4Cu;
        // 0x269a50: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A54u;
        goto label_269a54;
    }
    ctx->pc = 0x269A4Cu;
    SET_GPR_U32(ctx, 31, 0x269A54u);
    ctx->pc = 0x269A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269A4Cu;
    // 0x269a50: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x269A4Cu, 0x269A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A54u;
label_269a54:
    // 0x269a54: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x269a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_269a58:
    // 0x269a58: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x269a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_269a5c:
    // 0x269a5c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x269a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_269a60:
    // 0x269a60: 0x40f809  jalr        $v0
label_269a64:
    if (ctx->pc == 0x269A64u) {
        ctx->pc = 0x269A68u;
        goto label_269a68;
    }
    ctx->pc = 0x269A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x269A68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269A60u, 0x269A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269A68u;
label_269a68:
    // 0x269a68: 0xc076e00  jal         func_1DB800
label_269a6c:
    if (ctx->pc == 0x269A6Cu) {
        ctx->pc = 0x269A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A68u;
        // 0x269a6c: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A70u;
        goto label_269a70;
    }
    ctx->pc = 0x269A68u;
    SET_GPR_U32(ctx, 31, 0x269A70u);
    ctx->pc = 0x269A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269A68u;
    // 0x269a6c: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB800u, 0x269A68u, 0x269A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A70u;
label_269a70:
    // 0x269a70: 0xae540260  sw          $s4, 0x260($s2)
    ctx->pc = 0x269a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 20));
label_269a74:
    // 0x269a74: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x269a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_269a78:
    // 0x269a78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x269a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_269a7c:
    // 0x269a7c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x269a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_269a80:
    // 0x269a80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x269a80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_269a84:
    // 0x269a84: 0xfa410270  sqc2        $vf1, 0x270($s2)
    ctx->pc = 0x269a84u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 624), _mm_castps_si128(ctx->vu0_vf[1]));
label_269a88:
    // 0x269a88: 0x10000027  b           . + 4 + (0x27 << 2)
label_269a8c:
    if (ctx->pc == 0x269A8Cu) {
        ctx->pc = 0x269A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A88u;
        // 0x269a8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269A90u;
        goto label_269a90;
    }
    ctx->pc = 0x269A88u;
    {
        const bool branch_taken_0x269a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A88u;
        // 0x269a8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a88) {
            ctx->pc = 0x269B28u;
            goto label_269b28;
        }
    }
    ctx->pc = 0x269A90u;
label_269a90:
    // 0x269a90: 0x8e6291f0  lw          $v0, -0x6E10($s3)
    ctx->pc = 0x269a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939120)));
label_269a94:
    // 0x269a94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x269a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_269a98:
    // 0x269a98: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x269a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_269a9c:
    // 0x269a9c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_269aa0:
    if (ctx->pc == 0x269AA0u) {
        ctx->pc = 0x269AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A9Cu;
        // 0x269aa0: 0x8c8291ec  lw          $v0, -0x6E14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269AA4u;
        goto label_269aa4;
    }
    ctx->pc = 0x269A9Cu;
    {
        const bool branch_taken_0x269a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A9Cu;
        // 0x269aa0: 0x8c8291ec  lw          $v0, -0x6E14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a9c) {
            ctx->pc = 0x2699D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2699d0;
        }
    }
    ctx->pc = 0x269AA4u;
label_269aa4:
    // 0x269aa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_269aa8:
    // 0x269aa8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x269aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_269aac:
    // 0x269aac: 0xc083df6  jal         func_20F7D8
label_269ab0:
    if (ctx->pc == 0x269AB0u) {
        ctx->pc = 0x269AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AACu;
        // 0x269ab0: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269AB4u;
        goto label_269ab4;
    }
    ctx->pc = 0x269AACu;
    SET_GPR_U32(ctx, 31, 0x269AB4u);
    ctx->pc = 0x269AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269AACu;
    // 0x269ab0: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F7D8u, 0x269AACu, 0x269AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AB4u;
label_269ab4:
    // 0x269ab4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x269ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_269ab8:
    // 0x269ab8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_269abc:
    if (ctx->pc == 0x269ABCu) {
        ctx->pc = 0x269ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AB8u;
        // 0x269abc: 0x8e44010c  lw          $a0, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269AC0u;
        goto label_269ac0;
    }
    ctx->pc = 0x269AB8u;
    {
        const bool branch_taken_0x269ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AB8u;
        // 0x269abc: 0x8e44010c  lw          $a0, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ab8) {
            ctx->pc = 0x269ACCu;
            goto label_269acc;
        }
    }
    ctx->pc = 0x269AC0u;
label_269ac0:
    // 0x269ac0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x269ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_269ac4:
    // 0x269ac4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_269ac8:
    if (ctx->pc == 0x269AC8u) {
        ctx->pc = 0x269ACCu;
        goto label_269acc;
    }
    ctx->pc = 0x269AC4u;
    {
        const bool branch_taken_0x269ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269ac4) {
            ctx->pc = 0x269AF8u;
            goto label_269af8;
        }
    }
    ctx->pc = 0x269ACCu;
label_269acc:
    // 0x269acc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x269accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_269ad0:
    // 0x269ad0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x269ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_269ad4:
    // 0x269ad4: 0x40f809  jalr        $v0
label_269ad8:
    if (ctx->pc == 0x269AD8u) {
        ctx->pc = 0x269ADCu;
        goto label_269adc;
    }
    ctx->pc = 0x269AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x269ADCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269AD4u, 0x269ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269ADCu;
label_269adc:
    // 0x269adc: 0xc076e00  jal         func_1DB800
label_269ae0:
    if (ctx->pc == 0x269AE0u) {
        ctx->pc = 0x269AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269ADCu;
        // 0x269ae0: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269AE4u;
        goto label_269ae4;
    }
    ctx->pc = 0x269ADCu;
    SET_GPR_U32(ctx, 31, 0x269AE4u);
    ctx->pc = 0x269AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269ADCu;
    // 0x269ae0: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB800u, 0x269ADCu, 0x269AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AE4u;
label_269ae4:
    // 0x269ae4: 0xc083f5e  jal         func_20FD78
label_269ae8:
    if (ctx->pc == 0x269AE8u) {
        ctx->pc = 0x269AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AE4u;
        // 0x269ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269AECu;
        goto label_269aec;
    }
    ctx->pc = 0x269AE4u;
    SET_GPR_U32(ctx, 31, 0x269AECu);
    ctx->pc = 0x269AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269AE4u;
    // 0x269ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FD78u, 0x269AE4u, 0x269AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AECu;
label_269aec:
    // 0x269aec: 0x1000000f  b           . + 4 + (0xF << 2)
label_269af0:
    if (ctx->pc == 0x269AF0u) {
        ctx->pc = 0x269AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AECu;
        // 0x269af0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269AF4u;
        goto label_269af4;
    }
    ctx->pc = 0x269AECu;
    {
        const bool branch_taken_0x269aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AECu;
        // 0x269af0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269aec) {
            ctx->pc = 0x269B2Cu;
            goto label_269b2c;
        }
    }
    ctx->pc = 0x269AF4u;
label_269af4:
    // 0x269af4: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x269af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_269af8:
    // 0x269af8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x269af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_269afc:
    // 0x269afc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x269afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_269b00:
    // 0x269b00: 0x40f809  jalr        $v0
label_269b04:
    if (ctx->pc == 0x269B04u) {
        ctx->pc = 0x269B08u;
        goto label_269b08;
    }
    ctx->pc = 0x269B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x269B08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B00u, 0x269B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269B08u;
label_269b08:
    // 0x269b08: 0xc076de4  jal         func_1DB790
label_269b0c:
    if (ctx->pc == 0x269B0Cu) {
        ctx->pc = 0x269B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B08u;
        // 0x269b0c: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269B10u;
        goto label_269b10;
    }
    ctx->pc = 0x269B08u;
    SET_GPR_U32(ctx, 31, 0x269B10u);
    ctx->pc = 0x269B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269B08u;
    // 0x269b0c: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x269B08u, 0x269B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B10u;
label_269b10:
    // 0x269b10: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x269b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_269b14:
    // 0x269b14: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x269b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_269b18:
    // 0x269b18: 0xa2400115  sb          $zero, 0x115($s2)
    ctx->pc = 0x269b18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 277), (uint8_t)GPR_U32(ctx, 0));
label_269b1c:
    // 0x269b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269b20:
    // 0x269b20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x269b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_269b24:
    // 0x269b24: 0xae4300c0  sw          $v1, 0xC0($s2)
    ctx->pc = 0x269b24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 3));
label_269b28:
    // 0x269b28: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x269b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_269b2c:
    // 0x269b2c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x269b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_269b30:
    // 0x269b30: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x269b30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_269b34:
    // 0x269b34: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x269b34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_269b38:
    // 0x269b38: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x269b38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_269b3c:
    // 0x269b3c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x269b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_269b40:
    // 0x269b40: 0x3e00008  jr          $ra
label_269b44:
    if (ctx->pc == 0x269B44u) {
        ctx->pc = 0x269B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B40u;
        // 0x269b44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269B48u;
        goto label_fallthrough_0x269b40;
    }
    ctx->pc = 0x269B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B40u;
        // 0x269b44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x269b40:
    ctx->pc = 0x269B48u;
}
