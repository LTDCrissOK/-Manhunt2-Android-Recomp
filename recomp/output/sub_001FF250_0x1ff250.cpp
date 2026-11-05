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

// Function: sub_001FF250
// Address: 0x1ff250 - 0x1ff570
void sub_001FF250_0x1ff250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF250_0x1ff250");
#endif

    switch (ctx->pc) {
        case 0x1ff250u: goto label_1ff250;
        case 0x1ff254u: goto label_1ff254;
        case 0x1ff258u: goto label_1ff258;
        case 0x1ff25cu: goto label_1ff25c;
        case 0x1ff260u: goto label_1ff260;
        case 0x1ff264u: goto label_1ff264;
        case 0x1ff268u: goto label_1ff268;
        case 0x1ff26cu: goto label_1ff26c;
        case 0x1ff270u: goto label_1ff270;
        case 0x1ff274u: goto label_1ff274;
        case 0x1ff278u: goto label_1ff278;
        case 0x1ff27cu: goto label_1ff27c;
        case 0x1ff280u: goto label_1ff280;
        case 0x1ff284u: goto label_1ff284;
        case 0x1ff288u: goto label_1ff288;
        case 0x1ff28cu: goto label_1ff28c;
        case 0x1ff290u: goto label_1ff290;
        case 0x1ff294u: goto label_1ff294;
        case 0x1ff298u: goto label_1ff298;
        case 0x1ff29cu: goto label_1ff29c;
        case 0x1ff2a0u: goto label_1ff2a0;
        case 0x1ff2a4u: goto label_1ff2a4;
        case 0x1ff2a8u: goto label_1ff2a8;
        case 0x1ff2acu: goto label_1ff2ac;
        case 0x1ff2b0u: goto label_1ff2b0;
        case 0x1ff2b4u: goto label_1ff2b4;
        case 0x1ff2b8u: goto label_1ff2b8;
        case 0x1ff2bcu: goto label_1ff2bc;
        case 0x1ff2c0u: goto label_1ff2c0;
        case 0x1ff2c4u: goto label_1ff2c4;
        case 0x1ff2c8u: goto label_1ff2c8;
        case 0x1ff2ccu: goto label_1ff2cc;
        case 0x1ff2d0u: goto label_1ff2d0;
        case 0x1ff2d4u: goto label_1ff2d4;
        case 0x1ff2d8u: goto label_1ff2d8;
        case 0x1ff2dcu: goto label_1ff2dc;
        case 0x1ff2e0u: goto label_1ff2e0;
        case 0x1ff2e4u: goto label_1ff2e4;
        case 0x1ff2e8u: goto label_1ff2e8;
        case 0x1ff2ecu: goto label_1ff2ec;
        case 0x1ff2f0u: goto label_1ff2f0;
        case 0x1ff2f4u: goto label_1ff2f4;
        case 0x1ff2f8u: goto label_1ff2f8;
        case 0x1ff2fcu: goto label_1ff2fc;
        case 0x1ff300u: goto label_1ff300;
        case 0x1ff304u: goto label_1ff304;
        case 0x1ff308u: goto label_1ff308;
        case 0x1ff30cu: goto label_1ff30c;
        case 0x1ff310u: goto label_1ff310;
        case 0x1ff314u: goto label_1ff314;
        case 0x1ff318u: goto label_1ff318;
        case 0x1ff31cu: goto label_1ff31c;
        case 0x1ff320u: goto label_1ff320;
        case 0x1ff324u: goto label_1ff324;
        case 0x1ff328u: goto label_1ff328;
        case 0x1ff32cu: goto label_1ff32c;
        case 0x1ff330u: goto label_1ff330;
        case 0x1ff334u: goto label_1ff334;
        case 0x1ff338u: goto label_1ff338;
        case 0x1ff33cu: goto label_1ff33c;
        case 0x1ff340u: goto label_1ff340;
        case 0x1ff344u: goto label_1ff344;
        case 0x1ff348u: goto label_1ff348;
        case 0x1ff34cu: goto label_1ff34c;
        case 0x1ff350u: goto label_1ff350;
        case 0x1ff354u: goto label_1ff354;
        case 0x1ff358u: goto label_1ff358;
        case 0x1ff35cu: goto label_1ff35c;
        case 0x1ff360u: goto label_1ff360;
        case 0x1ff364u: goto label_1ff364;
        case 0x1ff368u: goto label_1ff368;
        case 0x1ff36cu: goto label_1ff36c;
        case 0x1ff370u: goto label_1ff370;
        case 0x1ff374u: goto label_1ff374;
        case 0x1ff378u: goto label_1ff378;
        case 0x1ff37cu: goto label_1ff37c;
        case 0x1ff380u: goto label_1ff380;
        case 0x1ff384u: goto label_1ff384;
        case 0x1ff388u: goto label_1ff388;
        case 0x1ff38cu: goto label_1ff38c;
        case 0x1ff390u: goto label_1ff390;
        case 0x1ff394u: goto label_1ff394;
        case 0x1ff398u: goto label_1ff398;
        case 0x1ff39cu: goto label_1ff39c;
        case 0x1ff3a0u: goto label_1ff3a0;
        case 0x1ff3a4u: goto label_1ff3a4;
        case 0x1ff3a8u: goto label_1ff3a8;
        case 0x1ff3acu: goto label_1ff3ac;
        case 0x1ff3b0u: goto label_1ff3b0;
        case 0x1ff3b4u: goto label_1ff3b4;
        case 0x1ff3b8u: goto label_1ff3b8;
        case 0x1ff3bcu: goto label_1ff3bc;
        case 0x1ff3c0u: goto label_1ff3c0;
        case 0x1ff3c4u: goto label_1ff3c4;
        case 0x1ff3c8u: goto label_1ff3c8;
        case 0x1ff3ccu: goto label_1ff3cc;
        case 0x1ff3d0u: goto label_1ff3d0;
        case 0x1ff3d4u: goto label_1ff3d4;
        case 0x1ff3d8u: goto label_1ff3d8;
        case 0x1ff3dcu: goto label_1ff3dc;
        case 0x1ff3e0u: goto label_1ff3e0;
        case 0x1ff3e4u: goto label_1ff3e4;
        case 0x1ff3e8u: goto label_1ff3e8;
        case 0x1ff3ecu: goto label_1ff3ec;
        case 0x1ff3f0u: goto label_1ff3f0;
        case 0x1ff3f4u: goto label_1ff3f4;
        case 0x1ff3f8u: goto label_1ff3f8;
        case 0x1ff3fcu: goto label_1ff3fc;
        case 0x1ff400u: goto label_1ff400;
        case 0x1ff404u: goto label_1ff404;
        case 0x1ff408u: goto label_1ff408;
        case 0x1ff40cu: goto label_1ff40c;
        case 0x1ff410u: goto label_1ff410;
        case 0x1ff414u: goto label_1ff414;
        case 0x1ff418u: goto label_1ff418;
        case 0x1ff41cu: goto label_1ff41c;
        case 0x1ff420u: goto label_1ff420;
        case 0x1ff424u: goto label_1ff424;
        case 0x1ff428u: goto label_1ff428;
        case 0x1ff42cu: goto label_1ff42c;
        case 0x1ff430u: goto label_1ff430;
        case 0x1ff434u: goto label_1ff434;
        case 0x1ff438u: goto label_1ff438;
        case 0x1ff43cu: goto label_1ff43c;
        case 0x1ff440u: goto label_1ff440;
        case 0x1ff444u: goto label_1ff444;
        case 0x1ff448u: goto label_1ff448;
        case 0x1ff44cu: goto label_1ff44c;
        case 0x1ff450u: goto label_1ff450;
        case 0x1ff454u: goto label_1ff454;
        case 0x1ff458u: goto label_1ff458;
        case 0x1ff45cu: goto label_1ff45c;
        case 0x1ff460u: goto label_1ff460;
        case 0x1ff464u: goto label_1ff464;
        case 0x1ff468u: goto label_1ff468;
        case 0x1ff46cu: goto label_1ff46c;
        case 0x1ff470u: goto label_1ff470;
        case 0x1ff474u: goto label_1ff474;
        case 0x1ff478u: goto label_1ff478;
        case 0x1ff47cu: goto label_1ff47c;
        case 0x1ff480u: goto label_1ff480;
        case 0x1ff484u: goto label_1ff484;
        case 0x1ff488u: goto label_1ff488;
        case 0x1ff48cu: goto label_1ff48c;
        case 0x1ff490u: goto label_1ff490;
        case 0x1ff494u: goto label_1ff494;
        case 0x1ff498u: goto label_1ff498;
        case 0x1ff49cu: goto label_1ff49c;
        case 0x1ff4a0u: goto label_1ff4a0;
        case 0x1ff4a4u: goto label_1ff4a4;
        case 0x1ff4a8u: goto label_1ff4a8;
        case 0x1ff4acu: goto label_1ff4ac;
        case 0x1ff4b0u: goto label_1ff4b0;
        case 0x1ff4b4u: goto label_1ff4b4;
        case 0x1ff4b8u: goto label_1ff4b8;
        case 0x1ff4bcu: goto label_1ff4bc;
        case 0x1ff4c0u: goto label_1ff4c0;
        case 0x1ff4c4u: goto label_1ff4c4;
        case 0x1ff4c8u: goto label_1ff4c8;
        case 0x1ff4ccu: goto label_1ff4cc;
        case 0x1ff4d0u: goto label_1ff4d0;
        case 0x1ff4d4u: goto label_1ff4d4;
        case 0x1ff4d8u: goto label_1ff4d8;
        case 0x1ff4dcu: goto label_1ff4dc;
        case 0x1ff4e0u: goto label_1ff4e0;
        case 0x1ff4e4u: goto label_1ff4e4;
        case 0x1ff4e8u: goto label_1ff4e8;
        case 0x1ff4ecu: goto label_1ff4ec;
        case 0x1ff4f0u: goto label_1ff4f0;
        case 0x1ff4f4u: goto label_1ff4f4;
        case 0x1ff4f8u: goto label_1ff4f8;
        case 0x1ff4fcu: goto label_1ff4fc;
        case 0x1ff500u: goto label_1ff500;
        case 0x1ff504u: goto label_1ff504;
        case 0x1ff508u: goto label_1ff508;
        case 0x1ff50cu: goto label_1ff50c;
        case 0x1ff510u: goto label_1ff510;
        case 0x1ff514u: goto label_1ff514;
        case 0x1ff518u: goto label_1ff518;
        case 0x1ff51cu: goto label_1ff51c;
        case 0x1ff520u: goto label_1ff520;
        case 0x1ff524u: goto label_1ff524;
        case 0x1ff528u: goto label_1ff528;
        case 0x1ff52cu: goto label_1ff52c;
        case 0x1ff530u: goto label_1ff530;
        case 0x1ff534u: goto label_1ff534;
        case 0x1ff538u: goto label_1ff538;
        case 0x1ff53cu: goto label_1ff53c;
        case 0x1ff540u: goto label_1ff540;
        case 0x1ff544u: goto label_1ff544;
        case 0x1ff548u: goto label_1ff548;
        case 0x1ff54cu: goto label_1ff54c;
        case 0x1ff550u: goto label_1ff550;
        case 0x1ff554u: goto label_1ff554;
        case 0x1ff558u: goto label_1ff558;
        case 0x1ff55cu: goto label_1ff55c;
        case 0x1ff560u: goto label_1ff560;
        case 0x1ff564u: goto label_1ff564;
        case 0x1ff568u: goto label_1ff568;
        case 0x1ff56cu: goto label_1ff56c;
        default: break;
    }

    ctx->pc = 0x1ff250u;

label_1ff250:
    // 0x1ff250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ff250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ff254:
    // 0x1ff254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff258:
    // 0x1ff258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ff25c:
    // 0x1ff25c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ff25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1ff260:
    // 0x1ff260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ff264:
    // 0x1ff264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ff268:
    // 0x1ff268: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ff268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ff26c:
    // 0x1ff26c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ff26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1ff270:
    // 0x1ff270: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ff270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1ff274:
    // 0x1ff274: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1ff274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1ff278:
    // 0x1ff278: 0x92230050  lbu         $v1, 0x50($s1)
    ctx->pc = 0x1ff278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_1ff27c:
    // 0x1ff27c: 0x1462008d  bne         $v1, $v0, . + 4 + (0x8D << 2)
label_1ff280:
    if (ctx->pc == 0x1FF280u) {
        ctx->pc = 0x1FF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF27Cu;
        // 0x1ff280: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF284u;
        goto label_1ff284;
    }
    ctx->pc = 0x1FF27Cu;
    {
        const bool branch_taken_0x1ff27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF27Cu;
        // 0x1ff280: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff27c) {
            ctx->pc = 0x1FF4B4u;
            goto label_1ff4b4;
        }
    }
    ctx->pc = 0x1FF284u;
label_1ff284:
    // 0x1ff284: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x1ff284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
label_1ff288:
    // 0x1ff288: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x1ff288u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
label_1ff28c:
    // 0x1ff28c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ff28cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ff290:
    // 0x1ff290: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ff290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff294:
    // 0x1ff294: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x1ff294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1ff298:
    // 0x1ff298: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_1ff29c:
    if (ctx->pc == 0x1FF29Cu) {
        ctx->pc = 0x1FF29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF298u;
        // 0x1ff29c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2A0u;
        goto label_1ff2a0;
    }
    ctx->pc = 0x1FF298u;
    {
        const bool branch_taken_0x1ff298 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF298u;
        // 0x1ff29c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff298) {
            ctx->pc = 0x1FF2A8u;
            goto label_1ff2a8;
        }
    }
    ctx->pc = 0x1FF2A0u;
label_1ff2a0:
    // 0x1ff2a0: 0xc082482  jal         func_209208
label_1ff2a4:
    if (ctx->pc == 0x1FF2A4u) {
        ctx->pc = 0x1FF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2A0u;
        // 0x1ff2a4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2A8u;
        goto label_1ff2a8;
    }
    ctx->pc = 0x1FF2A0u;
    SET_GPR_U32(ctx, 31, 0x1FF2A8u);
    ctx->pc = 0x1FF2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF2A0u;
    // 0x1ff2a4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209208u, 0x1FF2A0u, 0x1FF2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF2A8u;
label_1ff2a8:
    // 0x1ff2a8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_1ff2ac:
    if (ctx->pc == 0x1FF2ACu) {
        ctx->pc = 0x1FF2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2A8u;
        // 0x1ff2ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2B0u;
        goto label_1ff2b0;
    }
    ctx->pc = 0x1FF2A8u;
    {
        const bool branch_taken_0x1ff2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff2a8) {
            ctx->pc = 0x1FF2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF2A8u;
            // 0x1ff2ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF31Cu;
            goto label_1ff31c;
        }
    }
    ctx->pc = 0x1FF2B0u;
label_1ff2b0:
    // 0x1ff2b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ff2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ff2b4:
    // 0x1ff2b4: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x1ff2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ff2b8:
    // 0x1ff2b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ff2b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ff2bc:
    // 0x1ff2bc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ff2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ff2c0:
    // 0x1ff2c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ff2c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ff2c4:
    // 0x1ff2c4: 0xc0e3f5e  jal         func_38FD78
label_1ff2c8:
    if (ctx->pc == 0x1FF2C8u) {
        ctx->pc = 0x1FF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2C4u;
        // 0x1ff2c8: 0x46140b02  mul.s       $f12, $f1, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2CCu;
        goto label_1ff2cc;
    }
    ctx->pc = 0x1FF2C4u;
    SET_GPR_U32(ctx, 31, 0x1FF2CCu);
    ctx->pc = 0x1FF2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF2C4u;
    // 0x1ff2c8: 0x46140b02  mul.s       $f12, $f1, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1FF2C4u, 0x1FF2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF2CCu;
label_1ff2cc:
    // 0x1ff2cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ff2ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ff2d0:
    // 0x1ff2d0: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1ff2d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1ff2d4:
    // 0x1ff2d4: 0xc081710  jal         func_205C40
label_1ff2d8:
    if (ctx->pc == 0x1FF2D8u) {
        ctx->pc = 0x1FF2DCu;
        goto label_1ff2dc;
    }
    ctx->pc = 0x1FF2D4u;
    SET_GPR_U32(ctx, 31, 0x1FF2DCu);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FF2D4u, 0x1FF2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF2DCu;
label_1ff2dc:
    // 0x1ff2dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff2e0:
    // 0x1ff2e0: 0xc0817d4  jal         func_205F50
label_1ff2e4:
    if (ctx->pc == 0x1FF2E4u) {
        ctx->pc = 0x1FF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2E0u;
        // 0x1ff2e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2E8u;
        goto label_1ff2e8;
    }
    ctx->pc = 0x1FF2E0u;
    SET_GPR_U32(ctx, 31, 0x1FF2E8u);
    ctx->pc = 0x1FF2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF2E0u;
    // 0x1ff2e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1FF2E0u, 0x1FF2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF2E8u;
label_1ff2e8:
    // 0x1ff2e8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1ff2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1ff2ec:
    // 0x1ff2ec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1ff2f0:
    if (ctx->pc == 0x1FF2F0u) {
        ctx->pc = 0x1FF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2ECu;
        // 0x1ff2f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF2F4u;
        goto label_1ff2f4;
    }
    ctx->pc = 0x1FF2ECu;
    {
        const bool branch_taken_0x1ff2ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2ECu;
        // 0x1ff2f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2ec) {
            ctx->pc = 0x1FF318u;
            goto label_1ff318;
        }
    }
    ctx->pc = 0x1FF2F4u;
label_1ff2f4:
    // 0x1ff2f4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ff2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ff2f8:
    // 0x1ff2f8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1ff2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1ff2fc:
    // 0x1ff2fc: 0x40f809  jalr        $v0
label_1ff300:
    if (ctx->pc == 0x1FF300u) {
        ctx->pc = 0x1FF304u;
        goto label_1ff304;
    }
    ctx->pc = 0x1FF2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF304u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF2FCu, 0x1FF304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF304u;
label_1ff304:
    // 0x1ff304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ff308:
    if (ctx->pc == 0x1FF308u) {
        ctx->pc = 0x1FF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF304u;
        // 0x1ff308: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF30Cu;
        goto label_1ff30c;
    }
    ctx->pc = 0x1FF304u;
    {
        const bool branch_taken_0x1ff304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF304u;
        // 0x1ff308: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff304) {
            ctx->pc = 0x1FF318u;
            goto label_1ff318;
        }
    }
    ctx->pc = 0x1FF30Cu;
label_1ff30c:
    // 0x1ff30c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1ff30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1ff310:
    // 0x1ff310: 0xc0816d6  jal         func_205B58
label_1ff314:
    if (ctx->pc == 0x1FF314u) {
        ctx->pc = 0x1FF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF310u;
        // 0x1ff314: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF318u;
        goto label_1ff318;
    }
    ctx->pc = 0x1FF310u;
    SET_GPR_U32(ctx, 31, 0x1FF318u);
    ctx->pc = 0x1FF314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF310u;
    // 0x1ff314: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205B58u, 0x1FF310u, 0x1FF318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF318u;
label_1ff318:
    // 0x1ff318: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ff318u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ff31c:
    // 0x1ff31c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1ff31cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_1ff320:
    // 0x1ff320: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_1ff324:
    if (ctx->pc == 0x1FF324u) {
        ctx->pc = 0x1FF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF320u;
        // 0x1ff324: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF328u;
        goto label_1ff328;
    }
    ctx->pc = 0x1FF320u;
    {
        const bool branch_taken_0x1ff320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF320u;
        // 0x1ff324: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff320) {
            ctx->pc = 0x1FF298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff298;
        }
    }
    ctx->pc = 0x1FF328u;
label_1ff328:
    // 0x1ff328: 0x9222004b  lbu         $v0, 0x4B($s1)
    ctx->pc = 0x1ff328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
label_1ff32c:
    // 0x1ff32c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1ff330:
    if (ctx->pc == 0x1FF330u) {
        ctx->pc = 0x1FF334u;
        goto label_1ff334;
    }
    ctx->pc = 0x1FF32Cu;
    {
        const bool branch_taken_0x1ff32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff32c) {
            ctx->pc = 0x1FF3C0u;
            goto label_1ff3c0;
        }
    }
    ctx->pc = 0x1FF334u;
label_1ff334:
    // 0x1ff334: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_1ff338:
    if (ctx->pc == 0x1FF338u) {
        ctx->pc = 0x1FF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF334u;
        // 0x1ff338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF33Cu;
        goto label_1ff33c;
    }
    ctx->pc = 0x1FF334u;
    {
        const bool branch_taken_0x1ff334 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF334u;
        // 0x1ff338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff334) {
            ctx->pc = 0x1FF344u;
            goto label_1ff344;
        }
    }
    ctx->pc = 0x1FF33Cu;
label_1ff33c:
    // 0x1ff33c: 0xc082482  jal         func_209208
label_1ff340:
    if (ctx->pc == 0x1FF340u) {
        ctx->pc = 0x1FF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF33Cu;
        // 0x1ff340: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF344u;
        goto label_1ff344;
    }
    ctx->pc = 0x1FF33Cu;
    SET_GPR_U32(ctx, 31, 0x1FF344u);
    ctx->pc = 0x1FF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF33Cu;
    // 0x1ff340: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209208u, 0x1FF33Cu, 0x1FF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF344u;
label_1ff344:
    // 0x1ff344: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1ff348:
    if (ctx->pc == 0x1FF348u) {
        ctx->pc = 0x1FF34Cu;
        goto label_1ff34c;
    }
    ctx->pc = 0x1FF344u;
    {
        const bool branch_taken_0x1ff344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff344) {
            ctx->pc = 0x1FF3C0u;
            goto label_1ff3c0;
        }
    }
    ctx->pc = 0x1FF34Cu;
label_1ff34c:
    // 0x1ff34c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1ff34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ff350:
    // 0x1ff350: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x1ff350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ff354:
    // 0x1ff354: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ff354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ff358:
    // 0x1ff358: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x1ff358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
label_1ff35c:
    // 0x1ff35c: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x1ff35cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
label_1ff360:
    // 0x1ff360: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ff360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ff364:
    // 0x1ff364: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ff364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ff368:
    // 0x1ff368: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ff368u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ff36c:
    // 0x1ff36c: 0xc0e3f5e  jal         func_38FD78
label_1ff370:
    if (ctx->pc == 0x1FF370u) {
        ctx->pc = 0x1FF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF36Cu;
        // 0x1ff370: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF374u;
        goto label_1ff374;
    }
    ctx->pc = 0x1FF36Cu;
    SET_GPR_U32(ctx, 31, 0x1FF374u);
    ctx->pc = 0x1FF370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF36Cu;
    // 0x1ff370: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1FF36Cu, 0x1FF374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF374u;
label_1ff374:
    // 0x1ff374: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ff374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ff378:
    // 0x1ff378: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ff378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ff37c:
    // 0x1ff37c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1ff37cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1ff380:
    // 0x1ff380: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1ff384:
    if (ctx->pc == 0x1FF384u) {
        ctx->pc = 0x1FF388u;
        goto label_1ff388;
    }
    ctx->pc = 0x1FF380u;
    {
        const bool branch_taken_0x1ff380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff380) {
            ctx->pc = 0x1FF3C0u;
            goto label_1ff3c0;
        }
    }
    ctx->pc = 0x1FF388u;
label_1ff388:
    // 0x1ff388: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ff388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ff38c:
    // 0x1ff38c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1ff38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1ff390:
    // 0x1ff390: 0x40f809  jalr        $v0
label_1ff394:
    if (ctx->pc == 0x1FF394u) {
        ctx->pc = 0x1FF398u;
        goto label_1ff398;
    }
    ctx->pc = 0x1FF390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF398u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF390u, 0x1FF398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF398u;
label_1ff398:
    // 0x1ff398: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ff39c:
    if (ctx->pc == 0x1FF39Cu) {
        ctx->pc = 0x1FF3A0u;
        goto label_1ff3a0;
    }
    ctx->pc = 0x1FF398u;
    {
        const bool branch_taken_0x1ff398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff398) {
            ctx->pc = 0x1FF3C0u;
            goto label_1ff3c0;
        }
    }
    ctx->pc = 0x1FF3A0u;
label_1ff3a0:
    // 0x1ff3a0: 0xc081710  jal         func_205C40
label_1ff3a4:
    if (ctx->pc == 0x1FF3A4u) {
        ctx->pc = 0x1FF3A8u;
        goto label_1ff3a8;
    }
    ctx->pc = 0x1FF3A0u;
    SET_GPR_U32(ctx, 31, 0x1FF3A8u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FF3A0u, 0x1FF3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3A8u;
label_1ff3a8:
    // 0x1ff3a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff3ac:
    // 0x1ff3ac: 0xc0817d4  jal         func_205F50
label_1ff3b0:
    if (ctx->pc == 0x1FF3B0u) {
        ctx->pc = 0x1FF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3ACu;
        // 0x1ff3b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF3B4u;
        goto label_1ff3b4;
    }
    ctx->pc = 0x1FF3ACu;
    SET_GPR_U32(ctx, 31, 0x1FF3B4u);
    ctx->pc = 0x1FF3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF3ACu;
    // 0x1ff3b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1FF3ACu, 0x1FF3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3B4u;
label_1ff3b4:
    // 0x1ff3b4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ff3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ff3b8:
    // 0x1ff3b8: 0xc081560  jal         func_205580
label_1ff3bc:
    if (ctx->pc == 0x1FF3BCu) {
        ctx->pc = 0x1FF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3B8u;
        // 0x1ff3bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF3C0u;
        goto label_1ff3c0;
    }
    ctx->pc = 0x1FF3B8u;
    SET_GPR_U32(ctx, 31, 0x1FF3C0u);
    ctx->pc = 0x1FF3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF3B8u;
    // 0x1ff3bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x1FF3B8u, 0x1FF3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3C0u;
label_1ff3c0:
    // 0x1ff3c0: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x1ff3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
label_1ff3c4:
    // 0x1ff3c4: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x1ff3c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
label_1ff3c8:
    // 0x1ff3c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ff3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ff3cc:
    // 0x1ff3cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ff3ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff3d0:
    // 0x1ff3d0: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x1ff3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1ff3d4:
    // 0x1ff3d4: 0x0  nop
    ctx->pc = 0x1ff3d4u;
    // NOP
label_1ff3d8:
    // 0x1ff3d8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_1ff3dc:
    if (ctx->pc == 0x1FF3DCu) {
        ctx->pc = 0x1FF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3D8u;
        // 0x1ff3dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF3E0u;
        goto label_1ff3e0;
    }
    ctx->pc = 0x1FF3D8u;
    {
        const bool branch_taken_0x1ff3d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3D8u;
        // 0x1ff3dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3d8) {
            ctx->pc = 0x1FF3ECu;
            goto label_1ff3ec;
        }
    }
    ctx->pc = 0x1FF3E0u;
label_1ff3e0:
    // 0x1ff3e0: 0xc082482  jal         func_209208
label_1ff3e4:
    if (ctx->pc == 0x1FF3E4u) {
        ctx->pc = 0x1FF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3E0u;
        // 0x1ff3e4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF3E8u;
        goto label_1ff3e8;
    }
    ctx->pc = 0x1FF3E0u;
    SET_GPR_U32(ctx, 31, 0x1FF3E8u);
    ctx->pc = 0x1FF3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF3E0u;
    // 0x1ff3e4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209208u, 0x1FF3E0u, 0x1FF3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3E8u;
label_1ff3e8:
    // 0x1ff3e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff3ec:
    // 0x1ff3ec: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x1ff3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1ff3f0:
    // 0x1ff3f0: 0x92230098  lbu         $v1, 0x98($s1)
    ctx->pc = 0x1ff3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
label_1ff3f4:
    // 0x1ff3f4: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x1ff3f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1ff3f8:
    // 0x1ff3f8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1ff3fc:
    if (ctx->pc == 0x1FF3FCu) {
        ctx->pc = 0x1FF400u;
        goto label_1ff400;
    }
    ctx->pc = 0x1FF3F8u;
    {
        const bool branch_taken_0x1ff3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ff3f8) {
            ctx->pc = 0x1FF418u;
            goto label_1ff418;
        }
    }
    ctx->pc = 0x1FF400u;
label_1ff400:
    // 0x1ff400: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1ff404:
    if (ctx->pc == 0x1FF404u) {
        ctx->pc = 0x1FF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF400u;
        // 0x1ff404: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF408u;
        goto label_1ff408;
    }
    ctx->pc = 0x1FF400u;
    {
        const bool branch_taken_0x1ff400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF400u;
        // 0x1ff404: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff400) {
            ctx->pc = 0x1FF418u;
            goto label_1ff418;
        }
    }
    ctx->pc = 0x1FF408u;
label_1ff408:
    // 0x1ff408: 0xc0824ec  jal         func_2093B0
label_1ff40c:
    if (ctx->pc == 0x1FF40Cu) {
        ctx->pc = 0x1FF40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF408u;
        // 0x1ff40c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF410u;
        goto label_1ff410;
    }
    ctx->pc = 0x1FF408u;
    SET_GPR_U32(ctx, 31, 0x1FF410u);
    ctx->pc = 0x1FF40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF408u;
    // 0x1ff40c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2093B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2093B0u, 0x1FF408u, 0x1FF410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF410u;
label_1ff410:
    // 0x1ff410: 0xc082482  jal         func_209208
label_1ff414:
    if (ctx->pc == 0x1FF414u) {
        ctx->pc = 0x1FF414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF410u;
        // 0x1ff414: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF418u;
        goto label_1ff418;
    }
    ctx->pc = 0x1FF410u;
    SET_GPR_U32(ctx, 31, 0x1FF418u);
    ctx->pc = 0x1FF414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF410u;
    // 0x1ff414: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209208u, 0x1FF410u, 0x1FF418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF418u;
label_1ff418:
    // 0x1ff418: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
label_1ff41c:
    if (ctx->pc == 0x1FF41Cu) {
        ctx->pc = 0x1FF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF418u;
        // 0x1ff41c: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF420u;
        goto label_1ff420;
    }
    ctx->pc = 0x1FF418u;
    {
        const bool branch_taken_0x1ff418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff418) {
            ctx->pc = 0x1FF41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF418u;
            // 0x1ff41c: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF48Cu;
            goto label_1ff48c;
        }
    }
    ctx->pc = 0x1FF420u;
label_1ff420:
    // 0x1ff420: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ff420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ff424:
    // 0x1ff424: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x1ff424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ff428:
    // 0x1ff428: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ff428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ff42c:
    // 0x1ff42c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ff42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ff430:
    // 0x1ff430: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ff430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ff434:
    // 0x1ff434: 0xc0e3f5e  jal         func_38FD78
label_1ff438:
    if (ctx->pc == 0x1FF438u) {
        ctx->pc = 0x1FF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF434u;
        // 0x1ff438: 0x46140b02  mul.s       $f12, $f1, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF43Cu;
        goto label_1ff43c;
    }
    ctx->pc = 0x1FF434u;
    SET_GPR_U32(ctx, 31, 0x1FF43Cu);
    ctx->pc = 0x1FF438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF434u;
    // 0x1ff438: 0x46140b02  mul.s       $f12, $f1, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1FF434u, 0x1FF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF43Cu;
label_1ff43c:
    // 0x1ff43c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ff43cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ff440:
    // 0x1ff440: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1ff440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1ff444:
    // 0x1ff444: 0xc081710  jal         func_205C40
label_1ff448:
    if (ctx->pc == 0x1FF448u) {
        ctx->pc = 0x1FF44Cu;
        goto label_1ff44c;
    }
    ctx->pc = 0x1FF444u;
    SET_GPR_U32(ctx, 31, 0x1FF44Cu);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FF444u, 0x1FF44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF44Cu;
label_1ff44c:
    // 0x1ff44c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff450:
    // 0x1ff450: 0xc0817d4  jal         func_205F50
label_1ff454:
    if (ctx->pc == 0x1FF454u) {
        ctx->pc = 0x1FF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF450u;
        // 0x1ff454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF458u;
        goto label_1ff458;
    }
    ctx->pc = 0x1FF450u;
    SET_GPR_U32(ctx, 31, 0x1FF458u);
    ctx->pc = 0x1FF454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF450u;
    // 0x1ff454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1FF450u, 0x1FF458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF458u;
label_1ff458:
    // 0x1ff458: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1ff458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1ff45c:
    // 0x1ff45c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1ff460:
    if (ctx->pc == 0x1FF460u) {
        ctx->pc = 0x1FF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF45Cu;
        // 0x1ff460: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF464u;
        goto label_1ff464;
    }
    ctx->pc = 0x1FF45Cu;
    {
        const bool branch_taken_0x1ff45c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF45Cu;
        // 0x1ff460: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff45c) {
            ctx->pc = 0x1FF488u;
            goto label_1ff488;
        }
    }
    ctx->pc = 0x1FF464u;
label_1ff464:
    // 0x1ff464: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ff464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ff468:
    // 0x1ff468: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1ff468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1ff46c:
    // 0x1ff46c: 0x40f809  jalr        $v0
label_1ff470:
    if (ctx->pc == 0x1FF470u) {
        ctx->pc = 0x1FF474u;
        goto label_1ff474;
    }
    ctx->pc = 0x1FF46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF474u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF46Cu, 0x1FF474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF474u;
label_1ff474:
    // 0x1ff474: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ff478:
    if (ctx->pc == 0x1FF478u) {
        ctx->pc = 0x1FF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF474u;
        // 0x1ff478: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF47Cu;
        goto label_1ff47c;
    }
    ctx->pc = 0x1FF474u;
    {
        const bool branch_taken_0x1ff474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF474u;
        // 0x1ff478: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff474) {
            ctx->pc = 0x1FF488u;
            goto label_1ff488;
        }
    }
    ctx->pc = 0x1FF47Cu;
label_1ff47c:
    // 0x1ff47c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1ff47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1ff480:
    // 0x1ff480: 0xc0816d6  jal         func_205B58
label_1ff484:
    if (ctx->pc == 0x1FF484u) {
        ctx->pc = 0x1FF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF480u;
        // 0x1ff484: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF488u;
        goto label_1ff488;
    }
    ctx->pc = 0x1FF480u;
    SET_GPR_U32(ctx, 31, 0x1FF488u);
    ctx->pc = 0x1FF484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF480u;
    // 0x1ff484: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205B58u, 0x1FF480u, 0x1FF488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF488u;
label_1ff488:
    // 0x1ff488: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1ff488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1ff48c:
    // 0x1ff48c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1ff490:
    if (ctx->pc == 0x1FF490u) {
        ctx->pc = 0x1FF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF48Cu;
        // 0x1ff490: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF494u;
        goto label_1ff494;
    }
    ctx->pc = 0x1FF48Cu;
    {
        const bool branch_taken_0x1ff48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff48c) {
            ctx->pc = 0x1FF490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF48Cu;
            // 0x1ff490: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF4A8u;
            goto label_1ff4a8;
        }
    }
    ctx->pc = 0x1FF494u;
label_1ff494:
    // 0x1ff494: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1ff494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1ff498:
    // 0x1ff498: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x1ff498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1ff49c:
    // 0x1ff49c: 0xc0816d6  jal         func_205B58
label_1ff4a0:
    if (ctx->pc == 0x1FF4A0u) {
        ctx->pc = 0x1FF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF49Cu;
        // 0x1ff4a0: 0x2406fc40  addiu       $a2, $zero, -0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4A4u;
        goto label_1ff4a4;
    }
    ctx->pc = 0x1FF49Cu;
    SET_GPR_U32(ctx, 31, 0x1FF4A4u);
    ctx->pc = 0x1FF4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF49Cu;
    // 0x1ff4a0: 0x2406fc40  addiu       $a2, $zero, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205B58u, 0x1FF49Cu, 0x1FF4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4A4u;
label_1ff4a4:
    // 0x1ff4a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ff4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ff4a8:
    // 0x1ff4a8: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1ff4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_1ff4ac:
    // 0x1ff4ac: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_1ff4b0:
    if (ctx->pc == 0x1FF4B0u) {
        ctx->pc = 0x1FF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4ACu;
        // 0x1ff4b0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4B4u;
        goto label_1ff4b4;
    }
    ctx->pc = 0x1FF4ACu;
    {
        const bool branch_taken_0x1ff4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4ACu;
        // 0x1ff4b0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4ac) {
            ctx->pc = 0x1FF3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff3d8;
        }
    }
    ctx->pc = 0x1FF4B4u;
label_1ff4b4:
    // 0x1ff4b4: 0x92220050  lbu         $v0, 0x50($s1)
    ctx->pc = 0x1ff4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_1ff4b8:
    // 0x1ff4b8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_1ff4bc:
    if (ctx->pc == 0x1FF4BCu) {
        ctx->pc = 0x1FF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4B8u;
        // 0x1ff4bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4C0u;
        goto label_1ff4c0;
    }
    ctx->pc = 0x1FF4B8u;
    {
        const bool branch_taken_0x1ff4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff4b8) {
            ctx->pc = 0x1FF4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF4B8u;
            // 0x1ff4bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF550u;
            goto label_1ff550;
        }
    }
    ctx->pc = 0x1FF4C0u;
label_1ff4c0:
    // 0x1ff4c0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_1ff4c4:
    if (ctx->pc == 0x1FF4C4u) {
        ctx->pc = 0x1FF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4C0u;
        // 0x1ff4c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4C8u;
        goto label_1ff4c8;
    }
    ctx->pc = 0x1FF4C0u;
    {
        const bool branch_taken_0x1ff4c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4C0u;
        // 0x1ff4c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4c0) {
            ctx->pc = 0x1FF4D0u;
            goto label_1ff4d0;
        }
    }
    ctx->pc = 0x1FF4C8u;
label_1ff4c8:
    // 0x1ff4c8: 0xc082482  jal         func_209208
label_1ff4cc:
    if (ctx->pc == 0x1FF4CCu) {
        ctx->pc = 0x1FF4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4C8u;
        // 0x1ff4cc: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4D0u;
        goto label_1ff4d0;
    }
    ctx->pc = 0x1FF4C8u;
    SET_GPR_U32(ctx, 31, 0x1FF4D0u);
    ctx->pc = 0x1FF4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF4C8u;
    // 0x1ff4cc: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209208u, 0x1FF4C8u, 0x1FF4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4D0u;
label_1ff4d0:
    // 0x1ff4d0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1ff4d4:
    if (ctx->pc == 0x1FF4D4u) {
        ctx->pc = 0x1FF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4D0u;
        // 0x1ff4d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4D8u;
        goto label_1ff4d8;
    }
    ctx->pc = 0x1FF4D0u;
    {
        const bool branch_taken_0x1ff4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4D0u;
        // 0x1ff4d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4d0) {
            ctx->pc = 0x1FF550u;
            goto label_1ff550;
        }
    }
    ctx->pc = 0x1FF4D8u;
label_1ff4d8:
    // 0x1ff4d8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1ff4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1ff4dc:
    // 0x1ff4dc: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x1ff4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ff4e0:
    // 0x1ff4e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ff4e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ff4e4:
    // 0x1ff4e4: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x1ff4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
label_1ff4e8:
    // 0x1ff4e8: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x1ff4e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
label_1ff4ec:
    // 0x1ff4ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ff4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ff4f0:
    // 0x1ff4f0: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ff4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ff4f4:
    // 0x1ff4f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ff4f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ff4f8:
    // 0x1ff4f8: 0xc0e3f5e  jal         func_38FD78
label_1ff4fc:
    if (ctx->pc == 0x1FF4FCu) {
        ctx->pc = 0x1FF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4F8u;
        // 0x1ff4fc: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF500u;
        goto label_1ff500;
    }
    ctx->pc = 0x1FF4F8u;
    SET_GPR_U32(ctx, 31, 0x1FF500u);
    ctx->pc = 0x1FF4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF4F8u;
    // 0x1ff4fc: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1FF4F8u, 0x1FF500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF500u;
label_1ff500:
    // 0x1ff500: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ff500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ff504:
    // 0x1ff504: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ff504u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ff508:
    // 0x1ff508: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1ff508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1ff50c:
    // 0x1ff50c: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
label_1ff510:
    if (ctx->pc == 0x1FF510u) {
        ctx->pc = 0x1FF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF50Cu;
        // 0x1ff510: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF514u;
        goto label_1ff514;
    }
    ctx->pc = 0x1FF50Cu;
    {
        const bool branch_taken_0x1ff50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff50c) {
            ctx->pc = 0x1FF510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF50Cu;
            // 0x1ff510: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF550u;
            goto label_1ff550;
        }
    }
    ctx->pc = 0x1FF514u;
label_1ff514:
    // 0x1ff514: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ff514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ff518:
    // 0x1ff518: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1ff518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1ff51c:
    // 0x1ff51c: 0x40f809  jalr        $v0
label_1ff520:
    if (ctx->pc == 0x1FF520u) {
        ctx->pc = 0x1FF524u;
        goto label_1ff524;
    }
    ctx->pc = 0x1FF51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF524u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF51Cu, 0x1FF524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF524u;
label_1ff524:
    // 0x1ff524: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1ff528:
    if (ctx->pc == 0x1FF528u) {
        ctx->pc = 0x1FF528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF524u;
        // 0x1ff528: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF52Cu;
        goto label_1ff52c;
    }
    ctx->pc = 0x1FF524u;
    {
        const bool branch_taken_0x1ff524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff524) {
            ctx->pc = 0x1FF528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF524u;
            // 0x1ff528: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF550u;
            goto label_1ff550;
        }
    }
    ctx->pc = 0x1FF52Cu;
label_1ff52c:
    // 0x1ff52c: 0xc081710  jal         func_205C40
label_1ff530:
    if (ctx->pc == 0x1FF530u) {
        ctx->pc = 0x1FF534u;
        goto label_1ff534;
    }
    ctx->pc = 0x1FF52Cu;
    SET_GPR_U32(ctx, 31, 0x1FF534u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FF52Cu, 0x1FF534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF534u;
label_1ff534:
    // 0x1ff534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff538:
    // 0x1ff538: 0xc0817d4  jal         func_205F50
label_1ff53c:
    if (ctx->pc == 0x1FF53Cu) {
        ctx->pc = 0x1FF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF538u;
        // 0x1ff53c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF540u;
        goto label_1ff540;
    }
    ctx->pc = 0x1FF538u;
    SET_GPR_U32(ctx, 31, 0x1FF540u);
    ctx->pc = 0x1FF53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF538u;
    // 0x1ff53c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1FF538u, 0x1FF540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF540u;
label_1ff540:
    // 0x1ff540: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ff540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ff544:
    // 0x1ff544: 0xc081560  jal         func_205580
label_1ff548:
    if (ctx->pc == 0x1FF548u) {
        ctx->pc = 0x1FF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF544u;
        // 0x1ff548: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF54Cu;
        goto label_1ff54c;
    }
    ctx->pc = 0x1FF544u;
    SET_GPR_U32(ctx, 31, 0x1FF54Cu);
    ctx->pc = 0x1FF548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF544u;
    // 0x1ff548: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x1FF544u, 0x1FF54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF54Cu;
label_1ff54c:
    // 0x1ff54c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff54cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff550:
    // 0x1ff550: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ff554:
    // 0x1ff554: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ff554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff558:
    // 0x1ff558: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ff558u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ff55c:
    // 0x1ff55c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ff55cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff560:
    // 0x1ff560: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ff560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ff564:
    // 0x1ff564: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1ff564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ff568:
    // 0x1ff568: 0x3e00008  jr          $ra
label_1ff56c:
    if (ctx->pc == 0x1FF56Cu) {
        ctx->pc = 0x1FF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF568u;
        // 0x1ff56c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF570u;
        goto label_fallthrough_0x1ff568;
    }
    ctx->pc = 0x1FF568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF568u;
        // 0x1ff56c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ff568:
    ctx->pc = 0x1FF570u;
}
