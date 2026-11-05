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

// Function: sub_0031E540
// Address: 0x31e540 - 0x31e868
void sub_0031E540_0x31e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E540_0x31e540");
#endif

    switch (ctx->pc) {
        case 0x31e540u: goto label_31e540;
        case 0x31e544u: goto label_31e544;
        case 0x31e548u: goto label_31e548;
        case 0x31e54cu: goto label_31e54c;
        case 0x31e550u: goto label_31e550;
        case 0x31e554u: goto label_31e554;
        case 0x31e558u: goto label_31e558;
        case 0x31e55cu: goto label_31e55c;
        case 0x31e560u: goto label_31e560;
        case 0x31e564u: goto label_31e564;
        case 0x31e568u: goto label_31e568;
        case 0x31e56cu: goto label_31e56c;
        case 0x31e570u: goto label_31e570;
        case 0x31e574u: goto label_31e574;
        case 0x31e578u: goto label_31e578;
        case 0x31e57cu: goto label_31e57c;
        case 0x31e580u: goto label_31e580;
        case 0x31e584u: goto label_31e584;
        case 0x31e588u: goto label_31e588;
        case 0x31e58cu: goto label_31e58c;
        case 0x31e590u: goto label_31e590;
        case 0x31e594u: goto label_31e594;
        case 0x31e598u: goto label_31e598;
        case 0x31e59cu: goto label_31e59c;
        case 0x31e5a0u: goto label_31e5a0;
        case 0x31e5a4u: goto label_31e5a4;
        case 0x31e5a8u: goto label_31e5a8;
        case 0x31e5acu: goto label_31e5ac;
        case 0x31e5b0u: goto label_31e5b0;
        case 0x31e5b4u: goto label_31e5b4;
        case 0x31e5b8u: goto label_31e5b8;
        case 0x31e5bcu: goto label_31e5bc;
        case 0x31e5c0u: goto label_31e5c0;
        case 0x31e5c4u: goto label_31e5c4;
        case 0x31e5c8u: goto label_31e5c8;
        case 0x31e5ccu: goto label_31e5cc;
        case 0x31e5d0u: goto label_31e5d0;
        case 0x31e5d4u: goto label_31e5d4;
        case 0x31e5d8u: goto label_31e5d8;
        case 0x31e5dcu: goto label_31e5dc;
        case 0x31e5e0u: goto label_31e5e0;
        case 0x31e5e4u: goto label_31e5e4;
        case 0x31e5e8u: goto label_31e5e8;
        case 0x31e5ecu: goto label_31e5ec;
        case 0x31e5f0u: goto label_31e5f0;
        case 0x31e5f4u: goto label_31e5f4;
        case 0x31e5f8u: goto label_31e5f8;
        case 0x31e5fcu: goto label_31e5fc;
        case 0x31e600u: goto label_31e600;
        case 0x31e604u: goto label_31e604;
        case 0x31e608u: goto label_31e608;
        case 0x31e60cu: goto label_31e60c;
        case 0x31e610u: goto label_31e610;
        case 0x31e614u: goto label_31e614;
        case 0x31e618u: goto label_31e618;
        case 0x31e61cu: goto label_31e61c;
        case 0x31e620u: goto label_31e620;
        case 0x31e624u: goto label_31e624;
        case 0x31e628u: goto label_31e628;
        case 0x31e62cu: goto label_31e62c;
        case 0x31e630u: goto label_31e630;
        case 0x31e634u: goto label_31e634;
        case 0x31e638u: goto label_31e638;
        case 0x31e63cu: goto label_31e63c;
        case 0x31e640u: goto label_31e640;
        case 0x31e644u: goto label_31e644;
        case 0x31e648u: goto label_31e648;
        case 0x31e64cu: goto label_31e64c;
        case 0x31e650u: goto label_31e650;
        case 0x31e654u: goto label_31e654;
        case 0x31e658u: goto label_31e658;
        case 0x31e65cu: goto label_31e65c;
        case 0x31e660u: goto label_31e660;
        case 0x31e664u: goto label_31e664;
        case 0x31e668u: goto label_31e668;
        case 0x31e66cu: goto label_31e66c;
        case 0x31e670u: goto label_31e670;
        case 0x31e674u: goto label_31e674;
        case 0x31e678u: goto label_31e678;
        case 0x31e67cu: goto label_31e67c;
        case 0x31e680u: goto label_31e680;
        case 0x31e684u: goto label_31e684;
        case 0x31e688u: goto label_31e688;
        case 0x31e68cu: goto label_31e68c;
        case 0x31e690u: goto label_31e690;
        case 0x31e694u: goto label_31e694;
        case 0x31e698u: goto label_31e698;
        case 0x31e69cu: goto label_31e69c;
        case 0x31e6a0u: goto label_31e6a0;
        case 0x31e6a4u: goto label_31e6a4;
        case 0x31e6a8u: goto label_31e6a8;
        case 0x31e6acu: goto label_31e6ac;
        case 0x31e6b0u: goto label_31e6b0;
        case 0x31e6b4u: goto label_31e6b4;
        case 0x31e6b8u: goto label_31e6b8;
        case 0x31e6bcu: goto label_31e6bc;
        case 0x31e6c0u: goto label_31e6c0;
        case 0x31e6c4u: goto label_31e6c4;
        case 0x31e6c8u: goto label_31e6c8;
        case 0x31e6ccu: goto label_31e6cc;
        case 0x31e6d0u: goto label_31e6d0;
        case 0x31e6d4u: goto label_31e6d4;
        case 0x31e6d8u: goto label_31e6d8;
        case 0x31e6dcu: goto label_31e6dc;
        case 0x31e6e0u: goto label_31e6e0;
        case 0x31e6e4u: goto label_31e6e4;
        case 0x31e6e8u: goto label_31e6e8;
        case 0x31e6ecu: goto label_31e6ec;
        case 0x31e6f0u: goto label_31e6f0;
        case 0x31e6f4u: goto label_31e6f4;
        case 0x31e6f8u: goto label_31e6f8;
        case 0x31e6fcu: goto label_31e6fc;
        case 0x31e700u: goto label_31e700;
        case 0x31e704u: goto label_31e704;
        case 0x31e708u: goto label_31e708;
        case 0x31e70cu: goto label_31e70c;
        case 0x31e710u: goto label_31e710;
        case 0x31e714u: goto label_31e714;
        case 0x31e718u: goto label_31e718;
        case 0x31e71cu: goto label_31e71c;
        case 0x31e720u: goto label_31e720;
        case 0x31e724u: goto label_31e724;
        case 0x31e728u: goto label_31e728;
        case 0x31e72cu: goto label_31e72c;
        case 0x31e730u: goto label_31e730;
        case 0x31e734u: goto label_31e734;
        case 0x31e738u: goto label_31e738;
        case 0x31e73cu: goto label_31e73c;
        case 0x31e740u: goto label_31e740;
        case 0x31e744u: goto label_31e744;
        case 0x31e748u: goto label_31e748;
        case 0x31e74cu: goto label_31e74c;
        case 0x31e750u: goto label_31e750;
        case 0x31e754u: goto label_31e754;
        case 0x31e758u: goto label_31e758;
        case 0x31e75cu: goto label_31e75c;
        case 0x31e760u: goto label_31e760;
        case 0x31e764u: goto label_31e764;
        case 0x31e768u: goto label_31e768;
        case 0x31e76cu: goto label_31e76c;
        case 0x31e770u: goto label_31e770;
        case 0x31e774u: goto label_31e774;
        case 0x31e778u: goto label_31e778;
        case 0x31e77cu: goto label_31e77c;
        case 0x31e780u: goto label_31e780;
        case 0x31e784u: goto label_31e784;
        case 0x31e788u: goto label_31e788;
        case 0x31e78cu: goto label_31e78c;
        case 0x31e790u: goto label_31e790;
        case 0x31e794u: goto label_31e794;
        case 0x31e798u: goto label_31e798;
        case 0x31e79cu: goto label_31e79c;
        case 0x31e7a0u: goto label_31e7a0;
        case 0x31e7a4u: goto label_31e7a4;
        case 0x31e7a8u: goto label_31e7a8;
        case 0x31e7acu: goto label_31e7ac;
        case 0x31e7b0u: goto label_31e7b0;
        case 0x31e7b4u: goto label_31e7b4;
        case 0x31e7b8u: goto label_31e7b8;
        case 0x31e7bcu: goto label_31e7bc;
        case 0x31e7c0u: goto label_31e7c0;
        case 0x31e7c4u: goto label_31e7c4;
        case 0x31e7c8u: goto label_31e7c8;
        case 0x31e7ccu: goto label_31e7cc;
        case 0x31e7d0u: goto label_31e7d0;
        case 0x31e7d4u: goto label_31e7d4;
        case 0x31e7d8u: goto label_31e7d8;
        case 0x31e7dcu: goto label_31e7dc;
        case 0x31e7e0u: goto label_31e7e0;
        case 0x31e7e4u: goto label_31e7e4;
        case 0x31e7e8u: goto label_31e7e8;
        case 0x31e7ecu: goto label_31e7ec;
        case 0x31e7f0u: goto label_31e7f0;
        case 0x31e7f4u: goto label_31e7f4;
        case 0x31e7f8u: goto label_31e7f8;
        case 0x31e7fcu: goto label_31e7fc;
        case 0x31e800u: goto label_31e800;
        case 0x31e804u: goto label_31e804;
        case 0x31e808u: goto label_31e808;
        case 0x31e80cu: goto label_31e80c;
        case 0x31e810u: goto label_31e810;
        case 0x31e814u: goto label_31e814;
        case 0x31e818u: goto label_31e818;
        case 0x31e81cu: goto label_31e81c;
        case 0x31e820u: goto label_31e820;
        case 0x31e824u: goto label_31e824;
        case 0x31e828u: goto label_31e828;
        case 0x31e82cu: goto label_31e82c;
        case 0x31e830u: goto label_31e830;
        case 0x31e834u: goto label_31e834;
        case 0x31e838u: goto label_31e838;
        case 0x31e83cu: goto label_31e83c;
        case 0x31e840u: goto label_31e840;
        case 0x31e844u: goto label_31e844;
        case 0x31e848u: goto label_31e848;
        case 0x31e84cu: goto label_31e84c;
        case 0x31e850u: goto label_31e850;
        case 0x31e854u: goto label_31e854;
        case 0x31e858u: goto label_31e858;
        case 0x31e85cu: goto label_31e85c;
        case 0x31e860u: goto label_31e860;
        case 0x31e864u: goto label_31e864;
        default: break;
    }

    ctx->pc = 0x31e540u;

label_31e540:
    // 0x31e540: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_31e544:
    // 0x31e544: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31e544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_31e548:
    // 0x31e548: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x31e548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_31e54c:
    // 0x31e54c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x31e54cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_31e550:
    // 0x31e550: 0x9043bdad  lbu         $v1, -0x4253($v0)
    ctx->pc = 0x31e550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950317)));
label_31e554:
    // 0x31e554: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31e554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e558:
    // 0x31e558: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x31e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_31e55c:
    // 0x31e55c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x31e55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_31e560:
    // 0x31e560: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x31e560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_31e564:
    // 0x31e564: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x31e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_31e568:
    // 0x31e568: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x31e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_31e56c:
    // 0x31e56c: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x31e56cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_31e570:
    // 0x31e570: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x31e570u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_31e574:
    // 0x31e574: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_31e578:
    if (ctx->pc == 0x31E578u) {
        ctx->pc = 0x31E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E574u;
        // 0x31e578: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E57Cu;
        goto label_31e57c;
    }
    ctx->pc = 0x31E574u;
    {
        const bool branch_taken_0x31e574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E574u;
        // 0x31e578: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e574) {
            ctx->pc = 0x31E590u;
            goto label_31e590;
        }
    }
    ctx->pc = 0x31E57Cu;
label_31e57c:
    // 0x31e57c: 0x90c2bdac  lbu         $v0, -0x4254($a2)
    ctx->pc = 0x31e57cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294950316)));
label_31e580:
    // 0x31e580: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_31e584:
    if (ctx->pc == 0x31E584u) {
        ctx->pc = 0x31E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E580u;
        // 0x31e584: 0x8c820100  lw          $v0, 0x100($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E588u;
        goto label_31e588;
    }
    ctx->pc = 0x31E580u;
    {
        const bool branch_taken_0x31e580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e580) {
            ctx->pc = 0x31E584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E580u;
            // 0x31e584: 0x8c820100  lw          $v0, 0x100($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E594u;
            goto label_31e594;
        }
    }
    ctx->pc = 0x31E588u;
label_31e588:
    // 0x31e588: 0x100000ac  b           . + 4 + (0xAC << 2)
label_31e58c:
    if (ctx->pc == 0x31E58Cu) {
        ctx->pc = 0x31E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E588u;
        // 0x31e58c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E590u;
        goto label_31e590;
    }
    ctx->pc = 0x31E588u;
    {
        const bool branch_taken_0x31e588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E588u;
        // 0x31e58c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e588) {
            ctx->pc = 0x31E83Cu;
            goto label_31e83c;
        }
    }
    ctx->pc = 0x31E590u;
label_31e590:
    // 0x31e590: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x31e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_31e594:
    // 0x31e594: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31e594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_31e598:
    // 0x31e598: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x31e598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_31e59c:
    // 0x31e59c: 0x8c652b00  lw          $a1, 0x2B00($v1)
    ctx->pc = 0x31e59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
label_31e5a0:
    // 0x31e5a0: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x31e5a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_31e5a4:
    // 0x31e5a4: 0x24510040  addiu       $s1, $v0, 0x40
    ctx->pc = 0x31e5a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_31e5a8:
    // 0x31e5a8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_31e5ac:
    if (ctx->pc == 0x31E5ACu) {
        ctx->pc = 0x31E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5A8u;
        // 0x31e5ac: 0x24845870  addiu       $a0, $a0, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E5B0u;
        goto label_31e5b0;
    }
    ctx->pc = 0x31E5A8u;
    {
        const bool branch_taken_0x31e5a8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x31E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5A8u;
        // 0x31e5ac: 0x24845870  addiu       $a0, $a0, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5a8) {
            ctx->pc = 0x31E5C4u;
            goto label_31e5c4;
        }
    }
    ctx->pc = 0x31E5B0u;
label_31e5b0:
    // 0x31e5b0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x31e5b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31e5b4:
    // 0x31e5b4: 0x0  nop
    ctx->pc = 0x31e5b4u;
    // NOP
label_31e5b8:
    // 0x31e5b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31e5b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_31e5bc:
    // 0x31e5bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_31e5c0:
    if (ctx->pc == 0x31E5C0u) {
        ctx->pc = 0x31E5C4u;
        goto label_31e5c4;
    }
    ctx->pc = 0x31E5BCu;
    {
        const bool branch_taken_0x31e5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e5bc) {
            ctx->pc = 0x31E5E0u;
            goto label_31e5e0;
        }
    }
    ctx->pc = 0x31E5C4u;
label_31e5c4:
    // 0x31e5c4: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x31e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_31e5c8:
    // 0x31e5c8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x31e5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_31e5cc:
    // 0x31e5cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31e5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_31e5d0:
    // 0x31e5d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31e5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31e5d4:
    // 0x31e5d4: 0x0  nop
    ctx->pc = 0x31e5d4u;
    // NOP
label_31e5d8:
    // 0x31e5d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31e5d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_31e5dc:
    // 0x31e5dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x31e5dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_31e5e0:
    // 0x31e5e0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x31e5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_31e5e4:
    // 0x31e5e4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x31e5e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_31e5e8:
    // 0x31e5e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31e5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e5ec:
    // 0x31e5ec: 0x90c2bdac  lbu         $v0, -0x4254($a2)
    ctx->pc = 0x31e5ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294950316)));
label_31e5f0:
    // 0x31e5f0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_31e5f4:
    if (ctx->pc == 0x31E5F4u) {
        ctx->pc = 0x31E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5F0u;
        // 0x31e5f4: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E5F8u;
        goto label_31e5f8;
    }
    ctx->pc = 0x31E5F0u;
    {
        const bool branch_taken_0x31e5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5F0u;
        // 0x31e5f4: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5f0) {
            ctx->pc = 0x31E6A8u;
            goto label_31e6a8;
        }
    }
    ctx->pc = 0x31E5F8u;
label_31e5f8:
    // 0x31e5f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_31e5fc:
    // 0x31e5fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31e5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31e600:
    // 0x31e600: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31e600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_31e604:
    // 0x31e604: 0x8c62bdb0  lw          $v0, -0x4250($v1)
    ctx->pc = 0x31e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950320)));
label_31e608:
    // 0x31e608: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x31e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e60c:
    // 0x31e60c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x31e60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e610:
    // 0x31e610: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x31e610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_31e614:
    // 0x31e614: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x31e614u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_31e618:
    // 0x31e618: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x31e618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31e61c:
    // 0x31e61c: 0x0  nop
    ctx->pc = 0x31e61cu;
    // NOP
label_31e620:
    // 0x31e620: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_31e624:
    if (ctx->pc == 0x31E624u) {
        ctx->pc = 0x31E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E620u;
        // 0x31e624: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E628u;
        goto label_31e628;
    }
    ctx->pc = 0x31E620u;
    {
        const bool branch_taken_0x31e620 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E620u;
        // 0x31e624: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e620) {
            ctx->pc = 0x31E65Cu;
            goto label_31e65c;
        }
    }
    ctx->pc = 0x31E628u;
label_31e628:
    // 0x31e628: 0x90820358  lbu         $v0, 0x358($a0)
    ctx->pc = 0x31e628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 856)));
label_31e62c:
    // 0x31e62c: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x31e62cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_31e630:
    // 0x31e630: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_31e634:
    if (ctx->pc == 0x31E634u) {
        ctx->pc = 0x31E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E630u;
        // 0x31e634: 0xa0c0bdac  sb          $zero, -0x4254($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4294950316), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E638u;
        goto label_31e638;
    }
    ctx->pc = 0x31E630u;
    {
        const bool branch_taken_0x31e630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E630u;
        // 0x31e634: 0xa0c0bdac  sb          $zero, -0x4254($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4294950316), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e630) {
            ctx->pc = 0x31E64Cu;
            goto label_31e64c;
        }
    }
    ctx->pc = 0x31E638u;
label_31e638:
    // 0x31e638: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31e638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_31e63c:
    // 0x31e63c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31e63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31e640:
    // 0x31e640: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x31e640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_31e644:
    // 0x31e644: 0xc0c091a  jal         func_302468
label_31e648:
    if (ctx->pc == 0x31E648u) {
        ctx->pc = 0x31E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E644u;
        // 0x31e648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E64Cu;
        goto label_31e64c;
    }
    ctx->pc = 0x31E644u;
    SET_GPR_U32(ctx, 31, 0x31E64Cu);
    ctx->pc = 0x31E648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E644u;
    // 0x31e648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302468u, 0x31E644u, 0x31E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E64Cu;
label_31e64c:
    // 0x31e64c: 0x8e04bdb0  lw          $a0, -0x4250($s0)
    ctx->pc = 0x31e64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950320)));
label_31e650:
    // 0x31e650: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x31e650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_31e654:
    // 0x31e654: 0x40f809  jalr        $v0
label_31e658:
    if (ctx->pc == 0x31E658u) {
        ctx->pc = 0x31E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E654u;
        // 0x31e658: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E65Cu;
        goto label_31e65c;
    }
    ctx->pc = 0x31E654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E65Cu);
        ctx->pc = 0x31E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E654u;
        // 0x31e658: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E654u, 0x31E65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E65Cu;
label_31e65c:
    // 0x31e65c: 0x8e04bdb0  lw          $a0, -0x4250($s0)
    ctx->pc = 0x31e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950320)));
label_31e660:
    // 0x31e660: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x31e660u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_31e664:
    // 0x31e664: 0xc0c7832  jal         func_31E0C8
label_31e668:
    if (ctx->pc == 0x31E668u) {
        ctx->pc = 0x31E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E664u;
        // 0x31e668: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E66Cu;
        goto label_31e66c;
    }
    ctx->pc = 0x31E664u;
    SET_GPR_U32(ctx, 31, 0x31E66Cu);
    ctx->pc = 0x31E668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E664u;
    // 0x31e668: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E0C8u, 0x31E664u, 0x31E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E66Cu;
label_31e66c:
    // 0x31e66c: 0x8e04bdb0  lw          $a0, -0x4250($s0)
    ctx->pc = 0x31e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950320)));
label_31e670:
    // 0x31e670: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x31e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_31e674:
    // 0x31e674: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_31e678:
    if (ctx->pc == 0x31E678u) {
        ctx->pc = 0x31E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E674u;
        // 0x31e678: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E67Cu;
        goto label_31e67c;
    }
    ctx->pc = 0x31E674u;
    {
        const bool branch_taken_0x31e674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E674u;
        // 0x31e678: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e674) {
            ctx->pc = 0x31E6A8u;
            goto label_31e6a8;
        }
    }
    ctx->pc = 0x31E67Cu;
label_31e67c:
    // 0x31e67c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31e67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31e680:
    // 0x31e680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31e680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e684:
    // 0x31e684: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31e684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e688:
    // 0x31e688: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31e688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31e68c:
    // 0x31e68c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x31e68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31e690:
    // 0x31e690: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x31e690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_31e694:
    // 0x31e694: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x31e694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_31e698:
    // 0x31e698: 0xc0c7884  jal         func_31E210
label_31e69c:
    if (ctx->pc == 0x31E69Cu) {
        ctx->pc = 0x31E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E698u;
        // 0x31e69c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6A0u;
        goto label_31e6a0;
    }
    ctx->pc = 0x31E698u;
    SET_GPR_U32(ctx, 31, 0x31E6A0u);
    ctx->pc = 0x31E69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E698u;
    // 0x31e69c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E210u, 0x31E698u, 0x31E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E6A0u;
label_31e6a0:
    // 0x31e6a0: 0x10000066  b           . + 4 + (0x66 << 2)
label_31e6a4:
    if (ctx->pc == 0x31E6A4u) {
        ctx->pc = 0x31E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6A0u;
        // 0x31e6a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6A8u;
        goto label_31e6a8;
    }
    ctx->pc = 0x31E6A0u;
    {
        const bool branch_taken_0x31e6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6A0u;
        // 0x31e6a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6a0) {
            ctx->pc = 0x31E83Cu;
            goto label_31e83c;
        }
    }
    ctx->pc = 0x31E6A8u;
label_31e6a8:
    // 0x31e6a8: 0x9282bdad  lbu         $v0, -0x4253($s4)
    ctx->pc = 0x31e6a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294950317)));
label_31e6ac:
    // 0x31e6ac: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_31e6b0:
    if (ctx->pc == 0x31E6B0u) {
        ctx->pc = 0x31E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6ACu;
        // 0x31e6b0: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6B4u;
        goto label_31e6b4;
    }
    ctx->pc = 0x31E6ACu;
    {
        const bool branch_taken_0x31e6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6ACu;
        // 0x31e6b0: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6ac) {
            ctx->pc = 0x31E838u;
            goto label_31e838;
        }
    }
    ctx->pc = 0x31E6B4u;
label_31e6b4:
    // 0x31e6b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31e6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31e6b8:
    // 0x31e6b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x31e6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_31e6bc:
    // 0x31e6bc: 0x8e42bdb4  lw          $v0, -0x424C($s2)
    ctx->pc = 0x31e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950324)));
label_31e6c0:
    // 0x31e6c0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x31e6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e6c4:
    // 0x31e6c4: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x31e6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e6c8:
    // 0x31e6c8: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x31e6c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_31e6cc:
    // 0x31e6cc: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x31e6ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_31e6d0:
    // 0x31e6d0: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x31e6d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31e6d4:
    // 0x31e6d4: 0x0  nop
    ctx->pc = 0x31e6d4u;
    // NOP
label_31e6d8:
    // 0x31e6d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31e6dc:
    if (ctx->pc == 0x31E6DCu) {
        ctx->pc = 0x31E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6D8u;
        // 0x31e6dc: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6E0u;
        goto label_31e6e0;
    }
    ctx->pc = 0x31E6D8u;
    {
        const bool branch_taken_0x31e6d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6D8u;
        // 0x31e6dc: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6d8) {
            ctx->pc = 0x31E6F0u;
            goto label_31e6f0;
        }
    }
    ctx->pc = 0x31E6E0u;
label_31e6e0:
    // 0x31e6e0: 0xa280bdad  sb          $zero, -0x4253($s4)
    ctx->pc = 0x31e6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4294950317), (uint8_t)GPR_U32(ctx, 0));
label_31e6e4:
    // 0x31e6e4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x31e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_31e6e8:
    // 0x31e6e8: 0x40f809  jalr        $v0
label_31e6ec:
    if (ctx->pc == 0x31E6ECu) {
        ctx->pc = 0x31E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6E8u;
        // 0x31e6ec: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6F0u;
        goto label_31e6f0;
    }
    ctx->pc = 0x31E6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E6F0u);
        ctx->pc = 0x31E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6E8u;
        // 0x31e6ec: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E6E8u, 0x31E6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E6F0u;
label_31e6f0:
    // 0x31e6f0: 0x3c10005b  lui         $s0, 0x5B
    ctx->pc = 0x31e6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
label_31e6f4:
    // 0x31e6f4: 0x8e44bdb4  lw          $a0, -0x424C($s2)
    ctx->pc = 0x31e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950324)));
label_31e6f8:
    // 0x31e6f8: 0x26102310  addiu       $s0, $s0, 0x2310
    ctx->pc = 0x31e6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8976));
label_31e6fc:
    // 0x31e6fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x31e6fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_31e700:
    // 0x31e700: 0xc0c7832  jal         func_31E0C8
label_31e704:
    if (ctx->pc == 0x31E704u) {
        ctx->pc = 0x31E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E700u;
        // 0x31e704: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E708u;
        goto label_31e708;
    }
    ctx->pc = 0x31E700u;
    SET_GPR_U32(ctx, 31, 0x31E708u);
    ctx->pc = 0x31E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E700u;
    // 0x31e704: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E0C8u, 0x31E700u, 0x31E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E708u;
label_31e708:
    // 0x31e708: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31e708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_31e70c:
    // 0x31e70c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x31e70cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_31e710:
    // 0x31e710: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x31e710u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_31e714:
    // 0x31e714: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31e714u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_31e718:
    // 0x31e718: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x31e718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_31e71c:
    // 0x31e71c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x31e71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e720:
    // 0x31e720: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x31e720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e724:
    // 0x31e724: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x31e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31e728:
    // 0x31e728: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x31e728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31e72c:
    // 0x31e72c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x31e72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31e730:
    // 0x31e730: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x31e730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31e734:
    // 0x31e734: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x31e734u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_31e738:
    // 0x31e738: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x31e738u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_31e73c:
    // 0x31e73c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x31e73cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31e740:
    // 0x31e740: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x31e740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_31e744:
    // 0x31e744: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x31e744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_31e748:
    // 0x31e748: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x31e748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_31e74c:
    // 0x31e74c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x31e74cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_31e750:
    // 0x31e750: 0x4a0003bf  vwaitq
    ctx->pc = 0x31e750u;
    // VWAITQ (Q already resolved in this runtime)
label_31e754:
    // 0x31e754: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x31e754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_31e758:
    // 0x31e758: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x31e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_31e75c:
    // 0x31e75c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x31e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_31e760:
    // 0x31e760: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x31e760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31e764:
    // 0x31e764: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x31e764u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_31e768:
    // 0x31e768: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x31e768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31e76c:
    // 0x31e76c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x31e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_31e770:
    // 0x31e770: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x31e770u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_31e774:
    // 0x31e774: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x31e774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_31e778:
    // 0x31e778: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x31e778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_31e77c:
    // 0x31e77c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31e77cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31e780:
    // 0x31e780: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x31e780u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_31e784:
    // 0x31e784: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x31e784u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_31e788:
    // 0x31e788: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x31e788u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_31e78c:
    // 0x31e78c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x31e78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_31e790:
    // 0x31e790: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x31e790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e794:
    // 0x31e794: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x31e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e798:
    // 0x31e798: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x31e798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31e79c:
    // 0x31e79c: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x31e79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31e7a0:
    // 0x31e7a0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x31e7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_31e7a4:
    // 0x31e7a4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x31e7a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_31e7a8:
    // 0x31e7a8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x31e7a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31e7ac:
    // 0x31e7ac: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x31e7acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_31e7b0:
    // 0x31e7b0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x31e7b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_31e7b4:
    // 0x31e7b4: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x31e7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_31e7b8:
    // 0x31e7b8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x31e7b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_31e7bc:
    // 0x31e7bc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x31e7bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_31e7c0:
    // 0x31e7c0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x31e7c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_31e7c4:
    // 0x31e7c4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x31e7c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_31e7c8:
    // 0x31e7c8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x31e7c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_31e7cc:
    // 0x31e7cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x31e7ccu;
    // VWAITQ (Q already resolved in this runtime)
label_31e7d0:
    // 0x31e7d0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x31e7d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_31e7d4:
    // 0x31e7d4: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x31e7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_31e7d8:
    // 0x31e7d8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x31e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_31e7dc:
    // 0x31e7dc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31e7dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_31e7e0:
    // 0x31e7e0: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x31e7e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_31e7e4:
    // 0x31e7e4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x31e7e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_31e7e8:
    // 0x31e7e8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x31e7e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_31e7ec:
    // 0x31e7ec: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x31e7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_31e7f0:
    // 0x31e7f0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x31e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e7f4:
    // 0x31e7f4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x31e7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e7f8:
    // 0x31e7f8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x31e7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31e7fc:
    // 0x31e7fc: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x31e7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31e800:
    // 0x31e800: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x31e800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_31e804:
    // 0x31e804: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x31e804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_31e808:
    // 0x31e808: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x31e808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_31e80c:
    // 0x31e80c: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x31e80cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_31e810:
    // 0x31e810: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x31e810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_31e814:
    // 0x31e814: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x31e814u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_31e818:
    // 0x31e818: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31e818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31e81c:
    // 0x31e81c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x31e81cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_31e820:
    // 0x31e820: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x31e820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_31e824:
    // 0x31e824: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x31e824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_31e828:
    // 0x31e828: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x31e828u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_31e82c:
    // 0x31e82c: 0x4a0003bf  vwaitq
    ctx->pc = 0x31e82cu;
    // VWAITQ (Q already resolved in this runtime)
label_31e830:
    // 0x31e830: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x31e830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_31e834:
    // 0x31e834: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x31e834u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_31e838:
    // 0x31e838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e83c:
    // 0x31e83c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x31e83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_31e840:
    // 0x31e840: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x31e840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_31e844:
    // 0x31e844: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x31e844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_31e848:
    // 0x31e848: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x31e848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_31e84c:
    // 0x31e84c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x31e84cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_31e850:
    // 0x31e850: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x31e850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_31e854:
    // 0x31e854: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x31e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_31e858:
    // 0x31e858: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x31e858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_31e85c:
    // 0x31e85c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x31e85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31e860:
    // 0x31e860: 0x3e00008  jr          $ra
label_31e864:
    if (ctx->pc == 0x31E864u) {
        ctx->pc = 0x31E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E860u;
        // 0x31e864: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E868u;
        goto label_fallthrough_0x31e860;
    }
    ctx->pc = 0x31E860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E860u;
        // 0x31e864: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e860:
    ctx->pc = 0x31E868u;
}
