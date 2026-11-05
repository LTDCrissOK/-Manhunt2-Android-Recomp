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

// Function: sub_0018D330
// Address: 0x18d330 - 0x18d640
void sub_0018D330_0x18d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D330_0x18d330");
#endif

    switch (ctx->pc) {
        case 0x18d330u: goto label_18d330;
        case 0x18d334u: goto label_18d334;
        case 0x18d338u: goto label_18d338;
        case 0x18d33cu: goto label_18d33c;
        case 0x18d340u: goto label_18d340;
        case 0x18d344u: goto label_18d344;
        case 0x18d348u: goto label_18d348;
        case 0x18d34cu: goto label_18d34c;
        case 0x18d350u: goto label_18d350;
        case 0x18d354u: goto label_18d354;
        case 0x18d358u: goto label_18d358;
        case 0x18d35cu: goto label_18d35c;
        case 0x18d360u: goto label_18d360;
        case 0x18d364u: goto label_18d364;
        case 0x18d368u: goto label_18d368;
        case 0x18d36cu: goto label_18d36c;
        case 0x18d370u: goto label_18d370;
        case 0x18d374u: goto label_18d374;
        case 0x18d378u: goto label_18d378;
        case 0x18d37cu: goto label_18d37c;
        case 0x18d380u: goto label_18d380;
        case 0x18d384u: goto label_18d384;
        case 0x18d388u: goto label_18d388;
        case 0x18d38cu: goto label_18d38c;
        case 0x18d390u: goto label_18d390;
        case 0x18d394u: goto label_18d394;
        case 0x18d398u: goto label_18d398;
        case 0x18d39cu: goto label_18d39c;
        case 0x18d3a0u: goto label_18d3a0;
        case 0x18d3a4u: goto label_18d3a4;
        case 0x18d3a8u: goto label_18d3a8;
        case 0x18d3acu: goto label_18d3ac;
        case 0x18d3b0u: goto label_18d3b0;
        case 0x18d3b4u: goto label_18d3b4;
        case 0x18d3b8u: goto label_18d3b8;
        case 0x18d3bcu: goto label_18d3bc;
        case 0x18d3c0u: goto label_18d3c0;
        case 0x18d3c4u: goto label_18d3c4;
        case 0x18d3c8u: goto label_18d3c8;
        case 0x18d3ccu: goto label_18d3cc;
        case 0x18d3d0u: goto label_18d3d0;
        case 0x18d3d4u: goto label_18d3d4;
        case 0x18d3d8u: goto label_18d3d8;
        case 0x18d3dcu: goto label_18d3dc;
        case 0x18d3e0u: goto label_18d3e0;
        case 0x18d3e4u: goto label_18d3e4;
        case 0x18d3e8u: goto label_18d3e8;
        case 0x18d3ecu: goto label_18d3ec;
        case 0x18d3f0u: goto label_18d3f0;
        case 0x18d3f4u: goto label_18d3f4;
        case 0x18d3f8u: goto label_18d3f8;
        case 0x18d3fcu: goto label_18d3fc;
        case 0x18d400u: goto label_18d400;
        case 0x18d404u: goto label_18d404;
        case 0x18d408u: goto label_18d408;
        case 0x18d40cu: goto label_18d40c;
        case 0x18d410u: goto label_18d410;
        case 0x18d414u: goto label_18d414;
        case 0x18d418u: goto label_18d418;
        case 0x18d41cu: goto label_18d41c;
        case 0x18d420u: goto label_18d420;
        case 0x18d424u: goto label_18d424;
        case 0x18d428u: goto label_18d428;
        case 0x18d42cu: goto label_18d42c;
        case 0x18d430u: goto label_18d430;
        case 0x18d434u: goto label_18d434;
        case 0x18d438u: goto label_18d438;
        case 0x18d43cu: goto label_18d43c;
        case 0x18d440u: goto label_18d440;
        case 0x18d444u: goto label_18d444;
        case 0x18d448u: goto label_18d448;
        case 0x18d44cu: goto label_18d44c;
        case 0x18d450u: goto label_18d450;
        case 0x18d454u: goto label_18d454;
        case 0x18d458u: goto label_18d458;
        case 0x18d45cu: goto label_18d45c;
        case 0x18d460u: goto label_18d460;
        case 0x18d464u: goto label_18d464;
        case 0x18d468u: goto label_18d468;
        case 0x18d46cu: goto label_18d46c;
        case 0x18d470u: goto label_18d470;
        case 0x18d474u: goto label_18d474;
        case 0x18d478u: goto label_18d478;
        case 0x18d47cu: goto label_18d47c;
        case 0x18d480u: goto label_18d480;
        case 0x18d484u: goto label_18d484;
        case 0x18d488u: goto label_18d488;
        case 0x18d48cu: goto label_18d48c;
        case 0x18d490u: goto label_18d490;
        case 0x18d494u: goto label_18d494;
        case 0x18d498u: goto label_18d498;
        case 0x18d49cu: goto label_18d49c;
        case 0x18d4a0u: goto label_18d4a0;
        case 0x18d4a4u: goto label_18d4a4;
        case 0x18d4a8u: goto label_18d4a8;
        case 0x18d4acu: goto label_18d4ac;
        case 0x18d4b0u: goto label_18d4b0;
        case 0x18d4b4u: goto label_18d4b4;
        case 0x18d4b8u: goto label_18d4b8;
        case 0x18d4bcu: goto label_18d4bc;
        case 0x18d4c0u: goto label_18d4c0;
        case 0x18d4c4u: goto label_18d4c4;
        case 0x18d4c8u: goto label_18d4c8;
        case 0x18d4ccu: goto label_18d4cc;
        case 0x18d4d0u: goto label_18d4d0;
        case 0x18d4d4u: goto label_18d4d4;
        case 0x18d4d8u: goto label_18d4d8;
        case 0x18d4dcu: goto label_18d4dc;
        case 0x18d4e0u: goto label_18d4e0;
        case 0x18d4e4u: goto label_18d4e4;
        case 0x18d4e8u: goto label_18d4e8;
        case 0x18d4ecu: goto label_18d4ec;
        case 0x18d4f0u: goto label_18d4f0;
        case 0x18d4f4u: goto label_18d4f4;
        case 0x18d4f8u: goto label_18d4f8;
        case 0x18d4fcu: goto label_18d4fc;
        case 0x18d500u: goto label_18d500;
        case 0x18d504u: goto label_18d504;
        case 0x18d508u: goto label_18d508;
        case 0x18d50cu: goto label_18d50c;
        case 0x18d510u: goto label_18d510;
        case 0x18d514u: goto label_18d514;
        case 0x18d518u: goto label_18d518;
        case 0x18d51cu: goto label_18d51c;
        case 0x18d520u: goto label_18d520;
        case 0x18d524u: goto label_18d524;
        case 0x18d528u: goto label_18d528;
        case 0x18d52cu: goto label_18d52c;
        case 0x18d530u: goto label_18d530;
        case 0x18d534u: goto label_18d534;
        case 0x18d538u: goto label_18d538;
        case 0x18d53cu: goto label_18d53c;
        case 0x18d540u: goto label_18d540;
        case 0x18d544u: goto label_18d544;
        case 0x18d548u: goto label_18d548;
        case 0x18d54cu: goto label_18d54c;
        case 0x18d550u: goto label_18d550;
        case 0x18d554u: goto label_18d554;
        case 0x18d558u: goto label_18d558;
        case 0x18d55cu: goto label_18d55c;
        case 0x18d560u: goto label_18d560;
        case 0x18d564u: goto label_18d564;
        case 0x18d568u: goto label_18d568;
        case 0x18d56cu: goto label_18d56c;
        case 0x18d570u: goto label_18d570;
        case 0x18d574u: goto label_18d574;
        case 0x18d578u: goto label_18d578;
        case 0x18d57cu: goto label_18d57c;
        case 0x18d580u: goto label_18d580;
        case 0x18d584u: goto label_18d584;
        case 0x18d588u: goto label_18d588;
        case 0x18d58cu: goto label_18d58c;
        case 0x18d590u: goto label_18d590;
        case 0x18d594u: goto label_18d594;
        case 0x18d598u: goto label_18d598;
        case 0x18d59cu: goto label_18d59c;
        case 0x18d5a0u: goto label_18d5a0;
        case 0x18d5a4u: goto label_18d5a4;
        case 0x18d5a8u: goto label_18d5a8;
        case 0x18d5acu: goto label_18d5ac;
        case 0x18d5b0u: goto label_18d5b0;
        case 0x18d5b4u: goto label_18d5b4;
        case 0x18d5b8u: goto label_18d5b8;
        case 0x18d5bcu: goto label_18d5bc;
        case 0x18d5c0u: goto label_18d5c0;
        case 0x18d5c4u: goto label_18d5c4;
        case 0x18d5c8u: goto label_18d5c8;
        case 0x18d5ccu: goto label_18d5cc;
        case 0x18d5d0u: goto label_18d5d0;
        case 0x18d5d4u: goto label_18d5d4;
        case 0x18d5d8u: goto label_18d5d8;
        case 0x18d5dcu: goto label_18d5dc;
        case 0x18d5e0u: goto label_18d5e0;
        case 0x18d5e4u: goto label_18d5e4;
        case 0x18d5e8u: goto label_18d5e8;
        case 0x18d5ecu: goto label_18d5ec;
        case 0x18d5f0u: goto label_18d5f0;
        case 0x18d5f4u: goto label_18d5f4;
        case 0x18d5f8u: goto label_18d5f8;
        case 0x18d5fcu: goto label_18d5fc;
        case 0x18d600u: goto label_18d600;
        case 0x18d604u: goto label_18d604;
        case 0x18d608u: goto label_18d608;
        case 0x18d60cu: goto label_18d60c;
        case 0x18d610u: goto label_18d610;
        case 0x18d614u: goto label_18d614;
        case 0x18d618u: goto label_18d618;
        case 0x18d61cu: goto label_18d61c;
        case 0x18d620u: goto label_18d620;
        case 0x18d624u: goto label_18d624;
        case 0x18d628u: goto label_18d628;
        case 0x18d62cu: goto label_18d62c;
        case 0x18d630u: goto label_18d630;
        case 0x18d634u: goto label_18d634;
        case 0x18d638u: goto label_18d638;
        case 0x18d63cu: goto label_18d63c;
        default: break;
    }

    ctx->pc = 0x18d330u;

label_18d330:
    // 0x18d330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18d334:
    // 0x18d334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18d334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18d338:
    // 0x18d338: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d33c:
    // 0x18d33c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18d33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18d340:
    // 0x18d340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18d344:
    // 0x18d344: 0xc061a2e  jal         func_1868B8
label_18d348:
    if (ctx->pc == 0x18D348u) {
        ctx->pc = 0x18D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D344u;
        // 0x18d348: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D34Cu;
        goto label_18d34c;
    }
    ctx->pc = 0x18D344u;
    SET_GPR_U32(ctx, 31, 0x18D34Cu);
    ctx->pc = 0x18D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D344u;
    // 0x18d348: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18D344u, 0x18D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D34Cu;
label_18d34c:
    // 0x18d34c: 0xc061a16  jal         func_186858
label_18d350:
    if (ctx->pc == 0x18D350u) {
        ctx->pc = 0x18D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D34Cu;
        // 0x18d350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D354u;
        goto label_18d354;
    }
    ctx->pc = 0x18D34Cu;
    SET_GPR_U32(ctx, 31, 0x18D354u);
    ctx->pc = 0x18D350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D34Cu;
    // 0x18d350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D34Cu, 0x18D354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D354u;
label_18d354:
    // 0x18d354: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x18d354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_18d358:
    // 0x18d358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d35c:
    // 0x18d35c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d360:
    // 0x18d360: 0xc061a12  jal         func_186848
label_18d364:
    if (ctx->pc == 0x18D364u) {
        ctx->pc = 0x18D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D360u;
        // 0x18d364: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D368u;
        goto label_18d368;
    }
    ctx->pc = 0x18D360u;
    SET_GPR_U32(ctx, 31, 0x18D368u);
    ctx->pc = 0x18D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D360u;
    // 0x18d364: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18D360u, 0x18D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D368u;
label_18d368:
    // 0x18d368: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18d36c:
    // 0x18d36c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d370:
    // 0x18d370: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x18d370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
label_18d374:
    // 0x18d374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18d374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18d378:
    // 0x18d378: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x18d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_18d37c:
    // 0x18d37c: 0x40f809  jalr        $v0
label_18d380:
    if (ctx->pc == 0x18D380u) {
        ctx->pc = 0x18D384u;
        goto label_18d384;
    }
    ctx->pc = 0x18D37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D384u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D37Cu, 0x18D384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D384u;
label_18d384:
    // 0x18d384: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_18d388:
    if (ctx->pc == 0x18D388u) {
        ctx->pc = 0x18D38Cu;
        goto label_18d38c;
    }
    ctx->pc = 0x18D384u;
    {
        const bool branch_taken_0x18d384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d384) {
            ctx->pc = 0x18D3D4u;
            goto label_18d3d4;
        }
    }
    ctx->pc = 0x18D38Cu;
label_18d38c:
    // 0x18d38c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18d38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_18d390:
    // 0x18d390: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18d390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18d394:
    // 0x18d394: 0xc061a2a  jal         func_1868A8
label_18d398:
    if (ctx->pc == 0x18D398u) {
        ctx->pc = 0x18D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D394u;
        // 0x18d398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D39Cu;
        goto label_18d39c;
    }
    ctx->pc = 0x18D394u;
    SET_GPR_U32(ctx, 31, 0x18D39Cu);
    ctx->pc = 0x18D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D394u;
    // 0x18d398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D394u, 0x18D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D39Cu;
label_18d39c:
    // 0x18d39c: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x18d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18d3a0:
    // 0x18d3a0: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x18d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4076)));
label_18d3a4:
    // 0x18d3a4: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x18d3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d3a8:
    // 0x18d3a8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18d3a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d3ac:
    // 0x18d3ac: 0x0  nop
    ctx->pc = 0x18d3acu;
    // NOP
label_18d3b0:
    // 0x18d3b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_18d3b4:
    if (ctx->pc == 0x18D3B4u) {
        ctx->pc = 0x18D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3B0u;
        // 0x18d3b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3B8u;
        goto label_18d3b8;
    }
    ctx->pc = 0x18D3B0u;
    {
        const bool branch_taken_0x18d3b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3B0u;
        // 0x18d3b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3b0) {
            ctx->pc = 0x18D3BCu;
            goto label_18d3bc;
        }
    }
    ctx->pc = 0x18D3B8u;
label_18d3b8:
    // 0x18d3b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d3bc:
    // 0x18d3bc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_18d3c0:
    if (ctx->pc == 0x18D3C0u) {
        ctx->pc = 0x18D3C4u;
        goto label_18d3c4;
    }
    ctx->pc = 0x18D3BCu;
    {
        const bool branch_taken_0x18d3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d3bc) {
            ctx->pc = 0x18D3D4u;
            goto label_18d3d4;
        }
    }
    ctx->pc = 0x18D3C4u;
label_18d3c4:
    // 0x18d3c4: 0xc061a16  jal         func_186858
label_18d3c8:
    if (ctx->pc == 0x18D3C8u) {
        ctx->pc = 0x18D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3C4u;
        // 0x18d3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3CCu;
        goto label_18d3cc;
    }
    ctx->pc = 0x18D3C4u;
    SET_GPR_U32(ctx, 31, 0x18D3CCu);
    ctx->pc = 0x18D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3C4u;
    // 0x18d3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D3C4u, 0x18D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D3CCu;
label_18d3cc:
    // 0x18d3cc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_18d3d0:
    if (ctx->pc == 0x18D3D0u) {
        ctx->pc = 0x18D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3CCu;
        // 0x18d3d0: 0xe4540028  swc1        $f20, 0x28($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3D4u;
        goto label_18d3d4;
    }
    ctx->pc = 0x18D3CCu;
    {
        const bool branch_taken_0x18d3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3CCu;
        // 0x18d3d0: 0xe4540028  swc1        $f20, 0x28($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3cc) {
            ctx->pc = 0x18D44Cu;
            goto label_18d44c;
        }
    }
    ctx->pc = 0x18D3D4u;
label_18d3d4:
    // 0x18d3d4: 0xc061a12  jal         func_186848
label_18d3d8:
    if (ctx->pc == 0x18D3D8u) {
        ctx->pc = 0x18D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3D4u;
        // 0x18d3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3DCu;
        goto label_18d3dc;
    }
    ctx->pc = 0x18D3D4u;
    SET_GPR_U32(ctx, 31, 0x18D3DCu);
    ctx->pc = 0x18D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3D4u;
    // 0x18d3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18D3D4u, 0x18D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D3DCu;
label_18d3dc:
    // 0x18d3dc: 0xc4410290  lwc1        $f1, 0x290($v0)
    ctx->pc = 0x18d3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d3e0:
    // 0x18d3e0: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x18d3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
label_18d3e4:
    // 0x18d3e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d3e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d3e8:
    // 0x18d3e8: 0x0  nop
    ctx->pc = 0x18d3e8u;
    // NOP
label_18d3ec:
    // 0x18d3ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18d3ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d3f0:
    // 0x18d3f0: 0x0  nop
    ctx->pc = 0x18d3f0u;
    // NOP
label_18d3f4:
    // 0x18d3f4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_18d3f8:
    if (ctx->pc == 0x18D3F8u) {
        ctx->pc = 0x18D3FCu;
        goto label_18d3fc;
    }
    ctx->pc = 0x18D3F4u;
    {
        const bool branch_taken_0x18d3f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d3f4) {
            ctx->pc = 0x18D44Cu;
            goto label_18d44c;
        }
    }
    ctx->pc = 0x18D3FCu;
label_18d3fc:
    // 0x18d3fc: 0xc061a2a  jal         func_1868A8
label_18d400:
    if (ctx->pc == 0x18D400u) {
        ctx->pc = 0x18D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3FCu;
        // 0x18d400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D404u;
        goto label_18d404;
    }
    ctx->pc = 0x18D3FCu;
    SET_GPR_U32(ctx, 31, 0x18D404u);
    ctx->pc = 0x18D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3FCu;
    // 0x18d400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D3FCu, 0x18D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D404u;
label_18d404:
    // 0x18d404: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x18d404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18d408:
    // 0x18d408: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x18d408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_18d40c:
    // 0x18d40c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18d40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d410:
    // 0x18d410: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x18d410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4076)));
label_18d414:
    // 0x18d414: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x18d414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d418:
    // 0x18d418: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x18d418u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d41c:
    // 0x18d41c: 0x0  nop
    ctx->pc = 0x18d41cu;
    // NOP
label_18d420:
    // 0x18d420: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_18d424:
    if (ctx->pc == 0x18D424u) {
        ctx->pc = 0x18D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D420u;
        // 0x18d424: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D428u;
        goto label_18d428;
    }
    ctx->pc = 0x18D420u;
    {
        const bool branch_taken_0x18d420 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D420u;
        // 0x18d424: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d420) {
            ctx->pc = 0x18D42Cu;
            goto label_18d42c;
        }
    }
    ctx->pc = 0x18D428u;
label_18d428:
    // 0x18d428: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d42c:
    // 0x18d42c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_18d430:
    if (ctx->pc == 0x18D430u) {
        ctx->pc = 0x18D434u;
        goto label_18d434;
    }
    ctx->pc = 0x18D42Cu;
    {
        const bool branch_taken_0x18d42c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d42c) {
            ctx->pc = 0x18D44Cu;
            goto label_18d44c;
        }
    }
    ctx->pc = 0x18D434u;
label_18d434:
    // 0x18d434: 0xc061a16  jal         func_186858
label_18d438:
    if (ctx->pc == 0x18D438u) {
        ctx->pc = 0x18D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D434u;
        // 0x18d438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D43Cu;
        goto label_18d43c;
    }
    ctx->pc = 0x18D434u;
    SET_GPR_U32(ctx, 31, 0x18D43Cu);
    ctx->pc = 0x18D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D434u;
    // 0x18d438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D434u, 0x18D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D43Cu;
label_18d43c:
    // 0x18d43c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18d43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_18d440:
    // 0x18d440: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d444:
    // 0x18d444: 0x0  nop
    ctx->pc = 0x18d444u;
    // NOP
label_18d448:
    // 0x18d448: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x18d448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_18d44c:
    // 0x18d44c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18d450:
    // 0x18d450: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18d450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18d454:
    // 0x18d454: 0xc061a2e  jal         func_1868B8
label_18d458:
    if (ctx->pc == 0x18D458u) {
        ctx->pc = 0x18D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D454u;
        // 0x18d458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D45Cu;
        goto label_18d45c;
    }
    ctx->pc = 0x18D454u;
    SET_GPR_U32(ctx, 31, 0x18D45Cu);
    ctx->pc = 0x18D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D454u;
    // 0x18d458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18D454u, 0x18D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D45Cu;
label_18d45c:
    // 0x18d45c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x18d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_18d460:
    // 0x18d460: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18d464:
    // 0x18d464: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_18d468:
    if (ctx->pc == 0x18D468u) {
        ctx->pc = 0x18D46Cu;
        goto label_18d46c;
    }
    ctx->pc = 0x18D464u;
    {
        const bool branch_taken_0x18d464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d464) {
            ctx->pc = 0x18D4A0u;
            goto label_18d4a0;
        }
    }
    ctx->pc = 0x18D46Cu;
label_18d46c:
    // 0x18d46c: 0x3c01402c  lui         $at, 0x402C
    ctx->pc = 0x18d46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16428 << 16));
label_18d470:
    // 0x18d470: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18d470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_18d474:
    // 0x18d474: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18d474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18d478:
    // 0x18d478: 0xc061a16  jal         func_186858
label_18d47c:
    if (ctx->pc == 0x18D47Cu) {
        ctx->pc = 0x18D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D478u;
        // 0x18d47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D480u;
        goto label_18d480;
    }
    ctx->pc = 0x18D478u;
    SET_GPR_U32(ctx, 31, 0x18D480u);
    ctx->pc = 0x18D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D478u;
    // 0x18d47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D478u, 0x18D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D480u;
label_18d480:
    // 0x18d480: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x18d480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
label_18d484:
    // 0x18d484: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18d484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_18d488:
    // 0x18d488: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18d488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18d48c:
    // 0x18d48c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d490:
    // 0x18d490: 0xc06ee7e  jal         func_1BB9F8
label_18d494:
    if (ctx->pc == 0x18D494u) {
        ctx->pc = 0x18D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D490u;
        // 0x18d494: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D498u;
        goto label_18d498;
    }
    ctx->pc = 0x18D490u;
    SET_GPR_U32(ctx, 31, 0x18D498u);
    ctx->pc = 0x18D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D490u;
    // 0x18d494: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9F8u, 0x18D490u, 0x18D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D498u;
label_18d498:
    // 0x18d498: 0x10000006  b           . + 4 + (0x6 << 2)
label_18d49c:
    if (ctx->pc == 0x18D49Cu) {
        ctx->pc = 0x18D4A0u;
        goto label_18d4a0;
    }
    ctx->pc = 0x18D498u;
    {
        const bool branch_taken_0x18d498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d498) {
            ctx->pc = 0x18D4B4u;
            goto label_18d4b4;
        }
    }
    ctx->pc = 0x18D4A0u;
label_18d4a0:
    // 0x18d4a0: 0xc061a16  jal         func_186858
label_18d4a4:
    if (ctx->pc == 0x18D4A4u) {
        ctx->pc = 0x18D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4A0u;
        // 0x18d4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4A8u;
        goto label_18d4a8;
    }
    ctx->pc = 0x18D4A0u;
    SET_GPR_U32(ctx, 31, 0x18D4A8u);
    ctx->pc = 0x18D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4A0u;
    // 0x18d4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D4A0u, 0x18D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4A8u;
label_18d4a8:
    // 0x18d4a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d4ac:
    // 0x18d4ac: 0xc06ee66  jal         func_1BB998
label_18d4b0:
    if (ctx->pc == 0x18D4B0u) {
        ctx->pc = 0x18D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4ACu;
        // 0x18d4b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4B4u;
        goto label_18d4b4;
    }
    ctx->pc = 0x18D4ACu;
    SET_GPR_U32(ctx, 31, 0x18D4B4u);
    ctx->pc = 0x18D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4ACu;
    // 0x18d4b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x18D4ACu, 0x18D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4B4u;
label_18d4b4:
    // 0x18d4b4: 0xc061a16  jal         func_186858
label_18d4b8:
    if (ctx->pc == 0x18D4B8u) {
        ctx->pc = 0x18D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4B4u;
        // 0x18d4b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4BCu;
        goto label_18d4bc;
    }
    ctx->pc = 0x18D4B4u;
    SET_GPR_U32(ctx, 31, 0x18D4BCu);
    ctx->pc = 0x18D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4B4u;
    // 0x18d4b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D4B4u, 0x18D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4BCu;
label_18d4bc:
    // 0x18d4bc: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x18d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d4c0:
    // 0x18d4c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18d4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_18d4c4:
    // 0x18d4c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d4c8:
    // 0x18d4c8: 0x0  nop
    ctx->pc = 0x18d4c8u;
    // NOP
label_18d4cc:
    // 0x18d4cc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18d4ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d4d0:
    // 0x18d4d0: 0x0  nop
    ctx->pc = 0x18d4d0u;
    // NOP
label_18d4d4:
    // 0x18d4d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_18d4d8:
    if (ctx->pc == 0x18D4D8u) {
        ctx->pc = 0x18D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4D4u;
        // 0x18d4d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4DCu;
        goto label_18d4dc;
    }
    ctx->pc = 0x18D4D4u;
    {
        const bool branch_taken_0x18d4d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4D4u;
        // 0x18d4d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4d4) {
            ctx->pc = 0x18D4E0u;
            goto label_18d4e0;
        }
    }
    ctx->pc = 0x18D4DCu;
label_18d4dc:
    // 0x18d4dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18d4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d4e0:
    // 0x18d4e0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_18d4e4:
    if (ctx->pc == 0x18D4E4u) {
        ctx->pc = 0x18D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4E0u;
        // 0x18d4e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4E8u;
        goto label_18d4e8;
    }
    ctx->pc = 0x18D4E0u;
    {
        const bool branch_taken_0x18d4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4E0u;
        // 0x18d4e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4e0) {
            ctx->pc = 0x18D628u;
            goto label_18d628;
        }
    }
    ctx->pc = 0x18D4E8u;
label_18d4e8:
    // 0x18d4e8: 0xc061a12  jal         func_186848
label_18d4ec:
    if (ctx->pc == 0x18D4ECu) {
        ctx->pc = 0x18D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4E8u;
        // 0x18d4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4F0u;
        goto label_18d4f0;
    }
    ctx->pc = 0x18D4E8u;
    SET_GPR_U32(ctx, 31, 0x18D4F0u);
    ctx->pc = 0x18D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4E8u;
    // 0x18d4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18D4E8u, 0x18D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4F0u;
label_18d4f0:
    // 0x18d4f0: 0xc4400290  lwc1        $f0, 0x290($v0)
    ctx->pc = 0x18d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d4f4:
    // 0x18d4f4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18d4f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d4f8:
    // 0x18d4f8: 0x0  nop
    ctx->pc = 0x18d4f8u;
    // NOP
label_18d4fc:
    // 0x18d4fc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_18d500:
    if (ctx->pc == 0x18D500u) {
        ctx->pc = 0x18D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4FCu;
        // 0x18d500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D504u;
        goto label_18d504;
    }
    ctx->pc = 0x18D4FCu;
    {
        const bool branch_taken_0x18d4fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4FCu;
        // 0x18d500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4fc) {
            ctx->pc = 0x18D538u;
            goto label_18d538;
        }
    }
    ctx->pc = 0x18D504u;
label_18d504:
    // 0x18d504: 0xc061a16  jal         func_186858
label_18d508:
    if (ctx->pc == 0x18D508u) {
        ctx->pc = 0x18D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D504u;
        // 0x18d508: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D50Cu;
        goto label_18d50c;
    }
    ctx->pc = 0x18D504u;
    SET_GPR_U32(ctx, 31, 0x18D50Cu);
    ctx->pc = 0x18D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D504u;
    // 0x18d508: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D504u, 0x18D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D50Cu;
label_18d50c:
    // 0x18d50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d510:
    // 0x18d510: 0xc061a16  jal         func_186858
label_18d514:
    if (ctx->pc == 0x18D514u) {
        ctx->pc = 0x18D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D510u;
        // 0x18d514: 0xac4000b4  sw          $zero, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D518u;
        goto label_18d518;
    }
    ctx->pc = 0x18D510u;
    SET_GPR_U32(ctx, 31, 0x18D518u);
    ctx->pc = 0x18D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D510u;
    // 0x18d514: 0xac4000b4  sw          $zero, 0xB4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D510u, 0x18D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D518u;
label_18d518:
    // 0x18d518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d51c:
    // 0x18d51c: 0xc061a2a  jal         func_1868A8
label_18d520:
    if (ctx->pc == 0x18D520u) {
        ctx->pc = 0x18D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D51Cu;
        // 0x18d520: 0xac5000b0  sw          $s0, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D524u;
        goto label_18d524;
    }
    ctx->pc = 0x18D51Cu;
    SET_GPR_U32(ctx, 31, 0x18D524u);
    ctx->pc = 0x18D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D51Cu;
    // 0x18d520: 0xac5000b0  sw          $s0, 0xB0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D51Cu, 0x18D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D524u;
label_18d524:
    // 0x18d524: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x18d524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18d528:
    // 0x18d528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d52c:
    // 0x18d52c: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x18d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4076)));
label_18d530:
    // 0x18d530: 0x10000037  b           . + 4 + (0x37 << 2)
label_18d534:
    if (ctx->pc == 0x18D534u) {
        ctx->pc = 0x18D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D530u;
        // 0x18d534: 0xac5000b4  sw          $s0, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D538u;
        goto label_18d538;
    }
    ctx->pc = 0x18D530u;
    {
        const bool branch_taken_0x18d530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D530u;
        // 0x18d534: 0xac5000b4  sw          $s0, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d530) {
            ctx->pc = 0x18D610u;
            goto label_18d610;
        }
    }
    ctx->pc = 0x18D538u;
label_18d538:
    // 0x18d538: 0xc061a2a  jal         func_1868A8
label_18d53c:
    if (ctx->pc == 0x18D53Cu) {
        ctx->pc = 0x18D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D538u;
        // 0x18d53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D540u;
        goto label_18d540;
    }
    ctx->pc = 0x18D538u;
    SET_GPR_U32(ctx, 31, 0x18D540u);
    ctx->pc = 0x18D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D538u;
    // 0x18d53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D538u, 0x18D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D540u;
label_18d540:
    // 0x18d540: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x18d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18d544:
    // 0x18d544: 0xc0619d2  jal         func_186748
label_18d548:
    if (ctx->pc == 0x18D548u) {
        ctx->pc = 0x18D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D544u;
        // 0x18d548: 0x8c640ff4  lw          $a0, 0xFF4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D54Cu;
        goto label_18d54c;
    }
    ctx->pc = 0x18D544u;
    SET_GPR_U32(ctx, 31, 0x18D54Cu);
    ctx->pc = 0x18D548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D544u;
    // 0x18d548: 0x8c640ff4  lw          $a0, 0xFF4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x18D544u, 0x18D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D54Cu;
label_18d54c:
    // 0x18d54c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_18d550:
    if (ctx->pc == 0x18D550u) {
        ctx->pc = 0x18D554u;
        goto label_18d554;
    }
    ctx->pc = 0x18D54Cu;
    {
        const bool branch_taken_0x18d54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d54c) {
            ctx->pc = 0x18D58Cu;
            goto label_18d58c;
        }
    }
    ctx->pc = 0x18D554u;
label_18d554:
    // 0x18d554: 0xc061a22  jal         func_186888
label_18d558:
    if (ctx->pc == 0x18D558u) {
        ctx->pc = 0x18D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D554u;
        // 0x18d558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D55Cu;
        goto label_18d55c;
    }
    ctx->pc = 0x18D554u;
    SET_GPR_U32(ctx, 31, 0x18D55Cu);
    ctx->pc = 0x18D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D554u;
    // 0x18d558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186888u, 0x18D554u, 0x18D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D55Cu;
label_18d55c:
    // 0x18d55c: 0xc0619d2  jal         func_186748
label_18d560:
    if (ctx->pc == 0x18D560u) {
        ctx->pc = 0x18D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D55Cu;
        // 0x18d560: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D564u;
        goto label_18d564;
    }
    ctx->pc = 0x18D55Cu;
    SET_GPR_U32(ctx, 31, 0x18D564u);
    ctx->pc = 0x18D560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D55Cu;
    // 0x18d560: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x18D55Cu, 0x18D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D564u;
label_18d564:
    // 0x18d564: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_18d568:
    if (ctx->pc == 0x18D568u) {
        ctx->pc = 0x18D56Cu;
        goto label_18d56c;
    }
    ctx->pc = 0x18D564u;
    {
        const bool branch_taken_0x18d564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d564) {
            ctx->pc = 0x18D58Cu;
            goto label_18d58c;
        }
    }
    ctx->pc = 0x18D56Cu;
label_18d56c:
    // 0x18d56c: 0xc061a16  jal         func_186858
label_18d570:
    if (ctx->pc == 0x18D570u) {
        ctx->pc = 0x18D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D56Cu;
        // 0x18d570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D574u;
        goto label_18d574;
    }
    ctx->pc = 0x18D56Cu;
    SET_GPR_U32(ctx, 31, 0x18D574u);
    ctx->pc = 0x18D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D56Cu;
    // 0x18d570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D56Cu, 0x18D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D574u;
label_18d574:
    // 0x18d574: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x18d574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
label_18d578:
    // 0x18d578: 0xc061a16  jal         func_186858
label_18d57c:
    if (ctx->pc == 0x18D57Cu) {
        ctx->pc = 0x18D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D578u;
        // 0x18d57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D580u;
        goto label_18d580;
    }
    ctx->pc = 0x18D578u;
    SET_GPR_U32(ctx, 31, 0x18D580u);
    ctx->pc = 0x18D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D578u;
    // 0x18d57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D578u, 0x18D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D580u;
label_18d580:
    // 0x18d580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d584:
    // 0x18d584: 0x1000001c  b           . + 4 + (0x1C << 2)
label_18d588:
    if (ctx->pc == 0x18D588u) {
        ctx->pc = 0x18D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D584u;
        // 0x18d588: 0xac4300b0  sw          $v1, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D58Cu;
        goto label_18d58c;
    }
    ctx->pc = 0x18D584u;
    {
        const bool branch_taken_0x18d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D584u;
        // 0x18d588: 0xac4300b0  sw          $v1, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d584) {
            ctx->pc = 0x18D5F8u;
            goto label_18d5f8;
        }
    }
    ctx->pc = 0x18D58Cu;
label_18d58c:
    // 0x18d58c: 0xc061a2a  jal         func_1868A8
label_18d590:
    if (ctx->pc == 0x18D590u) {
        ctx->pc = 0x18D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D58Cu;
        // 0x18d590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D594u;
        goto label_18d594;
    }
    ctx->pc = 0x18D58Cu;
    SET_GPR_U32(ctx, 31, 0x18D594u);
    ctx->pc = 0x18D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D58Cu;
    // 0x18d590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D58Cu, 0x18D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D594u;
label_18d594:
    // 0x18d594: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x18d594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18d598:
    // 0x18d598: 0xc0619d2  jal         func_186748
label_18d59c:
    if (ctx->pc == 0x18D59Cu) {
        ctx->pc = 0x18D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D598u;
        // 0x18d59c: 0x8c640ff4  lw          $a0, 0xFF4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5A0u;
        goto label_18d5a0;
    }
    ctx->pc = 0x18D598u;
    SET_GPR_U32(ctx, 31, 0x18D5A0u);
    ctx->pc = 0x18D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D598u;
    // 0x18d59c: 0x8c640ff4  lw          $a0, 0xFF4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x18D598u, 0x18D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5A0u;
label_18d5a0:
    // 0x18d5a0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_18d5a4:
    if (ctx->pc == 0x18D5A4u) {
        ctx->pc = 0x18D5A8u;
        goto label_18d5a8;
    }
    ctx->pc = 0x18D5A0u;
    {
        const bool branch_taken_0x18d5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d5a0) {
            ctx->pc = 0x18D5E0u;
            goto label_18d5e0;
        }
    }
    ctx->pc = 0x18D5A8u;
label_18d5a8:
    // 0x18d5a8: 0xc061a22  jal         func_186888
label_18d5ac:
    if (ctx->pc == 0x18D5ACu) {
        ctx->pc = 0x18D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5A8u;
        // 0x18d5ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5B0u;
        goto label_18d5b0;
    }
    ctx->pc = 0x18D5A8u;
    SET_GPR_U32(ctx, 31, 0x18D5B0u);
    ctx->pc = 0x18D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5A8u;
    // 0x18d5ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186888u, 0x18D5A8u, 0x18D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5B0u;
label_18d5b0:
    // 0x18d5b0: 0xc0619d2  jal         func_186748
label_18d5b4:
    if (ctx->pc == 0x18D5B4u) {
        ctx->pc = 0x18D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5B0u;
        // 0x18d5b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5B8u;
        goto label_18d5b8;
    }
    ctx->pc = 0x18D5B0u;
    SET_GPR_U32(ctx, 31, 0x18D5B8u);
    ctx->pc = 0x18D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5B0u;
    // 0x18d5b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x18D5B0u, 0x18D5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5B8u;
label_18d5b8:
    // 0x18d5b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18d5bc:
    if (ctx->pc == 0x18D5BCu) {
        ctx->pc = 0x18D5C0u;
        goto label_18d5c0;
    }
    ctx->pc = 0x18D5B8u;
    {
        const bool branch_taken_0x18d5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d5b8) {
            ctx->pc = 0x18D5E0u;
            goto label_18d5e0;
        }
    }
    ctx->pc = 0x18D5C0u;
label_18d5c0:
    // 0x18d5c0: 0xc061a16  jal         func_186858
label_18d5c4:
    if (ctx->pc == 0x18D5C4u) {
        ctx->pc = 0x18D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5C0u;
        // 0x18d5c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5C8u;
        goto label_18d5c8;
    }
    ctx->pc = 0x18D5C0u;
    SET_GPR_U32(ctx, 31, 0x18D5C8u);
    ctx->pc = 0x18D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5C0u;
    // 0x18d5c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D5C0u, 0x18D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5C8u;
label_18d5c8:
    // 0x18d5c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d5cc:
    // 0x18d5cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d5d0:
    // 0x18d5d0: 0xc061a16  jal         func_186858
label_18d5d4:
    if (ctx->pc == 0x18D5D4u) {
        ctx->pc = 0x18D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5D0u;
        // 0x18d5d4: 0xac4300b4  sw          $v1, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5D8u;
        goto label_18d5d8;
    }
    ctx->pc = 0x18D5D0u;
    SET_GPR_U32(ctx, 31, 0x18D5D8u);
    ctx->pc = 0x18D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5D0u;
    // 0x18d5d4: 0xac4300b4  sw          $v1, 0xB4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D5D0u, 0x18D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5D8u;
label_18d5d8:
    // 0x18d5d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_18d5dc:
    if (ctx->pc == 0x18D5DCu) {
        ctx->pc = 0x18D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5D8u;
        // 0x18d5dc: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5E0u;
        goto label_18d5e0;
    }
    ctx->pc = 0x18D5D8u;
    {
        const bool branch_taken_0x18d5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5D8u;
        // 0x18d5dc: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5d8) {
            ctx->pc = 0x18D5F8u;
            goto label_18d5f8;
        }
    }
    ctx->pc = 0x18D5E0u;
label_18d5e0:
    // 0x18d5e0: 0xc061a16  jal         func_186858
label_18d5e4:
    if (ctx->pc == 0x18D5E4u) {
        ctx->pc = 0x18D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5E0u;
        // 0x18d5e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5E8u;
        goto label_18d5e8;
    }
    ctx->pc = 0x18D5E0u;
    SET_GPR_U32(ctx, 31, 0x18D5E8u);
    ctx->pc = 0x18D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5E0u;
    // 0x18d5e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D5E0u, 0x18D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5E8u;
label_18d5e8:
    // 0x18d5e8: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x18d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
label_18d5ec:
    // 0x18d5ec: 0xc061a16  jal         func_186858
label_18d5f0:
    if (ctx->pc == 0x18D5F0u) {
        ctx->pc = 0x18D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5ECu;
        // 0x18d5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5F4u;
        goto label_18d5f4;
    }
    ctx->pc = 0x18D5ECu;
    SET_GPR_U32(ctx, 31, 0x18D5F4u);
    ctx->pc = 0x18D5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5ECu;
    // 0x18d5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D5ECu, 0x18D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5F4u;
label_18d5f4:
    // 0x18d5f4: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x18d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
label_18d5f8:
    // 0x18d5f8: 0xc061a2a  jal         func_1868A8
label_18d5fc:
    if (ctx->pc == 0x18D5FCu) {
        ctx->pc = 0x18D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5F8u;
        // 0x18d5fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D600u;
        goto label_18d600;
    }
    ctx->pc = 0x18D5F8u;
    SET_GPR_U32(ctx, 31, 0x18D600u);
    ctx->pc = 0x18D5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5F8u;
    // 0x18d5fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D5F8u, 0x18D600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D600u;
label_18d600:
    // 0x18d600: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x18d600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18d604:
    // 0x18d604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d608:
    // 0x18d608: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x18d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4076)));
label_18d60c:
    // 0x18d60c: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x18d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
label_18d610:
    // 0x18d610: 0xc061a2a  jal         func_1868A8
label_18d614:
    if (ctx->pc == 0x18D614u) {
        ctx->pc = 0x18D618u;
        goto label_18d618;
    }
    ctx->pc = 0x18D610u;
    SET_GPR_U32(ctx, 31, 0x18D618u);
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D610u, 0x18D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D618u;
label_18d618:
    // 0x18d618: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x18d618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18d61c:
    // 0x18d61c: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x18d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4076)));
label_18d620:
    // 0x18d620: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x18d620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
label_18d624:
    // 0x18d624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18d624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18d628:
    // 0x18d628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18d628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18d62c:
    // 0x18d62c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18d630:
    // 0x18d630: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18d634:
    // 0x18d634: 0x3e00008  jr          $ra
label_18d638:
    if (ctx->pc == 0x18D638u) {
        ctx->pc = 0x18D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D634u;
        // 0x18d638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D63Cu;
        goto label_18d63c;
    }
    ctx->pc = 0x18D634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D634u;
        // 0x18d638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D63Cu;
label_18d63c:
    // 0x18d63c: 0x0  nop
    ctx->pc = 0x18d63cu;
    // NOP
    ctx->pc = 0x18d640u;
}
