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

// Function: sub_001AC158
// Address: 0x1ac158 - 0x1ac630
void sub_001AC158_0x1ac158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC158_0x1ac158");
#endif

    switch (ctx->pc) {
        case 0x1ac158u: goto label_1ac158;
        case 0x1ac15cu: goto label_1ac15c;
        case 0x1ac160u: goto label_1ac160;
        case 0x1ac164u: goto label_1ac164;
        case 0x1ac168u: goto label_1ac168;
        case 0x1ac16cu: goto label_1ac16c;
        case 0x1ac170u: goto label_1ac170;
        case 0x1ac174u: goto label_1ac174;
        case 0x1ac178u: goto label_1ac178;
        case 0x1ac17cu: goto label_1ac17c;
        case 0x1ac180u: goto label_1ac180;
        case 0x1ac184u: goto label_1ac184;
        case 0x1ac188u: goto label_1ac188;
        case 0x1ac18cu: goto label_1ac18c;
        case 0x1ac190u: goto label_1ac190;
        case 0x1ac194u: goto label_1ac194;
        case 0x1ac198u: goto label_1ac198;
        case 0x1ac19cu: goto label_1ac19c;
        case 0x1ac1a0u: goto label_1ac1a0;
        case 0x1ac1a4u: goto label_1ac1a4;
        case 0x1ac1a8u: goto label_1ac1a8;
        case 0x1ac1acu: goto label_1ac1ac;
        case 0x1ac1b0u: goto label_1ac1b0;
        case 0x1ac1b4u: goto label_1ac1b4;
        case 0x1ac1b8u: goto label_1ac1b8;
        case 0x1ac1bcu: goto label_1ac1bc;
        case 0x1ac1c0u: goto label_1ac1c0;
        case 0x1ac1c4u: goto label_1ac1c4;
        case 0x1ac1c8u: goto label_1ac1c8;
        case 0x1ac1ccu: goto label_1ac1cc;
        case 0x1ac1d0u: goto label_1ac1d0;
        case 0x1ac1d4u: goto label_1ac1d4;
        case 0x1ac1d8u: goto label_1ac1d8;
        case 0x1ac1dcu: goto label_1ac1dc;
        case 0x1ac1e0u: goto label_1ac1e0;
        case 0x1ac1e4u: goto label_1ac1e4;
        case 0x1ac1e8u: goto label_1ac1e8;
        case 0x1ac1ecu: goto label_1ac1ec;
        case 0x1ac1f0u: goto label_1ac1f0;
        case 0x1ac1f4u: goto label_1ac1f4;
        case 0x1ac1f8u: goto label_1ac1f8;
        case 0x1ac1fcu: goto label_1ac1fc;
        case 0x1ac200u: goto label_1ac200;
        case 0x1ac204u: goto label_1ac204;
        case 0x1ac208u: goto label_1ac208;
        case 0x1ac20cu: goto label_1ac20c;
        case 0x1ac210u: goto label_1ac210;
        case 0x1ac214u: goto label_1ac214;
        case 0x1ac218u: goto label_1ac218;
        case 0x1ac21cu: goto label_1ac21c;
        case 0x1ac220u: goto label_1ac220;
        case 0x1ac224u: goto label_1ac224;
        case 0x1ac228u: goto label_1ac228;
        case 0x1ac22cu: goto label_1ac22c;
        case 0x1ac230u: goto label_1ac230;
        case 0x1ac234u: goto label_1ac234;
        case 0x1ac238u: goto label_1ac238;
        case 0x1ac23cu: goto label_1ac23c;
        case 0x1ac240u: goto label_1ac240;
        case 0x1ac244u: goto label_1ac244;
        case 0x1ac248u: goto label_1ac248;
        case 0x1ac24cu: goto label_1ac24c;
        case 0x1ac250u: goto label_1ac250;
        case 0x1ac254u: goto label_1ac254;
        case 0x1ac258u: goto label_1ac258;
        case 0x1ac25cu: goto label_1ac25c;
        case 0x1ac260u: goto label_1ac260;
        case 0x1ac264u: goto label_1ac264;
        case 0x1ac268u: goto label_1ac268;
        case 0x1ac26cu: goto label_1ac26c;
        case 0x1ac270u: goto label_1ac270;
        case 0x1ac274u: goto label_1ac274;
        case 0x1ac278u: goto label_1ac278;
        case 0x1ac27cu: goto label_1ac27c;
        case 0x1ac280u: goto label_1ac280;
        case 0x1ac284u: goto label_1ac284;
        case 0x1ac288u: goto label_1ac288;
        case 0x1ac28cu: goto label_1ac28c;
        case 0x1ac290u: goto label_1ac290;
        case 0x1ac294u: goto label_1ac294;
        case 0x1ac298u: goto label_1ac298;
        case 0x1ac29cu: goto label_1ac29c;
        case 0x1ac2a0u: goto label_1ac2a0;
        case 0x1ac2a4u: goto label_1ac2a4;
        case 0x1ac2a8u: goto label_1ac2a8;
        case 0x1ac2acu: goto label_1ac2ac;
        case 0x1ac2b0u: goto label_1ac2b0;
        case 0x1ac2b4u: goto label_1ac2b4;
        case 0x1ac2b8u: goto label_1ac2b8;
        case 0x1ac2bcu: goto label_1ac2bc;
        case 0x1ac2c0u: goto label_1ac2c0;
        case 0x1ac2c4u: goto label_1ac2c4;
        case 0x1ac2c8u: goto label_1ac2c8;
        case 0x1ac2ccu: goto label_1ac2cc;
        case 0x1ac2d0u: goto label_1ac2d0;
        case 0x1ac2d4u: goto label_1ac2d4;
        case 0x1ac2d8u: goto label_1ac2d8;
        case 0x1ac2dcu: goto label_1ac2dc;
        case 0x1ac2e0u: goto label_1ac2e0;
        case 0x1ac2e4u: goto label_1ac2e4;
        case 0x1ac2e8u: goto label_1ac2e8;
        case 0x1ac2ecu: goto label_1ac2ec;
        case 0x1ac2f0u: goto label_1ac2f0;
        case 0x1ac2f4u: goto label_1ac2f4;
        case 0x1ac2f8u: goto label_1ac2f8;
        case 0x1ac2fcu: goto label_1ac2fc;
        case 0x1ac300u: goto label_1ac300;
        case 0x1ac304u: goto label_1ac304;
        case 0x1ac308u: goto label_1ac308;
        case 0x1ac30cu: goto label_1ac30c;
        case 0x1ac310u: goto label_1ac310;
        case 0x1ac314u: goto label_1ac314;
        case 0x1ac318u: goto label_1ac318;
        case 0x1ac31cu: goto label_1ac31c;
        case 0x1ac320u: goto label_1ac320;
        case 0x1ac324u: goto label_1ac324;
        case 0x1ac328u: goto label_1ac328;
        case 0x1ac32cu: goto label_1ac32c;
        case 0x1ac330u: goto label_1ac330;
        case 0x1ac334u: goto label_1ac334;
        case 0x1ac338u: goto label_1ac338;
        case 0x1ac33cu: goto label_1ac33c;
        case 0x1ac340u: goto label_1ac340;
        case 0x1ac344u: goto label_1ac344;
        case 0x1ac348u: goto label_1ac348;
        case 0x1ac34cu: goto label_1ac34c;
        case 0x1ac350u: goto label_1ac350;
        case 0x1ac354u: goto label_1ac354;
        case 0x1ac358u: goto label_1ac358;
        case 0x1ac35cu: goto label_1ac35c;
        case 0x1ac360u: goto label_1ac360;
        case 0x1ac364u: goto label_1ac364;
        case 0x1ac368u: goto label_1ac368;
        case 0x1ac36cu: goto label_1ac36c;
        case 0x1ac370u: goto label_1ac370;
        case 0x1ac374u: goto label_1ac374;
        case 0x1ac378u: goto label_1ac378;
        case 0x1ac37cu: goto label_1ac37c;
        case 0x1ac380u: goto label_1ac380;
        case 0x1ac384u: goto label_1ac384;
        case 0x1ac388u: goto label_1ac388;
        case 0x1ac38cu: goto label_1ac38c;
        case 0x1ac390u: goto label_1ac390;
        case 0x1ac394u: goto label_1ac394;
        case 0x1ac398u: goto label_1ac398;
        case 0x1ac39cu: goto label_1ac39c;
        case 0x1ac3a0u: goto label_1ac3a0;
        case 0x1ac3a4u: goto label_1ac3a4;
        case 0x1ac3a8u: goto label_1ac3a8;
        case 0x1ac3acu: goto label_1ac3ac;
        case 0x1ac3b0u: goto label_1ac3b0;
        case 0x1ac3b4u: goto label_1ac3b4;
        case 0x1ac3b8u: goto label_1ac3b8;
        case 0x1ac3bcu: goto label_1ac3bc;
        case 0x1ac3c0u: goto label_1ac3c0;
        case 0x1ac3c4u: goto label_1ac3c4;
        case 0x1ac3c8u: goto label_1ac3c8;
        case 0x1ac3ccu: goto label_1ac3cc;
        case 0x1ac3d0u: goto label_1ac3d0;
        case 0x1ac3d4u: goto label_1ac3d4;
        case 0x1ac3d8u: goto label_1ac3d8;
        case 0x1ac3dcu: goto label_1ac3dc;
        case 0x1ac3e0u: goto label_1ac3e0;
        case 0x1ac3e4u: goto label_1ac3e4;
        case 0x1ac3e8u: goto label_1ac3e8;
        case 0x1ac3ecu: goto label_1ac3ec;
        case 0x1ac3f0u: goto label_1ac3f0;
        case 0x1ac3f4u: goto label_1ac3f4;
        case 0x1ac3f8u: goto label_1ac3f8;
        case 0x1ac3fcu: goto label_1ac3fc;
        case 0x1ac400u: goto label_1ac400;
        case 0x1ac404u: goto label_1ac404;
        case 0x1ac408u: goto label_1ac408;
        case 0x1ac40cu: goto label_1ac40c;
        case 0x1ac410u: goto label_1ac410;
        case 0x1ac414u: goto label_1ac414;
        case 0x1ac418u: goto label_1ac418;
        case 0x1ac41cu: goto label_1ac41c;
        case 0x1ac420u: goto label_1ac420;
        case 0x1ac424u: goto label_1ac424;
        case 0x1ac428u: goto label_1ac428;
        case 0x1ac42cu: goto label_1ac42c;
        case 0x1ac430u: goto label_1ac430;
        case 0x1ac434u: goto label_1ac434;
        case 0x1ac438u: goto label_1ac438;
        case 0x1ac43cu: goto label_1ac43c;
        case 0x1ac440u: goto label_1ac440;
        case 0x1ac444u: goto label_1ac444;
        case 0x1ac448u: goto label_1ac448;
        case 0x1ac44cu: goto label_1ac44c;
        case 0x1ac450u: goto label_1ac450;
        case 0x1ac454u: goto label_1ac454;
        case 0x1ac458u: goto label_1ac458;
        case 0x1ac45cu: goto label_1ac45c;
        case 0x1ac460u: goto label_1ac460;
        case 0x1ac464u: goto label_1ac464;
        case 0x1ac468u: goto label_1ac468;
        case 0x1ac46cu: goto label_1ac46c;
        case 0x1ac470u: goto label_1ac470;
        case 0x1ac474u: goto label_1ac474;
        case 0x1ac478u: goto label_1ac478;
        case 0x1ac47cu: goto label_1ac47c;
        case 0x1ac480u: goto label_1ac480;
        case 0x1ac484u: goto label_1ac484;
        case 0x1ac488u: goto label_1ac488;
        case 0x1ac48cu: goto label_1ac48c;
        case 0x1ac490u: goto label_1ac490;
        case 0x1ac494u: goto label_1ac494;
        case 0x1ac498u: goto label_1ac498;
        case 0x1ac49cu: goto label_1ac49c;
        case 0x1ac4a0u: goto label_1ac4a0;
        case 0x1ac4a4u: goto label_1ac4a4;
        case 0x1ac4a8u: goto label_1ac4a8;
        case 0x1ac4acu: goto label_1ac4ac;
        case 0x1ac4b0u: goto label_1ac4b0;
        case 0x1ac4b4u: goto label_1ac4b4;
        case 0x1ac4b8u: goto label_1ac4b8;
        case 0x1ac4bcu: goto label_1ac4bc;
        case 0x1ac4c0u: goto label_1ac4c0;
        case 0x1ac4c4u: goto label_1ac4c4;
        case 0x1ac4c8u: goto label_1ac4c8;
        case 0x1ac4ccu: goto label_1ac4cc;
        case 0x1ac4d0u: goto label_1ac4d0;
        case 0x1ac4d4u: goto label_1ac4d4;
        case 0x1ac4d8u: goto label_1ac4d8;
        case 0x1ac4dcu: goto label_1ac4dc;
        case 0x1ac4e0u: goto label_1ac4e0;
        case 0x1ac4e4u: goto label_1ac4e4;
        case 0x1ac4e8u: goto label_1ac4e8;
        case 0x1ac4ecu: goto label_1ac4ec;
        case 0x1ac4f0u: goto label_1ac4f0;
        case 0x1ac4f4u: goto label_1ac4f4;
        case 0x1ac4f8u: goto label_1ac4f8;
        case 0x1ac4fcu: goto label_1ac4fc;
        case 0x1ac500u: goto label_1ac500;
        case 0x1ac504u: goto label_1ac504;
        case 0x1ac508u: goto label_1ac508;
        case 0x1ac50cu: goto label_1ac50c;
        case 0x1ac510u: goto label_1ac510;
        case 0x1ac514u: goto label_1ac514;
        case 0x1ac518u: goto label_1ac518;
        case 0x1ac51cu: goto label_1ac51c;
        case 0x1ac520u: goto label_1ac520;
        case 0x1ac524u: goto label_1ac524;
        case 0x1ac528u: goto label_1ac528;
        case 0x1ac52cu: goto label_1ac52c;
        case 0x1ac530u: goto label_1ac530;
        case 0x1ac534u: goto label_1ac534;
        case 0x1ac538u: goto label_1ac538;
        case 0x1ac53cu: goto label_1ac53c;
        case 0x1ac540u: goto label_1ac540;
        case 0x1ac544u: goto label_1ac544;
        case 0x1ac548u: goto label_1ac548;
        case 0x1ac54cu: goto label_1ac54c;
        case 0x1ac550u: goto label_1ac550;
        case 0x1ac554u: goto label_1ac554;
        case 0x1ac558u: goto label_1ac558;
        case 0x1ac55cu: goto label_1ac55c;
        case 0x1ac560u: goto label_1ac560;
        case 0x1ac564u: goto label_1ac564;
        case 0x1ac568u: goto label_1ac568;
        case 0x1ac56cu: goto label_1ac56c;
        case 0x1ac570u: goto label_1ac570;
        case 0x1ac574u: goto label_1ac574;
        case 0x1ac578u: goto label_1ac578;
        case 0x1ac57cu: goto label_1ac57c;
        case 0x1ac580u: goto label_1ac580;
        case 0x1ac584u: goto label_1ac584;
        case 0x1ac588u: goto label_1ac588;
        case 0x1ac58cu: goto label_1ac58c;
        case 0x1ac590u: goto label_1ac590;
        case 0x1ac594u: goto label_1ac594;
        case 0x1ac598u: goto label_1ac598;
        case 0x1ac59cu: goto label_1ac59c;
        case 0x1ac5a0u: goto label_1ac5a0;
        case 0x1ac5a4u: goto label_1ac5a4;
        case 0x1ac5a8u: goto label_1ac5a8;
        case 0x1ac5acu: goto label_1ac5ac;
        case 0x1ac5b0u: goto label_1ac5b0;
        case 0x1ac5b4u: goto label_1ac5b4;
        case 0x1ac5b8u: goto label_1ac5b8;
        case 0x1ac5bcu: goto label_1ac5bc;
        case 0x1ac5c0u: goto label_1ac5c0;
        case 0x1ac5c4u: goto label_1ac5c4;
        case 0x1ac5c8u: goto label_1ac5c8;
        case 0x1ac5ccu: goto label_1ac5cc;
        case 0x1ac5d0u: goto label_1ac5d0;
        case 0x1ac5d4u: goto label_1ac5d4;
        case 0x1ac5d8u: goto label_1ac5d8;
        case 0x1ac5dcu: goto label_1ac5dc;
        case 0x1ac5e0u: goto label_1ac5e0;
        case 0x1ac5e4u: goto label_1ac5e4;
        case 0x1ac5e8u: goto label_1ac5e8;
        case 0x1ac5ecu: goto label_1ac5ec;
        case 0x1ac5f0u: goto label_1ac5f0;
        case 0x1ac5f4u: goto label_1ac5f4;
        case 0x1ac5f8u: goto label_1ac5f8;
        case 0x1ac5fcu: goto label_1ac5fc;
        case 0x1ac600u: goto label_1ac600;
        case 0x1ac604u: goto label_1ac604;
        case 0x1ac608u: goto label_1ac608;
        case 0x1ac60cu: goto label_1ac60c;
        case 0x1ac610u: goto label_1ac610;
        case 0x1ac614u: goto label_1ac614;
        case 0x1ac618u: goto label_1ac618;
        case 0x1ac61cu: goto label_1ac61c;
        case 0x1ac620u: goto label_1ac620;
        case 0x1ac624u: goto label_1ac624;
        case 0x1ac628u: goto label_1ac628;
        case 0x1ac62cu: goto label_1ac62c;
        default: break;
    }

    ctx->pc = 0x1ac158u;

label_1ac158:
    // 0x1ac158: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ac158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ac15c:
    // 0x1ac15c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac160:
    // 0x1ac160: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ac160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1ac164:
    // 0x1ac164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac168:
    // 0x1ac168: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ac16c:
    // 0x1ac16c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ac16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1ac170:
    // 0x1ac170: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ac170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1ac174:
    // 0x1ac174: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ac174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ac178:
    // 0x1ac178: 0xc06a4c2  jal         func_1A9308
label_1ac17c:
    if (ctx->pc == 0x1AC17Cu) {
        ctx->pc = 0x1AC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC178u;
        // 0x1ac17c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC180u;
        goto label_1ac180;
    }
    ctx->pc = 0x1AC178u;
    SET_GPR_U32(ctx, 31, 0x1AC180u);
    ctx->pc = 0x1AC17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC178u;
    // 0x1ac17c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AC178u, 0x1AC180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC180u;
label_1ac180:
    // 0x1ac180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac184:
    // 0x1ac184: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x1ac184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1ac188:
    // 0x1ac188: 0xc069712  jal         func_1A5C48
label_1ac18c:
    if (ctx->pc == 0x1AC18Cu) {
        ctx->pc = 0x1AC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC188u;
        // 0x1ac18c: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC190u;
        goto label_1ac190;
    }
    ctx->pc = 0x1AC188u;
    SET_GPR_U32(ctx, 31, 0x1AC190u);
    ctx->pc = 0x1AC18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC188u;
    // 0x1ac18c: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1AC188u, 0x1AC190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC190u;
label_1ac190:
    // 0x1ac190: 0x8e2501e4  lw          $a1, 0x1E4($s1)
    ctx->pc = 0x1ac190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_1ac194:
    // 0x1ac194: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac198:
    // 0x1ac198: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x1ac198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac19c:
    // 0x1ac19c: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1ac19cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
label_1ac1a0:
    // 0x1ac1a0: 0x8c7200c4  lw          $s2, 0xC4($v1)
    ctx->pc = 0x1ac1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1ac1a4:
    // 0x1ac1a4: 0x8c73010c  lw          $s3, 0x10C($v1)
    ctx->pc = 0x1ac1a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1ac1a8:
    // 0x1ac1a8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1ac1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1ac1ac:
    // 0x1ac1ac: 0xa4a2002a  sh          $v0, 0x2A($a1)
    ctx->pc = 0x1ac1acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 2));
label_1ac1b0:
    // 0x1ac1b0: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1ac1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_1ac1b4:
    // 0x1ac1b4: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1ac1b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_1ac1b8:
    // 0x1ac1b8: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x1ac1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_1ac1bc:
    // 0x1ac1bc: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x1ac1bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
label_1ac1c0:
    // 0x1ac1c0: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x1ac1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac1c4:
    // 0x1ac1c4: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x1ac1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_1ac1c8:
    // 0x1ac1c8: 0xa0460030  sb          $a2, 0x30($v0)
    ctx->pc = 0x1ac1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 6));
label_1ac1cc:
    // 0x1ac1cc: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1ac1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_1ac1d0:
    // 0x1ac1d0: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_1ac1d4:
    if (ctx->pc == 0x1AC1D4u) {
        ctx->pc = 0x1AC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1D0u;
        // 0x1ac1d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1D8u;
        goto label_1ac1d8;
    }
    ctx->pc = 0x1AC1D0u;
    {
        const bool branch_taken_0x1ac1d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1D0u;
        // 0x1ac1d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1d0) {
            ctx->pc = 0x1AC1FCu;
            goto label_1ac1fc;
        }
    }
    ctx->pc = 0x1AC1D8u;
label_1ac1d8:
    // 0x1ac1d8: 0x262301ec  addiu       $v1, $s1, 0x1EC
    ctx->pc = 0x1ac1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 492));
label_1ac1dc:
    // 0x1ac1dc: 0x0  nop
    ctx->pc = 0x1ac1dcu;
    // NOP
label_1ac1e0:
    // 0x1ac1e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ac1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ac1e4:
    // 0x1ac1e4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1ac1e8:
    if (ctx->pc == 0x1AC1E8u) {
        ctx->pc = 0x1AC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1E4u;
        // 0x1ac1e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1ECu;
        goto label_1ac1ec;
    }
    ctx->pc = 0x1AC1E4u;
    {
        const bool branch_taken_0x1ac1e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1E4u;
        // 0x1ac1e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1e4) {
            ctx->pc = 0x1AC1FCu;
            goto label_1ac1fc;
        }
    }
    ctx->pc = 0x1AC1ECu;
label_1ac1ec:
    // 0x1ac1ec: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1ac1ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_1ac1f0:
    // 0x1ac1f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1ac1f4:
    if (ctx->pc == 0x1AC1F4u) {
        ctx->pc = 0x1AC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1F0u;
        // 0x1ac1f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1F8u;
        goto label_1ac1f8;
    }
    ctx->pc = 0x1AC1F0u;
    {
        const bool branch_taken_0x1ac1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1F0u;
        // 0x1ac1f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1f0) {
            ctx->pc = 0x1AC1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac1e0;
        }
    }
    ctx->pc = 0x1AC1F8u;
label_1ac1f8:
    // 0x1ac1f8: 0x8e2401e8  lw          $a0, 0x1E8($s1)
    ctx->pc = 0x1ac1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
label_1ac1fc:
    // 0x1ac1fc: 0xc074152  jal         func_1D0548
label_1ac200:
    if (ctx->pc == 0x1AC200u) {
        ctx->pc = 0x1AC204u;
        goto label_1ac204;
    }
    ctx->pc = 0x1AC1FCu;
    SET_GPR_U32(ctx, 31, 0x1AC204u);
    ctx->pc = 0x1D0548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0548u, 0x1AC1FCu, 0x1AC204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC204u;
label_1ac204:
    // 0x1ac204: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_1ac208:
    if (ctx->pc == 0x1AC208u) {
        ctx->pc = 0x1AC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC204u;
        // 0x1ac208: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC20Cu;
        goto label_1ac20c;
    }
    ctx->pc = 0x1AC204u;
    {
        const bool branch_taken_0x1ac204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac204) {
            ctx->pc = 0x1AC208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC204u;
            // 0x1ac208: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC28Cu;
            goto label_1ac28c;
        }
    }
    ctx->pc = 0x1AC20Cu;
label_1ac20c:
    // 0x1ac20c: 0xc076826  jal         func_1DA098
label_1ac210:
    if (ctx->pc == 0x1AC210u) {
        ctx->pc = 0x1AC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC20Cu;
        // 0x1ac210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC214u;
        goto label_1ac214;
    }
    ctx->pc = 0x1AC20Cu;
    SET_GPR_U32(ctx, 31, 0x1AC214u);
    ctx->pc = 0x1AC210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC20Cu;
    // 0x1ac210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA098u, 0x1AC20Cu, 0x1AC214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC214u;
label_1ac214:
    // 0x1ac214: 0x8e300148  lw          $s0, 0x148($s1)
    ctx->pc = 0x1ac214u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac218:
    // 0x1ac218: 0xc076826  jal         func_1DA098
label_1ac21c:
    if (ctx->pc == 0x1AC21Cu) {
        ctx->pc = 0x1AC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC218u;
        // 0x1ac21c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC220u;
        goto label_1ac220;
    }
    ctx->pc = 0x1AC218u;
    SET_GPR_U32(ctx, 31, 0x1AC220u);
    ctx->pc = 0x1AC21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC218u;
    // 0x1ac21c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA098u, 0x1AC218u, 0x1AC220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC220u;
label_1ac220:
    // 0x1ac220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac224:
    // 0x1ac224: 0x240407f5  addiu       $a0, $zero, 0x7F5
    ctx->pc = 0x1ac224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2037));
label_1ac228:
    // 0x1ac228: 0xae030fd0  sw          $v1, 0xFD0($s0)
    ctx->pc = 0x1ac228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 3));
label_1ac22c:
    // 0x1ac22c: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x1ac22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_1ac230:
    // 0x1ac230: 0x144400ee  bne         $v0, $a0, . + 4 + (0xEE << 2)
label_1ac234:
    if (ctx->pc == 0x1AC234u) {
        ctx->pc = 0x1AC238u;
        goto label_1ac238;
    }
    ctx->pc = 0x1AC230u;
    {
        const bool branch_taken_0x1ac230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ac230) {
            ctx->pc = 0x1AC5ECu;
            goto label_1ac5ec;
        }
    }
    ctx->pc = 0x1AC238u;
label_1ac238:
    // 0x1ac238: 0xc08fde2  jal         func_23F788
label_1ac23c:
    if (ctx->pc == 0x1AC23Cu) {
        ctx->pc = 0x1AC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC238u;
        // 0x1ac23c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC240u;
        goto label_1ac240;
    }
    ctx->pc = 0x1AC238u;
    SET_GPR_U32(ctx, 31, 0x1AC240u);
    ctx->pc = 0x1AC23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC238u;
    // 0x1ac23c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1AC238u, 0x1AC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC240u;
label_1ac240:
    // 0x1ac240: 0xc094258  jal         func_250960
label_1ac244:
    if (ctx->pc == 0x1AC244u) {
        ctx->pc = 0x1AC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC240u;
        // 0x1ac244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC248u;
        goto label_1ac248;
    }
    ctx->pc = 0x1AC240u;
    SET_GPR_U32(ctx, 31, 0x1AC248u);
    ctx->pc = 0x1AC244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC240u;
    // 0x1ac244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250960u, 0x1AC240u, 0x1AC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC248u;
label_1ac248:
    // 0x1ac248: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
label_1ac24c:
    if (ctx->pc == 0x1AC24Cu) {
        ctx->pc = 0x1AC250u;
        goto label_1ac250;
    }
    ctx->pc = 0x1AC248u;
    {
        const bool branch_taken_0x1ac248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac248) {
            ctx->pc = 0x1AC5ECu;
            goto label_1ac5ec;
        }
    }
    ctx->pc = 0x1AC250u;
label_1ac250:
    // 0x1ac250: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac254:
    // 0x1ac254: 0xc08fc4e  jal         func_23F138
label_1ac258:
    if (ctx->pc == 0x1AC258u) {
        ctx->pc = 0x1AC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC254u;
        // 0x1ac258: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC25Cu;
        goto label_1ac25c;
    }
    ctx->pc = 0x1AC254u;
    SET_GPR_U32(ctx, 31, 0x1AC25Cu);
    ctx->pc = 0x1AC258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC254u;
    // 0x1ac258: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x1AC254u, 0x1AC25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC25Cu;
label_1ac25c:
    // 0x1ac25c: 0x92420032  lbu         $v0, 0x32($s2)
    ctx->pc = 0x1ac25cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
label_1ac260:
    // 0x1ac260: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x1ac260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_1ac264:
    // 0x1ac264: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1ac264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_1ac268:
    // 0x1ac268: 0xa2420032  sb          $v0, 0x32($s2)
    ctx->pc = 0x1ac268u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 2));
label_1ac26c:
    // 0x1ac26c: 0x8e300148  lw          $s0, 0x148($s1)
    ctx->pc = 0x1ac26cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac270:
    // 0x1ac270: 0xc07682a  jal         func_1DA0A8
label_1ac274:
    if (ctx->pc == 0x1AC274u) {
        ctx->pc = 0x1AC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC270u;
        // 0x1ac274: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC278u;
        goto label_1ac278;
    }
    ctx->pc = 0x1AC270u;
    SET_GPR_U32(ctx, 31, 0x1AC278u);
    ctx->pc = 0x1AC274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC270u;
    // 0x1ac274: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x1AC270u, 0x1AC278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC278u;
label_1ac278:
    // 0x1ac278: 0xae000fd0  sw          $zero, 0xFD0($s0)
    ctx->pc = 0x1ac278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
label_1ac27c:
    // 0x1ac27c: 0xc0767f2  jal         func_1D9FC8
label_1ac280:
    if (ctx->pc == 0x1AC280u) {
        ctx->pc = 0x1AC280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC27Cu;
        // 0x1ac280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC284u;
        goto label_1ac284;
    }
    ctx->pc = 0x1AC27Cu;
    SET_GPR_U32(ctx, 31, 0x1AC284u);
    ctx->pc = 0x1AC280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC27Cu;
    // 0x1ac280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x1AC27Cu, 0x1AC284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC284u;
label_1ac284:
    // 0x1ac284: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_1ac288:
    if (ctx->pc == 0x1AC288u) {
        ctx->pc = 0x1AC28Cu;
        goto label_1ac28c;
    }
    ctx->pc = 0x1AC284u;
    {
        const bool branch_taken_0x1ac284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac284) {
            ctx->pc = 0x1AC5ECu;
            goto label_1ac5ec;
        }
    }
    ctx->pc = 0x1AC28Cu;
label_1ac28c:
    // 0x1ac28c: 0xc08fc4e  jal         func_23F138
label_1ac290:
    if (ctx->pc == 0x1AC290u) {
        ctx->pc = 0x1AC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC28Cu;
        // 0x1ac290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC294u;
        goto label_1ac294;
    }
    ctx->pc = 0x1AC28Cu;
    SET_GPR_U32(ctx, 31, 0x1AC294u);
    ctx->pc = 0x1AC290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC28Cu;
    // 0x1ac290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x1AC28Cu, 0x1AC294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC294u;
label_1ac294:
    // 0x1ac294: 0x92420032  lbu         $v0, 0x32($s2)
    ctx->pc = 0x1ac294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
label_1ac298:
    // 0x1ac298: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x1ac298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_1ac29c:
    // 0x1ac29c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1ac29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_1ac2a0:
    // 0x1ac2a0: 0xa2420032  sb          $v0, 0x32($s2)
    ctx->pc = 0x1ac2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 2));
label_1ac2a4:
    // 0x1ac2a4: 0x8e300148  lw          $s0, 0x148($s1)
    ctx->pc = 0x1ac2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac2a8:
    // 0x1ac2a8: 0xc07682a  jal         func_1DA0A8
label_1ac2ac:
    if (ctx->pc == 0x1AC2ACu) {
        ctx->pc = 0x1AC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2A8u;
        // 0x1ac2ac: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2B0u;
        goto label_1ac2b0;
    }
    ctx->pc = 0x1AC2A8u;
    SET_GPR_U32(ctx, 31, 0x1AC2B0u);
    ctx->pc = 0x1AC2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2A8u;
    // 0x1ac2ac: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x1AC2A8u, 0x1AC2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2B0u;
label_1ac2b0:
    // 0x1ac2b0: 0xae000fd0  sw          $zero, 0xFD0($s0)
    ctx->pc = 0x1ac2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
label_1ac2b4:
    // 0x1ac2b4: 0xc0767f2  jal         func_1D9FC8
label_1ac2b8:
    if (ctx->pc == 0x1AC2B8u) {
        ctx->pc = 0x1AC2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2B4u;
        // 0x1ac2b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2BCu;
        goto label_1ac2bc;
    }
    ctx->pc = 0x1AC2B4u;
    SET_GPR_U32(ctx, 31, 0x1AC2BCu);
    ctx->pc = 0x1AC2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2B4u;
    // 0x1ac2b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x1AC2B4u, 0x1AC2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2BCu;
label_1ac2bc:
    // 0x1ac2bc: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x1ac2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac2c0:
    // 0x1ac2c0: 0x240203fd  addiu       $v0, $zero, 0x3FD
    ctx->pc = 0x1ac2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
label_1ac2c4:
    // 0x1ac2c4: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1ac2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1ac2c8:
    // 0x1ac2c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac2cc:
    // 0x1ac2cc: 0xac620324  sw          $v0, 0x324($v1)
    ctx->pc = 0x1ac2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 804), GPR_U32(ctx, 2));
label_1ac2d0:
    // 0x1ac2d0: 0xa0600321  sb          $zero, 0x321($v1)
    ctx->pc = 0x1ac2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 801), (uint8_t)GPR_U32(ctx, 0));
label_1ac2d4:
    // 0x1ac2d4: 0xa26000a8  sb          $zero, 0xA8($s3)
    ctx->pc = 0x1ac2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 168), (uint8_t)GPR_U32(ctx, 0));
label_1ac2d8:
    // 0x1ac2d8: 0xc08fed2  jal         func_23FB48
label_1ac2dc:
    if (ctx->pc == 0x1AC2DCu) {
        ctx->pc = 0x1AC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2D8u;
        // 0x1ac2dc: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2E0u;
        goto label_1ac2e0;
    }
    ctx->pc = 0x1AC2D8u;
    SET_GPR_U32(ctx, 31, 0x1AC2E0u);
    ctx->pc = 0x1AC2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2D8u;
    // 0x1ac2dc: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1AC2D8u, 0x1AC2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2E0u;
label_1ac2e0:
    // 0x1ac2e0: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac2e4:
    // 0x1ac2e4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1ac2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1ac2e8:
    // 0x1ac2e8: 0xc08fed2  jal         func_23FB48
label_1ac2ec:
    if (ctx->pc == 0x1AC2ECu) {
        ctx->pc = 0x1AC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E8u;
        // 0x1ac2ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2F0u;
        goto label_1ac2f0;
    }
    ctx->pc = 0x1AC2E8u;
    SET_GPR_U32(ctx, 31, 0x1AC2F0u);
    ctx->pc = 0x1AC2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2E8u;
    // 0x1ac2ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1AC2E8u, 0x1AC2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2F0u;
label_1ac2f0:
    // 0x1ac2f0: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac2f4:
    // 0x1ac2f4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1ac2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1ac2f8:
    // 0x1ac2f8: 0xc08fed2  jal         func_23FB48
label_1ac2fc:
    if (ctx->pc == 0x1AC2FCu) {
        ctx->pc = 0x1AC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2F8u;
        // 0x1ac2fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC300u;
        goto label_1ac300;
    }
    ctx->pc = 0x1AC2F8u;
    SET_GPR_U32(ctx, 31, 0x1AC300u);
    ctx->pc = 0x1AC2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2F8u;
    // 0x1ac2fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1AC2F8u, 0x1AC300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC300u;
label_1ac300:
    // 0x1ac300: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x1ac300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac304:
    // 0x1ac304: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1ac304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
label_1ac308:
    // 0x1ac308: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac30c:
    // 0x1ac30c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x1ac30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_1ac310:
    // 0x1ac310: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x1ac310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_1ac314:
    // 0x1ac314: 0x40f809  jalr        $v0
label_1ac318:
    if (ctx->pc == 0x1AC318u) {
        ctx->pc = 0x1AC31Cu;
        goto label_1ac31c;
    }
    ctx->pc = 0x1AC314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC31Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC314u, 0x1AC31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC31Cu;
label_1ac31c:
    // 0x1ac31c: 0xc08fde2  jal         func_23F788
label_1ac320:
    if (ctx->pc == 0x1AC320u) {
        ctx->pc = 0x1AC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC31Cu;
        // 0x1ac320: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC324u;
        goto label_1ac324;
    }
    ctx->pc = 0x1AC31Cu;
    SET_GPR_U32(ctx, 31, 0x1AC324u);
    ctx->pc = 0x1AC320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC31Cu;
    // 0x1ac320: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1AC31Cu, 0x1AC324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC324u;
label_1ac324:
    // 0x1ac324: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1ac324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1ac328:
    // 0x1ac328: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ac328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ac32c:
    // 0x1ac32c: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
label_1ac330:
    if (ctx->pc == 0x1AC330u) {
        ctx->pc = 0x1AC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC32Cu;
        // 0x1ac330: 0x240503fb  addiu       $a1, $zero, 0x3FB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC334u;
        goto label_1ac334;
    }
    ctx->pc = 0x1AC32Cu;
    {
        const bool branch_taken_0x1ac32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC32Cu;
        // 0x1ac330: 0x240503fb  addiu       $a1, $zero, 0x3FB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac32c) {
            ctx->pc = 0x1AC478u;
            goto label_1ac478;
        }
    }
    ctx->pc = 0x1AC334u;
label_1ac334:
    // 0x1ac334: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac338:
    // 0x1ac338: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x1ac338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_1ac33c:
    // 0x1ac33c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ac33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ac340:
    // 0x1ac340: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x1ac340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac344:
    // 0x1ac344: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1ac344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1ac348:
    // 0x1ac348: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1ac348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ac34c:
    // 0x1ac34c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ac34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac350:
    // 0x1ac350: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1ac350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ac354:
    // 0x1ac354: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1ac354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac358:
    // 0x1ac358: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1ac358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ac35c:
    // 0x1ac35c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1ac35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac360:
    // 0x1ac360: 0xc08a1f2  jal         func_2287C8
label_1ac364:
    if (ctx->pc == 0x1AC364u) {
        ctx->pc = 0x1AC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC360u;
        // 0x1ac364: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC368u;
        goto label_1ac368;
    }
    ctx->pc = 0x1AC360u;
    SET_GPR_U32(ctx, 31, 0x1AC368u);
    ctx->pc = 0x1AC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC360u;
    // 0x1ac364: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1AC360u, 0x1AC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC368u;
label_1ac368:
    // 0x1ac368: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ac368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac36c:
    // 0x1ac36c: 0xc0f70ce  jal         func_3DC338
label_1ac370:
    if (ctx->pc == 0x1AC370u) {
        ctx->pc = 0x1AC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC36Cu;
        // 0x1ac370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC374u;
        goto label_1ac374;
    }
    ctx->pc = 0x1AC36Cu;
    SET_GPR_U32(ctx, 31, 0x1AC374u);
    ctx->pc = 0x1AC370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC36Cu;
    // 0x1ac370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1AC36Cu, 0x1AC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC374u;
label_1ac374:
    // 0x1ac374: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ac378:
    if (ctx->pc == 0x1AC378u) {
        ctx->pc = 0x1AC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC374u;
        // 0x1ac378: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC37Cu;
        goto label_1ac37c;
    }
    ctx->pc = 0x1AC374u;
    {
        const bool branch_taken_0x1ac374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac374) {
            ctx->pc = 0x1AC378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC374u;
            // 0x1ac378: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC388u;
            goto label_1ac388;
        }
    }
    ctx->pc = 0x1AC37Cu;
label_1ac37c:
    // 0x1ac37c: 0xc0c4900  jal         func_312400
label_1ac380:
    if (ctx->pc == 0x1AC380u) {
        ctx->pc = 0x1AC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC37Cu;
        // 0x1ac380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC384u;
        goto label_1ac384;
    }
    ctx->pc = 0x1AC37Cu;
    SET_GPR_U32(ctx, 31, 0x1AC384u);
    ctx->pc = 0x1AC380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC37Cu;
    // 0x1ac380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1AC37Cu, 0x1AC384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC384u;
label_1ac384:
    // 0x1ac384: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac388:
    // 0x1ac388: 0x24050431  addiu       $a1, $zero, 0x431
    ctx->pc = 0x1ac388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
label_1ac38c:
    // 0x1ac38c: 0xc08a1f2  jal         func_2287C8
label_1ac390:
    if (ctx->pc == 0x1AC390u) {
        ctx->pc = 0x1AC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC38Cu;
        // 0x1ac390: 0x261200b0  addiu       $s2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC394u;
        goto label_1ac394;
    }
    ctx->pc = 0x1AC38Cu;
    SET_GPR_U32(ctx, 31, 0x1AC394u);
    ctx->pc = 0x1AC390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC38Cu;
    // 0x1ac390: 0x261200b0  addiu       $s2, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1AC38Cu, 0x1AC394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC394u;
label_1ac394:
    // 0x1ac394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ac394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac398:
    // 0x1ac398: 0xc0f70ce  jal         func_3DC338
label_1ac39c:
    if (ctx->pc == 0x1AC39Cu) {
        ctx->pc = 0x1AC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC398u;
        // 0x1ac39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3A0u;
        goto label_1ac3a0;
    }
    ctx->pc = 0x1AC398u;
    SET_GPR_U32(ctx, 31, 0x1AC3A0u);
    ctx->pc = 0x1AC39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC398u;
    // 0x1ac39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1AC398u, 0x1AC3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3A0u;
label_1ac3a0:
    // 0x1ac3a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ac3a4:
    if (ctx->pc == 0x1AC3A4u) {
        ctx->pc = 0x1AC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3A0u;
        // 0x1ac3a4: 0xc60000b4  lwc1        $f0, 0xB4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3A8u;
        goto label_1ac3a8;
    }
    ctx->pc = 0x1AC3A0u;
    {
        const bool branch_taken_0x1ac3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac3a0) {
            ctx->pc = 0x1AC3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC3A0u;
            // 0x1ac3a4: 0xc60000b4  lwc1        $f0, 0xB4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC3B4u;
            goto label_1ac3b4;
        }
    }
    ctx->pc = 0x1AC3A8u;
label_1ac3a8:
    // 0x1ac3a8: 0xc0c4900  jal         func_312400
label_1ac3ac:
    if (ctx->pc == 0x1AC3ACu) {
        ctx->pc = 0x1AC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3A8u;
        // 0x1ac3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3B0u;
        goto label_1ac3b0;
    }
    ctx->pc = 0x1AC3A8u;
    SET_GPR_U32(ctx, 31, 0x1AC3B0u);
    ctx->pc = 0x1AC3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3A8u;
    // 0x1ac3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1AC3A8u, 0x1AC3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3B0u;
label_1ac3b0:
    // 0x1ac3b0: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x1ac3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac3b4:
    // 0x1ac3b4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1ac3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac3b8:
    // 0x1ac3b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ac3b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac3bc:
    // 0x1ac3bc: 0x0  nop
    ctx->pc = 0x1ac3bcu;
    // NOP
label_1ac3c0:
    // 0x1ac3c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ac3c4:
    if (ctx->pc == 0x1AC3C4u) {
        ctx->pc = 0x1AC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3C0u;
        // 0x1ac3c4: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3C8u;
        goto label_1ac3c8;
    }
    ctx->pc = 0x1AC3C0u;
    {
        const bool branch_taken_0x1ac3c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3C0u;
        // 0x1ac3c4: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3c0) {
            ctx->pc = 0x1AC3CCu;
            goto label_1ac3cc;
        }
    }
    ctx->pc = 0x1AC3C8u;
label_1ac3c8:
    // 0x1ac3c8: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1ac3c8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_1ac3cc:
    // 0x1ac3cc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ac3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1ac3d0:
    // 0x1ac3d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac3d4:
    // 0x1ac3d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ac3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3d8:
    // 0x1ac3d8: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac3dc:
    // 0x1ac3dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac3e0:
    // 0x1ac3e0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1ac3e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1ac3e4:
    // 0x1ac3e4: 0xc09568e  jal         func_255A38
label_1ac3e8:
    if (ctx->pc == 0x1AC3E8u) {
        ctx->pc = 0x1AC3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3E4u;
        // 0x1ac3e8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3ECu;
        goto label_1ac3ec;
    }
    ctx->pc = 0x1AC3E4u;
    SET_GPR_U32(ctx, 31, 0x1AC3ECu);
    ctx->pc = 0x1AC3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3E4u;
    // 0x1ac3e8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A38u, 0x1AC3E4u, 0x1AC3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3ECu;
label_1ac3ec:
    // 0x1ac3ec: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x1ac3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
label_1ac3f0:
    // 0x1ac3f0: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1ac3f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1ac3f4:
    // 0x1ac3f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac3f8:
    // 0x1ac3f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1ac3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ac3fc:
    // 0x1ac3fc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1ac3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1ac400:
    // 0x1ac400: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ac400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac404:
    // 0x1ac404: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ac404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1ac408:
    // 0x1ac408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac40c:
    // 0x1ac40c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ac40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1ac410:
    // 0x1ac410: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x1ac410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1ac414:
    // 0x1ac414: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1ac414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_1ac418:
    // 0x1ac418: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x1ac418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac41c:
    // 0x1ac41c: 0xc0c32b4  jal         func_30CAD0
label_1ac420:
    if (ctx->pc == 0x1AC420u) {
        ctx->pc = 0x1AC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC41Cu;
        // 0x1ac420: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC424u;
        goto label_1ac424;
    }
    ctx->pc = 0x1AC41Cu;
    SET_GPR_U32(ctx, 31, 0x1AC424u);
    ctx->pc = 0x1AC420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC41Cu;
    // 0x1ac420: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CAD0u, 0x1AC41Cu, 0x1AC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC424u;
label_1ac424:
    // 0x1ac424: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac428:
    // 0x1ac428: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x1ac428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_1ac42c:
    // 0x1ac42c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1ac42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1ac430:
    // 0x1ac430: 0x40f809  jalr        $v0
label_1ac434:
    if (ctx->pc == 0x1AC434u) {
        ctx->pc = 0x1AC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC430u;
        // 0x1ac434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC438u;
        goto label_1ac438;
    }
    ctx->pc = 0x1AC430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC438u);
        ctx->pc = 0x1AC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC430u;
        // 0x1ac434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC430u, 0x1AC438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC438u;
label_1ac438:
    // 0x1ac438: 0xc08fcf8  jal         func_23F3E0
label_1ac43c:
    if (ctx->pc == 0x1AC43Cu) {
        ctx->pc = 0x1AC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC438u;
        // 0x1ac43c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC440u;
        goto label_1ac440;
    }
    ctx->pc = 0x1AC438u;
    SET_GPR_U32(ctx, 31, 0x1AC440u);
    ctx->pc = 0x1AC43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC438u;
    // 0x1ac43c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3E0u, 0x1AC438u, 0x1AC440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC440u;
label_1ac440:
    // 0x1ac440: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac444:
    // 0x1ac444: 0xc08bd96  jal         func_22F658
label_1ac448:
    if (ctx->pc == 0x1AC448u) {
        ctx->pc = 0x1AC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC444u;
        // 0x1ac448: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC44Cu;
        goto label_1ac44c;
    }
    ctx->pc = 0x1AC444u;
    SET_GPR_U32(ctx, 31, 0x1AC44Cu);
    ctx->pc = 0x1AC448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC444u;
    // 0x1ac448: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x1AC444u, 0x1AC44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC44Cu;
label_1ac44c:
    // 0x1ac44c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac450:
    // 0x1ac450: 0xc06974a  jal         func_1A5D28
label_1ac454:
    if (ctx->pc == 0x1AC454u) {
        ctx->pc = 0x1AC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC450u;
        // 0x1ac454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC458u;
        goto label_1ac458;
    }
    ctx->pc = 0x1AC450u;
    SET_GPR_U32(ctx, 31, 0x1AC458u);
    ctx->pc = 0x1AC454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC450u;
    // 0x1ac454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x1AC450u, 0x1AC458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC458u;
label_1ac458:
    // 0x1ac458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac45c:
    // 0x1ac45c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac460:
    // 0x1ac460: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x1ac460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_1ac464:
    // 0x1ac464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac468:
    // 0x1ac468: 0xc06a23e  jal         func_1A88F8
label_1ac46c:
    if (ctx->pc == 0x1AC46Cu) {
        ctx->pc = 0x1AC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC468u;
        // 0x1ac46c: 0xae220190  sw          $v0, 0x190($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC470u;
        goto label_1ac470;
    }
    ctx->pc = 0x1AC468u;
    SET_GPR_U32(ctx, 31, 0x1AC470u);
    ctx->pc = 0x1AC46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC468u;
    // 0x1ac46c: 0xae220190  sw          $v0, 0x190($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1AC468u, 0x1AC470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC470u;
label_1ac470:
    // 0x1ac470: 0x10000025  b           . + 4 + (0x25 << 2)
label_1ac474:
    if (ctx->pc == 0x1AC474u) {
        ctx->pc = 0x1AC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC470u;
        // 0x1ac474: 0xc6600030  lwc1        $f0, 0x30($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC478u;
        goto label_1ac478;
    }
    ctx->pc = 0x1AC470u;
    {
        const bool branch_taken_0x1ac470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC470u;
        // 0x1ac474: 0xc6600030  lwc1        $f0, 0x30($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac470) {
            ctx->pc = 0x1AC508u;
            goto label_1ac508;
        }
    }
    ctx->pc = 0x1AC478u;
label_1ac478:
    // 0x1ac478: 0xc08fde2  jal         func_23F788
label_1ac47c:
    if (ctx->pc == 0x1AC47Cu) {
        ctx->pc = 0x1AC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC478u;
        // 0x1ac47c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC480u;
        goto label_1ac480;
    }
    ctx->pc = 0x1AC478u;
    SET_GPR_U32(ctx, 31, 0x1AC480u);
    ctx->pc = 0x1AC47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC478u;
    // 0x1ac47c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1AC478u, 0x1AC480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC480u;
label_1ac480:
    // 0x1ac480: 0xc4410154  lwc1        $f1, 0x154($v0)
    ctx->pc = 0x1ac480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac484:
    // 0x1ac484: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ac484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1ac488:
    // 0x1ac488: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ac488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ac48c:
    // 0x1ac48c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac490:
    // 0x1ac490: 0x0  nop
    ctx->pc = 0x1ac490u;
    // NOP
label_1ac494:
    // 0x1ac494: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac498:
    // 0x1ac498: 0x0  nop
    ctx->pc = 0x1ac498u;
    // NOP
label_1ac49c:
    // 0x1ac49c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_1ac4a0:
    if (ctx->pc == 0x1AC4A0u) {
        ctx->pc = 0x1AC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC49Cu;
        // 0x1ac4a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC4A4u;
        goto label_1ac4a4;
    }
    ctx->pc = 0x1AC49Cu;
    {
        const bool branch_taken_0x1ac49c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC49Cu;
        // 0x1ac4a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac49c) {
            ctx->pc = 0x1AC4F0u;
            goto label_1ac4f0;
        }
    }
    ctx->pc = 0x1AC4A4u;
label_1ac4a4:
    // 0x1ac4a4: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac4a8:
    // 0x1ac4a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ac4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ac4ac:
    // 0x1ac4ac: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ac4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1ac4b0:
    // 0x1ac4b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ac4b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ac4b4:
    // 0x1ac4b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ac4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ac4b8:
    // 0x1ac4b8: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x1ac4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_1ac4bc:
    // 0x1ac4bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ac4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ac4c0:
    // 0x1ac4c0: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x1ac4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac4c4:
    // 0x1ac4c4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1ac4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1ac4c8:
    // 0x1ac4c8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1ac4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ac4cc:
    // 0x1ac4cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ac4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac4d0:
    // 0x1ac4d0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1ac4d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ac4d4:
    // 0x1ac4d4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1ac4d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1ac4d8:
    // 0x1ac4d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ac4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac4dc:
    // 0x1ac4dc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1ac4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ac4e0:
    // 0x1ac4e0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1ac4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ac4e4:
    // 0x1ac4e4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1ac4e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ac4e8:
    // 0x1ac4e8: 0xc09568e  jal         func_255A38
label_1ac4ec:
    if (ctx->pc == 0x1AC4ECu) {
        ctx->pc = 0x1AC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4E8u;
        // 0x1ac4ec: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC4F0u;
        goto label_1ac4f0;
    }
    ctx->pc = 0x1AC4E8u;
    SET_GPR_U32(ctx, 31, 0x1AC4F0u);
    ctx->pc = 0x1AC4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC4E8u;
    // 0x1ac4ec: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A38u, 0x1AC4E8u, 0x1AC4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC4F0u;
label_1ac4f0:
    // 0x1ac4f0: 0xc08fcf8  jal         func_23F3E0
label_1ac4f4:
    if (ctx->pc == 0x1AC4F4u) {
        ctx->pc = 0x1AC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4F0u;
        // 0x1ac4f4: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC4F8u;
        goto label_1ac4f8;
    }
    ctx->pc = 0x1AC4F0u;
    SET_GPR_U32(ctx, 31, 0x1AC4F8u);
    ctx->pc = 0x1AC4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC4F0u;
    // 0x1ac4f4: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3E0u, 0x1AC4F0u, 0x1AC4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC4F8u;
label_1ac4f8:
    // 0x1ac4f8: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac4fc:
    // 0x1ac4fc: 0xc08bd96  jal         func_22F658
label_1ac500:
    if (ctx->pc == 0x1AC500u) {
        ctx->pc = 0x1AC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4FCu;
        // 0x1ac500: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC504u;
        goto label_1ac504;
    }
    ctx->pc = 0x1AC4FCu;
    SET_GPR_U32(ctx, 31, 0x1AC504u);
    ctx->pc = 0x1AC500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC4FCu;
    // 0x1ac500: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x1AC4FCu, 0x1AC504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC504u;
label_1ac504:
    // 0x1ac504: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x1ac504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac508:
    // 0x1ac508: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x1ac508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1ac50c:
    // 0x1ac50c: 0x3c01c020  lui         $at, 0xC020
    ctx->pc = 0x1ac50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49184 << 16));
label_1ac510:
    // 0x1ac510: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ac510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ac514:
    // 0x1ac514: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ac514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ac518:
    // 0x1ac518: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1ac518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ac51c:
    // 0x1ac51c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ac51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ac520:
    // 0x1ac520: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ac520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac524:
    // 0x1ac524: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1ac524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ac528:
    // 0x1ac528: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1ac528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac52c:
    // 0x1ac52c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1ac52cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ac530:
    // 0x1ac530: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1ac530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac534:
    // 0x1ac534: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1ac534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ac538:
    // 0x1ac538: 0xc0b7264  jal         func_2DC990
label_1ac53c:
    if (ctx->pc == 0x1AC53Cu) {
        ctx->pc = 0x1AC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC538u;
        // 0x1ac53c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC540u;
        goto label_1ac540;
    }
    ctx->pc = 0x1AC538u;
    SET_GPR_U32(ctx, 31, 0x1AC540u);
    ctx->pc = 0x1AC53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC538u;
    // 0x1ac53c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x1AC538u, 0x1AC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC540u;
label_1ac540:
    // 0x1ac540: 0xc08fde2  jal         func_23F788
label_1ac544:
    if (ctx->pc == 0x1AC544u) {
        ctx->pc = 0x1AC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC540u;
        // 0x1ac544: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC548u;
        goto label_1ac548;
    }
    ctx->pc = 0x1AC540u;
    SET_GPR_U32(ctx, 31, 0x1AC548u);
    ctx->pc = 0x1AC544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC540u;
    // 0x1ac544: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1AC540u, 0x1AC548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC548u;
label_1ac548:
    // 0x1ac548: 0xc094224  jal         func_250890
label_1ac54c:
    if (ctx->pc == 0x1AC54Cu) {
        ctx->pc = 0x1AC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC548u;
        // 0x1ac54c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC550u;
        goto label_1ac550;
    }
    ctx->pc = 0x1AC548u;
    SET_GPR_U32(ctx, 31, 0x1AC550u);
    ctx->pc = 0x1AC54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC548u;
    // 0x1ac54c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x1AC548u, 0x1AC550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC550u;
label_1ac550:
    // 0x1ac550: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac554:
    // 0x1ac554: 0xc08961e  jal         func_225878
label_1ac558:
    if (ctx->pc == 0x1AC558u) {
        ctx->pc = 0x1AC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC554u;
        // 0x1ac558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC55Cu;
        goto label_1ac55c;
    }
    ctx->pc = 0x1AC554u;
    SET_GPR_U32(ctx, 31, 0x1AC55Cu);
    ctx->pc = 0x1AC558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC554u;
    // 0x1ac558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225878u, 0x1AC554u, 0x1AC55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC55Cu;
label_1ac55c:
    // 0x1ac55c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac560:
    // 0x1ac560: 0xae6200d4  sw          $v0, 0xD4($s3)
    ctx->pc = 0x1ac560u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 2));
label_1ac564:
    // 0x1ac564: 0xc08fd00  jal         func_23F400
label_1ac568:
    if (ctx->pc == 0x1AC568u) {
        ctx->pc = 0x1AC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC564u;
        // 0x1ac568: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC56Cu;
        goto label_1ac56c;
    }
    ctx->pc = 0x1AC564u;
    SET_GPR_U32(ctx, 31, 0x1AC56Cu);
    ctx->pc = 0x1AC568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC564u;
    // 0x1ac568: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F400u, 0x1AC564u, 0x1AC56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC56Cu;
label_1ac56c:
    // 0x1ac56c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ac570:
    if (ctx->pc == 0x1AC570u) {
        ctx->pc = 0x1AC574u;
        goto label_1ac574;
    }
    ctx->pc = 0x1AC56Cu;
    {
        const bool branch_taken_0x1ac56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac56c) {
            ctx->pc = 0x1AC588u;
            goto label_1ac588;
        }
    }
    ctx->pc = 0x1AC574u;
label_1ac574:
    // 0x1ac574: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1ac574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac578:
    // 0x1ac578: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x1ac578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_1ac57c:
    // 0x1ac57c: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1ac57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_1ac580:
    // 0x1ac580: 0x40f809  jalr        $v0
label_1ac584:
    if (ctx->pc == 0x1AC584u) {
        ctx->pc = 0x1AC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC580u;
        // 0x1ac584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC588u;
        goto label_1ac588;
    }
    ctx->pc = 0x1AC580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC588u);
        ctx->pc = 0x1AC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC580u;
        // 0x1ac584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC580u, 0x1AC588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC588u;
label_1ac588:
    // 0x1ac588: 0xc08fde2  jal         func_23F788
label_1ac58c:
    if (ctx->pc == 0x1AC58Cu) {
        ctx->pc = 0x1AC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC588u;
        // 0x1ac58c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC590u;
        goto label_1ac590;
    }
    ctx->pc = 0x1AC588u;
    SET_GPR_U32(ctx, 31, 0x1AC590u);
    ctx->pc = 0x1AC58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC588u;
    // 0x1ac58c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1AC588u, 0x1AC590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC590u;
label_1ac590:
    // 0x1ac590: 0xc094180  jal         func_250600
label_1ac594:
    if (ctx->pc == 0x1AC594u) {
        ctx->pc = 0x1AC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC590u;
        // 0x1ac594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC598u;
        goto label_1ac598;
    }
    ctx->pc = 0x1AC590u;
    SET_GPR_U32(ctx, 31, 0x1AC598u);
    ctx->pc = 0x1AC594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC590u;
    // 0x1ac594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250600u, 0x1AC590u, 0x1AC598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC598u;
label_1ac598:
    // 0x1ac598: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1ac598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1ac59c:
    // 0x1ac59c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ac59cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ac5a0:
    // 0x1ac5a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ac5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac5a4:
    // 0x1ac5a4: 0x0  nop
    ctx->pc = 0x1ac5a4u;
    // NOP
label_1ac5a8:
    // 0x1ac5a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac5a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac5ac:
    // 0x1ac5ac: 0x0  nop
    ctx->pc = 0x1ac5acu;
    // NOP
label_1ac5b0:
    // 0x1ac5b0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1ac5b4:
    if (ctx->pc == 0x1AC5B4u) {
        ctx->pc = 0x1AC5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5B0u;
        // 0x1ac5b4: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5B8u;
        goto label_1ac5b8;
    }
    ctx->pc = 0x1AC5B0u;
    {
        const bool branch_taken_0x1ac5b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5B0u;
        // 0x1ac5b4: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5b0) {
            ctx->pc = 0x1AC5ECu;
            goto label_1ac5ec;
        }
    }
    ctx->pc = 0x1AC5B8u;
label_1ac5b8:
    // 0x1ac5b8: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x1ac5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac5bc:
    // 0x1ac5bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ac5bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac5c0:
    // 0x1ac5c0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x1ac5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_1ac5c4:
    // 0x1ac5c4: 0x8c4500d4  lw          $a1, 0xD4($v0)
    ctx->pc = 0x1ac5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1ac5c8:
    // 0x1ac5c8: 0xc07f4c2  jal         func_1FD308
label_1ac5cc:
    if (ctx->pc == 0x1AC5CCu) {
        ctx->pc = 0x1AC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5C8u;
        // 0x1ac5cc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5D0u;
        goto label_1ac5d0;
    }
    ctx->pc = 0x1AC5C8u;
    SET_GPR_U32(ctx, 31, 0x1AC5D0u);
    ctx->pc = 0x1AC5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5C8u;
    // 0x1ac5cc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1AC5C8u, 0x1AC5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5D0u;
label_1ac5d0:
    // 0x1ac5d0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1ac5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1ac5d4:
    // 0x1ac5d4: 0x8e260148  lw          $a2, 0x148($s1)
    ctx->pc = 0x1ac5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_1ac5d8:
    // 0x1ac5d8: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x1ac5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_1ac5dc:
    // 0x1ac5dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ac5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ac5e0:
    // 0x1ac5e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ac5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac5e4:
    // 0x1ac5e4: 0xc046642  jal         func_119908
label_1ac5e8:
    if (ctx->pc == 0x1AC5E8u) {
        ctx->pc = 0x1AC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5E4u;
        // 0x1ac5e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5ECu;
        goto label_1ac5ec;
    }
    ctx->pc = 0x1AC5E4u;
    SET_GPR_U32(ctx, 31, 0x1AC5ECu);
    ctx->pc = 0x1AC5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5E4u;
    // 0x1ac5e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x1AC5E4u, 0x1AC5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5ECu;
label_1ac5ec:
    // 0x1ac5ec: 0xc08fde2  jal         func_23F788
label_1ac5f0:
    if (ctx->pc == 0x1AC5F0u) {
        ctx->pc = 0x1AC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5ECu;
        // 0x1ac5f0: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5F4u;
        goto label_1ac5f4;
    }
    ctx->pc = 0x1AC5ECu;
    SET_GPR_U32(ctx, 31, 0x1AC5F4u);
    ctx->pc = 0x1AC5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5ECu;
    // 0x1ac5f0: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1AC5ECu, 0x1AC5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5F4u;
label_1ac5f4:
    // 0x1ac5f4: 0xc094258  jal         func_250960
label_1ac5f8:
    if (ctx->pc == 0x1AC5F8u) {
        ctx->pc = 0x1AC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5F4u;
        // 0x1ac5f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5FCu;
        goto label_1ac5fc;
    }
    ctx->pc = 0x1AC5F4u;
    SET_GPR_U32(ctx, 31, 0x1AC5FCu);
    ctx->pc = 0x1AC5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5F4u;
    // 0x1ac5f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250960u, 0x1AC5F4u, 0x1AC5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5FCu;
label_1ac5fc:
    // 0x1ac5fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ac600:
    if (ctx->pc == 0x1AC600u) {
        ctx->pc = 0x1AC600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5FCu;
        // 0x1ac600: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC604u;
        goto label_1ac604;
    }
    ctx->pc = 0x1AC5FCu;
    {
        const bool branch_taken_0x1ac5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5FCu;
        // 0x1ac600: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5fc) {
            ctx->pc = 0x1AC618u;
            goto label_1ac618;
        }
    }
    ctx->pc = 0x1AC604u;
label_1ac604:
    // 0x1ac604: 0xc08fde2  jal         func_23F788
label_1ac608:
    if (ctx->pc == 0x1AC608u) {
        ctx->pc = 0x1AC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC604u;
        // 0x1ac608: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC60Cu;
        goto label_1ac60c;
    }
    ctx->pc = 0x1AC604u;
    SET_GPR_U32(ctx, 31, 0x1AC60Cu);
    ctx->pc = 0x1AC608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC604u;
    // 0x1ac608: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x1AC604u, 0x1AC60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC60Cu;
label_1ac60c:
    // 0x1ac60c: 0xc09335e  jal         func_24CD78
label_1ac610:
    if (ctx->pc == 0x1AC610u) {
        ctx->pc = 0x1AC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC60Cu;
        // 0x1ac610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC614u;
        goto label_1ac614;
    }
    ctx->pc = 0x1AC60Cu;
    SET_GPR_U32(ctx, 31, 0x1AC614u);
    ctx->pc = 0x1AC610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC60Cu;
    // 0x1ac610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CD78u, 0x1AC60Cu, 0x1AC614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC614u;
label_1ac614:
    // 0x1ac614: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ac614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac618:
    // 0x1ac618: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ac618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ac61c:
    // 0x1ac61c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac61cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac620:
    // 0x1ac620: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1ac620u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1ac624:
    // 0x1ac624: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ac624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac628:
    // 0x1ac628: 0x3e00008  jr          $ra
label_1ac62c:
    if (ctx->pc == 0x1AC62Cu) {
        ctx->pc = 0x1AC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC628u;
        // 0x1ac62c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC630u;
        goto label_fallthrough_0x1ac628;
    }
    ctx->pc = 0x1AC628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC628u;
        // 0x1ac62c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ac628:
    ctx->pc = 0x1AC630u;
}
