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

// Function: sub_0039D2E0
// Address: 0x39d2e0 - 0x39d5f0
void sub_0039D2E0_0x39d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D2E0_0x39d2e0");
#endif

    switch (ctx->pc) {
        case 0x39d2e0u: goto label_39d2e0;
        case 0x39d2e4u: goto label_39d2e4;
        case 0x39d2e8u: goto label_39d2e8;
        case 0x39d2ecu: goto label_39d2ec;
        case 0x39d2f0u: goto label_39d2f0;
        case 0x39d2f4u: goto label_39d2f4;
        case 0x39d2f8u: goto label_39d2f8;
        case 0x39d2fcu: goto label_39d2fc;
        case 0x39d300u: goto label_39d300;
        case 0x39d304u: goto label_39d304;
        case 0x39d308u: goto label_39d308;
        case 0x39d30cu: goto label_39d30c;
        case 0x39d310u: goto label_39d310;
        case 0x39d314u: goto label_39d314;
        case 0x39d318u: goto label_39d318;
        case 0x39d31cu: goto label_39d31c;
        case 0x39d320u: goto label_39d320;
        case 0x39d324u: goto label_39d324;
        case 0x39d328u: goto label_39d328;
        case 0x39d32cu: goto label_39d32c;
        case 0x39d330u: goto label_39d330;
        case 0x39d334u: goto label_39d334;
        case 0x39d338u: goto label_39d338;
        case 0x39d33cu: goto label_39d33c;
        case 0x39d340u: goto label_39d340;
        case 0x39d344u: goto label_39d344;
        case 0x39d348u: goto label_39d348;
        case 0x39d34cu: goto label_39d34c;
        case 0x39d350u: goto label_39d350;
        case 0x39d354u: goto label_39d354;
        case 0x39d358u: goto label_39d358;
        case 0x39d35cu: goto label_39d35c;
        case 0x39d360u: goto label_39d360;
        case 0x39d364u: goto label_39d364;
        case 0x39d368u: goto label_39d368;
        case 0x39d36cu: goto label_39d36c;
        case 0x39d370u: goto label_39d370;
        case 0x39d374u: goto label_39d374;
        case 0x39d378u: goto label_39d378;
        case 0x39d37cu: goto label_39d37c;
        case 0x39d380u: goto label_39d380;
        case 0x39d384u: goto label_39d384;
        case 0x39d388u: goto label_39d388;
        case 0x39d38cu: goto label_39d38c;
        case 0x39d390u: goto label_39d390;
        case 0x39d394u: goto label_39d394;
        case 0x39d398u: goto label_39d398;
        case 0x39d39cu: goto label_39d39c;
        case 0x39d3a0u: goto label_39d3a0;
        case 0x39d3a4u: goto label_39d3a4;
        case 0x39d3a8u: goto label_39d3a8;
        case 0x39d3acu: goto label_39d3ac;
        case 0x39d3b0u: goto label_39d3b0;
        case 0x39d3b4u: goto label_39d3b4;
        case 0x39d3b8u: goto label_39d3b8;
        case 0x39d3bcu: goto label_39d3bc;
        case 0x39d3c0u: goto label_39d3c0;
        case 0x39d3c4u: goto label_39d3c4;
        case 0x39d3c8u: goto label_39d3c8;
        case 0x39d3ccu: goto label_39d3cc;
        case 0x39d3d0u: goto label_39d3d0;
        case 0x39d3d4u: goto label_39d3d4;
        case 0x39d3d8u: goto label_39d3d8;
        case 0x39d3dcu: goto label_39d3dc;
        case 0x39d3e0u: goto label_39d3e0;
        case 0x39d3e4u: goto label_39d3e4;
        case 0x39d3e8u: goto label_39d3e8;
        case 0x39d3ecu: goto label_39d3ec;
        case 0x39d3f0u: goto label_39d3f0;
        case 0x39d3f4u: goto label_39d3f4;
        case 0x39d3f8u: goto label_39d3f8;
        case 0x39d3fcu: goto label_39d3fc;
        case 0x39d400u: goto label_39d400;
        case 0x39d404u: goto label_39d404;
        case 0x39d408u: goto label_39d408;
        case 0x39d40cu: goto label_39d40c;
        case 0x39d410u: goto label_39d410;
        case 0x39d414u: goto label_39d414;
        case 0x39d418u: goto label_39d418;
        case 0x39d41cu: goto label_39d41c;
        case 0x39d420u: goto label_39d420;
        case 0x39d424u: goto label_39d424;
        case 0x39d428u: goto label_39d428;
        case 0x39d42cu: goto label_39d42c;
        case 0x39d430u: goto label_39d430;
        case 0x39d434u: goto label_39d434;
        case 0x39d438u: goto label_39d438;
        case 0x39d43cu: goto label_39d43c;
        case 0x39d440u: goto label_39d440;
        case 0x39d444u: goto label_39d444;
        case 0x39d448u: goto label_39d448;
        case 0x39d44cu: goto label_39d44c;
        case 0x39d450u: goto label_39d450;
        case 0x39d454u: goto label_39d454;
        case 0x39d458u: goto label_39d458;
        case 0x39d45cu: goto label_39d45c;
        case 0x39d460u: goto label_39d460;
        case 0x39d464u: goto label_39d464;
        case 0x39d468u: goto label_39d468;
        case 0x39d46cu: goto label_39d46c;
        case 0x39d470u: goto label_39d470;
        case 0x39d474u: goto label_39d474;
        case 0x39d478u: goto label_39d478;
        case 0x39d47cu: goto label_39d47c;
        case 0x39d480u: goto label_39d480;
        case 0x39d484u: goto label_39d484;
        case 0x39d488u: goto label_39d488;
        case 0x39d48cu: goto label_39d48c;
        case 0x39d490u: goto label_39d490;
        case 0x39d494u: goto label_39d494;
        case 0x39d498u: goto label_39d498;
        case 0x39d49cu: goto label_39d49c;
        case 0x39d4a0u: goto label_39d4a0;
        case 0x39d4a4u: goto label_39d4a4;
        case 0x39d4a8u: goto label_39d4a8;
        case 0x39d4acu: goto label_39d4ac;
        case 0x39d4b0u: goto label_39d4b0;
        case 0x39d4b4u: goto label_39d4b4;
        case 0x39d4b8u: goto label_39d4b8;
        case 0x39d4bcu: goto label_39d4bc;
        case 0x39d4c0u: goto label_39d4c0;
        case 0x39d4c4u: goto label_39d4c4;
        case 0x39d4c8u: goto label_39d4c8;
        case 0x39d4ccu: goto label_39d4cc;
        case 0x39d4d0u: goto label_39d4d0;
        case 0x39d4d4u: goto label_39d4d4;
        case 0x39d4d8u: goto label_39d4d8;
        case 0x39d4dcu: goto label_39d4dc;
        case 0x39d4e0u: goto label_39d4e0;
        case 0x39d4e4u: goto label_39d4e4;
        case 0x39d4e8u: goto label_39d4e8;
        case 0x39d4ecu: goto label_39d4ec;
        case 0x39d4f0u: goto label_39d4f0;
        case 0x39d4f4u: goto label_39d4f4;
        case 0x39d4f8u: goto label_39d4f8;
        case 0x39d4fcu: goto label_39d4fc;
        case 0x39d500u: goto label_39d500;
        case 0x39d504u: goto label_39d504;
        case 0x39d508u: goto label_39d508;
        case 0x39d50cu: goto label_39d50c;
        case 0x39d510u: goto label_39d510;
        case 0x39d514u: goto label_39d514;
        case 0x39d518u: goto label_39d518;
        case 0x39d51cu: goto label_39d51c;
        case 0x39d520u: goto label_39d520;
        case 0x39d524u: goto label_39d524;
        case 0x39d528u: goto label_39d528;
        case 0x39d52cu: goto label_39d52c;
        case 0x39d530u: goto label_39d530;
        case 0x39d534u: goto label_39d534;
        case 0x39d538u: goto label_39d538;
        case 0x39d53cu: goto label_39d53c;
        case 0x39d540u: goto label_39d540;
        case 0x39d544u: goto label_39d544;
        case 0x39d548u: goto label_39d548;
        case 0x39d54cu: goto label_39d54c;
        case 0x39d550u: goto label_39d550;
        case 0x39d554u: goto label_39d554;
        case 0x39d558u: goto label_39d558;
        case 0x39d55cu: goto label_39d55c;
        case 0x39d560u: goto label_39d560;
        case 0x39d564u: goto label_39d564;
        case 0x39d568u: goto label_39d568;
        case 0x39d56cu: goto label_39d56c;
        case 0x39d570u: goto label_39d570;
        case 0x39d574u: goto label_39d574;
        case 0x39d578u: goto label_39d578;
        case 0x39d57cu: goto label_39d57c;
        case 0x39d580u: goto label_39d580;
        case 0x39d584u: goto label_39d584;
        case 0x39d588u: goto label_39d588;
        case 0x39d58cu: goto label_39d58c;
        case 0x39d590u: goto label_39d590;
        case 0x39d594u: goto label_39d594;
        case 0x39d598u: goto label_39d598;
        case 0x39d59cu: goto label_39d59c;
        case 0x39d5a0u: goto label_39d5a0;
        case 0x39d5a4u: goto label_39d5a4;
        case 0x39d5a8u: goto label_39d5a8;
        case 0x39d5acu: goto label_39d5ac;
        case 0x39d5b0u: goto label_39d5b0;
        case 0x39d5b4u: goto label_39d5b4;
        case 0x39d5b8u: goto label_39d5b8;
        case 0x39d5bcu: goto label_39d5bc;
        case 0x39d5c0u: goto label_39d5c0;
        case 0x39d5c4u: goto label_39d5c4;
        case 0x39d5c8u: goto label_39d5c8;
        case 0x39d5ccu: goto label_39d5cc;
        case 0x39d5d0u: goto label_39d5d0;
        case 0x39d5d4u: goto label_39d5d4;
        case 0x39d5d8u: goto label_39d5d8;
        case 0x39d5dcu: goto label_39d5dc;
        case 0x39d5e0u: goto label_39d5e0;
        case 0x39d5e4u: goto label_39d5e4;
        case 0x39d5e8u: goto label_39d5e8;
        case 0x39d5ecu: goto label_39d5ec;
        default: break;
    }

    ctx->pc = 0x39d2e0u;

label_39d2e0:
    // 0x39d2e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x39d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_39d2e4:
    // 0x39d2e4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x39d2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_39d2e8:
    // 0x39d2e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39d2e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d2ec:
    // 0x39d2ec: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x39d2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_39d2f0:
    // 0x39d2f0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x39d2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_39d2f4:
    // 0x39d2f4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x39d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_39d2f8:
    // 0x39d2f8: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x39d2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_39d2fc:
    // 0x39d2fc: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x39d2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_39d300:
    // 0x39d300: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x39d300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_39d304:
    // 0x39d304: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x39d304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_39d308:
    // 0x39d308: 0x82820098  lb          $v0, 0x98($s4)
    ctx->pc = 0x39d308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
label_39d30c:
    // 0x39d30c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x39d30cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_39d310:
    // 0x39d310: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
label_39d314:
    if (ctx->pc == 0x39D314u) {
        ctx->pc = 0x39D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D310u;
        // 0x39d314: 0x8e910014  lw          $s1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D318u;
        goto label_39d318;
    }
    ctx->pc = 0x39D310u;
    {
        const bool branch_taken_0x39d310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D310u;
        // 0x39d314: 0x8e910014  lw          $s1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d310) {
            ctx->pc = 0x39D5C4u;
            goto label_39d5c4;
        }
    }
    ctx->pc = 0x39D318u;
label_39d318:
    // 0x39d318: 0xc0ebe50  jal         func_3AF940
label_39d31c:
    if (ctx->pc == 0x39D31Cu) {
        ctx->pc = 0x39D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D318u;
        // 0x39d31c: 0xa7a00042  sh          $zero, 0x42($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D320u;
        goto label_39d320;
    }
    ctx->pc = 0x39D318u;
    SET_GPR_U32(ctx, 31, 0x39D320u);
    ctx->pc = 0x39D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D318u;
    // 0x39d31c: 0xa7a00042  sh          $zero, 0x42($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x39D318u, 0x39D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D320u;
label_39d320:
    // 0x39d320: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39d320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d324:
    // 0x39d324: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x39d324u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_39d328:
    // 0x39d328: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x39d328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39d32c:
    // 0x39d32c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d330:
    // 0x39d330: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x39d330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_39d334:
    // 0x39d334: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39d334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d338:
    // 0x39d338: 0x40f809  jalr        $v0
label_39d33c:
    if (ctx->pc == 0x39D33Cu) {
        ctx->pc = 0x39D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D338u;
        // 0x39d33c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D340u;
        goto label_39d340;
    }
    ctx->pc = 0x39D338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D340u);
        ctx->pc = 0x39D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D338u;
        // 0x39d33c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D338u, 0x39D340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D340u;
label_39d340:
    // 0x39d340: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39d340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d344:
    // 0x39d344: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x39d344u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39d348:
    // 0x39d348: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x39d348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_39d34c:
    // 0x39d34c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x39d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_39d350:
    // 0x39d350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d354:
    // 0x39d354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39d354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d358:
    // 0x39d358: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x39d358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_39d35c:
    // 0x39d35c: 0x40f809  jalr        $v0
label_39d360:
    if (ctx->pc == 0x39D360u) {
        ctx->pc = 0x39D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D35Cu;
        // 0x39d360: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D364u;
        goto label_39d364;
    }
    ctx->pc = 0x39D35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D364u);
        ctx->pc = 0x39D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D35Cu;
        // 0x39d360: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D35Cu, 0x39D364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D364u;
label_39d364:
    // 0x39d364: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x39d364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39d368:
    // 0x39d368: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39d36c:
    // 0x39d36c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x39d36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39d370:
    // 0x39d370: 0xc0ec0c6  jal         func_3B0318
label_39d374:
    if (ctx->pc == 0x39D374u) {
        ctx->pc = 0x39D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D370u;
        // 0x39d374: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D378u;
        goto label_39d378;
    }
    ctx->pc = 0x39D370u;
    SET_GPR_U32(ctx, 31, 0x39D378u);
    ctx->pc = 0x39D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D370u;
    // 0x39d374: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0318u, 0x39D370u, 0x39D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D378u;
label_39d378:
    // 0x39d378: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_39d37c:
    if (ctx->pc == 0x39D37Cu) {
        ctx->pc = 0x39D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D378u;
        // 0x39d37c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D380u;
        goto label_39d380;
    }
    ctx->pc = 0x39D378u;
    {
        const bool branch_taken_0x39d378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D378u;
        // 0x39d37c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d378) {
            ctx->pc = 0x39D3C8u;
            goto label_39d3c8;
        }
    }
    ctx->pc = 0x39D380u;
label_39d380:
    // 0x39d380: 0xc0e7278  jal         func_39C9E0
label_39d384:
    if (ctx->pc == 0x39D384u) {
        ctx->pc = 0x39D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D380u;
        // 0x39d384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D388u;
        goto label_39d388;
    }
    ctx->pc = 0x39D380u;
    SET_GPR_U32(ctx, 31, 0x39D388u);
    ctx->pc = 0x39D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D380u;
    // 0x39d384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C9E0u, 0x39D380u, 0x39D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D388u;
label_39d388:
    // 0x39d388: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39d388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d38c:
    // 0x39d38c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x39d38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39d390:
    // 0x39d390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d394:
    // 0x39d394: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39d394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39d398:
    // 0x39d398: 0x40f809  jalr        $v0
label_39d39c:
    if (ctx->pc == 0x39D39Cu) {
        ctx->pc = 0x39D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D398u;
        // 0x39d39c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D3A0u;
        goto label_39d3a0;
    }
    ctx->pc = 0x39D398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D3A0u);
        ctx->pc = 0x39D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D398u;
        // 0x39d39c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D398u, 0x39D3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D3A0u;
label_39d3a0:
    // 0x39d3a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d3a4:
    // 0x39d3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d3a8:
    // 0x39d3a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d3ac:
    // 0x39d3ac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39d3b0:
    // 0x39d3b0: 0x40f809  jalr        $v0
label_39d3b4:
    if (ctx->pc == 0x39D3B4u) {
        ctx->pc = 0x39D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3B0u;
        // 0x39d3b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D3B8u;
        goto label_39d3b8;
    }
    ctx->pc = 0x39D3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D3B8u);
        ctx->pc = 0x39D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3B0u;
        // 0x39d3b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D3B0u, 0x39D3B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D3B8u;
label_39d3b8:
    // 0x39d3b8: 0xc0ebe56  jal         func_3AF958
label_39d3bc:
    if (ctx->pc == 0x39D3BCu) {
        ctx->pc = 0x39D3C0u;
        goto label_39d3c0;
    }
    ctx->pc = 0x39D3B8u;
    SET_GPR_U32(ctx, 31, 0x39D3C0u);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x39D3B8u, 0x39D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D3C0u;
label_39d3c0:
    // 0x39d3c0: 0x10000081  b           . + 4 + (0x81 << 2)
label_39d3c4:
    if (ctx->pc == 0x39D3C4u) {
        ctx->pc = 0x39D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3C0u;
        // 0x39d3c4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D3C8u;
        goto label_39d3c8;
    }
    ctx->pc = 0x39D3C0u;
    {
        const bool branch_taken_0x39d3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3C0u;
        // 0x39d3c4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d3c0) {
            ctx->pc = 0x39D5C8u;
            goto label_39d5c8;
        }
    }
    ctx->pc = 0x39D3C8u;
label_39d3c8:
    // 0x39d3c8: 0x87b00040  lh          $s0, 0x40($sp)
    ctx->pc = 0x39d3c8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_39d3cc:
    // 0x39d3cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x39d3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39d3d0:
    // 0x39d3d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39d3d4:
    // 0x39d3d4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x39d3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39d3d8:
    // 0x39d3d8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x39d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_39d3dc:
    // 0x39d3dc: 0xc0ebeb8  jal         func_3AFAE0
label_39d3e0:
    if (ctx->pc == 0x39D3E0u) {
        ctx->pc = 0x39D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3DCu;
        // 0x39d3e0: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D3E4u;
        goto label_39d3e4;
    }
    ctx->pc = 0x39D3DCu;
    SET_GPR_U32(ctx, 31, 0x39D3E4u);
    ctx->pc = 0x39D3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D3DCu;
    // 0x39d3e0: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAE0u, 0x39D3DCu, 0x39D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D3E4u;
label_39d3e4:
    // 0x39d3e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39d3e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d3e8:
    // 0x39d3e8: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_39d3ec:
    if (ctx->pc == 0x39D3ECu) {
        ctx->pc = 0x39D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3E8u;
        // 0x39d3ec: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D3F0u;
        goto label_39d3f0;
    }
    ctx->pc = 0x39D3E8u;
    {
        const bool branch_taken_0x39d3e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3E8u;
        // 0x39d3ec: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d3e8) {
            ctx->pc = 0x39D404u;
            goto label_39d404;
        }
    }
    ctx->pc = 0x39D3F0u;
label_39d3f0:
    // 0x39d3f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x39d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39d3f4:
    // 0x39d3f4: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x39d3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_39d3f8:
    // 0x39d3f8: 0xc0ebeb8  jal         func_3AFAE0
label_39d3fc:
    if (ctx->pc == 0x39D3FCu) {
        ctx->pc = 0x39D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3F8u;
        // 0x39d3fc: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D400u;
        goto label_39d400;
    }
    ctx->pc = 0x39D3F8u;
    SET_GPR_U32(ctx, 31, 0x39D400u);
    ctx->pc = 0x39D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D3F8u;
    // 0x39d3fc: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAE0u, 0x39D3F8u, 0x39D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D400u;
label_39d400:
    // 0x39d400: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39d400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d404:
    // 0x39d404: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x39d404u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_39d408:
    // 0x39d408: 0x87b60042  lh          $s6, 0x42($sp)
    ctx->pc = 0x39d408u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
label_39d40c:
    // 0x39d40c: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
label_39d410:
    if (ctx->pc == 0x39D410u) {
        ctx->pc = 0x39D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D40Cu;
        // 0x39d410: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D414u;
        goto label_39d414;
    }
    ctx->pc = 0x39D40Cu;
    {
        const bool branch_taken_0x39d40c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D40Cu;
        // 0x39d410: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d40c) {
            ctx->pc = 0x39D468u;
            goto label_39d468;
        }
    }
    ctx->pc = 0x39D414u;
label_39d414:
    // 0x39d414: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_39d418:
    if (ctx->pc == 0x39D418u) {
        ctx->pc = 0x39D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D414u;
        // 0x39d418: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D41Cu;
        goto label_39d41c;
    }
    ctx->pc = 0x39D414u;
    {
        const bool branch_taken_0x39d414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D414u;
        // 0x39d418: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d414) {
            ctx->pc = 0x39D4D0u;
            goto label_39d4d0;
        }
    }
    ctx->pc = 0x39D41Cu;
label_39d41c:
    // 0x39d41c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d420:
    // 0x39d420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d424:
    // 0x39d424: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39d428:
    // 0x39d428: 0x40f809  jalr        $v0
label_39d42c:
    if (ctx->pc == 0x39D42Cu) {
        ctx->pc = 0x39D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D428u;
        // 0x39d42c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D430u;
        goto label_39d430;
    }
    ctx->pc = 0x39D428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D430u);
        ctx->pc = 0x39D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D428u;
        // 0x39d42c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D428u, 0x39D430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D430u;
label_39d430:
    // 0x39d430: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39d430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d434:
    // 0x39d434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d438:
    // 0x39d438: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39d438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d43c:
    // 0x39d43c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39d440:
    // 0x39d440: 0x40f809  jalr        $v0
label_39d444:
    if (ctx->pc == 0x39D444u) {
        ctx->pc = 0x39D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D440u;
        // 0x39d444: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D448u;
        goto label_39d448;
    }
    ctx->pc = 0x39D440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D448u);
        ctx->pc = 0x39D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D440u;
        // 0x39d444: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D440u, 0x39D448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D448u;
label_39d448:
    // 0x39d448: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39d448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39d44c:
    // 0x39d44c: 0xc0e7278  jal         func_39C9E0
label_39d450:
    if (ctx->pc == 0x39D450u) {
        ctx->pc = 0x39D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D44Cu;
        // 0x39d450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D454u;
        goto label_39d454;
    }
    ctx->pc = 0x39D44Cu;
    SET_GPR_U32(ctx, 31, 0x39D454u);
    ctx->pc = 0x39D450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D44Cu;
    // 0x39d450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C9E0u, 0x39D44Cu, 0x39D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D454u;
label_39d454:
    // 0x39d454: 0xc0ebe56  jal         func_3AF958
label_39d458:
    if (ctx->pc == 0x39D458u) {
        ctx->pc = 0x39D45Cu;
        goto label_39d45c;
    }
    ctx->pc = 0x39D454u;
    SET_GPR_U32(ctx, 31, 0x39D45Cu);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x39D454u, 0x39D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D45Cu;
label_39d45c:
    // 0x39d45c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_39d460:
    if (ctx->pc == 0x39D460u) {
        ctx->pc = 0x39D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D45Cu;
        // 0x39d460: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D464u;
        goto label_39d464;
    }
    ctx->pc = 0x39D45Cu;
    {
        const bool branch_taken_0x39d45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D45Cu;
        // 0x39d460: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d45c) {
            ctx->pc = 0x39D5C8u;
            goto label_39d5c8;
        }
    }
    ctx->pc = 0x39D464u;
label_39d464:
    // 0x39d464: 0x0  nop
    ctx->pc = 0x39d464u;
    // NOP
label_39d468:
    // 0x39d468: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39d468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d46c:
    // 0x39d46c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x39d46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39d470:
    // 0x39d470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d474:
    // 0x39d474: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39d474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39d478:
    // 0x39d478: 0x40f809  jalr        $v0
label_39d47c:
    if (ctx->pc == 0x39D47Cu) {
        ctx->pc = 0x39D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D478u;
        // 0x39d47c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D480u;
        goto label_39d480;
    }
    ctx->pc = 0x39D478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D480u);
        ctx->pc = 0x39D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D478u;
        // 0x39d47c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D478u, 0x39D480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D480u;
label_39d480:
    // 0x39d480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39d480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d484:
    // 0x39d484: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x39d484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39d488:
    // 0x39d488: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39d488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39d48c:
    // 0x39d48c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x39d48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39d490:
    // 0x39d490: 0xc0eb07e  jal         func_3AC1F8
label_39d494:
    if (ctx->pc == 0x39D494u) {
        ctx->pc = 0x39D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D490u;
        // 0x39d494: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D498u;
        goto label_39d498;
    }
    ctx->pc = 0x39D490u;
    SET_GPR_U32(ctx, 31, 0x39D498u);
    ctx->pc = 0x39D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D490u;
    // 0x39d494: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x39D490u, 0x39D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D498u;
label_39d498:
    // 0x39d498: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39d498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d49c:
    // 0x39d49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d4a0:
    // 0x39d4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d4a4:
    // 0x39d4a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x39d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_39d4a8:
    // 0x39d4a8: 0x40f809  jalr        $v0
label_39d4ac:
    if (ctx->pc == 0x39D4ACu) {
        ctx->pc = 0x39D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4A8u;
        // 0x39d4ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4B0u;
        goto label_39d4b0;
    }
    ctx->pc = 0x39D4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D4B0u);
        ctx->pc = 0x39D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4A8u;
        // 0x39d4ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D4A8u, 0x39D4B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D4B0u;
label_39d4b0:
    // 0x39d4b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d4b4:
    // 0x39d4b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d4b8:
    // 0x39d4b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39d4b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d4bc:
    // 0x39d4bc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39d4c0:
    // 0x39d4c0: 0x40f809  jalr        $v0
label_39d4c4:
    if (ctx->pc == 0x39D4C4u) {
        ctx->pc = 0x39D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4C0u;
        // 0x39d4c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4C8u;
        goto label_39d4c8;
    }
    ctx->pc = 0x39D4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D4C8u);
        ctx->pc = 0x39D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4C0u;
        // 0x39d4c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D4C0u, 0x39D4C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D4C8u;
label_39d4c8:
    // 0x39d4c8: 0x10000019  b           . + 4 + (0x19 << 2)
label_39d4cc:
    if (ctx->pc == 0x39D4CCu) {
        ctx->pc = 0x39D4D0u;
        goto label_39d4d0;
    }
    ctx->pc = 0x39D4C8u;
    {
        const bool branch_taken_0x39d4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d4c8) {
            ctx->pc = 0x39D530u;
            goto label_39d530;
        }
    }
    ctx->pc = 0x39D4D0u;
label_39d4d0:
    // 0x39d4d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d4d4:
    // 0x39d4d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x39d4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39d4d8:
    // 0x39d4d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d4dc:
    // 0x39d4dc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x39d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_39d4e0:
    // 0x39d4e0: 0x40f809  jalr        $v0
label_39d4e4:
    if (ctx->pc == 0x39D4E4u) {
        ctx->pc = 0x39D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4E0u;
        // 0x39d4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4E8u;
        goto label_39d4e8;
    }
    ctx->pc = 0x39D4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D4E8u);
        ctx->pc = 0x39D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4E0u;
        // 0x39d4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D4E0u, 0x39D4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D4E8u;
label_39d4e8:
    // 0x39d4e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39d4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39d4ec:
    // 0x39d4ec: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x39d4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_39d4f0:
    // 0x39d4f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x39d4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39d4f4:
    // 0x39d4f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x39d4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39d4f8:
    // 0x39d4f8: 0xc0eb07e  jal         func_3AC1F8
label_39d4fc:
    if (ctx->pc == 0x39D4FCu) {
        ctx->pc = 0x39D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4F8u;
        // 0x39d4fc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D500u;
        goto label_39d500;
    }
    ctx->pc = 0x39D4F8u;
    SET_GPR_U32(ctx, 31, 0x39D500u);
    ctx->pc = 0x39D4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D4F8u;
    // 0x39d4fc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x39D4F8u, 0x39D500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D500u;
label_39d500:
    // 0x39d500: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39d500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d504:
    // 0x39d504: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x39d504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39d508:
    // 0x39d508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d50c:
    // 0x39d50c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x39d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_39d510:
    // 0x39d510: 0x40f809  jalr        $v0
label_39d514:
    if (ctx->pc == 0x39D514u) {
        ctx->pc = 0x39D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D510u;
        // 0x39d514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D518u;
        goto label_39d518;
    }
    ctx->pc = 0x39D510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D518u);
        ctx->pc = 0x39D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D510u;
        // 0x39d514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D510u, 0x39D518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D518u;
label_39d518:
    // 0x39d518: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39d51c:
    // 0x39d51c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d520:
    // 0x39d520: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39d520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d524:
    // 0x39d524: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39d524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39d528:
    // 0x39d528: 0x40f809  jalr        $v0
label_39d52c:
    if (ctx->pc == 0x39D52Cu) {
        ctx->pc = 0x39D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D528u;
        // 0x39d52c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D530u;
        goto label_39d530;
    }
    ctx->pc = 0x39D528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D530u);
        ctx->pc = 0x39D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D528u;
        // 0x39d52c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D528u, 0x39D530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D530u;
label_39d530:
    // 0x39d530: 0xc0ebe56  jal         func_3AF958
label_39d534:
    if (ctx->pc == 0x39D534u) {
        ctx->pc = 0x39D538u;
        goto label_39d538;
    }
    ctx->pc = 0x39D530u;
    SET_GPR_U32(ctx, 31, 0x39D538u);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x39D530u, 0x39D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D538u;
label_39d538:
    // 0x39d538: 0xc0e6436  jal         func_3990D8
label_39d53c:
    if (ctx->pc == 0x39D53Cu) {
        ctx->pc = 0x39D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D538u;
        // 0x39d53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D540u;
        goto label_39d540;
    }
    ctx->pc = 0x39D538u;
    SET_GPR_U32(ctx, 31, 0x39D540u);
    ctx->pc = 0x39D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D538u;
    // 0x39d53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3990D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3990D8u, 0x39D538u, 0x39D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D540u;
label_39d540:
    // 0x39d540: 0x8e8300a4  lw          $v1, 0xA4($s4)
    ctx->pc = 0x39d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_39d544:
    // 0x39d544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d548:
    // 0x39d548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39d548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39d54c:
    // 0x39d54c: 0xc0e606c  jal         func_3981B0
label_39d550:
    if (ctx->pc == 0x39D550u) {
        ctx->pc = 0x39D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D54Cu;
        // 0x39d550: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D554u;
        goto label_39d554;
    }
    ctx->pc = 0x39D54Cu;
    SET_GPR_U32(ctx, 31, 0x39D554u);
    ctx->pc = 0x39D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D54Cu;
    // 0x39d550: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3981B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3981B0u, 0x39D54Cu, 0x39D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D554u;
label_39d554:
    // 0x39d554: 0xc0e6060  jal         func_398180
label_39d558:
    if (ctx->pc == 0x39D558u) {
        ctx->pc = 0x39D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D554u;
        // 0x39d558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D55Cu;
        goto label_39d55c;
    }
    ctx->pc = 0x39D554u;
    SET_GPR_U32(ctx, 31, 0x39D55Cu);
    ctx->pc = 0x39D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D554u;
    // 0x39d558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398180u, 0x39D554u, 0x39D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D55Cu;
label_39d55c:
    // 0x39d55c: 0xc0e6340  jal         func_398D00
label_39d560:
    if (ctx->pc == 0x39D560u) {
        ctx->pc = 0x39D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D55Cu;
        // 0x39d560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D564u;
        goto label_39d564;
    }
    ctx->pc = 0x39D55Cu;
    SET_GPR_U32(ctx, 31, 0x39D564u);
    ctx->pc = 0x39D560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D55Cu;
    // 0x39d560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398D00u, 0x39D55Cu, 0x39D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D564u;
label_39d564:
    // 0x39d564: 0xc0e6032  jal         func_3980C8
label_39d568:
    if (ctx->pc == 0x39D568u) {
        ctx->pc = 0x39D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D564u;
        // 0x39d568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D56Cu;
        goto label_39d56c;
    }
    ctx->pc = 0x39D564u;
    SET_GPR_U32(ctx, 31, 0x39D56Cu);
    ctx->pc = 0x39D568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D564u;
    // 0x39d568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3980C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3980C8u, 0x39D564u, 0x39D56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D56Cu;
label_39d56c:
    // 0x39d56c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39d570:
    // 0x39d570: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_39d574:
    if (ctx->pc == 0x39D574u) {
        ctx->pc = 0x39D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D570u;
        // 0x39d574: 0x8e850048  lw          $a1, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D578u;
        goto label_39d578;
    }
    ctx->pc = 0x39D570u;
    {
        const bool branch_taken_0x39d570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39d570) {
            ctx->pc = 0x39D574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D570u;
            // 0x39d574: 0x8e850048  lw          $a1, 0x48($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D590u;
            goto label_39d590;
        }
    }
    ctx->pc = 0x39D578u;
label_39d578:
    // 0x39d578: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39d578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39d57c:
    // 0x39d57c: 0xc0e7278  jal         func_39C9E0
label_39d580:
    if (ctx->pc == 0x39D580u) {
        ctx->pc = 0x39D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D57Cu;
        // 0x39d580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D584u;
        goto label_39d584;
    }
    ctx->pc = 0x39D57Cu;
    SET_GPR_U32(ctx, 31, 0x39D584u);
    ctx->pc = 0x39D580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D57Cu;
    // 0x39d580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C9E0u, 0x39D57Cu, 0x39D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D584u;
label_39d584:
    // 0x39d584: 0x10000010  b           . + 4 + (0x10 << 2)
label_39d588:
    if (ctx->pc == 0x39D588u) {
        ctx->pc = 0x39D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D584u;
        // 0x39d588: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D58Cu;
        goto label_39d58c;
    }
    ctx->pc = 0x39D584u;
    {
        const bool branch_taken_0x39d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D584u;
        // 0x39d588: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d584) {
            ctx->pc = 0x39D5C8u;
            goto label_39d5c8;
        }
    }
    ctx->pc = 0x39D58Cu;
label_39d58c:
    // 0x39d58c: 0x0  nop
    ctx->pc = 0x39d58cu;
    // NOP
label_39d590:
    // 0x39d590: 0xc0e6044  jal         func_398110
label_39d594:
    if (ctx->pc == 0x39D594u) {
        ctx->pc = 0x39D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D590u;
        // 0x39d594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D598u;
        goto label_39d598;
    }
    ctx->pc = 0x39D590u;
    SET_GPR_U32(ctx, 31, 0x39D598u);
    ctx->pc = 0x39D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D590u;
    // 0x39d594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398110u, 0x39D590u, 0x39D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D598u;
label_39d598:
    // 0x39d598: 0xc0e646a  jal         func_3991A8
label_39d59c:
    if (ctx->pc == 0x39D59Cu) {
        ctx->pc = 0x39D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D598u;
        // 0x39d59c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5A0u;
        goto label_39d5a0;
    }
    ctx->pc = 0x39D598u;
    SET_GPR_U32(ctx, 31, 0x39D5A0u);
    ctx->pc = 0x39D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D598u;
    // 0x39d59c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991A8u, 0x39D598u, 0x39D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D5A0u;
label_39d5a0:
    // 0x39d5a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d5a4:
    // 0x39d5a4: 0xc0e6446  jal         func_399118
label_39d5a8:
    if (ctx->pc == 0x39D5A8u) {
        ctx->pc = 0x39D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5A4u;
        // 0x39d5a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5ACu;
        goto label_39d5ac;
    }
    ctx->pc = 0x39D5A4u;
    SET_GPR_U32(ctx, 31, 0x39D5ACu);
    ctx->pc = 0x39D5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D5A4u;
    // 0x39d5a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399118u, 0x39D5A4u, 0x39D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D5ACu;
label_39d5ac:
    // 0x39d5ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d5b0:
    // 0x39d5b0: 0xc0e644a  jal         func_399128
label_39d5b4:
    if (ctx->pc == 0x39D5B4u) {
        ctx->pc = 0x39D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5B0u;
        // 0x39d5b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5B8u;
        goto label_39d5b8;
    }
    ctx->pc = 0x39D5B0u;
    SET_GPR_U32(ctx, 31, 0x39D5B8u);
    ctx->pc = 0x39D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D5B0u;
    // 0x39d5b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399128u, 0x39D5B0u, 0x39D5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D5B8u;
label_39d5b8:
    // 0x39d5b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d5bc:
    // 0x39d5bc: 0xc0e6448  jal         func_399120
label_39d5c0:
    if (ctx->pc == 0x39D5C0u) {
        ctx->pc = 0x39D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5BCu;
        // 0x39d5c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5C4u;
        goto label_39d5c4;
    }
    ctx->pc = 0x39D5BCu;
    SET_GPR_U32(ctx, 31, 0x39D5C4u);
    ctx->pc = 0x39D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D5BCu;
    // 0x39d5c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399120u, 0x39D5BCu, 0x39D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D5C4u;
label_39d5c4:
    // 0x39d5c4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x39d5c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39d5c8:
    // 0x39d5c8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x39d5c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_39d5cc:
    // 0x39d5cc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x39d5ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_39d5d0:
    // 0x39d5d0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x39d5d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_39d5d4:
    // 0x39d5d4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x39d5d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_39d5d8:
    // 0x39d5d8: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x39d5d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_39d5dc:
    // 0x39d5dc: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x39d5dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_39d5e0:
    // 0x39d5e0: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x39d5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_39d5e4:
    // 0x39d5e4: 0x3e00008  jr          $ra
label_39d5e8:
    if (ctx->pc == 0x39D5E8u) {
        ctx->pc = 0x39D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5E4u;
        // 0x39d5e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5ECu;
        goto label_39d5ec;
    }
    ctx->pc = 0x39D5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5E4u;
        // 0x39d5e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39D5ECu;
label_39d5ec:
    // 0x39d5ec: 0x0  nop
    ctx->pc = 0x39d5ecu;
    // NOP
    ctx->pc = 0x39d5f0u;
}
