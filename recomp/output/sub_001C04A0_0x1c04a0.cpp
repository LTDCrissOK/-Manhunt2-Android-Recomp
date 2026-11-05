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

// Function: sub_001C04A0
// Address: 0x1c04a0 - 0x1c0620
void sub_001C04A0_0x1c04a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C04A0_0x1c04a0");
#endif

    switch (ctx->pc) {
        case 0x1c04a0u: goto label_1c04a0;
        case 0x1c04a4u: goto label_1c04a4;
        case 0x1c04a8u: goto label_1c04a8;
        case 0x1c04acu: goto label_1c04ac;
        case 0x1c04b0u: goto label_1c04b0;
        case 0x1c04b4u: goto label_1c04b4;
        case 0x1c04b8u: goto label_1c04b8;
        case 0x1c04bcu: goto label_1c04bc;
        case 0x1c04c0u: goto label_1c04c0;
        case 0x1c04c4u: goto label_1c04c4;
        case 0x1c04c8u: goto label_1c04c8;
        case 0x1c04ccu: goto label_1c04cc;
        case 0x1c04d0u: goto label_1c04d0;
        case 0x1c04d4u: goto label_1c04d4;
        case 0x1c04d8u: goto label_1c04d8;
        case 0x1c04dcu: goto label_1c04dc;
        case 0x1c04e0u: goto label_1c04e0;
        case 0x1c04e4u: goto label_1c04e4;
        case 0x1c04e8u: goto label_1c04e8;
        case 0x1c04ecu: goto label_1c04ec;
        case 0x1c04f0u: goto label_1c04f0;
        case 0x1c04f4u: goto label_1c04f4;
        case 0x1c04f8u: goto label_1c04f8;
        case 0x1c04fcu: goto label_1c04fc;
        case 0x1c0500u: goto label_1c0500;
        case 0x1c0504u: goto label_1c0504;
        case 0x1c0508u: goto label_1c0508;
        case 0x1c050cu: goto label_1c050c;
        case 0x1c0510u: goto label_1c0510;
        case 0x1c0514u: goto label_1c0514;
        case 0x1c0518u: goto label_1c0518;
        case 0x1c051cu: goto label_1c051c;
        case 0x1c0520u: goto label_1c0520;
        case 0x1c0524u: goto label_1c0524;
        case 0x1c0528u: goto label_1c0528;
        case 0x1c052cu: goto label_1c052c;
        case 0x1c0530u: goto label_1c0530;
        case 0x1c0534u: goto label_1c0534;
        case 0x1c0538u: goto label_1c0538;
        case 0x1c053cu: goto label_1c053c;
        case 0x1c0540u: goto label_1c0540;
        case 0x1c0544u: goto label_1c0544;
        case 0x1c0548u: goto label_1c0548;
        case 0x1c054cu: goto label_1c054c;
        case 0x1c0550u: goto label_1c0550;
        case 0x1c0554u: goto label_1c0554;
        case 0x1c0558u: goto label_1c0558;
        case 0x1c055cu: goto label_1c055c;
        case 0x1c0560u: goto label_1c0560;
        case 0x1c0564u: goto label_1c0564;
        case 0x1c0568u: goto label_1c0568;
        case 0x1c056cu: goto label_1c056c;
        case 0x1c0570u: goto label_1c0570;
        case 0x1c0574u: goto label_1c0574;
        case 0x1c0578u: goto label_1c0578;
        case 0x1c057cu: goto label_1c057c;
        case 0x1c0580u: goto label_1c0580;
        case 0x1c0584u: goto label_1c0584;
        case 0x1c0588u: goto label_1c0588;
        case 0x1c058cu: goto label_1c058c;
        case 0x1c0590u: goto label_1c0590;
        case 0x1c0594u: goto label_1c0594;
        case 0x1c0598u: goto label_1c0598;
        case 0x1c059cu: goto label_1c059c;
        case 0x1c05a0u: goto label_1c05a0;
        case 0x1c05a4u: goto label_1c05a4;
        case 0x1c05a8u: goto label_1c05a8;
        case 0x1c05acu: goto label_1c05ac;
        case 0x1c05b0u: goto label_1c05b0;
        case 0x1c05b4u: goto label_1c05b4;
        case 0x1c05b8u: goto label_1c05b8;
        case 0x1c05bcu: goto label_1c05bc;
        case 0x1c05c0u: goto label_1c05c0;
        case 0x1c05c4u: goto label_1c05c4;
        case 0x1c05c8u: goto label_1c05c8;
        case 0x1c05ccu: goto label_1c05cc;
        case 0x1c05d0u: goto label_1c05d0;
        case 0x1c05d4u: goto label_1c05d4;
        case 0x1c05d8u: goto label_1c05d8;
        case 0x1c05dcu: goto label_1c05dc;
        case 0x1c05e0u: goto label_1c05e0;
        case 0x1c05e4u: goto label_1c05e4;
        case 0x1c05e8u: goto label_1c05e8;
        case 0x1c05ecu: goto label_1c05ec;
        case 0x1c05f0u: goto label_1c05f0;
        case 0x1c05f4u: goto label_1c05f4;
        case 0x1c05f8u: goto label_1c05f8;
        case 0x1c05fcu: goto label_1c05fc;
        case 0x1c0600u: goto label_1c0600;
        case 0x1c0604u: goto label_1c0604;
        case 0x1c0608u: goto label_1c0608;
        case 0x1c060cu: goto label_1c060c;
        case 0x1c0610u: goto label_1c0610;
        case 0x1c0614u: goto label_1c0614;
        case 0x1c0618u: goto label_1c0618;
        case 0x1c061cu: goto label_1c061c;
        default: break;
    }

    ctx->pc = 0x1c04a0u;

label_1c04a0:
    // 0x1c04a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c04a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c04a4:
    // 0x1c04a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c04a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c04a8:
    // 0x1c04a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c04a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c04ac:
    // 0x1c04ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c04acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c04b0:
    // 0x1c04b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c04b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c04b4:
    // 0x1c04b4: 0x8e0204c0  lw          $v0, 0x4C0($s0)
    ctx->pc = 0x1c04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1216)));
label_1c04b8:
    // 0x1c04b8: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_1c04bc:
    if (ctx->pc == 0x1C04BCu) {
        ctx->pc = 0x1C04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04B8u;
        // 0x1c04bc: 0x261101e0  addiu       $s1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C04C0u;
        goto label_1c04c0;
    }
    ctx->pc = 0x1C04B8u;
    {
        const bool branch_taken_0x1c04b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04B8u;
        // 0x1c04bc: 0x261101e0  addiu       $s1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04b8) {
            ctx->pc = 0x1C05F8u;
            goto label_1c05f8;
        }
    }
    ctx->pc = 0x1C04C0u;
label_1c04c0:
    // 0x1c04c0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1c04c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c04c4:
    // 0x1c04c4: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x1c04c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1c04c8:
    // 0x1c04c8: 0xe60101e0  swc1        $f1, 0x1E0($s0)
    ctx->pc = 0x1c04c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 480), bits); }
label_1c04cc:
    // 0x1c04cc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1c04ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c04d0:
    // 0x1c04d0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1c04d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1c04d4:
    // 0x1c04d4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1c04d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c04d8:
    // 0x1c04d8: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1c04d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1c04dc:
    // 0x1c04dc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1c04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1c04e0:
    // 0x1c04e0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1c04e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1c04e4:
    // 0x1c04e4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1c04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1c04e8:
    // 0x1c04e8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1c04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_1c04ec:
    // 0x1c04ec: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1c04ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c04f0:
    // 0x1c04f0: 0xfa010200  sqc2        $vf1, 0x200($s0)
    ctx->pc = 0x1c04f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 512), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c04f4:
    // 0x1c04f4: 0xc60001e0  lwc1        $f0, 0x1E0($s0)
    ctx->pc = 0x1c04f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c04f8:
    // 0x1c04f8: 0x26050130  addiu       $a1, $s0, 0x130
    ctx->pc = 0x1c04f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_1c04fc:
    // 0x1c04fc: 0x26060110  addiu       $a2, $s0, 0x110
    ctx->pc = 0x1c04fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_1c0500:
    // 0x1c0500: 0x260700f0  addiu       $a3, $s0, 0xF0
    ctx->pc = 0x1c0500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_1c0504:
    // 0x1c0504: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x1c0504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_1c0508:
    // 0x1c0508: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1c0508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c050c:
    // 0x1c050c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1c050cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1c0510:
    // 0x1c0510: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1c0510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0514:
    // 0x1c0514: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1c0514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1c0518:
    // 0x1c0518: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1c0518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1c051c:
    // 0x1c051c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1c051cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_1c0520:
    // 0x1c0520: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1c0520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1c0524:
    // 0x1c0524: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x1c0524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_1c0528:
    // 0x1c0528: 0xc60001e0  lwc1        $f0, 0x1E0($s0)
    ctx->pc = 0x1c0528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c052c:
    // 0x1c052c: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x1c052cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_1c0530:
    // 0x1c0530: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1c0530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0534:
    // 0x1c0534: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1c0534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1c0538:
    // 0x1c0538: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1c0538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c053c:
    // 0x1c053c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1c053cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1c0540:
    // 0x1c0540: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1c0540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1c0544:
    // 0x1c0544: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x1c0544u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_1c0548:
    // 0x1c0548: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1c0548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1c054c:
    // 0x1c054c: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1c054cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_1c0550:
    // 0x1c0550: 0xc60001e0  lwc1        $f0, 0x1E0($s0)
    ctx->pc = 0x1c0550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0554:
    // 0x1c0554: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x1c0554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
label_1c0558:
    // 0x1c0558: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1c0558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c055c:
    // 0x1c055c: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x1c055cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_1c0560:
    // 0x1c0560: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1c0560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0564:
    // 0x1c0564: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1c0564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1c0568:
    // 0x1c0568: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1c0568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1c056c:
    // 0x1c056c: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x1c056cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
label_1c0570:
    // 0x1c0570: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1c0570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1c0574:
    // 0x1c0574: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x1c0574u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
label_1c0578:
    // 0x1c0578: 0x8e050394  lw          $a1, 0x394($s0)
    ctx->pc = 0x1c0578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1c057c:
    // 0x1c057c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x1c057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_1c0580:
    // 0x1c0580: 0x40f809  jalr        $v0
label_1c0584:
    if (ctx->pc == 0x1C0584u) {
        ctx->pc = 0x1C0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0580u;
        // 0x1c0584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0588u;
        goto label_1c0588;
    }
    ctx->pc = 0x1C0580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0588u);
        ctx->pc = 0x1C0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0580u;
        // 0x1c0584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0580u, 0x1C0588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0588u;
label_1c0588:
    // 0x1c0588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c058c:
    // 0x1c058c: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x1c058cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c0590:
    // 0x1c0590: 0xc070dd4  jal         func_1C3750
label_1c0594:
    if (ctx->pc == 0x1C0594u) {
        ctx->pc = 0x1C0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0590u;
        // 0x1c0594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0598u;
        goto label_1c0598;
    }
    ctx->pc = 0x1C0590u;
    SET_GPR_U32(ctx, 31, 0x1C0598u);
    ctx->pc = 0x1C0594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0590u;
    // 0x1c0594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3750u, 0x1C0590u, 0x1C0598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0598u;
label_1c0598:
    // 0x1c0598: 0x8e0404bc  lw          $a0, 0x4BC($s0)
    ctx->pc = 0x1c0598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1212)));
label_1c059c:
    // 0x1c059c: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x1c059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_1c05a0:
    // 0x1c05a0: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x1c05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_1c05a4:
    // 0x1c05a4: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_1c05a8:
    if (ctx->pc == 0x1C05A8u) {
        ctx->pc = 0x1C05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05A4u;
        // 0x1c05a8: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05ACu;
        goto label_1c05ac;
    }
    ctx->pc = 0x1C05A4u;
    {
        const bool branch_taken_0x1c05a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c05a4) {
            ctx->pc = 0x1C05A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C05A4u;
            // 0x1c05a8: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C05E8u;
            goto label_1c05e8;
        }
    }
    ctx->pc = 0x1C05ACu;
label_1c05ac:
    // 0x1c05ac: 0x8c840ffc  lw          $a0, 0xFFC($a0)
    ctx->pc = 0x1c05acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4092)));
label_1c05b0:
    // 0x1c05b0: 0xc072596  jal         func_1C9658
label_1c05b4:
    if (ctx->pc == 0x1C05B4u) {
        ctx->pc = 0x1C05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05B0u;
        // 0x1c05b4: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05B8u;
        goto label_1c05b8;
    }
    ctx->pc = 0x1C05B0u;
    SET_GPR_U32(ctx, 31, 0x1C05B8u);
    ctx->pc = 0x1C05B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05B0u;
    // 0x1c05b4: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9658u, 0x1C05B0u, 0x1C05B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05B8u;
label_1c05b8:
    // 0x1c05b8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1c05bc:
    if (ctx->pc == 0x1C05BCu) {
        ctx->pc = 0x1C05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05B8u;
        // 0x1c05bc: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05C0u;
        goto label_1c05c0;
    }
    ctx->pc = 0x1C05B8u;
    {
        const bool branch_taken_0x1c05b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c05b8) {
            ctx->pc = 0x1C05BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C05B8u;
            // 0x1c05bc: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C05E8u;
            goto label_1c05e8;
        }
    }
    ctx->pc = 0x1C05C0u;
label_1c05c0:
    // 0x1c05c0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1c05c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1c05c4:
    // 0x1c05c4: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x1c05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1c05c8:
    // 0x1c05c8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1c05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1c05cc:
    // 0x1c05cc: 0x40f809  jalr        $v0
label_1c05d0:
    if (ctx->pc == 0x1C05D0u) {
        ctx->pc = 0x1C05D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05CCu;
        // 0x1c05d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05D4u;
        goto label_1c05d4;
    }
    ctx->pc = 0x1C05CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C05D4u);
        ctx->pc = 0x1C05D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05CCu;
        // 0x1c05d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C05CCu, 0x1C05D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C05D4u;
label_1c05d4:
    // 0x1c05d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c05d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c05d8:
    // 0x1c05d8: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x1c05d8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c05dc:
    // 0x1c05dc: 0xc070dd4  jal         func_1C3750
label_1c05e0:
    if (ctx->pc == 0x1C05E0u) {
        ctx->pc = 0x1C05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05DCu;
        // 0x1c05e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05E4u;
        goto label_1c05e4;
    }
    ctx->pc = 0x1C05DCu;
    SET_GPR_U32(ctx, 31, 0x1C05E4u);
    ctx->pc = 0x1C05E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05DCu;
    // 0x1c05e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3750u, 0x1C05DCu, 0x1C05E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05E4u;
label_1c05e4:
    // 0x1c05e4: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1c05e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1c05e8:
    // 0x1c05e8: 0xc06fb38  jal         func_1BECE0
label_1c05ec:
    if (ctx->pc == 0x1C05ECu) {
        ctx->pc = 0x1C05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05E8u;
        // 0x1c05ec: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05F0u;
        goto label_1c05f0;
    }
    ctx->pc = 0x1C05E8u;
    SET_GPR_U32(ctx, 31, 0x1C05F0u);
    ctx->pc = 0x1C05ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05E8u;
    // 0x1c05ec: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1C05E8u, 0x1C05F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05F0u;
label_1c05f0:
    // 0x1c05f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c05f4:
    if (ctx->pc == 0x1C05F4u) {
        ctx->pc = 0x1C05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05F0u;
        // 0x1c05f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05F8u;
        goto label_1c05f8;
    }
    ctx->pc = 0x1C05F0u;
    {
        const bool branch_taken_0x1c05f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05F0u;
        // 0x1c05f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05f0) {
            ctx->pc = 0x1C0608u;
            goto label_1c0608;
        }
    }
    ctx->pc = 0x1C05F8u;
label_1c05f8:
    // 0x1c05f8: 0xc06f040  jal         func_1BC100
label_1c05fc:
    if (ctx->pc == 0x1C05FCu) {
        ctx->pc = 0x1C05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05F8u;
        // 0x1c05fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0600u;
        goto label_1c0600;
    }
    ctx->pc = 0x1C05F8u;
    SET_GPR_U32(ctx, 31, 0x1C0600u);
    ctx->pc = 0x1C05FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05F8u;
    // 0x1c05fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC100u, 0x1C05F8u, 0x1C0600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0600u;
label_1c0600:
    // 0x1c0600: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c0604:
    if (ctx->pc == 0x1C0604u) {
        ctx->pc = 0x1C0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0600u;
        // 0x1c0604: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0608u;
        goto label_1c0608;
    }
    ctx->pc = 0x1C0600u;
    {
        const bool branch_taken_0x1c0600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0600u;
        // 0x1c0604: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0600) {
            ctx->pc = 0x1C060Cu;
            goto label_1c060c;
        }
    }
    ctx->pc = 0x1C0608u;
label_1c0608:
    // 0x1c0608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c060c:
    // 0x1c060c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c060cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c0610:
    // 0x1c0610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0614:
    // 0x1c0614: 0x3e00008  jr          $ra
label_1c0618:
    if (ctx->pc == 0x1C0618u) {
        ctx->pc = 0x1C0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0614u;
        // 0x1c0618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C061Cu;
        goto label_1c061c;
    }
    ctx->pc = 0x1C0614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0614u;
        // 0x1c0618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C061Cu;
label_1c061c:
    // 0x1c061c: 0x0  nop
    ctx->pc = 0x1c061cu;
    // NOP
    ctx->pc = 0x1c0620u;
}
