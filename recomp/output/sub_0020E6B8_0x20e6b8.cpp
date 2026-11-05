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

// Function: sub_0020E6B8
// Address: 0x20e6b8 - 0x20eaf0
void sub_0020E6B8_0x20e6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E6B8_0x20e6b8");
#endif

    switch (ctx->pc) {
        case 0x20e6b8u: goto label_20e6b8;
        case 0x20e6bcu: goto label_20e6bc;
        case 0x20e6c0u: goto label_20e6c0;
        case 0x20e6c4u: goto label_20e6c4;
        case 0x20e6c8u: goto label_20e6c8;
        case 0x20e6ccu: goto label_20e6cc;
        case 0x20e6d0u: goto label_20e6d0;
        case 0x20e6d4u: goto label_20e6d4;
        case 0x20e6d8u: goto label_20e6d8;
        case 0x20e6dcu: goto label_20e6dc;
        case 0x20e6e0u: goto label_20e6e0;
        case 0x20e6e4u: goto label_20e6e4;
        case 0x20e6e8u: goto label_20e6e8;
        case 0x20e6ecu: goto label_20e6ec;
        case 0x20e6f0u: goto label_20e6f0;
        case 0x20e6f4u: goto label_20e6f4;
        case 0x20e6f8u: goto label_20e6f8;
        case 0x20e6fcu: goto label_20e6fc;
        case 0x20e700u: goto label_20e700;
        case 0x20e704u: goto label_20e704;
        case 0x20e708u: goto label_20e708;
        case 0x20e70cu: goto label_20e70c;
        case 0x20e710u: goto label_20e710;
        case 0x20e714u: goto label_20e714;
        case 0x20e718u: goto label_20e718;
        case 0x20e71cu: goto label_20e71c;
        case 0x20e720u: goto label_20e720;
        case 0x20e724u: goto label_20e724;
        case 0x20e728u: goto label_20e728;
        case 0x20e72cu: goto label_20e72c;
        case 0x20e730u: goto label_20e730;
        case 0x20e734u: goto label_20e734;
        case 0x20e738u: goto label_20e738;
        case 0x20e73cu: goto label_20e73c;
        case 0x20e740u: goto label_20e740;
        case 0x20e744u: goto label_20e744;
        case 0x20e748u: goto label_20e748;
        case 0x20e74cu: goto label_20e74c;
        case 0x20e750u: goto label_20e750;
        case 0x20e754u: goto label_20e754;
        case 0x20e758u: goto label_20e758;
        case 0x20e75cu: goto label_20e75c;
        case 0x20e760u: goto label_20e760;
        case 0x20e764u: goto label_20e764;
        case 0x20e768u: goto label_20e768;
        case 0x20e76cu: goto label_20e76c;
        case 0x20e770u: goto label_20e770;
        case 0x20e774u: goto label_20e774;
        case 0x20e778u: goto label_20e778;
        case 0x20e77cu: goto label_20e77c;
        case 0x20e780u: goto label_20e780;
        case 0x20e784u: goto label_20e784;
        case 0x20e788u: goto label_20e788;
        case 0x20e78cu: goto label_20e78c;
        case 0x20e790u: goto label_20e790;
        case 0x20e794u: goto label_20e794;
        case 0x20e798u: goto label_20e798;
        case 0x20e79cu: goto label_20e79c;
        case 0x20e7a0u: goto label_20e7a0;
        case 0x20e7a4u: goto label_20e7a4;
        case 0x20e7a8u: goto label_20e7a8;
        case 0x20e7acu: goto label_20e7ac;
        case 0x20e7b0u: goto label_20e7b0;
        case 0x20e7b4u: goto label_20e7b4;
        case 0x20e7b8u: goto label_20e7b8;
        case 0x20e7bcu: goto label_20e7bc;
        case 0x20e7c0u: goto label_20e7c0;
        case 0x20e7c4u: goto label_20e7c4;
        case 0x20e7c8u: goto label_20e7c8;
        case 0x20e7ccu: goto label_20e7cc;
        case 0x20e7d0u: goto label_20e7d0;
        case 0x20e7d4u: goto label_20e7d4;
        case 0x20e7d8u: goto label_20e7d8;
        case 0x20e7dcu: goto label_20e7dc;
        case 0x20e7e0u: goto label_20e7e0;
        case 0x20e7e4u: goto label_20e7e4;
        case 0x20e7e8u: goto label_20e7e8;
        case 0x20e7ecu: goto label_20e7ec;
        case 0x20e7f0u: goto label_20e7f0;
        case 0x20e7f4u: goto label_20e7f4;
        case 0x20e7f8u: goto label_20e7f8;
        case 0x20e7fcu: goto label_20e7fc;
        case 0x20e800u: goto label_20e800;
        case 0x20e804u: goto label_20e804;
        case 0x20e808u: goto label_20e808;
        case 0x20e80cu: goto label_20e80c;
        case 0x20e810u: goto label_20e810;
        case 0x20e814u: goto label_20e814;
        case 0x20e818u: goto label_20e818;
        case 0x20e81cu: goto label_20e81c;
        case 0x20e820u: goto label_20e820;
        case 0x20e824u: goto label_20e824;
        case 0x20e828u: goto label_20e828;
        case 0x20e82cu: goto label_20e82c;
        case 0x20e830u: goto label_20e830;
        case 0x20e834u: goto label_20e834;
        case 0x20e838u: goto label_20e838;
        case 0x20e83cu: goto label_20e83c;
        case 0x20e840u: goto label_20e840;
        case 0x20e844u: goto label_20e844;
        case 0x20e848u: goto label_20e848;
        case 0x20e84cu: goto label_20e84c;
        case 0x20e850u: goto label_20e850;
        case 0x20e854u: goto label_20e854;
        case 0x20e858u: goto label_20e858;
        case 0x20e85cu: goto label_20e85c;
        case 0x20e860u: goto label_20e860;
        case 0x20e864u: goto label_20e864;
        case 0x20e868u: goto label_20e868;
        case 0x20e86cu: goto label_20e86c;
        case 0x20e870u: goto label_20e870;
        case 0x20e874u: goto label_20e874;
        case 0x20e878u: goto label_20e878;
        case 0x20e87cu: goto label_20e87c;
        case 0x20e880u: goto label_20e880;
        case 0x20e884u: goto label_20e884;
        case 0x20e888u: goto label_20e888;
        case 0x20e88cu: goto label_20e88c;
        case 0x20e890u: goto label_20e890;
        case 0x20e894u: goto label_20e894;
        case 0x20e898u: goto label_20e898;
        case 0x20e89cu: goto label_20e89c;
        case 0x20e8a0u: goto label_20e8a0;
        case 0x20e8a4u: goto label_20e8a4;
        case 0x20e8a8u: goto label_20e8a8;
        case 0x20e8acu: goto label_20e8ac;
        case 0x20e8b0u: goto label_20e8b0;
        case 0x20e8b4u: goto label_20e8b4;
        case 0x20e8b8u: goto label_20e8b8;
        case 0x20e8bcu: goto label_20e8bc;
        case 0x20e8c0u: goto label_20e8c0;
        case 0x20e8c4u: goto label_20e8c4;
        case 0x20e8c8u: goto label_20e8c8;
        case 0x20e8ccu: goto label_20e8cc;
        case 0x20e8d0u: goto label_20e8d0;
        case 0x20e8d4u: goto label_20e8d4;
        case 0x20e8d8u: goto label_20e8d8;
        case 0x20e8dcu: goto label_20e8dc;
        case 0x20e8e0u: goto label_20e8e0;
        case 0x20e8e4u: goto label_20e8e4;
        case 0x20e8e8u: goto label_20e8e8;
        case 0x20e8ecu: goto label_20e8ec;
        case 0x20e8f0u: goto label_20e8f0;
        case 0x20e8f4u: goto label_20e8f4;
        case 0x20e8f8u: goto label_20e8f8;
        case 0x20e8fcu: goto label_20e8fc;
        case 0x20e900u: goto label_20e900;
        case 0x20e904u: goto label_20e904;
        case 0x20e908u: goto label_20e908;
        case 0x20e90cu: goto label_20e90c;
        case 0x20e910u: goto label_20e910;
        case 0x20e914u: goto label_20e914;
        case 0x20e918u: goto label_20e918;
        case 0x20e91cu: goto label_20e91c;
        case 0x20e920u: goto label_20e920;
        case 0x20e924u: goto label_20e924;
        case 0x20e928u: goto label_20e928;
        case 0x20e92cu: goto label_20e92c;
        case 0x20e930u: goto label_20e930;
        case 0x20e934u: goto label_20e934;
        case 0x20e938u: goto label_20e938;
        case 0x20e93cu: goto label_20e93c;
        case 0x20e940u: goto label_20e940;
        case 0x20e944u: goto label_20e944;
        case 0x20e948u: goto label_20e948;
        case 0x20e94cu: goto label_20e94c;
        case 0x20e950u: goto label_20e950;
        case 0x20e954u: goto label_20e954;
        case 0x20e958u: goto label_20e958;
        case 0x20e95cu: goto label_20e95c;
        case 0x20e960u: goto label_20e960;
        case 0x20e964u: goto label_20e964;
        case 0x20e968u: goto label_20e968;
        case 0x20e96cu: goto label_20e96c;
        case 0x20e970u: goto label_20e970;
        case 0x20e974u: goto label_20e974;
        case 0x20e978u: goto label_20e978;
        case 0x20e97cu: goto label_20e97c;
        case 0x20e980u: goto label_20e980;
        case 0x20e984u: goto label_20e984;
        case 0x20e988u: goto label_20e988;
        case 0x20e98cu: goto label_20e98c;
        case 0x20e990u: goto label_20e990;
        case 0x20e994u: goto label_20e994;
        case 0x20e998u: goto label_20e998;
        case 0x20e99cu: goto label_20e99c;
        case 0x20e9a0u: goto label_20e9a0;
        case 0x20e9a4u: goto label_20e9a4;
        case 0x20e9a8u: goto label_20e9a8;
        case 0x20e9acu: goto label_20e9ac;
        case 0x20e9b0u: goto label_20e9b0;
        case 0x20e9b4u: goto label_20e9b4;
        case 0x20e9b8u: goto label_20e9b8;
        case 0x20e9bcu: goto label_20e9bc;
        case 0x20e9c0u: goto label_20e9c0;
        case 0x20e9c4u: goto label_20e9c4;
        case 0x20e9c8u: goto label_20e9c8;
        case 0x20e9ccu: goto label_20e9cc;
        case 0x20e9d0u: goto label_20e9d0;
        case 0x20e9d4u: goto label_20e9d4;
        case 0x20e9d8u: goto label_20e9d8;
        case 0x20e9dcu: goto label_20e9dc;
        case 0x20e9e0u: goto label_20e9e0;
        case 0x20e9e4u: goto label_20e9e4;
        case 0x20e9e8u: goto label_20e9e8;
        case 0x20e9ecu: goto label_20e9ec;
        case 0x20e9f0u: goto label_20e9f0;
        case 0x20e9f4u: goto label_20e9f4;
        case 0x20e9f8u: goto label_20e9f8;
        case 0x20e9fcu: goto label_20e9fc;
        case 0x20ea00u: goto label_20ea00;
        case 0x20ea04u: goto label_20ea04;
        case 0x20ea08u: goto label_20ea08;
        case 0x20ea0cu: goto label_20ea0c;
        case 0x20ea10u: goto label_20ea10;
        case 0x20ea14u: goto label_20ea14;
        case 0x20ea18u: goto label_20ea18;
        case 0x20ea1cu: goto label_20ea1c;
        case 0x20ea20u: goto label_20ea20;
        case 0x20ea24u: goto label_20ea24;
        case 0x20ea28u: goto label_20ea28;
        case 0x20ea2cu: goto label_20ea2c;
        case 0x20ea30u: goto label_20ea30;
        case 0x20ea34u: goto label_20ea34;
        case 0x20ea38u: goto label_20ea38;
        case 0x20ea3cu: goto label_20ea3c;
        case 0x20ea40u: goto label_20ea40;
        case 0x20ea44u: goto label_20ea44;
        case 0x20ea48u: goto label_20ea48;
        case 0x20ea4cu: goto label_20ea4c;
        case 0x20ea50u: goto label_20ea50;
        case 0x20ea54u: goto label_20ea54;
        case 0x20ea58u: goto label_20ea58;
        case 0x20ea5cu: goto label_20ea5c;
        case 0x20ea60u: goto label_20ea60;
        case 0x20ea64u: goto label_20ea64;
        case 0x20ea68u: goto label_20ea68;
        case 0x20ea6cu: goto label_20ea6c;
        case 0x20ea70u: goto label_20ea70;
        case 0x20ea74u: goto label_20ea74;
        case 0x20ea78u: goto label_20ea78;
        case 0x20ea7cu: goto label_20ea7c;
        case 0x20ea80u: goto label_20ea80;
        case 0x20ea84u: goto label_20ea84;
        case 0x20ea88u: goto label_20ea88;
        case 0x20ea8cu: goto label_20ea8c;
        case 0x20ea90u: goto label_20ea90;
        case 0x20ea94u: goto label_20ea94;
        case 0x20ea98u: goto label_20ea98;
        case 0x20ea9cu: goto label_20ea9c;
        case 0x20eaa0u: goto label_20eaa0;
        case 0x20eaa4u: goto label_20eaa4;
        case 0x20eaa8u: goto label_20eaa8;
        case 0x20eaacu: goto label_20eaac;
        case 0x20eab0u: goto label_20eab0;
        case 0x20eab4u: goto label_20eab4;
        case 0x20eab8u: goto label_20eab8;
        case 0x20eabcu: goto label_20eabc;
        case 0x20eac0u: goto label_20eac0;
        case 0x20eac4u: goto label_20eac4;
        case 0x20eac8u: goto label_20eac8;
        case 0x20eaccu: goto label_20eacc;
        case 0x20ead0u: goto label_20ead0;
        case 0x20ead4u: goto label_20ead4;
        case 0x20ead8u: goto label_20ead8;
        case 0x20eadcu: goto label_20eadc;
        case 0x20eae0u: goto label_20eae0;
        case 0x20eae4u: goto label_20eae4;
        case 0x20eae8u: goto label_20eae8;
        case 0x20eaecu: goto label_20eaec;
        default: break;
    }

    ctx->pc = 0x20e6b8u;

label_20e6b8:
    // 0x20e6b8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x20e6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_20e6bc:
    // 0x20e6bc: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x20e6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_20e6c0:
    // 0x20e6c0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x20e6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_20e6c4:
    // 0x20e6c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20e6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e6c8:
    // 0x20e6c8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x20e6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_20e6cc:
    // 0x20e6cc: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x20e6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_20e6d0:
    // 0x20e6d0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x20e6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_20e6d4:
    // 0x20e6d4: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x20e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
label_20e6d8:
    // 0x20e6d8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x20e6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_20e6dc:
    // 0x20e6dc: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x20e6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
label_20e6e0:
    // 0x20e6e0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x20e6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_20e6e4:
    // 0x20e6e4: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x20e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_20e6e8:
    // 0x20e6e8: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x20e6e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_20e6ec:
    // 0x20e6ec: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x20e6ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_20e6f0:
    // 0x20e6f0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x20e6f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_20e6f4:
    // 0x20e6f4: 0x92220134  lbu         $v0, 0x134($s1)
    ctx->pc = 0x20e6f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 308)));
label_20e6f8:
    // 0x20e6f8: 0x144000ee  bnez        $v0, . + 4 + (0xEE << 2)
label_20e6fc:
    if (ctx->pc == 0x20E6FCu) {
        ctx->pc = 0x20E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6F8u;
        // 0x20e6fc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E700u;
        goto label_20e700;
    }
    ctx->pc = 0x20E6F8u;
    {
        const bool branch_taken_0x20e6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6F8u;
        // 0x20e6fc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6f8) {
            ctx->pc = 0x20EAB4u;
            goto label_20eab4;
        }
    }
    ctx->pc = 0x20E700u;
label_20e700:
    // 0x20e700: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x20e700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_20e704:
    // 0x20e704: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x20e704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_20e708:
    // 0x20e708: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x20e708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_20e70c:
    // 0x20e70c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_20e710:
    if (ctx->pc == 0x20E710u) {
        ctx->pc = 0x20E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E70Cu;
        // 0x20e710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E714u;
        goto label_20e714;
    }
    ctx->pc = 0x20E70Cu;
    {
        const bool branch_taken_0x20e70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E70Cu;
        // 0x20e710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e70c) {
            ctx->pc = 0x20E730u;
            goto label_20e730;
        }
    }
    ctx->pc = 0x20E714u;
label_20e714:
    // 0x20e714: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20e714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20e718:
    // 0x20e718: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x20e718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20e71c:
    // 0x20e71c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x20e71cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20e720:
    // 0x20e720: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x20e720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20e724:
    // 0x20e724: 0xc0ce128  jal         func_3384A0
label_20e728:
    if (ctx->pc == 0x20E728u) {
        ctx->pc = 0x20E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E724u;
        // 0x20e728: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E72Cu;
        goto label_20e72c;
    }
    ctx->pc = 0x20E724u;
    SET_GPR_U32(ctx, 31, 0x20E72Cu);
    ctx->pc = 0x20E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E724u;
    // 0x20e728: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3384A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3384A0u, 0x20E724u, 0x20E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E72Cu;
label_20e72c:
    // 0x20e72c: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x20e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_20e730:
    // 0x20e730: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x20e730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_20e734:
    // 0x20e734: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x20e734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_20e738:
    // 0x20e738: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20e73c:
    if (ctx->pc == 0x20E73Cu) {
        ctx->pc = 0x20E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E738u;
        // 0x20e73c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E740u;
        goto label_20e740;
    }
    ctx->pc = 0x20E738u;
    {
        const bool branch_taken_0x20e738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E738u;
        // 0x20e73c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e738) {
            ctx->pc = 0x20E754u;
            goto label_20e754;
        }
    }
    ctx->pc = 0x20E740u;
label_20e740:
    // 0x20e740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20e740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e744:
    // 0x20e744: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x20e744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_20e748:
    // 0x20e748: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x20e748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_20e74c:
    // 0x20e74c: 0xc0ce13c  jal         func_3384F0
label_20e750:
    if (ctx->pc == 0x20E750u) {
        ctx->pc = 0x20E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E74Cu;
        // 0x20e750: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E754u;
        goto label_20e754;
    }
    ctx->pc = 0x20E74Cu;
    SET_GPR_U32(ctx, 31, 0x20E754u);
    ctx->pc = 0x20E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E74Cu;
    // 0x20e750: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3384F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3384F0u, 0x20E74Cu, 0x20E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E754u;
label_20e754:
    // 0x20e754: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x20e754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_20e758:
    // 0x20e758: 0x846200d4  lh          $v0, 0xD4($v1)
    ctx->pc = 0x20e758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 212)));
label_20e75c:
    // 0x20e75c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20e760:
    if (ctx->pc == 0x20E760u) {
        ctx->pc = 0x20E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E75Cu;
        // 0x20e760: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E764u;
        goto label_20e764;
    }
    ctx->pc = 0x20E75Cu;
    {
        const bool branch_taken_0x20e75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E75Cu;
        // 0x20e760: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e75c) {
            ctx->pc = 0x20E76Cu;
            goto label_20e76c;
        }
    }
    ctx->pc = 0x20E764u;
label_20e764:
    // 0x20e764: 0x10000002  b           . + 4 + (0x2 << 2)
label_20e768:
    if (ctx->pc == 0x20E768u) {
        ctx->pc = 0x20E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E764u;
        // 0x20e768: 0x8ca200d0  lw          $v0, 0xD0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E76Cu;
        goto label_20e76c;
    }
    ctx->pc = 0x20E764u;
    {
        const bool branch_taken_0x20e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E764u;
        // 0x20e768: 0x8ca200d0  lw          $v0, 0xD0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e764) {
            ctx->pc = 0x20E770u;
            goto label_20e770;
        }
    }
    ctx->pc = 0x20E76Cu;
label_20e76c:
    // 0x20e76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e770:
    // 0x20e770: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_20e774:
    if (ctx->pc == 0x20E774u) {
        ctx->pc = 0x20E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E770u;
        // 0x20e774: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E778u;
        goto label_20e778;
    }
    ctx->pc = 0x20E770u;
    {
        const bool branch_taken_0x20e770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E770u;
        // 0x20e774: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e770) {
            ctx->pc = 0x20E7C8u;
            goto label_20e7c8;
        }
    }
    ctx->pc = 0x20E778u;
label_20e778:
    // 0x20e778: 0x84a200d4  lh          $v0, 0xD4($a1)
    ctx->pc = 0x20e778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 212)));
label_20e77c:
    // 0x20e77c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_20e780:
    if (ctx->pc == 0x20E780u) {
        ctx->pc = 0x20E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E77Cu;
        // 0x20e780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E784u;
        goto label_20e784;
    }
    ctx->pc = 0x20E77Cu;
    {
        const bool branch_taken_0x20e77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e77c) {
            ctx->pc = 0x20E780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E77Cu;
            // 0x20e780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E788u;
            goto label_20e788;
        }
    }
    ctx->pc = 0x20E784u;
label_20e784:
    // 0x20e784: 0x8ca500d0  lw          $a1, 0xD0($a1)
    ctx->pc = 0x20e784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
label_20e788:
    // 0x20e788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e78c:
    // 0x20e78c: 0xc083b2a  jal         func_20ECA8
label_20e790:
    if (ctx->pc == 0x20E790u) {
        ctx->pc = 0x20E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E78Cu;
        // 0x20e790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E794u;
        goto label_20e794;
    }
    ctx->pc = 0x20E78Cu;
    SET_GPR_U32(ctx, 31, 0x20E794u);
    ctx->pc = 0x20E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E78Cu;
    // 0x20e790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ECA8u, 0x20E78Cu, 0x20E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E794u;
label_20e794:
    // 0x20e794: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20e794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e798:
    // 0x20e798: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_20e79c:
    if (ctx->pc == 0x20E79Cu) {
        ctx->pc = 0x20E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E798u;
        // 0x20e79c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7A0u;
        goto label_20e7a0;
    }
    ctx->pc = 0x20E798u;
    {
        const bool branch_taken_0x20e798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e798) {
            ctx->pc = 0x20E79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E798u;
            // 0x20e79c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E7C8u;
            goto label_20e7c8;
        }
    }
    ctx->pc = 0x20E7A0u;
label_20e7a0:
    // 0x20e7a0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x20e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_20e7a4:
    // 0x20e7a4: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x20e7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
label_20e7a8:
    // 0x20e7a8: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x20e7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_20e7ac:
    // 0x20e7ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_20e7b0:
    if (ctx->pc == 0x20E7B0u) {
        ctx->pc = 0x20E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7ACu;
        // 0x20e7b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7B4u;
        goto label_20e7b4;
    }
    ctx->pc = 0x20E7ACu;
    {
        const bool branch_taken_0x20e7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e7ac) {
            ctx->pc = 0x20E7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E7ACu;
            // 0x20e7b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E7C8u;
            goto label_20e7c8;
        }
    }
    ctx->pc = 0x20E7B4u;
label_20e7b4:
    // 0x20e7b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20e7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20e7b8:
    // 0x20e7b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e7bc:
    // 0x20e7bc: 0x0  nop
    ctx->pc = 0x20e7bcu;
    // NOP
label_20e7c0:
    // 0x20e7c0: 0xe4600240  swc1        $f0, 0x240($v1)
    ctx->pc = 0x20e7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 576), bits); }
label_20e7c4:
    // 0x20e7c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e7c8:
    // 0x20e7c8: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x20e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_20e7cc:
    // 0x20e7cc: 0xa2230134  sb          $v1, 0x134($s1)
    ctx->pc = 0x20e7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 308), (uint8_t)GPR_U32(ctx, 3));
label_20e7d0:
    // 0x20e7d0: 0x90820148  lbu         $v0, 0x148($a0)
    ctx->pc = 0x20e7d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 328)));
label_20e7d4:
    // 0x20e7d4: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
label_20e7d8:
    if (ctx->pc == 0x20E7D8u) {
        ctx->pc = 0x20E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7D4u;
        // 0x20e7d8: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7DCu;
        goto label_20e7dc;
    }
    ctx->pc = 0x20E7D4u;
    {
        const bool branch_taken_0x20e7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7D4u;
        // 0x20e7d8: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7d4) {
            ctx->pc = 0x20EAB4u;
            goto label_20eab4;
        }
    }
    ctx->pc = 0x20E7DCu;
label_20e7dc:
    // 0x20e7dc: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x20e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_20e7e0:
    // 0x20e7e0: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_20e7e4:
    if (ctx->pc == 0x20E7E4u) {
        ctx->pc = 0x20E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7E0u;
        // 0x20e7e4: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7E8u;
        goto label_20e7e8;
    }
    ctx->pc = 0x20E7E0u;
    {
        const bool branch_taken_0x20e7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e7e0) {
            ctx->pc = 0x20E7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E7E0u;
            // 0x20e7e4: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E870u;
            goto label_20e870;
        }
    }
    ctx->pc = 0x20E7E8u;
label_20e7e8:
    // 0x20e7e8: 0xc0f6a96  jal         func_3DAA58
label_20e7ec:
    if (ctx->pc == 0x20E7ECu) {
        ctx->pc = 0x20E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7E8u;
        // 0x20e7ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7F0u;
        goto label_20e7f0;
    }
    ctx->pc = 0x20E7E8u;
    SET_GPR_U32(ctx, 31, 0x20E7F0u);
    ctx->pc = 0x20E7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E7E8u;
    // 0x20e7ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20E7E8u, 0x20E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7F0u;
label_20e7f0:
    // 0x20e7f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20e7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_20e7f4:
    // 0x20e7f4: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x20e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_20e7f8:
    // 0x20e7f8: 0xc0c2e94  jal         func_30BA50
label_20e7fc:
    if (ctx->pc == 0x20E7FCu) {
        ctx->pc = 0x20E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7F8u;
        // 0x20e7fc: 0x24a51410  addiu       $a1, $a1, 0x1410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E800u;
        goto label_20e800;
    }
    ctx->pc = 0x20E7F8u;
    SET_GPR_U32(ctx, 31, 0x20E800u);
    ctx->pc = 0x20E7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E7F8u;
    // 0x20e7fc: 0x24a51410  addiu       $a1, $a1, 0x1410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x20E7F8u, 0x20E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E800u;
label_20e800:
    // 0x20e800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20e800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e804:
    // 0x20e804: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_20e808:
    if (ctx->pc == 0x20E808u) {
        ctx->pc = 0x20E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E804u;
        // 0x20e808: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E80Cu;
        goto label_20e80c;
    }
    ctx->pc = 0x20E804u;
    {
        const bool branch_taken_0x20e804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e804) {
            ctx->pc = 0x20E808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E804u;
            // 0x20e808: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E82Cu;
            goto label_20e82c;
        }
    }
    ctx->pc = 0x20E80Cu;
label_20e80c:
    // 0x20e80c: 0xc0f70ce  jal         func_3DC338
label_20e810:
    if (ctx->pc == 0x20E810u) {
        ctx->pc = 0x20E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E80Cu;
        // 0x20e810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E814u;
        goto label_20e814;
    }
    ctx->pc = 0x20E80Cu;
    SET_GPR_U32(ctx, 31, 0x20E814u);
    ctx->pc = 0x20E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E80Cu;
    // 0x20e810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x20E80Cu, 0x20E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E814u;
label_20e814:
    // 0x20e814: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20e818:
    if (ctx->pc == 0x20E818u) {
        ctx->pc = 0x20E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E814u;
        // 0x20e818: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E81Cu;
        goto label_20e81c;
    }
    ctx->pc = 0x20E814u;
    {
        const bool branch_taken_0x20e814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E814u;
        // 0x20e818: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e814) {
            ctx->pc = 0x20E834u;
            goto label_20e834;
        }
    }
    ctx->pc = 0x20E81Cu;
label_20e81c:
    // 0x20e81c: 0xc0c4900  jal         func_312400
label_20e820:
    if (ctx->pc == 0x20E820u) {
        ctx->pc = 0x20E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E81Cu;
        // 0x20e820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E824u;
        goto label_20e824;
    }
    ctx->pc = 0x20E81Cu;
    SET_GPR_U32(ctx, 31, 0x20E824u);
    ctx->pc = 0x20E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E81Cu;
    // 0x20e820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x20E81Cu, 0x20E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E824u;
label_20e824:
    // 0x20e824: 0x10000003  b           . + 4 + (0x3 << 2)
label_20e828:
    if (ctx->pc == 0x20E828u) {
        ctx->pc = 0x20E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E824u;
        // 0x20e828: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E82Cu;
        goto label_20e82c;
    }
    ctx->pc = 0x20E824u;
    {
        const bool branch_taken_0x20e824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E824u;
        // 0x20e828: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e824) {
            ctx->pc = 0x20E834u;
            goto label_20e834;
        }
    }
    ctx->pc = 0x20E82Cu;
label_20e82c:
    // 0x20e82c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20e830:
    // 0x20e830: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x20e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_20e834:
    // 0x20e834: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x20e834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20e838:
    // 0x20e838: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x20e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_20e83c:
    // 0x20e83c: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x20e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_20e840:
    // 0x20e840: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20e840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_20e844:
    // 0x20e844: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x20e844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
label_20e848:
    // 0x20e848: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20e848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20e84c:
    // 0x20e84c: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x20e84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_20e850:
    // 0x20e850: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20e850u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e854:
    // 0x20e854: 0xc0b0a7a  jal         func_2C29E8
label_20e858:
    if (ctx->pc == 0x20E858u) {
        ctx->pc = 0x20E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E854u;
        // 0x20e858: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E85Cu;
        goto label_20e85c;
    }
    ctx->pc = 0x20E854u;
    SET_GPR_U32(ctx, 31, 0x20E85Cu);
    ctx->pc = 0x20E858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E854u;
    // 0x20e858: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29E8u, 0x20E854u, 0x20E85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E85Cu;
label_20e85c:
    // 0x20e85c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20e860:
    if (ctx->pc == 0x20E860u) {
        ctx->pc = 0x20E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E85Cu;
        // 0x20e860: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E864u;
        goto label_20e864;
    }
    ctx->pc = 0x20E85Cu;
    {
        const bool branch_taken_0x20e85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e85c) {
            ctx->pc = 0x20E860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E85Cu;
            // 0x20e860: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E870u;
            goto label_20e870;
        }
    }
    ctx->pc = 0x20E864u;
label_20e864:
    // 0x20e864: 0xc0b0ef2  jal         func_2C3BC8
label_20e868:
    if (ctx->pc == 0x20E868u) {
        ctx->pc = 0x20E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E864u;
        // 0x20e868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E86Cu;
        goto label_20e86c;
    }
    ctx->pc = 0x20E864u;
    SET_GPR_U32(ctx, 31, 0x20E86Cu);
    ctx->pc = 0x20E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E864u;
    // 0x20e868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x20E864u, 0x20E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E86Cu;
label_20e86c:
    // 0x20e86c: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x20e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_20e870:
    // 0x20e870: 0xc4410160  lwc1        $f1, 0x160($v0)
    ctx->pc = 0x20e870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e874:
    // 0x20e874: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x20e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
label_20e878:
    // 0x20e878: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x20e878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20e87c:
    // 0x20e87c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e880:
    // 0x20e880: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x20e880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_20e884:
    // 0x20e884: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x20e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e888:
    // 0x20e888: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x20e888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_20e88c:
    // 0x20e88c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x20e88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e890:
    // 0x20e890: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x20e890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_20e894:
    // 0x20e894: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x20e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20e898:
    // 0x20e898: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x20e898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20e89c:
    // 0x20e89c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x20e89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20e8a0:
    // 0x20e8a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x20e8a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_20e8a4:
    // 0x20e8a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x20e8a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_20e8a8:
    // 0x20e8a8: 0x4604259c  madd.s      $f22, $f4, $f4
    ctx->pc = 0x20e8a8u;
    ctx->f[22] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_20e8ac:
    // 0x20e8ac: 0x46160584  c1          0x160584
    ctx->pc = 0x20e8acu;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
label_20e8b0:
    // 0x20e8b0: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x20e8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_20e8b4:
    // 0x20e8b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20e8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_20e8b8:
    // 0x20e8b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20e8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20e8bc:
    // 0x20e8bc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x20e8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_20e8c0:
    // 0x20e8c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20e8c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_20e8c4:
    // 0x20e8c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x20e8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_20e8c8:
    // 0x20e8c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20e8c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_20e8cc:
    // 0x20e8cc: 0xc0b12b0  jal         func_2C4AC0
label_20e8d0:
    if (ctx->pc == 0x20E8D0u) {
        ctx->pc = 0x20E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8CCu;
        // 0x20e8d0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8D4u;
        goto label_20e8d4;
    }
    ctx->pc = 0x20E8CCu;
    SET_GPR_U32(ctx, 31, 0x20E8D4u);
    ctx->pc = 0x20E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E8CCu;
    // 0x20e8d0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x20E8CCu, 0x20E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8D4u;
label_20e8d4:
    // 0x20e8d4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x20e8d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_20e8d8:
    // 0x20e8d8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x20e8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e8dc:
    // 0x20e8dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20e8dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_20e8e0:
    // 0x20e8e0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x20e8e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_20e8e4:
    // 0x20e8e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20e8e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20e8e8:
    // 0x20e8e8: 0xc0b12b0  jal         func_2C4AC0
label_20e8ec:
    if (ctx->pc == 0x20E8ECu) {
        ctx->pc = 0x20E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8E8u;
        // 0x20e8ec: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8F0u;
        goto label_20e8f0;
    }
    ctx->pc = 0x20E8E8u;
    SET_GPR_U32(ctx, 31, 0x20E8F0u);
    ctx->pc = 0x20E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E8E8u;
    // 0x20e8ec: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x20E8E8u, 0x20E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8F0u;
label_20e8f0:
    // 0x20e8f0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x20e8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_20e8f4:
    // 0x20e8f4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x20e8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e8f8:
    // 0x20e8f8: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x20e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_20e8fc:
    // 0x20e8fc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x20e8fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20e900:
    // 0x20e900: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x20e900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_20e904:
    // 0x20e904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e908:
    // 0x20e908: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20e908u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20e90c:
    // 0x20e90c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x20e90cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_20e910:
    // 0x20e910: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x20e910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20e914:
    // 0x20e914: 0x8c45014c  lw          $a1, 0x14C($v0)
    ctx->pc = 0x20e914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_20e918:
    // 0x20e918: 0xc0850ec  jal         func_2143B0
label_20e91c:
    if (ctx->pc == 0x20E91Cu) {
        ctx->pc = 0x20E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E918u;
        // 0x20e91c: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E920u;
        goto label_20e920;
    }
    ctx->pc = 0x20E918u;
    SET_GPR_U32(ctx, 31, 0x20E920u);
    ctx->pc = 0x20E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E918u;
    // 0x20e91c: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2143B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2143B0u, 0x20E918u, 0x20E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E920u;
label_20e920:
    // 0x20e920: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x20e920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e924:
    // 0x20e924: 0x8e830218  lw          $v1, 0x218($s4)
    ctx->pc = 0x20e924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
label_20e928:
    // 0x20e928: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x20e928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_20e92c:
    // 0x20e92c: 0x40f809  jalr        $v0
label_20e930:
    if (ctx->pc == 0x20E930u) {
        ctx->pc = 0x20E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E92Cu;
        // 0x20e930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E934u;
        goto label_20e934;
    }
    ctx->pc = 0x20E92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E934u);
        ctx->pc = 0x20E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E92Cu;
        // 0x20e930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E92Cu, 0x20E934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E934u;
label_20e934:
    // 0x20e934: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x20e934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_20e938:
    // 0x20e938: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x20e938u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20e93c:
    // 0x20e93c: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x20e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
label_20e940:
    // 0x20e940: 0x1840004e  blez        $v0, . + 4 + (0x4E << 2)
label_20e944:
    if (ctx->pc == 0x20E944u) {
        ctx->pc = 0x20E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E940u;
        // 0x20e944: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E948u;
        goto label_20e948;
    }
    ctx->pc = 0x20E940u;
    {
        const bool branch_taken_0x20e940 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E940u;
        // 0x20e944: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e940) {
            ctx->pc = 0x20EA7Cu;
            goto label_20ea7c;
        }
    }
    ctx->pc = 0x20E948u;
label_20e948:
    // 0x20e948: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x20e948u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20e94c:
    // 0x20e94c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x20e94cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20e950:
    // 0x20e950: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x20e950u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20e954:
    // 0x20e954: 0x3c1e0046  lui         $fp, 0x46
    ctx->pc = 0x20e954u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)70 << 16));
label_20e958:
    // 0x20e958: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20e958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_20e95c:
    // 0x20e95c: 0x0  nop
    ctx->pc = 0x20e95cu;
    // NOP
label_20e960:
    // 0x20e960: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20e960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20e964:
    // 0x20e964: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x20e964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20e968:
    // 0x20e968: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x20e968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_20e96c:
    // 0x20e96c: 0xc0efed0  jal         func_3BFB40
label_20e970:
    if (ctx->pc == 0x20E970u) {
        ctx->pc = 0x20E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E96Cu;
        // 0x20e970: 0x27c61420  addiu       $a2, $fp, 0x1420 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 5152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E974u;
        goto label_20e974;
    }
    ctx->pc = 0x20E96Cu;
    SET_GPR_U32(ctx, 31, 0x20E974u);
    ctx->pc = 0x20E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E96Cu;
    // 0x20e970: 0x27c61420  addiu       $a2, $fp, 0x1420 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 5152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x20E96Cu, 0x20E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E974u;
label_20e974:
    // 0x20e974: 0x8e840104  lw          $a0, 0x104($s4)
    ctx->pc = 0x20e974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_20e978:
    // 0x20e978: 0xc0c2e94  jal         func_30BA50
label_20e97c:
    if (ctx->pc == 0x20E97Cu) {
        ctx->pc = 0x20E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E978u;
        // 0x20e97c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E980u;
        goto label_20e980;
    }
    ctx->pc = 0x20E978u;
    SET_GPR_U32(ctx, 31, 0x20E980u);
    ctx->pc = 0x20E97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E978u;
    // 0x20e97c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x20E978u, 0x20E980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E980u;
label_20e980:
    // 0x20e980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20e980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e984:
    // 0x20e984: 0x52000038  beql        $s0, $zero, . + 4 + (0x38 << 2)
label_20e988:
    if (ctx->pc == 0x20E988u) {
        ctx->pc = 0x20E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E984u;
        // 0x20e988: 0x8e2300b8  lw          $v1, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E98Cu;
        goto label_20e98c;
    }
    ctx->pc = 0x20E984u;
    {
        const bool branch_taken_0x20e984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e984) {
            ctx->pc = 0x20E988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E984u;
            // 0x20e988: 0x8e2300b8  lw          $v1, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EA68u;
            goto label_20ea68;
        }
    }
    ctx->pc = 0x20E98Cu;
label_20e98c:
    // 0x20e98c: 0xc0f70ce  jal         func_3DC338
label_20e990:
    if (ctx->pc == 0x20E990u) {
        ctx->pc = 0x20E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E98Cu;
        // 0x20e990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E994u;
        goto label_20e994;
    }
    ctx->pc = 0x20E98Cu;
    SET_GPR_U32(ctx, 31, 0x20E994u);
    ctx->pc = 0x20E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E98Cu;
    // 0x20e990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x20E98Cu, 0x20E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E994u;
label_20e994:
    // 0x20e994: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20e998:
    if (ctx->pc == 0x20E998u) {
        ctx->pc = 0x20E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E994u;
        // 0x20e998: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E99Cu;
        goto label_20e99c;
    }
    ctx->pc = 0x20E994u;
    {
        const bool branch_taken_0x20e994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e994) {
            ctx->pc = 0x20E998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E994u;
            // 0x20e998: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E9A8u;
            goto label_20e9a8;
        }
    }
    ctx->pc = 0x20E99Cu;
label_20e99c:
    // 0x20e99c: 0xc0c4900  jal         func_312400
label_20e9a0:
    if (ctx->pc == 0x20E9A0u) {
        ctx->pc = 0x20E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E99Cu;
        // 0x20e9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E9A4u;
        goto label_20e9a4;
    }
    ctx->pc = 0x20E99Cu;
    SET_GPR_U32(ctx, 31, 0x20E9A4u);
    ctx->pc = 0x20E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E99Cu;
    // 0x20e9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x20E99Cu, 0x20E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E9A4u;
label_20e9a4:
    // 0x20e9a4: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x20e9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e9a8:
    // 0x20e9a8: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x20e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_20e9ac:
    // 0x20e9ac: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x20e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_20e9b0:
    // 0x20e9b0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x20e9b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_20e9b4:
    // 0x20e9b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20e9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e9b8:
    // 0x20e9b8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x20e9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_20e9bc:
    // 0x20e9bc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x20e9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e9c0:
    // 0x20e9c0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x20e9c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_20e9c4:
    // 0x20e9c4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x20e9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e9c8:
    // 0x20e9c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x20e9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_20e9cc:
    // 0x20e9cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20e9d0:
    // 0x20e9d0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x20e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_20e9d4:
    // 0x20e9d4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x20e9d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_20e9d8:
    // 0x20e9d8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x20e9d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20e9dc:
    // 0x20e9dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x20e9dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20e9e0:
    // 0x20e9e0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x20e9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_20e9e4:
    // 0x20e9e4: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x20e9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20e9e8:
    // 0x20e9e8: 0xc7a60054  lwc1        $f6, 0x54($sp)
    ctx->pc = 0x20e9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20e9ec:
    // 0x20e9ec: 0xc7a70058  lwc1        $f7, 0x58($sp)
    ctx->pc = 0x20e9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_20e9f0:
    // 0x20e9f0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x20e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e9f4:
    // 0x20e9f4: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x20e9f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_20e9f8:
    // 0x20e9f8: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x20e9f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_20e9fc:
    // 0x20e9fc: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x20e9fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_20ea00:
    // 0x20ea00: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x20ea00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_20ea04:
    // 0x20ea04: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x20ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ea08:
    // 0x20ea08: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x20ea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20ea0c:
    // 0x20ea0c: 0xc6e40008  lwc1        $f4, 0x8($s7)
    ctx->pc = 0x20ea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20ea10:
    // 0x20ea10: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x20ea10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_20ea14:
    // 0x20ea14: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x20ea14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_20ea18:
    // 0x20ea18: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x20ea18u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_20ea1c:
    // 0x20ea1c: 0x46000004  c1          0x4
    ctx->pc = 0x20ea1cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_20ea20:
    // 0x20ea20: 0x0  nop
    ctx->pc = 0x20ea20u;
    // NOP
label_20ea24:
    // 0x20ea24: 0x0  nop
    ctx->pc = 0x20ea24u;
    // NOP
label_20ea28:
    // 0x20ea28: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x20ea28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[0]); }
label_20ea2c:
    // 0x20ea2c: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x20ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_20ea30:
    // 0x20ea30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ea30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ea34:
    // 0x20ea34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20ea34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20ea38:
    // 0x20ea38: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x20ea38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20ea3c:
    // 0x20ea3c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x20ea3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20ea40:
    // 0x20ea40: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x20ea40u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_20ea44:
    // 0x20ea44: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x20ea44u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_20ea48:
    // 0x20ea48: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x20ea48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_20ea4c:
    // 0x20ea4c: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x20ea4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_20ea50:
    // 0x20ea50: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x20ea50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_20ea54:
    // 0x20ea54: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x20ea54u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_20ea58:
    // 0x20ea58: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x20ea58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_20ea5c:
    // 0x20ea5c: 0xc0850ec  jal         func_2143B0
label_20ea60:
    if (ctx->pc == 0x20EA60u) {
        ctx->pc = 0x20EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA5Cu;
        // 0x20ea60: 0x8c450154  lw          $a1, 0x154($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA64u;
        goto label_20ea64;
    }
    ctx->pc = 0x20EA5Cu;
    SET_GPR_U32(ctx, 31, 0x20EA64u);
    ctx->pc = 0x20EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA5Cu;
    // 0x20ea60: 0x8c450154  lw          $a1, 0x154($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2143B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2143B0u, 0x20EA5Cu, 0x20EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA64u;
label_20ea64:
    // 0x20ea64: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x20ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_20ea68:
    // 0x20ea68: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20ea68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20ea6c:
    // 0x20ea6c: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x20ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
label_20ea70:
    // 0x20ea70: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x20ea70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20ea74:
    // 0x20ea74: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_20ea78:
    if (ctx->pc == 0x20EA78u) {
        ctx->pc = 0x20EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA74u;
        // 0x20ea78: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA7Cu;
        goto label_20ea7c;
    }
    ctx->pc = 0x20EA74u;
    {
        const bool branch_taken_0x20ea74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA74u;
        // 0x20ea78: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea74) {
            ctx->pc = 0x20E960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e960;
        }
    }
    ctx->pc = 0x20EA7Cu;
label_20ea7c:
    // 0x20ea7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_20ea80:
    // 0x20ea80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20ea80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20ea84:
    // 0x20ea84: 0xc0d7424  jal         func_35D090
label_20ea88:
    if (ctx->pc == 0x20EA88u) {
        ctx->pc = 0x20EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA84u;
        // 0x20ea88: 0x24a51428  addiu       $a1, $a1, 0x1428 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA8Cu;
        goto label_20ea8c;
    }
    ctx->pc = 0x20EA84u;
    SET_GPR_U32(ctx, 31, 0x20EA8Cu);
    ctx->pc = 0x20EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA84u;
    // 0x20ea88: 0x24a51428  addiu       $a1, $a1, 0x1428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x20EA84u, 0x20EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA8Cu;
label_20ea8c:
    // 0x20ea8c: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x20ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_20ea90:
    // 0x20ea90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20ea90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20ea94:
    // 0x20ea94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ea94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ea98:
    // 0x20ea98: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x20ea98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20ea9c:
    // 0x20ea9c: 0xc0d9886  jal         func_366218
label_20eaa0:
    if (ctx->pc == 0x20EAA0u) {
        ctx->pc = 0x20EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA9Cu;
        // 0x20eaa0: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EAA4u;
        goto label_20eaa4;
    }
    ctx->pc = 0x20EA9Cu;
    SET_GPR_U32(ctx, 31, 0x20EAA4u);
    ctx->pc = 0x20EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA9Cu;
    // 0x20eaa0: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366218u, 0x20EA9Cu, 0x20EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EAA4u;
label_20eaa4:
    // 0x20eaa4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20eaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20eaa8:
    // 0x20eaa8: 0xc0d7412  jal         func_35D048
label_20eaac:
    if (ctx->pc == 0x20EAACu) {
        ctx->pc = 0x20EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAA8u;
        // 0x20eaac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EAB0u;
        goto label_20eab0;
    }
    ctx->pc = 0x20EAA8u;
    SET_GPR_U32(ctx, 31, 0x20EAB0u);
    ctx->pc = 0x20EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EAA8u;
    // 0x20eaac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20EAA8u, 0x20EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EAB0u;
label_20eab0:
    // 0x20eab0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x20eab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20eab4:
    // 0x20eab4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x20eab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_20eab8:
    // 0x20eab8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x20eab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_20eabc:
    // 0x20eabc: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x20eabcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_20eac0:
    // 0x20eac0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x20eac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_20eac4:
    // 0x20eac4: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x20eac4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_20eac8:
    // 0x20eac8: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x20eac8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_20eacc:
    // 0x20eacc: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x20eaccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_20ead0:
    // 0x20ead0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x20ead0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_20ead4:
    // 0x20ead4: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x20ead4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_20ead8:
    // 0x20ead8: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x20ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_20eadc:
    // 0x20eadc: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x20eadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20eae0:
    // 0x20eae0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x20eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20eae4:
    // 0x20eae4: 0x3e00008  jr          $ra
label_20eae8:
    if (ctx->pc == 0x20EAE8u) {
        ctx->pc = 0x20EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAE4u;
        // 0x20eae8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EAECu;
        goto label_20eaec;
    }
    ctx->pc = 0x20EAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAE4u;
        // 0x20eae8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EAECu;
label_20eaec:
    // 0x20eaec: 0x0  nop
    ctx->pc = 0x20eaecu;
    // NOP
    ctx->pc = 0x20eaf0u;
}
