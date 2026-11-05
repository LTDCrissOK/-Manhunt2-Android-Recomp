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

// Function: sub_0022E5E0
// Address: 0x22e5e0 - 0x22ea08
void sub_0022E5E0_0x22e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E5E0_0x22e5e0");
#endif

    switch (ctx->pc) {
        case 0x22e5e0u: goto label_22e5e0;
        case 0x22e5e4u: goto label_22e5e4;
        case 0x22e5e8u: goto label_22e5e8;
        case 0x22e5ecu: goto label_22e5ec;
        case 0x22e5f0u: goto label_22e5f0;
        case 0x22e5f4u: goto label_22e5f4;
        case 0x22e5f8u: goto label_22e5f8;
        case 0x22e5fcu: goto label_22e5fc;
        case 0x22e600u: goto label_22e600;
        case 0x22e604u: goto label_22e604;
        case 0x22e608u: goto label_22e608;
        case 0x22e60cu: goto label_22e60c;
        case 0x22e610u: goto label_22e610;
        case 0x22e614u: goto label_22e614;
        case 0x22e618u: goto label_22e618;
        case 0x22e61cu: goto label_22e61c;
        case 0x22e620u: goto label_22e620;
        case 0x22e624u: goto label_22e624;
        case 0x22e628u: goto label_22e628;
        case 0x22e62cu: goto label_22e62c;
        case 0x22e630u: goto label_22e630;
        case 0x22e634u: goto label_22e634;
        case 0x22e638u: goto label_22e638;
        case 0x22e63cu: goto label_22e63c;
        case 0x22e640u: goto label_22e640;
        case 0x22e644u: goto label_22e644;
        case 0x22e648u: goto label_22e648;
        case 0x22e64cu: goto label_22e64c;
        case 0x22e650u: goto label_22e650;
        case 0x22e654u: goto label_22e654;
        case 0x22e658u: goto label_22e658;
        case 0x22e65cu: goto label_22e65c;
        case 0x22e660u: goto label_22e660;
        case 0x22e664u: goto label_22e664;
        case 0x22e668u: goto label_22e668;
        case 0x22e66cu: goto label_22e66c;
        case 0x22e670u: goto label_22e670;
        case 0x22e674u: goto label_22e674;
        case 0x22e678u: goto label_22e678;
        case 0x22e67cu: goto label_22e67c;
        case 0x22e680u: goto label_22e680;
        case 0x22e684u: goto label_22e684;
        case 0x22e688u: goto label_22e688;
        case 0x22e68cu: goto label_22e68c;
        case 0x22e690u: goto label_22e690;
        case 0x22e694u: goto label_22e694;
        case 0x22e698u: goto label_22e698;
        case 0x22e69cu: goto label_22e69c;
        case 0x22e6a0u: goto label_22e6a0;
        case 0x22e6a4u: goto label_22e6a4;
        case 0x22e6a8u: goto label_22e6a8;
        case 0x22e6acu: goto label_22e6ac;
        case 0x22e6b0u: goto label_22e6b0;
        case 0x22e6b4u: goto label_22e6b4;
        case 0x22e6b8u: goto label_22e6b8;
        case 0x22e6bcu: goto label_22e6bc;
        case 0x22e6c0u: goto label_22e6c0;
        case 0x22e6c4u: goto label_22e6c4;
        case 0x22e6c8u: goto label_22e6c8;
        case 0x22e6ccu: goto label_22e6cc;
        case 0x22e6d0u: goto label_22e6d0;
        case 0x22e6d4u: goto label_22e6d4;
        case 0x22e6d8u: goto label_22e6d8;
        case 0x22e6dcu: goto label_22e6dc;
        case 0x22e6e0u: goto label_22e6e0;
        case 0x22e6e4u: goto label_22e6e4;
        case 0x22e6e8u: goto label_22e6e8;
        case 0x22e6ecu: goto label_22e6ec;
        case 0x22e6f0u: goto label_22e6f0;
        case 0x22e6f4u: goto label_22e6f4;
        case 0x22e6f8u: goto label_22e6f8;
        case 0x22e6fcu: goto label_22e6fc;
        case 0x22e700u: goto label_22e700;
        case 0x22e704u: goto label_22e704;
        case 0x22e708u: goto label_22e708;
        case 0x22e70cu: goto label_22e70c;
        case 0x22e710u: goto label_22e710;
        case 0x22e714u: goto label_22e714;
        case 0x22e718u: goto label_22e718;
        case 0x22e71cu: goto label_22e71c;
        case 0x22e720u: goto label_22e720;
        case 0x22e724u: goto label_22e724;
        case 0x22e728u: goto label_22e728;
        case 0x22e72cu: goto label_22e72c;
        case 0x22e730u: goto label_22e730;
        case 0x22e734u: goto label_22e734;
        case 0x22e738u: goto label_22e738;
        case 0x22e73cu: goto label_22e73c;
        case 0x22e740u: goto label_22e740;
        case 0x22e744u: goto label_22e744;
        case 0x22e748u: goto label_22e748;
        case 0x22e74cu: goto label_22e74c;
        case 0x22e750u: goto label_22e750;
        case 0x22e754u: goto label_22e754;
        case 0x22e758u: goto label_22e758;
        case 0x22e75cu: goto label_22e75c;
        case 0x22e760u: goto label_22e760;
        case 0x22e764u: goto label_22e764;
        case 0x22e768u: goto label_22e768;
        case 0x22e76cu: goto label_22e76c;
        case 0x22e770u: goto label_22e770;
        case 0x22e774u: goto label_22e774;
        case 0x22e778u: goto label_22e778;
        case 0x22e77cu: goto label_22e77c;
        case 0x22e780u: goto label_22e780;
        case 0x22e784u: goto label_22e784;
        case 0x22e788u: goto label_22e788;
        case 0x22e78cu: goto label_22e78c;
        case 0x22e790u: goto label_22e790;
        case 0x22e794u: goto label_22e794;
        case 0x22e798u: goto label_22e798;
        case 0x22e79cu: goto label_22e79c;
        case 0x22e7a0u: goto label_22e7a0;
        case 0x22e7a4u: goto label_22e7a4;
        case 0x22e7a8u: goto label_22e7a8;
        case 0x22e7acu: goto label_22e7ac;
        case 0x22e7b0u: goto label_22e7b0;
        case 0x22e7b4u: goto label_22e7b4;
        case 0x22e7b8u: goto label_22e7b8;
        case 0x22e7bcu: goto label_22e7bc;
        case 0x22e7c0u: goto label_22e7c0;
        case 0x22e7c4u: goto label_22e7c4;
        case 0x22e7c8u: goto label_22e7c8;
        case 0x22e7ccu: goto label_22e7cc;
        case 0x22e7d0u: goto label_22e7d0;
        case 0x22e7d4u: goto label_22e7d4;
        case 0x22e7d8u: goto label_22e7d8;
        case 0x22e7dcu: goto label_22e7dc;
        case 0x22e7e0u: goto label_22e7e0;
        case 0x22e7e4u: goto label_22e7e4;
        case 0x22e7e8u: goto label_22e7e8;
        case 0x22e7ecu: goto label_22e7ec;
        case 0x22e7f0u: goto label_22e7f0;
        case 0x22e7f4u: goto label_22e7f4;
        case 0x22e7f8u: goto label_22e7f8;
        case 0x22e7fcu: goto label_22e7fc;
        case 0x22e800u: goto label_22e800;
        case 0x22e804u: goto label_22e804;
        case 0x22e808u: goto label_22e808;
        case 0x22e80cu: goto label_22e80c;
        case 0x22e810u: goto label_22e810;
        case 0x22e814u: goto label_22e814;
        case 0x22e818u: goto label_22e818;
        case 0x22e81cu: goto label_22e81c;
        case 0x22e820u: goto label_22e820;
        case 0x22e824u: goto label_22e824;
        case 0x22e828u: goto label_22e828;
        case 0x22e82cu: goto label_22e82c;
        case 0x22e830u: goto label_22e830;
        case 0x22e834u: goto label_22e834;
        case 0x22e838u: goto label_22e838;
        case 0x22e83cu: goto label_22e83c;
        case 0x22e840u: goto label_22e840;
        case 0x22e844u: goto label_22e844;
        case 0x22e848u: goto label_22e848;
        case 0x22e84cu: goto label_22e84c;
        case 0x22e850u: goto label_22e850;
        case 0x22e854u: goto label_22e854;
        case 0x22e858u: goto label_22e858;
        case 0x22e85cu: goto label_22e85c;
        case 0x22e860u: goto label_22e860;
        case 0x22e864u: goto label_22e864;
        case 0x22e868u: goto label_22e868;
        case 0x22e86cu: goto label_22e86c;
        case 0x22e870u: goto label_22e870;
        case 0x22e874u: goto label_22e874;
        case 0x22e878u: goto label_22e878;
        case 0x22e87cu: goto label_22e87c;
        case 0x22e880u: goto label_22e880;
        case 0x22e884u: goto label_22e884;
        case 0x22e888u: goto label_22e888;
        case 0x22e88cu: goto label_22e88c;
        case 0x22e890u: goto label_22e890;
        case 0x22e894u: goto label_22e894;
        case 0x22e898u: goto label_22e898;
        case 0x22e89cu: goto label_22e89c;
        case 0x22e8a0u: goto label_22e8a0;
        case 0x22e8a4u: goto label_22e8a4;
        case 0x22e8a8u: goto label_22e8a8;
        case 0x22e8acu: goto label_22e8ac;
        case 0x22e8b0u: goto label_22e8b0;
        case 0x22e8b4u: goto label_22e8b4;
        case 0x22e8b8u: goto label_22e8b8;
        case 0x22e8bcu: goto label_22e8bc;
        case 0x22e8c0u: goto label_22e8c0;
        case 0x22e8c4u: goto label_22e8c4;
        case 0x22e8c8u: goto label_22e8c8;
        case 0x22e8ccu: goto label_22e8cc;
        case 0x22e8d0u: goto label_22e8d0;
        case 0x22e8d4u: goto label_22e8d4;
        case 0x22e8d8u: goto label_22e8d8;
        case 0x22e8dcu: goto label_22e8dc;
        case 0x22e8e0u: goto label_22e8e0;
        case 0x22e8e4u: goto label_22e8e4;
        case 0x22e8e8u: goto label_22e8e8;
        case 0x22e8ecu: goto label_22e8ec;
        case 0x22e8f0u: goto label_22e8f0;
        case 0x22e8f4u: goto label_22e8f4;
        case 0x22e8f8u: goto label_22e8f8;
        case 0x22e8fcu: goto label_22e8fc;
        case 0x22e900u: goto label_22e900;
        case 0x22e904u: goto label_22e904;
        case 0x22e908u: goto label_22e908;
        case 0x22e90cu: goto label_22e90c;
        case 0x22e910u: goto label_22e910;
        case 0x22e914u: goto label_22e914;
        case 0x22e918u: goto label_22e918;
        case 0x22e91cu: goto label_22e91c;
        case 0x22e920u: goto label_22e920;
        case 0x22e924u: goto label_22e924;
        case 0x22e928u: goto label_22e928;
        case 0x22e92cu: goto label_22e92c;
        case 0x22e930u: goto label_22e930;
        case 0x22e934u: goto label_22e934;
        case 0x22e938u: goto label_22e938;
        case 0x22e93cu: goto label_22e93c;
        case 0x22e940u: goto label_22e940;
        case 0x22e944u: goto label_22e944;
        case 0x22e948u: goto label_22e948;
        case 0x22e94cu: goto label_22e94c;
        case 0x22e950u: goto label_22e950;
        case 0x22e954u: goto label_22e954;
        case 0x22e958u: goto label_22e958;
        case 0x22e95cu: goto label_22e95c;
        case 0x22e960u: goto label_22e960;
        case 0x22e964u: goto label_22e964;
        case 0x22e968u: goto label_22e968;
        case 0x22e96cu: goto label_22e96c;
        case 0x22e970u: goto label_22e970;
        case 0x22e974u: goto label_22e974;
        case 0x22e978u: goto label_22e978;
        case 0x22e97cu: goto label_22e97c;
        case 0x22e980u: goto label_22e980;
        case 0x22e984u: goto label_22e984;
        case 0x22e988u: goto label_22e988;
        case 0x22e98cu: goto label_22e98c;
        case 0x22e990u: goto label_22e990;
        case 0x22e994u: goto label_22e994;
        case 0x22e998u: goto label_22e998;
        case 0x22e99cu: goto label_22e99c;
        case 0x22e9a0u: goto label_22e9a0;
        case 0x22e9a4u: goto label_22e9a4;
        case 0x22e9a8u: goto label_22e9a8;
        case 0x22e9acu: goto label_22e9ac;
        case 0x22e9b0u: goto label_22e9b0;
        case 0x22e9b4u: goto label_22e9b4;
        case 0x22e9b8u: goto label_22e9b8;
        case 0x22e9bcu: goto label_22e9bc;
        case 0x22e9c0u: goto label_22e9c0;
        case 0x22e9c4u: goto label_22e9c4;
        case 0x22e9c8u: goto label_22e9c8;
        case 0x22e9ccu: goto label_22e9cc;
        case 0x22e9d0u: goto label_22e9d0;
        case 0x22e9d4u: goto label_22e9d4;
        case 0x22e9d8u: goto label_22e9d8;
        case 0x22e9dcu: goto label_22e9dc;
        case 0x22e9e0u: goto label_22e9e0;
        case 0x22e9e4u: goto label_22e9e4;
        case 0x22e9e8u: goto label_22e9e8;
        case 0x22e9ecu: goto label_22e9ec;
        case 0x22e9f0u: goto label_22e9f0;
        case 0x22e9f4u: goto label_22e9f4;
        case 0x22e9f8u: goto label_22e9f8;
        case 0x22e9fcu: goto label_22e9fc;
        case 0x22ea00u: goto label_22ea00;
        case 0x22ea04u: goto label_22ea04;
        default: break;
    }

    ctx->pc = 0x22e5e0u;

label_22e5e0:
    // 0x22e5e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22e5e4:
    // 0x22e5e4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x22e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_22e5e8:
    // 0x22e5e8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22e5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_22e5ec:
    // 0x22e5ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22e5ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e5f0:
    // 0x22e5f0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x22e5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_22e5f4:
    // 0x22e5f4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22e5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_22e5f8:
    // 0x22e5f8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22e5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_22e5fc:
    // 0x22e5fc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x22e5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_22e600:
    // 0x22e600: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x22e600u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_22e604:
    // 0x22e604: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x22e604u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_22e608:
    // 0x22e608: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x22e608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_22e60c:
    // 0x22e60c: 0x8e62036c  lw          $v0, 0x36C($s3)
    ctx->pc = 0x22e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 876)));
label_22e610:
    // 0x22e610: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x22e610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_22e614:
    // 0x22e614: 0x104000ef  beqz        $v0, . + 4 + (0xEF << 2)
label_22e618:
    if (ctx->pc == 0x22E618u) {
        ctx->pc = 0x22E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E614u;
        // 0x22e618: 0x2414000e  addiu       $s4, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E61Cu;
        goto label_22e61c;
    }
    ctx->pc = 0x22E614u;
    {
        const bool branch_taken_0x22e614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E614u;
        // 0x22e618: 0x2414000e  addiu       $s4, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e614) {
            ctx->pc = 0x22E9D4u;
            goto label_22e9d4;
        }
    }
    ctx->pc = 0x22E61Cu;
label_22e61c:
    // 0x22e61c: 0x8e620334  lw          $v0, 0x334($s3)
    ctx->pc = 0x22e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_22e620:
    // 0x22e620: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x22e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_22e624:
    // 0x22e624: 0x10740003  beq         $v1, $s4, . + 4 + (0x3 << 2)
label_22e628:
    if (ctx->pc == 0x22E628u) {
        ctx->pc = 0x22E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E624u;
        // 0x22e628: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E62Cu;
        goto label_22e62c;
    }
    ctx->pc = 0x22E624u;
    {
        const bool branch_taken_0x22e624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x22E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E624u;
        // 0x22e628: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e624) {
            ctx->pc = 0x22E634u;
            goto label_22e634;
        }
    }
    ctx->pc = 0x22E62Cu;
label_22e62c:
    // 0x22e62c: 0x54620060  bnel        $v1, $v0, . + 4 + (0x60 << 2)
label_22e630:
    if (ctx->pc == 0x22E630u) {
        ctx->pc = 0x22E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E62Cu;
        // 0x22e630: 0x8e630104  lw          $v1, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E634u;
        goto label_22e634;
    }
    ctx->pc = 0x22E62Cu;
    {
        const bool branch_taken_0x22e62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e62c) {
            ctx->pc = 0x22E630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E62Cu;
            // 0x22e630: 0x8e630104  lw          $v1, 0x104($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E7B0u;
            goto label_22e7b0;
        }
    }
    ctx->pc = 0x22E634u;
label_22e634:
    // 0x22e634: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22e634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22e638:
    // 0x22e638: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x22e638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_22e63c:
    // 0x22e63c: 0xc08e61a  jal         func_239868
label_22e640:
    if (ctx->pc == 0x22E640u) {
        ctx->pc = 0x22E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E63Cu;
        // 0x22e640: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E644u;
        goto label_22e644;
    }
    ctx->pc = 0x22E63Cu;
    SET_GPR_U32(ctx, 31, 0x22E644u);
    ctx->pc = 0x22E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E63Cu;
    // 0x22e640: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239868u, 0x22E63Cu, 0x22E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E644u;
label_22e644:
    // 0x22e644: 0xc67404a0  lwc1        $f20, 0x4A0($s3)
    ctx->pc = 0x22e644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22e648:
    // 0x22e648: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22e648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22e64c:
    // 0x22e64c: 0xc08e528  jal         func_2394A0
label_22e650:
    if (ctx->pc == 0x22E650u) {
        ctx->pc = 0x22E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E64Cu;
        // 0x22e650: 0xc67604ac  lwc1        $f22, 0x4AC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E654u;
        goto label_22e654;
    }
    ctx->pc = 0x22E64Cu;
    SET_GPR_U32(ctx, 31, 0x22E654u);
    ctx->pc = 0x22E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E64Cu;
    // 0x22e650: 0xc67604ac  lwc1        $f22, 0x4AC($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x22E64Cu, 0x22E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E654u;
label_22e654:
    // 0x22e654: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x22e654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_22e658:
    // 0x22e658: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x22e658u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
label_22e65c:
    // 0x22e65c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x22e65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22e660:
    // 0x22e660: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22e660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22e664:
    // 0x22e664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22e664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e668:
    // 0x22e668: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x22e668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e66c:
    // 0x22e66c: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x22e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_22e670:
    // 0x22e670: 0x26120040  addiu       $s2, $s0, 0x40
    ctx->pc = 0x22e670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_22e674:
    // 0x22e674: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22e674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22e678:
    // 0x22e678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e67c:
    // 0x22e67c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22e67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e680:
    // 0x22e680: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x22e680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_22e684:
    // 0x22e684: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x22e684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e688:
    // 0x22e688: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x22e688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22e68c:
    // 0x22e68c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x22e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e690:
    // 0x22e690: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x22e690u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_22e694:
    // 0x22e694: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x22e694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_22e698:
    // 0x22e698: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x22e698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_22e69c:
    // 0x22e69c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x22e69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_22e6a0:
    // 0x22e6a0: 0xc0b15e8  jal         func_2C57A0
label_22e6a4:
    if (ctx->pc == 0x22E6A4u) {
        ctx->pc = 0x22E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6A0u;
        // 0x22e6a4: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6A8u;
        goto label_22e6a8;
    }
    ctx->pc = 0x22E6A0u;
    SET_GPR_U32(ctx, 31, 0x22E6A8u);
    ctx->pc = 0x22E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E6A0u;
    // 0x22e6a4: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x22E6A0u, 0x22E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E6A8u;
label_22e6a8:
    // 0x22e6a8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x22e6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_22e6ac:
    // 0x22e6ac: 0x4600b307  neg.s       $f12, $f22
    ctx->pc = 0x22e6acu;
    ctx->f[12] = FPU_NEG_S(ctx->f[22]);
label_22e6b0:
    // 0x22e6b0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x22e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_22e6b4:
    // 0x22e6b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e6b8:
    // 0x22e6b8: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x22e6b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_22e6bc:
    // 0x22e6bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22e6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e6c0:
    // 0x22e6c0: 0xc0b15e8  jal         func_2C57A0
label_22e6c4:
    if (ctx->pc == 0x22E6C4u) {
        ctx->pc = 0x22E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6C0u;
        // 0x22e6c4: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6C8u;
        goto label_22e6c8;
    }
    ctx->pc = 0x22E6C0u;
    SET_GPR_U32(ctx, 31, 0x22E6C8u);
    ctx->pc = 0x22E6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E6C0u;
    // 0x22e6c4: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x22E6C0u, 0x22E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E6C8u;
label_22e6c8:
    // 0x22e6c8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x22e6c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22e6cc:
    // 0x22e6cc: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x22e6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_22e6d0:
    // 0x22e6d0: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x22e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_22e6d4:
    // 0x22e6d4: 0xc0c48da  jal         func_312368
label_22e6d8:
    if (ctx->pc == 0x22E6D8u) {
        ctx->pc = 0x22E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6D4u;
        // 0x22e6d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6DCu;
        goto label_22e6dc;
    }
    ctx->pc = 0x22E6D4u;
    SET_GPR_U32(ctx, 31, 0x22E6DCu);
    ctx->pc = 0x22E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E6D4u;
    // 0x22e6d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x22E6D4u, 0x22E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E6DCu;
label_22e6dc:
    // 0x22e6dc: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x22e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_22e6e0:
    // 0x22e6e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e6e4:
    // 0x22e6e4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x22e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_22e6e8:
    // 0x22e6e8: 0x40f809  jalr        $v0
label_22e6ec:
    if (ctx->pc == 0x22E6ECu) {
        ctx->pc = 0x22E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6E8u;
        // 0x22e6ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6F0u;
        goto label_22e6f0;
    }
    ctx->pc = 0x22E6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E6F0u);
        ctx->pc = 0x22E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6E8u;
        // 0x22e6ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E6E8u, 0x22E6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E6F0u;
label_22e6f0:
    // 0x22e6f0: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x22e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_22e6f4:
    // 0x22e6f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e6f8:
    // 0x22e6f8: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x22e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_22e6fc:
    // 0x22e6fc: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x22e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_22e700:
    // 0x22e700: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x22e700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_22e704:
    // 0x22e704: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x22e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_22e708:
    // 0x22e708: 0xa0820032  sb          $v0, 0x32($a0)
    ctx->pc = 0x22e708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 2));
label_22e70c:
    // 0x22e70c: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x22e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_22e710:
    // 0x22e710: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x22e710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_22e714:
    // 0x22e714: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x22e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_22e718:
    // 0x22e718: 0x40f809  jalr        $v0
label_22e71c:
    if (ctx->pc == 0x22E71Cu) {
        ctx->pc = 0x22E720u;
        goto label_22e720;
    }
    ctx->pc = 0x22E718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E720u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E718u, 0x22E720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E720u;
label_22e720:
    // 0x22e720: 0x8e640334  lw          $a0, 0x334($s3)
    ctx->pc = 0x22e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_22e724:
    // 0x22e724: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e728:
    // 0x22e728: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x22e728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_22e72c:
    // 0x22e72c: 0x10740006  beq         $v1, $s4, . + 4 + (0x6 << 2)
label_22e730:
    if (ctx->pc == 0x22E730u) {
        ctx->pc = 0x22E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E72Cu;
        // 0x22e730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E734u;
        goto label_22e734;
    }
    ctx->pc = 0x22E72Cu;
    {
        const bool branch_taken_0x22e72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x22E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E72Cu;
        // 0x22e730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e72c) {
            ctx->pc = 0x22E748u;
            goto label_22e748;
        }
    }
    ctx->pc = 0x22E734u;
label_22e734:
    // 0x22e734: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x22e734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_22e738:
    // 0x22e738: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22e73c:
    if (ctx->pc == 0x22E73Cu) {
        ctx->pc = 0x22E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E738u;
        // 0x22e73c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E740u;
        goto label_22e740;
    }
    ctx->pc = 0x22E738u;
    {
        const bool branch_taken_0x22e738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E738u;
        // 0x22e73c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e738) {
            ctx->pc = 0x22E748u;
            goto label_22e748;
        }
    }
    ctx->pc = 0x22E740u;
label_22e740:
    // 0x22e740: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_22e744:
    if (ctx->pc == 0x22E744u) {
        ctx->pc = 0x22E748u;
        goto label_22e748;
    }
    ctx->pc = 0x22E740u;
    {
        const bool branch_taken_0x22e740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e740) {
            ctx->pc = 0x22E74Cu;
            goto label_22e74c;
        }
    }
    ctx->pc = 0x22E748u;
label_22e748:
    // 0x22e748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22e748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e74c:
    // 0x22e74c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_22e750:
    if (ctx->pc == 0x22E750u) {
        ctx->pc = 0x22E754u;
        goto label_22e754;
    }
    ctx->pc = 0x22E74Cu;
    {
        const bool branch_taken_0x22e74c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e74c) {
            ctx->pc = 0x22E770u;
            goto label_22e770;
        }
    }
    ctx->pc = 0x22E754u;
label_22e754:
    // 0x22e754: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x22e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
label_22e758:
    // 0x22e758: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22e75c:
    if (ctx->pc == 0x22E75Cu) {
        ctx->pc = 0x22E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E758u;
        // 0x22e75c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E760u;
        goto label_22e760;
    }
    ctx->pc = 0x22E758u;
    {
        const bool branch_taken_0x22e758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e758) {
            ctx->pc = 0x22E75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E758u;
            // 0x22e75c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E770u;
            goto label_22e770;
        }
    }
    ctx->pc = 0x22E760u;
label_22e760:
    // 0x22e760: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x22e760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
label_22e764:
    // 0x22e764: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22e764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_22e768:
    // 0x22e768: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_22e76c:
    if (ctx->pc == 0x22E76Cu) {
        ctx->pc = 0x22E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E768u;
        // 0x22e76c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E770u;
        goto label_22e770;
    }
    ctx->pc = 0x22E768u;
    {
        const bool branch_taken_0x22e768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e768) {
            ctx->pc = 0x22E76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E768u;
            // 0x22e76c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E770u;
            goto label_22e770;
        }
    }
    ctx->pc = 0x22E770u;
label_22e770:
    // 0x22e770: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
label_22e774:
    if (ctx->pc == 0x22E774u) {
        ctx->pc = 0x22E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E770u;
        // 0x22e774: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E778u;
        goto label_22e778;
    }
    ctx->pc = 0x22E770u;
    {
        const bool branch_taken_0x22e770 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e770) {
            ctx->pc = 0x22E774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E770u;
            // 0x22e774: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E794u;
            goto label_22e794;
        }
    }
    ctx->pc = 0x22E778u;
label_22e778:
    // 0x22e778: 0xc08f7d0  jal         func_23DF40
label_22e77c:
    if (ctx->pc == 0x22E77Cu) {
        ctx->pc = 0x22E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E778u;
        // 0x22e77c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E780u;
        goto label_22e780;
    }
    ctx->pc = 0x22E778u;
    SET_GPR_U32(ctx, 31, 0x22E780u);
    ctx->pc = 0x22E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E778u;
    // 0x22e77c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DF40u, 0x22E778u, 0x22E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E780u;
label_22e780:
    // 0x22e780: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22e780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22e784:
    // 0x22e784: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x22e784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_22e788:
    // 0x22e788: 0xc08fed2  jal         func_23FB48
label_22e78c:
    if (ctx->pc == 0x22E78Cu) {
        ctx->pc = 0x22E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E788u;
        // 0x22e78c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E790u;
        goto label_22e790;
    }
    ctx->pc = 0x22E788u;
    SET_GPR_U32(ctx, 31, 0x22E790u);
    ctx->pc = 0x22E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E788u;
    // 0x22e78c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22E788u, 0x22E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E790u;
label_22e790:
    // 0x22e790: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x22e790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_22e794:
    // 0x22e794: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x22e794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_22e798:
    // 0x22e798: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22e798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e79c:
    // 0x22e79c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x22e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_22e7a0:
    // 0x22e7a0: 0xc07f4c2  jal         func_1FD308
label_22e7a4:
    if (ctx->pc == 0x22E7A4u) {
        ctx->pc = 0x22E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7A0u;
        // 0x22e7a4: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7A8u;
        goto label_22e7a8;
    }
    ctx->pc = 0x22E7A0u;
    SET_GPR_U32(ctx, 31, 0x22E7A8u);
    ctx->pc = 0x22E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7A0u;
    // 0x22e7a4: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x22E7A0u, 0x22E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7A8u;
label_22e7a8:
    // 0x22e7a8: 0x10000087  b           . + 4 + (0x87 << 2)
label_22e7ac:
    if (ctx->pc == 0x22E7ACu) {
        ctx->pc = 0x22E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7A8u;
        // 0x22e7ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7B0u;
        goto label_22e7b0;
    }
    ctx->pc = 0x22E7A8u;
    {
        const bool branch_taken_0x22e7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7A8u;
        // 0x22e7ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7a8) {
            ctx->pc = 0x22E9C8u;
            goto label_22e9c8;
        }
    }
    ctx->pc = 0x22E7B0u;
label_22e7b0:
    // 0x22e7b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22e7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22e7b4:
    // 0x22e7b4: 0xc6610384  lwc1        $f1, 0x384($s3)
    ctx->pc = 0x22e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e7b8:
    // 0x22e7b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e7bc:
    // 0x22e7bc: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x22e7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e7c0:
    // 0x22e7c0: 0xc0f6a96  jal         func_3DAA58
label_22e7c4:
    if (ctx->pc == 0x22E7C4u) {
        ctx->pc = 0x22E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7C0u;
        // 0x22e7c4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7C8u;
        goto label_22e7c8;
    }
    ctx->pc = 0x22E7C0u;
    SET_GPR_U32(ctx, 31, 0x22E7C8u);
    ctx->pc = 0x22E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7C0u;
    // 0x22e7c4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22E7C0u, 0x22E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7C8u;
label_22e7c8:
    // 0x22e7c8: 0xc0f6a96  jal         func_3DAA58
label_22e7cc:
    if (ctx->pc == 0x22E7CCu) {
        ctx->pc = 0x22E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7C8u;
        // 0x22e7cc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7D0u;
        goto label_22e7d0;
    }
    ctx->pc = 0x22E7C8u;
    SET_GPR_U32(ctx, 31, 0x22E7D0u);
    ctx->pc = 0x22E7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7C8u;
    // 0x22e7cc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22E7C8u, 0x22E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7D0u;
label_22e7d0:
    // 0x22e7d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x22e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_22e7d4:
    // 0x22e7d4: 0xc44096a0  lwc1        $f0, -0x6960($v0)
    ctx->pc = 0x22e7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e7d8:
    // 0x22e7d8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22e7d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e7dc:
    // 0x22e7dc: 0x0  nop
    ctx->pc = 0x22e7dcu;
    // NOP
label_22e7e0:
    // 0x22e7e0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_22e7e4:
    if (ctx->pc == 0x22E7E4u) {
        ctx->pc = 0x22E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7E0u;
        // 0x22e7e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7E8u;
        goto label_22e7e8;
    }
    ctx->pc = 0x22E7E0u;
    {
        const bool branch_taken_0x22e7e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7E0u;
        // 0x22e7e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7e0) {
            ctx->pc = 0x22E878u;
            goto label_22e878;
        }
    }
    ctx->pc = 0x22E7E8u;
label_22e7e8:
    // 0x22e7e8: 0x8e6200b8  lw          $v0, 0xB8($s3)
    ctx->pc = 0x22e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_22e7ec:
    // 0x22e7ec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22e7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22e7f0:
    // 0x22e7f0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x22e7f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22e7f4:
    // 0x22e7f4: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x22e7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_22e7f8:
    // 0x22e7f8: 0xc08b180  jal         func_22C600
label_22e7fc:
    if (ctx->pc == 0x22E7FCu) {
        ctx->pc = 0x22E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7F8u;
        // 0x22e7fc: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E800u;
        goto label_22e800;
    }
    ctx->pc = 0x22E7F8u;
    SET_GPR_U32(ctx, 31, 0x22E800u);
    ctx->pc = 0x22E7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7F8u;
    // 0x22e7fc: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C600u, 0x22E7F8u, 0x22E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E800u;
label_22e800:
    // 0x22e800: 0x8e6300bc  lw          $v1, 0xBC($s3)
    ctx->pc = 0x22e800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_22e804:
    // 0x22e804: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x22e804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_22e808:
    // 0x22e808: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_22e80c:
    if (ctx->pc == 0x22E80Cu) {
        ctx->pc = 0x22E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E808u;
        // 0x22e80c: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E810u;
        goto label_22e810;
    }
    ctx->pc = 0x22E808u;
    {
        const bool branch_taken_0x22e808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E808u;
        // 0x22e80c: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e808) {
            ctx->pc = 0x22E830u;
            goto label_22e830;
        }
    }
    ctx->pc = 0x22E810u;
label_22e810:
    // 0x22e810: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x22e810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_22e814:
    // 0x22e814: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22e814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22e818:
    // 0x22e818: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x22e818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_22e81c:
    // 0x22e81c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22e81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22e820:
    // 0x22e820: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22e820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e824:
    // 0x22e824: 0xc046642  jal         func_119908
label_22e828:
    if (ctx->pc == 0x22E828u) {
        ctx->pc = 0x22E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E824u;
        // 0x22e828: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E82Cu;
        goto label_22e82c;
    }
    ctx->pc = 0x22E824u;
    SET_GPR_U32(ctx, 31, 0x22E82Cu);
    ctx->pc = 0x22E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E824u;
    // 0x22e828: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x22E824u, 0x22E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E82Cu;
label_22e82c:
    // 0x22e82c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x22e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_22e830:
    // 0x22e830: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x22e830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_22e834:
    // 0x22e834: 0x24509b10  addiu       $s0, $v0, -0x64F0
    ctx->pc = 0x22e834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
label_22e838:
    // 0x22e838: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22e838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e83c:
    // 0x22e83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e840:
    // 0x22e840: 0xc07f4c2  jal         func_1FD308
label_22e844:
    if (ctx->pc == 0x22E844u) {
        ctx->pc = 0x22E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E840u;
        // 0x22e844: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E848u;
        goto label_22e848;
    }
    ctx->pc = 0x22E840u;
    SET_GPR_U32(ctx, 31, 0x22E848u);
    ctx->pc = 0x22E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E840u;
    // 0x22e844: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x22E840u, 0x22E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E848u;
label_22e848:
    // 0x22e848: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x22e848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_22e84c:
    // 0x22e84c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22e84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22e850:
    // 0x22e850: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_22e854:
    if (ctx->pc == 0x22E854u) {
        ctx->pc = 0x22E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E850u;
        // 0x22e854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E858u;
        goto label_22e858;
    }
    ctx->pc = 0x22E850u;
    {
        const bool branch_taken_0x22e850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E850u;
        // 0x22e854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e850) {
            ctx->pc = 0x22E9B4u;
            goto label_22e9b4;
        }
    }
    ctx->pc = 0x22E858u;
label_22e858:
    // 0x22e858: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x22e858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_22e85c:
    // 0x22e85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e860:
    // 0x22e860: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x22e860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_22e864:
    // 0x22e864: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e868:
    // 0x22e868: 0xc07f4c2  jal         func_1FD308
label_22e86c:
    if (ctx->pc == 0x22E86Cu) {
        ctx->pc = 0x22E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E868u;
        // 0x22e86c: 0x2406004d  addiu       $a2, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E870u;
        goto label_22e870;
    }
    ctx->pc = 0x22E868u;
    SET_GPR_U32(ctx, 31, 0x22E870u);
    ctx->pc = 0x22E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E868u;
    // 0x22e86c: 0x2406004d  addiu       $a2, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x22E868u, 0x22E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E870u;
label_22e870:
    // 0x22e870: 0x10000050  b           . + 4 + (0x50 << 2)
label_22e874:
    if (ctx->pc == 0x22E874u) {
        ctx->pc = 0x22E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E870u;
        // 0x22e874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E878u;
        goto label_22e878;
    }
    ctx->pc = 0x22E870u;
    {
        const bool branch_taken_0x22e870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E870u;
        // 0x22e874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e870) {
            ctx->pc = 0x22E9B4u;
            goto label_22e9b4;
        }
    }
    ctx->pc = 0x22E878u;
label_22e878:
    // 0x22e878: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x22e878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_22e87c:
    // 0x22e87c: 0xc44096a4  lwc1        $f0, -0x695C($v0)
    ctx->pc = 0x22e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e880:
    // 0x22e880: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22e880u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e884:
    // 0x22e884: 0x0  nop
    ctx->pc = 0x22e884u;
    // NOP
label_22e888:
    // 0x22e888: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_22e88c:
    if (ctx->pc == 0x22E88Cu) {
        ctx->pc = 0x22E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E888u;
        // 0x22e88c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E890u;
        goto label_22e890;
    }
    ctx->pc = 0x22E888u;
    {
        const bool branch_taken_0x22e888 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E888u;
        // 0x22e88c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e888) {
            ctx->pc = 0x22E954u;
            goto label_22e954;
        }
    }
    ctx->pc = 0x22E890u;
label_22e890:
    // 0x22e890: 0x8e6200b8  lw          $v0, 0xB8($s3)
    ctx->pc = 0x22e890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_22e894:
    // 0x22e894: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x22e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_22e898:
    // 0x22e898: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_22e89c:
    if (ctx->pc == 0x22E89Cu) {
        ctx->pc = 0x22E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E898u;
        // 0x22e89c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8A0u;
        goto label_22e8a0;
    }
    ctx->pc = 0x22E898u;
    {
        const bool branch_taken_0x22e898 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E898u;
        // 0x22e89c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e898) {
            ctx->pc = 0x22E8B4u;
            goto label_22e8b4;
        }
    }
    ctx->pc = 0x22E8A0u;
label_22e8a0:
    // 0x22e8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e8a4:
    // 0x22e8a4: 0x0  nop
    ctx->pc = 0x22e8a4u;
    // NOP
label_22e8a8:
    // 0x22e8a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22e8a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22e8ac:
    // 0x22e8ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_22e8b0:
    if (ctx->pc == 0x22E8B0u) {
        ctx->pc = 0x22E8B4u;
        goto label_22e8b4;
    }
    ctx->pc = 0x22E8ACu;
    {
        const bool branch_taken_0x22e8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e8ac) {
            ctx->pc = 0x22E8CCu;
            goto label_22e8cc;
        }
    }
    ctx->pc = 0x22E8B4u;
label_22e8b4:
    // 0x22e8b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22e8b8:
    // 0x22e8b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22e8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22e8bc:
    // 0x22e8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e8c0:
    // 0x22e8c0: 0x0  nop
    ctx->pc = 0x22e8c0u;
    // NOP
label_22e8c4:
    // 0x22e8c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22e8c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22e8c8:
    // 0x22e8c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22e8c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22e8cc:
    // 0x22e8cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22e8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_22e8d0:
    // 0x22e8d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e8d4:
    // 0x22e8d4: 0xc0dde53  jal         func_37794C
label_22e8d8:
    if (ctx->pc == 0x22E8D8u) {
        ctx->pc = 0x22E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8D4u;
        // 0x22e8d8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8DCu;
        goto label_22e8dc;
    }
    ctx->pc = 0x22E8D4u;
    SET_GPR_U32(ctx, 31, 0x22E8DCu);
    ctx->pc = 0x22E8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8D4u;
    // 0x22e8d8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x22E8D4u, 0x22E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8DCu;
label_22e8dc:
    // 0x22e8dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22e8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e8e0:
    // 0x22e8e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22e8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22e8e4:
    // 0x22e8e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22e8e8:
    // 0x22e8e8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x22e8e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22e8ec:
    // 0x22e8ec: 0xc08b180  jal         func_22C600
label_22e8f0:
    if (ctx->pc == 0x22E8F0u) {
        ctx->pc = 0x22E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8ECu;
        // 0x22e8f0: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8F4u;
        goto label_22e8f4;
    }
    ctx->pc = 0x22E8ECu;
    SET_GPR_U32(ctx, 31, 0x22E8F4u);
    ctx->pc = 0x22E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8ECu;
    // 0x22e8f0: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C600u, 0x22E8ECu, 0x22E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8F4u;
label_22e8f4:
    // 0x22e8f4: 0x8e6300bc  lw          $v1, 0xBC($s3)
    ctx->pc = 0x22e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_22e8f8:
    // 0x22e8f8: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x22e8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_22e8fc:
    // 0x22e8fc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_22e900:
    if (ctx->pc == 0x22E900u) {
        ctx->pc = 0x22E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8FCu;
        // 0x22e900: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E904u;
        goto label_22e904;
    }
    ctx->pc = 0x22E8FCu;
    {
        const bool branch_taken_0x22e8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8FCu;
        // 0x22e900: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8fc) {
            ctx->pc = 0x22E938u;
            goto label_22e938;
        }
    }
    ctx->pc = 0x22E904u;
label_22e904:
    // 0x22e904: 0xc60096a4  lwc1        $f0, -0x695C($s0)
    ctx->pc = 0x22e904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294940324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e908:
    // 0x22e908: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22e908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22e90c:
    // 0x22e90c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22e90cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e910:
    // 0x22e910: 0x0  nop
    ctx->pc = 0x22e910u;
    // NOP
label_22e914:
    // 0x22e914: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_22e918:
    if (ctx->pc == 0x22E918u) {
        ctx->pc = 0x22E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E914u;
        // 0x22e918: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E91Cu;
        goto label_22e91c;
    }
    ctx->pc = 0x22E914u;
    {
        const bool branch_taken_0x22e914 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E914u;
        // 0x22e918: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e914) {
            ctx->pc = 0x22E934u;
            goto label_22e934;
        }
    }
    ctx->pc = 0x22E91Cu;
label_22e91c:
    // 0x22e91c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22e91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22e920:
    // 0x22e920: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x22e920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_22e924:
    // 0x22e924: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22e924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22e928:
    // 0x22e928: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22e928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e92c:
    // 0x22e92c: 0xc046642  jal         func_119908
label_22e930:
    if (ctx->pc == 0x22E930u) {
        ctx->pc = 0x22E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E92Cu;
        // 0x22e930: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E934u;
        goto label_22e934;
    }
    ctx->pc = 0x22E92Cu;
    SET_GPR_U32(ctx, 31, 0x22E934u);
    ctx->pc = 0x22E930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E92Cu;
    // 0x22e930: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x22E92Cu, 0x22E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E934u;
label_22e934:
    // 0x22e934: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x22e934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_22e938:
    // 0x22e938: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x22e938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_22e93c:
    // 0x22e93c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22e93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e940:
    // 0x22e940: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x22e940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_22e944:
    // 0x22e944: 0xc07f4c2  jal         func_1FD308
label_22e948:
    if (ctx->pc == 0x22E948u) {
        ctx->pc = 0x22E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E944u;
        // 0x22e948: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E94Cu;
        goto label_22e94c;
    }
    ctx->pc = 0x22E944u;
    SET_GPR_U32(ctx, 31, 0x22E94Cu);
    ctx->pc = 0x22E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E944u;
    // 0x22e948: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x22E944u, 0x22E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E94Cu;
label_22e94c:
    // 0x22e94c: 0x10000019  b           . + 4 + (0x19 << 2)
label_22e950:
    if (ctx->pc == 0x22E950u) {
        ctx->pc = 0x22E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E94Cu;
        // 0x22e950: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E954u;
        goto label_22e954;
    }
    ctx->pc = 0x22E94Cu;
    {
        const bool branch_taken_0x22e94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E94Cu;
        // 0x22e950: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e94c) {
            ctx->pc = 0x22E9B4u;
            goto label_22e9b4;
        }
    }
    ctx->pc = 0x22E954u;
label_22e954:
    // 0x22e954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22e954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22e958:
    // 0x22e958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22e958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e95c:
    // 0x22e95c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22e95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22e960:
    // 0x22e960: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x22e960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22e964:
    // 0x22e964: 0xc08b180  jal         func_22C600
label_22e968:
    if (ctx->pc == 0x22E968u) {
        ctx->pc = 0x22E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E964u;
        // 0x22e968: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E96Cu;
        goto label_22e96c;
    }
    ctx->pc = 0x22E964u;
    SET_GPR_U32(ctx, 31, 0x22E96Cu);
    ctx->pc = 0x22E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E964u;
    // 0x22e968: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C600u, 0x22E964u, 0x22E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E96Cu;
label_22e96c:
    // 0x22e96c: 0x8e6300bc  lw          $v1, 0xBC($s3)
    ctx->pc = 0x22e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_22e970:
    // 0x22e970: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x22e970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_22e974:
    // 0x22e974: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_22e978:
    if (ctx->pc == 0x22E978u) {
        ctx->pc = 0x22E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E974u;
        // 0x22e978: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E97Cu;
        goto label_22e97c;
    }
    ctx->pc = 0x22E974u;
    {
        const bool branch_taken_0x22e974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E974u;
        // 0x22e978: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e974) {
            ctx->pc = 0x22E99Cu;
            goto label_22e99c;
        }
    }
    ctx->pc = 0x22E97Cu;
label_22e97c:
    // 0x22e97c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x22e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_22e980:
    // 0x22e980: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x22e980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22e984:
    // 0x22e984: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x22e984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_22e988:
    // 0x22e988: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22e988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22e98c:
    // 0x22e98c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22e98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e990:
    // 0x22e990: 0xc046642  jal         func_119908
label_22e994:
    if (ctx->pc == 0x22E994u) {
        ctx->pc = 0x22E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E990u;
        // 0x22e994: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E998u;
        goto label_22e998;
    }
    ctx->pc = 0x22E990u;
    SET_GPR_U32(ctx, 31, 0x22E998u);
    ctx->pc = 0x22E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E990u;
    // 0x22e994: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x22E990u, 0x22E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E998u;
label_22e998:
    // 0x22e998: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x22e998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_22e99c:
    // 0x22e99c: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x22e99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_22e9a0:
    // 0x22e9a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22e9a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e9a4:
    // 0x22e9a4: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x22e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_22e9a8:
    // 0x22e9a8: 0xc07f4c2  jal         func_1FD308
label_22e9ac:
    if (ctx->pc == 0x22E9ACu) {
        ctx->pc = 0x22E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9A8u;
        // 0x22e9ac: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9B0u;
        goto label_22e9b0;
    }
    ctx->pc = 0x22E9A8u;
    SET_GPR_U32(ctx, 31, 0x22E9B0u);
    ctx->pc = 0x22E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9A8u;
    // 0x22e9ac: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x22E9A8u, 0x22E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9B0u;
label_22e9b0:
    // 0x22e9b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22e9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22e9b4:
    // 0x22e9b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x22e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22e9b8:
    // 0x22e9b8: 0xc08fed2  jal         func_23FB48
label_22e9bc:
    if (ctx->pc == 0x22E9BCu) {
        ctx->pc = 0x22E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9B8u;
        // 0x22e9bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9C0u;
        goto label_22e9c0;
    }
    ctx->pc = 0x22E9B8u;
    SET_GPR_U32(ctx, 31, 0x22E9C0u);
    ctx->pc = 0x22E9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9B8u;
    // 0x22e9bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22E9B8u, 0x22E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9C0u;
label_22e9c0:
    // 0x22e9c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_22e9c4:
    if (ctx->pc == 0x22E9C4u) {
        ctx->pc = 0x22E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9C0u;
        // 0x22e9c4: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9C8u;
        goto label_22e9c8;
    }
    ctx->pc = 0x22E9C0u;
    {
        const bool branch_taken_0x22e9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9C0u;
        // 0x22e9c4: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9c0) {
            ctx->pc = 0x22E9D8u;
            goto label_22e9d8;
        }
    }
    ctx->pc = 0x22E9C8u;
label_22e9c8:
    // 0x22e9c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x22e9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22e9cc:
    // 0x22e9cc: 0xc08fed2  jal         func_23FB48
label_22e9d0:
    if (ctx->pc == 0x22E9D0u) {
        ctx->pc = 0x22E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9CCu;
        // 0x22e9d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9D4u;
        goto label_22e9d4;
    }
    ctx->pc = 0x22E9CCu;
    SET_GPR_U32(ctx, 31, 0x22E9D4u);
    ctx->pc = 0x22E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9CCu;
    // 0x22e9d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22E9CCu, 0x22E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9D4u;
label_22e9d4:
    // 0x22e9d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e9d8:
    // 0x22e9d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x22e9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22e9dc:
    // 0x22e9dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x22e9dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_22e9e0:
    // 0x22e9e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22e9e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22e9e4:
    // 0x22e9e4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x22e9e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_22e9e8:
    // 0x22e9e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22e9e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22e9ec:
    // 0x22e9ec: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x22e9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_22e9f0:
    // 0x22e9f0: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x22e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_22e9f4:
    // 0x22e9f4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x22e9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_22e9f8:
    // 0x22e9f8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x22e9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22e9fc:
    // 0x22e9fc: 0x3e00008  jr          $ra
label_22ea00:
    if (ctx->pc == 0x22EA00u) {
        ctx->pc = 0x22EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9FCu;
        // 0x22ea00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA04u;
        goto label_22ea04;
    }
    ctx->pc = 0x22E9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9FCu;
        // 0x22ea00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EA04u;
label_22ea04:
    // 0x22ea04: 0x0  nop
    ctx->pc = 0x22ea04u;
    // NOP
    ctx->pc = 0x22ea08u;
}
