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

// Function: sub_0019D3F8
// Address: 0x19d3f8 - 0x19d660
void sub_0019D3F8_0x19d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D3F8_0x19d3f8");
#endif

    switch (ctx->pc) {
        case 0x19d3f8u: goto label_19d3f8;
        case 0x19d3fcu: goto label_19d3fc;
        case 0x19d400u: goto label_19d400;
        case 0x19d404u: goto label_19d404;
        case 0x19d408u: goto label_19d408;
        case 0x19d40cu: goto label_19d40c;
        case 0x19d410u: goto label_19d410;
        case 0x19d414u: goto label_19d414;
        case 0x19d418u: goto label_19d418;
        case 0x19d41cu: goto label_19d41c;
        case 0x19d420u: goto label_19d420;
        case 0x19d424u: goto label_19d424;
        case 0x19d428u: goto label_19d428;
        case 0x19d42cu: goto label_19d42c;
        case 0x19d430u: goto label_19d430;
        case 0x19d434u: goto label_19d434;
        case 0x19d438u: goto label_19d438;
        case 0x19d43cu: goto label_19d43c;
        case 0x19d440u: goto label_19d440;
        case 0x19d444u: goto label_19d444;
        case 0x19d448u: goto label_19d448;
        case 0x19d44cu: goto label_19d44c;
        case 0x19d450u: goto label_19d450;
        case 0x19d454u: goto label_19d454;
        case 0x19d458u: goto label_19d458;
        case 0x19d45cu: goto label_19d45c;
        case 0x19d460u: goto label_19d460;
        case 0x19d464u: goto label_19d464;
        case 0x19d468u: goto label_19d468;
        case 0x19d46cu: goto label_19d46c;
        case 0x19d470u: goto label_19d470;
        case 0x19d474u: goto label_19d474;
        case 0x19d478u: goto label_19d478;
        case 0x19d47cu: goto label_19d47c;
        case 0x19d480u: goto label_19d480;
        case 0x19d484u: goto label_19d484;
        case 0x19d488u: goto label_19d488;
        case 0x19d48cu: goto label_19d48c;
        case 0x19d490u: goto label_19d490;
        case 0x19d494u: goto label_19d494;
        case 0x19d498u: goto label_19d498;
        case 0x19d49cu: goto label_19d49c;
        case 0x19d4a0u: goto label_19d4a0;
        case 0x19d4a4u: goto label_19d4a4;
        case 0x19d4a8u: goto label_19d4a8;
        case 0x19d4acu: goto label_19d4ac;
        case 0x19d4b0u: goto label_19d4b0;
        case 0x19d4b4u: goto label_19d4b4;
        case 0x19d4b8u: goto label_19d4b8;
        case 0x19d4bcu: goto label_19d4bc;
        case 0x19d4c0u: goto label_19d4c0;
        case 0x19d4c4u: goto label_19d4c4;
        case 0x19d4c8u: goto label_19d4c8;
        case 0x19d4ccu: goto label_19d4cc;
        case 0x19d4d0u: goto label_19d4d0;
        case 0x19d4d4u: goto label_19d4d4;
        case 0x19d4d8u: goto label_19d4d8;
        case 0x19d4dcu: goto label_19d4dc;
        case 0x19d4e0u: goto label_19d4e0;
        case 0x19d4e4u: goto label_19d4e4;
        case 0x19d4e8u: goto label_19d4e8;
        case 0x19d4ecu: goto label_19d4ec;
        case 0x19d4f0u: goto label_19d4f0;
        case 0x19d4f4u: goto label_19d4f4;
        case 0x19d4f8u: goto label_19d4f8;
        case 0x19d4fcu: goto label_19d4fc;
        case 0x19d500u: goto label_19d500;
        case 0x19d504u: goto label_19d504;
        case 0x19d508u: goto label_19d508;
        case 0x19d50cu: goto label_19d50c;
        case 0x19d510u: goto label_19d510;
        case 0x19d514u: goto label_19d514;
        case 0x19d518u: goto label_19d518;
        case 0x19d51cu: goto label_19d51c;
        case 0x19d520u: goto label_19d520;
        case 0x19d524u: goto label_19d524;
        case 0x19d528u: goto label_19d528;
        case 0x19d52cu: goto label_19d52c;
        case 0x19d530u: goto label_19d530;
        case 0x19d534u: goto label_19d534;
        case 0x19d538u: goto label_19d538;
        case 0x19d53cu: goto label_19d53c;
        case 0x19d540u: goto label_19d540;
        case 0x19d544u: goto label_19d544;
        case 0x19d548u: goto label_19d548;
        case 0x19d54cu: goto label_19d54c;
        case 0x19d550u: goto label_19d550;
        case 0x19d554u: goto label_19d554;
        case 0x19d558u: goto label_19d558;
        case 0x19d55cu: goto label_19d55c;
        case 0x19d560u: goto label_19d560;
        case 0x19d564u: goto label_19d564;
        case 0x19d568u: goto label_19d568;
        case 0x19d56cu: goto label_19d56c;
        case 0x19d570u: goto label_19d570;
        case 0x19d574u: goto label_19d574;
        case 0x19d578u: goto label_19d578;
        case 0x19d57cu: goto label_19d57c;
        case 0x19d580u: goto label_19d580;
        case 0x19d584u: goto label_19d584;
        case 0x19d588u: goto label_19d588;
        case 0x19d58cu: goto label_19d58c;
        case 0x19d590u: goto label_19d590;
        case 0x19d594u: goto label_19d594;
        case 0x19d598u: goto label_19d598;
        case 0x19d59cu: goto label_19d59c;
        case 0x19d5a0u: goto label_19d5a0;
        case 0x19d5a4u: goto label_19d5a4;
        case 0x19d5a8u: goto label_19d5a8;
        case 0x19d5acu: goto label_19d5ac;
        case 0x19d5b0u: goto label_19d5b0;
        case 0x19d5b4u: goto label_19d5b4;
        case 0x19d5b8u: goto label_19d5b8;
        case 0x19d5bcu: goto label_19d5bc;
        case 0x19d5c0u: goto label_19d5c0;
        case 0x19d5c4u: goto label_19d5c4;
        case 0x19d5c8u: goto label_19d5c8;
        case 0x19d5ccu: goto label_19d5cc;
        case 0x19d5d0u: goto label_19d5d0;
        case 0x19d5d4u: goto label_19d5d4;
        case 0x19d5d8u: goto label_19d5d8;
        case 0x19d5dcu: goto label_19d5dc;
        case 0x19d5e0u: goto label_19d5e0;
        case 0x19d5e4u: goto label_19d5e4;
        case 0x19d5e8u: goto label_19d5e8;
        case 0x19d5ecu: goto label_19d5ec;
        case 0x19d5f0u: goto label_19d5f0;
        case 0x19d5f4u: goto label_19d5f4;
        case 0x19d5f8u: goto label_19d5f8;
        case 0x19d5fcu: goto label_19d5fc;
        case 0x19d600u: goto label_19d600;
        case 0x19d604u: goto label_19d604;
        case 0x19d608u: goto label_19d608;
        case 0x19d60cu: goto label_19d60c;
        case 0x19d610u: goto label_19d610;
        case 0x19d614u: goto label_19d614;
        case 0x19d618u: goto label_19d618;
        case 0x19d61cu: goto label_19d61c;
        case 0x19d620u: goto label_19d620;
        case 0x19d624u: goto label_19d624;
        case 0x19d628u: goto label_19d628;
        case 0x19d62cu: goto label_19d62c;
        case 0x19d630u: goto label_19d630;
        case 0x19d634u: goto label_19d634;
        case 0x19d638u: goto label_19d638;
        case 0x19d63cu: goto label_19d63c;
        case 0x19d640u: goto label_19d640;
        case 0x19d644u: goto label_19d644;
        case 0x19d648u: goto label_19d648;
        case 0x19d64cu: goto label_19d64c;
        case 0x19d650u: goto label_19d650;
        case 0x19d654u: goto label_19d654;
        case 0x19d658u: goto label_19d658;
        case 0x19d65cu: goto label_19d65c;
        default: break;
    }

    ctx->pc = 0x19d3f8u;

label_19d3f8:
    // 0x19d3f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19d3fc:
    // 0x19d3fc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x19d3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19d400:
    // 0x19d400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19d404:
    // 0x19d404: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19d408:
    // 0x19d408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d40c:
    // 0x19d40c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19d40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_19d410:
    // 0x19d410: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x19d410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_19d414:
    // 0x19d414: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19d414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19d418:
    // 0x19d418: 0x24840898  addiu       $a0, $a0, 0x898
    ctx->pc = 0x19d418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2200));
label_19d41c:
    // 0x19d41c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19d41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_19d420:
    // 0x19d420: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19d420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19d424:
    // 0x19d424: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19d424u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_19d428:
    // 0x19d428: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19d428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19d42c:
    // 0x19d42c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d430:
    // 0x19d430: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19d434:
    // 0x19d434: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19d438:
    // 0x19d438: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19d438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19d43c:
    // 0x19d43c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19d440:
    // 0x19d440: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x19d440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
label_19d444:
    // 0x19d444: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x19d444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19d448:
    // 0x19d448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19d44c:
    // 0x19d44c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x19d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_19d450:
    // 0x19d450: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19d450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19d454:
    // 0x19d454: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19d458:
    if (ctx->pc == 0x19D458u) {
        ctx->pc = 0x19D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D454u;
        // 0x19d458: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D45Cu;
        goto label_19d45c;
    }
    ctx->pc = 0x19D454u;
    {
        const bool branch_taken_0x19d454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D454u;
        // 0x19d458: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d454) {
            ctx->pc = 0x19D46Cu;
            goto label_19d46c;
        }
    }
    ctx->pc = 0x19D45Cu;
label_19d45c:
    // 0x19d45c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d460:
    // 0x19d460: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19d464:
    // 0x19d464: 0x40f809  jalr        $v0
label_19d468:
    if (ctx->pc == 0x19D468u) {
        ctx->pc = 0x19D46Cu;
        goto label_19d46c;
    }
    ctx->pc = 0x19D464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D46Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D464u, 0x19D46Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D46Cu;
label_19d46c:
    // 0x19d46c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x19d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19d470:
    // 0x19d470: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d474:
    // 0x19d474: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x19d474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_19d478:
    // 0x19d478: 0x24661040  addiu       $a2, $v1, 0x1040
    ctx->pc = 0x19d478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
label_19d47c:
    // 0x19d47c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x19d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_19d480:
    // 0x19d480: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19d484:
    if (ctx->pc == 0x19D484u) {
        ctx->pc = 0x19D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D480u;
        // 0x19d484: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D488u;
        goto label_19d488;
    }
    ctx->pc = 0x19D480u;
    {
        const bool branch_taken_0x19d480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D480u;
        // 0x19d484: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d480) {
            ctx->pc = 0x19D498u;
            goto label_19d498;
        }
    }
    ctx->pc = 0x19D488u;
label_19d488:
    // 0x19d488: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19d488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19d48c:
    // 0x19d48c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x19d48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_19d490:
    // 0x19d490: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_19d494:
    if (ctx->pc == 0x19D494u) {
        ctx->pc = 0x19D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D490u;
        // 0x19d494: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D498u;
        goto label_19d498;
    }
    ctx->pc = 0x19D490u;
    {
        const bool branch_taken_0x19d490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d490) {
            ctx->pc = 0x19D494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D490u;
            // 0x19d494: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D4BCu;
            goto label_19d4bc;
        }
    }
    ctx->pc = 0x19D498u;
label_19d498:
    // 0x19d498: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19d498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d49c:
    // 0x19d49c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x19d49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19d4a0:
    // 0x19d4a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19d4a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19d4a4:
    // 0x19d4a4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19d4a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19d4a8:
    // 0x19d4a8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x19d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_19d4ac:
    // 0x19d4ac: 0x40f809  jalr        $v0
label_19d4b0:
    if (ctx->pc == 0x19D4B0u) {
        ctx->pc = 0x19D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4ACu;
        // 0x19d4b0: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4B4u;
        goto label_19d4b4;
    }
    ctx->pc = 0x19D4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D4B4u);
        ctx->pc = 0x19D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4ACu;
        // 0x19d4b0: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D4ACu, 0x19D4B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D4B4u;
label_19d4b4:
    // 0x19d4b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_19d4b8:
    if (ctx->pc == 0x19D4B8u) {
        ctx->pc = 0x19D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4B4u;
        // 0x19d4b8: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4BCu;
        goto label_19d4bc;
    }
    ctx->pc = 0x19D4B4u;
    {
        const bool branch_taken_0x19d4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4B4u;
        // 0x19d4b8: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4b4) {
            ctx->pc = 0x19D4D4u;
            goto label_19d4d4;
        }
    }
    ctx->pc = 0x19D4BCu;
label_19d4bc:
    // 0x19d4bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19d4bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19d4c0:
    // 0x19d4c0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19d4c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19d4c4:
    // 0x19d4c4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x19d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_19d4c8:
    // 0x19d4c8: 0x40f809  jalr        $v0
label_19d4cc:
    if (ctx->pc == 0x19D4CCu) {
        ctx->pc = 0x19D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4C8u;
        // 0x19d4cc: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4D0u;
        goto label_19d4d0;
    }
    ctx->pc = 0x19D4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D4D0u);
        ctx->pc = 0x19D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4C8u;
        // 0x19d4cc: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D4C8u, 0x19D4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D4D0u;
label_19d4d0:
    // 0x19d4d0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19d4d4:
    // 0x19d4d4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x19d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_19d4d8:
    // 0x19d4d8: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x19d4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_19d4dc:
    // 0x19d4dc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x19d4dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_19d4e0:
    // 0x19d4e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19d4e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19d4e4:
    // 0x19d4e4: 0xe4540090  swc1        $f20, 0x90($v0)
    ctx->pc = 0x19d4e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
label_19d4e8:
    // 0x19d4e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19d4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19d4ec:
    // 0x19d4ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19d4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19d4f0:
    // 0x19d4f0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19d4f4:
    // 0x19d4f4: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x19d4f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_19d4f8:
    // 0x19d4f8: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x19d4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19d4fc:
    // 0x19d4fc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19d500:
    // 0x19d500: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x19d500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_19d504:
    // 0x19d504: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x19d504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_19d508:
    // 0x19d508: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x19d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
label_19d50c:
    // 0x19d50c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19d510:
    if (ctx->pc == 0x19D510u) {
        ctx->pc = 0x19D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D50Cu;
        // 0x19d510: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D514u;
        goto label_19d514;
    }
    ctx->pc = 0x19D50Cu;
    {
        const bool branch_taken_0x19d50c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D50Cu;
        // 0x19d510: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d50c) {
            ctx->pc = 0x19D528u;
            goto label_19d528;
        }
    }
    ctx->pc = 0x19D514u;
label_19d514:
    // 0x19d514: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19d514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19d518:
    // 0x19d518: 0x0  nop
    ctx->pc = 0x19d518u;
    // NOP
label_19d51c:
    // 0x19d51c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19d51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19d520:
    // 0x19d520: 0x10000008  b           . + 4 + (0x8 << 2)
label_19d524:
    if (ctx->pc == 0x19D524u) {
        ctx->pc = 0x19D528u;
        goto label_19d528;
    }
    ctx->pc = 0x19D520u;
    {
        const bool branch_taken_0x19d520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d520) {
            ctx->pc = 0x19D544u;
            goto label_19d544;
        }
    }
    ctx->pc = 0x19D528u;
label_19d528:
    // 0x19d528: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19d528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19d52c:
    // 0x19d52c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19d52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19d530:
    // 0x19d530: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19d534:
    // 0x19d534: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19d534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19d538:
    // 0x19d538: 0x0  nop
    ctx->pc = 0x19d538u;
    // NOP
label_19d53c:
    // 0x19d53c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19d53cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19d540:
    // 0x19d540: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19d540u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19d544:
    // 0x19d544: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19d544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19d548:
    // 0x19d548: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19d548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19d54c:
    // 0x19d54c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d550:
    // 0x19d550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d554:
    // 0x19d554: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19d554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_19d558:
    // 0x19d558: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19d558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19d55c:
    // 0x19d55c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19d55cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19d560:
    // 0x19d560: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19d560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19d564:
    // 0x19d564: 0xc061a16  jal         func_186858
label_19d568:
    if (ctx->pc == 0x19D568u) {
        ctx->pc = 0x19D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D564u;
        // 0x19d568: 0xe60000b0  swc1        $f0, 0xB0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D56Cu;
        goto label_19d56c;
    }
    ctx->pc = 0x19D564u;
    SET_GPR_U32(ctx, 31, 0x19D56Cu);
    ctx->pc = 0x19D568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D564u;
    // 0x19d568: 0xe60000b0  swc1        $f0, 0xB0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19D564u, 0x19D56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D56Cu;
label_19d56c:
    // 0x19d56c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d570:
    // 0x19d570: 0xc06ee66  jal         func_1BB998
label_19d574:
    if (ctx->pc == 0x19D574u) {
        ctx->pc = 0x19D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D570u;
        // 0x19d574: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D578u;
        goto label_19d578;
    }
    ctx->pc = 0x19D570u;
    SET_GPR_U32(ctx, 31, 0x19D578u);
    ctx->pc = 0x19D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D570u;
    // 0x19d574: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x19D570u, 0x19D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D578u;
label_19d578:
    // 0x19d578: 0xc061a16  jal         func_186858
label_19d57c:
    if (ctx->pc == 0x19D57Cu) {
        ctx->pc = 0x19D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D578u;
        // 0x19d57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D580u;
        goto label_19d580;
    }
    ctx->pc = 0x19D578u;
    SET_GPR_U32(ctx, 31, 0x19D580u);
    ctx->pc = 0x19D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D578u;
    // 0x19d57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19D578u, 0x19D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D580u;
label_19d580:
    // 0x19d580: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d584:
    // 0x19d584: 0xc06eebe  jal         func_1BBAF8
label_19d588:
    if (ctx->pc == 0x19D588u) {
        ctx->pc = 0x19D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D584u;
        // 0x19d588: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D58Cu;
        goto label_19d58c;
    }
    ctx->pc = 0x19D584u;
    SET_GPR_U32(ctx, 31, 0x19D58Cu);
    ctx->pc = 0x19D588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D584u;
    // 0x19d588: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x19D584u, 0x19D58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D58Cu;
label_19d58c:
    // 0x19d58c: 0xc061a26  jal         func_186898
label_19d590:
    if (ctx->pc == 0x19D590u) {
        ctx->pc = 0x19D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D58Cu;
        // 0x19d590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D594u;
        goto label_19d594;
    }
    ctx->pc = 0x19D58Cu;
    SET_GPR_U32(ctx, 31, 0x19D594u);
    ctx->pc = 0x19D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D58Cu;
    // 0x19d590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19D58Cu, 0x19D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D594u;
label_19d594:
    // 0x19d594: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x19d594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d598:
    // 0x19d598: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x19d598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
label_19d59c:
    // 0x19d59c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d5a0:
    // 0x19d5a0: 0x0  nop
    ctx->pc = 0x19d5a0u;
    // NOP
label_19d5a4:
    // 0x19d5a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19d5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d5a8:
    // 0x19d5a8: 0x0  nop
    ctx->pc = 0x19d5a8u;
    // NOP
label_19d5ac:
    // 0x19d5ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_19d5b0:
    if (ctx->pc == 0x19D5B0u) {
        ctx->pc = 0x19D5B4u;
        goto label_19d5b4;
    }
    ctx->pc = 0x19D5ACu;
    {
        const bool branch_taken_0x19d5ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d5ac) {
            ctx->pc = 0x19D5C8u;
            goto label_19d5c8;
        }
    }
    ctx->pc = 0x19D5B4u;
label_19d5b4:
    // 0x19d5b4: 0xc061a16  jal         func_186858
label_19d5b8:
    if (ctx->pc == 0x19D5B8u) {
        ctx->pc = 0x19D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5B4u;
        // 0x19d5b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D5BCu;
        goto label_19d5bc;
    }
    ctx->pc = 0x19D5B4u;
    SET_GPR_U32(ctx, 31, 0x19D5BCu);
    ctx->pc = 0x19D5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D5B4u;
    // 0x19d5b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19D5B4u, 0x19D5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D5BCu;
label_19d5bc:
    // 0x19d5bc: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x19d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_19d5c0:
    // 0x19d5c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_19d5c4:
    if (ctx->pc == 0x19D5C4u) {
        ctx->pc = 0x19D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5C0u;
        // 0x19d5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D5C8u;
        goto label_19d5c8;
    }
    ctx->pc = 0x19D5C0u;
    {
        const bool branch_taken_0x19d5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5C0u;
        // 0x19d5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d5c0) {
            ctx->pc = 0x19D5DCu;
            goto label_19d5dc;
        }
    }
    ctx->pc = 0x19D5C8u;
label_19d5c8:
    // 0x19d5c8: 0xc061a16  jal         func_186858
label_19d5cc:
    if (ctx->pc == 0x19D5CCu) {
        ctx->pc = 0x19D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5C8u;
        // 0x19d5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D5D0u;
        goto label_19d5d0;
    }
    ctx->pc = 0x19D5C8u;
    SET_GPR_U32(ctx, 31, 0x19D5D0u);
    ctx->pc = 0x19D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D5C8u;
    // 0x19d5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19D5C8u, 0x19D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D5D0u;
label_19d5d0:
    // 0x19d5d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d5d4:
    // 0x19d5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d5d8:
    // 0x19d5d8: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x19d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_19d5dc:
    // 0x19d5dc: 0xc061a16  jal         func_186858
label_19d5e0:
    if (ctx->pc == 0x19D5E0u) {
        ctx->pc = 0x19D5E4u;
        goto label_19d5e4;
    }
    ctx->pc = 0x19D5DCu;
    SET_GPR_U32(ctx, 31, 0x19D5E4u);
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19D5DCu, 0x19D5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D5E4u;
label_19d5e4:
    // 0x19d5e4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19d5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19d5e8:
    // 0x19d5e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d5ec:
    // 0x19d5ec: 0x0  nop
    ctx->pc = 0x19d5ecu;
    // NOP
label_19d5f0:
    // 0x19d5f0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19d5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_19d5f4:
    // 0x19d5f4: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x19d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_19d5f8:
    // 0x19d5f8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19d5fc:
    if (ctx->pc == 0x19D5FCu) {
        ctx->pc = 0x19D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5F8u;
        // 0x19d5fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D600u;
        goto label_19d600;
    }
    ctx->pc = 0x19D5F8u;
    {
        const bool branch_taken_0x19d5f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5F8u;
        // 0x19d5fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d5f8) {
            ctx->pc = 0x19D614u;
            goto label_19d614;
        }
    }
    ctx->pc = 0x19D600u;
label_19d600:
    // 0x19d600: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19d604:
    // 0x19d604: 0x0  nop
    ctx->pc = 0x19d604u;
    // NOP
label_19d608:
    // 0x19d608: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19d60c:
    // 0x19d60c: 0x10000007  b           . + 4 + (0x7 << 2)
label_19d610:
    if (ctx->pc == 0x19D610u) {
        ctx->pc = 0x19D614u;
        goto label_19d614;
    }
    ctx->pc = 0x19D60Cu;
    {
        const bool branch_taken_0x19d60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d60c) {
            ctx->pc = 0x19D62Cu;
            goto label_19d62c;
        }
    }
    ctx->pc = 0x19D614u;
label_19d614:
    // 0x19d614: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19d614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19d618:
    // 0x19d618: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19d61c:
    // 0x19d61c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19d620:
    // 0x19d620: 0x0  nop
    ctx->pc = 0x19d620u;
    // NOP
label_19d624:
    // 0x19d624: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19d628:
    // 0x19d628: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19d628u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19d62c:
    // 0x19d62c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19d62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19d630:
    // 0x19d630: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19d630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19d634:
    // 0x19d634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d638:
    // 0x19d638: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19d63c:
    // 0x19d63c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19d63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19d640:
    // 0x19d640: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19d640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19d644:
    // 0x19d644: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19d644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_19d648:
    // 0x19d648: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19d648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19d64c:
    // 0x19d64c: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x19d64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
label_19d650:
    // 0x19d650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d654:
    // 0x19d654: 0x3e00008  jr          $ra
label_19d658:
    if (ctx->pc == 0x19D658u) {
        ctx->pc = 0x19D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D654u;
        // 0x19d658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D65Cu;
        goto label_19d65c;
    }
    ctx->pc = 0x19D654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D654u;
        // 0x19d658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D65Cu;
label_19d65c:
    // 0x19d65c: 0x0  nop
    ctx->pc = 0x19d65cu;
    // NOP
    ctx->pc = 0x19d660u;
}
