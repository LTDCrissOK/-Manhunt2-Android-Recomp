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

// Function: sub_003394E8
// Address: 0x3394e8 - 0x33a598
void sub_003394E8_0x3394e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003394E8_0x3394e8");
#endif

    switch (ctx->pc) {
        case 0x3395f0u: goto label_3395f0;
        case 0x339648u: goto label_339648;
        case 0x339674u: goto label_339674;
        case 0x339694u: goto label_339694;
        case 0x3396b4u: goto label_3396b4;
        case 0x3396d4u: goto label_3396d4;
        case 0x3396f4u: goto label_3396f4;
        case 0x339714u: goto label_339714;
        case 0x3397bcu: goto label_3397bc;
        case 0x339818u: goto label_339818;
        case 0x33985cu: goto label_33985c;
        case 0x339864u: goto label_339864;
        case 0x33986cu: goto label_33986c;
        case 0x339874u: goto label_339874;
        case 0x33987cu: goto label_33987c;
        case 0x339884u: goto label_339884;
        case 0x33988cu: goto label_33988c;
        case 0x3399acu: goto label_3399ac;
        case 0x339b74u: goto label_339b74;
        case 0x339d74u: goto label_339d74;
        case 0x339d90u: goto label_339d90;
        case 0x339da0u: goto label_339da0;
        case 0x339df0u: goto label_339df0;
        case 0x339e60u: goto label_339e60;
        case 0x339e88u: goto label_339e88;
        case 0x339f4cu: goto label_339f4c;
        case 0x33a28cu: goto label_33a28c;
        case 0x33a2acu: goto label_33a2ac;
        case 0x33a2ccu: goto label_33a2cc;
        case 0x33a3d0u: goto label_33a3d0;
        case 0x33a418u: goto label_33a418;
        case 0x33a428u: goto label_33a428;
        case 0x33a438u: goto label_33a438;
        case 0x33a46cu: goto label_33a46c;
        default: break;
    }

    ctx->pc = 0x3394e8u;

    // 0x3394e8: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x3394e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x3394ec: 0x3c07005b  lui         $a3, 0x5B
    ctx->pc = 0x3394ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)91 << 16));
    // 0x3394f0: 0x8ce26ec0  lw          $v0, 0x6EC0($a3)
    ctx->pc = 0x3394f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x3394f4: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x3394f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x3394f8: 0xffb001a0  sd          $s0, 0x1A0($sp)
    ctx->pc = 0x3394f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 16));
    // 0x3394fc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3394fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x339500: 0x24f06ec0  addiu       $s0, $a3, 0x6EC0
    ctx->pc = 0x339500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 28352));
    // 0x339504: 0xffb101a8  sd          $s1, 0x1A8($sp)
    ctx->pc = 0x339504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 17));
    // 0x339508: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x339508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x33950c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33950cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x339510: 0xffb701d8  sd          $s7, 0x1D8($sp)
    ctx->pc = 0x339510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 23));
    // 0x339514: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x339514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x339518: 0x8d0a2ca4  lw          $t2, 0x2CA4($t0)
    ctx->pc = 0x339518u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11428)));
    // 0x33951c: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x33951cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x339520: 0x8c6d2ca0  lw          $t5, 0x2CA0($v1)
    ctx->pc = 0x339520u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11424)));
    // 0x339524: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x339524u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x339528: 0xffb201b0  sd          $s2, 0x1B0($sp)
    ctx->pc = 0x339528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 18));
    // 0x33952c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33952cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x339530: 0xffb301b8  sd          $s3, 0x1B8($sp)
    ctx->pc = 0x339530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 19));
    // 0x339534: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x339534u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339538: 0xffb401c0  sd          $s4, 0x1C0($sp)
    ctx->pc = 0x339538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 20));
    // 0x33953c: 0xffb501c8  sd          $s5, 0x1C8($sp)
    ctx->pc = 0x33953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 21));
    // 0x339540: 0xffb601d0  sd          $s6, 0x1D0($sp)
    ctx->pc = 0x339540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 22));
    // 0x339544: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x339544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x339548: 0xffbf01e8  sd          $ra, 0x1E8($sp)
    ctx->pc = 0x339548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 31));
    // 0x33954c: 0xe7bc0230  swc1        $f28, 0x230($sp)
    ctx->pc = 0x33954cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x339550: 0xe7bb0228  swc1        $f27, 0x228($sp)
    ctx->pc = 0x339550u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x339554: 0xe7ba0220  swc1        $f26, 0x220($sp)
    ctx->pc = 0x339554u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x339558: 0xe7b90218  swc1        $f25, 0x218($sp)
    ctx->pc = 0x339558u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x33955c: 0xe7b80210  swc1        $f24, 0x210($sp)
    ctx->pc = 0x33955cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x339560: 0xe7b70208  swc1        $f23, 0x208($sp)
    ctx->pc = 0x339560u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x339564: 0xe7b60200  swc1        $f22, 0x200($sp)
    ctx->pc = 0x339564u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x339568: 0xe7b501f8  swc1        $f21, 0x1F8($sp)
    ctx->pc = 0x339568u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x33956c: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x33956cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x339570: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x339570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x339574: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x339574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
    // 0x339578: 0x8ce26ec0  lw          $v0, 0x6EC0($a3)
    ctx->pc = 0x339578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28352)));
    // 0x33957c: 0x8c6b2c98  lw          $t3, 0x2C98($v1)
    ctx->pc = 0x33957cu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x482C98u));
    // 0x339580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x339584: 0x8d0c2c9c  lw          $t4, 0x2C9C($t0)
    ctx->pc = 0x339584u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11420)));
    // 0x339588: 0x8d24bfc8  lw          $a0, -0x4038($t1)
    ctx->pc = 0x339588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294950856)));
    // 0x33958c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x339590: 0xafa60164  sw          $a2, 0x164($sp)
    ctx->pc = 0x339590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 6));
    // 0x339594: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x339594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x339598: 0x8ce26ec0  lw          $v0, 0x6EC0($a3)
    ctx->pc = 0x339598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28352)));
    // 0x33959c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33959cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3395a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3395a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3395a4: 0xac4a0040  sw          $t2, 0x40($v0)
    ctx->pc = 0x3395a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 10));
    // 0x3395a8: 0x8ce36ec0  lw          $v1, 0x6EC0($a3)
    ctx->pc = 0x3395a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28352)));
    // 0x3395ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3395acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3395b0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3395b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3395b4: 0xac6d0054  sw          $t5, 0x54($v1)
    ctx->pc = 0x3395b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 13));
    // 0x3395b8: 0x8ce26ec0  lw          $v0, 0x6EC0($a3)
    ctx->pc = 0x3395b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28352)));
    // 0x3395bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3395bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3395c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3395c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3395c4: 0xac4b0068  sw          $t3, 0x68($v0)
    ctx->pc = 0x3395c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 11));
    // 0x3395c8: 0x8ce36ec0  lw          $v1, 0x6EC0($a3)
    ctx->pc = 0x3395c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28352)));
    // 0x3395cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3395ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3395d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3395d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3395d4: 0x10800099  beqz        $a0, . + 4 + (0x99 << 2)
    ctx->pc = 0x3395D4u;
    {
        const bool branch_taken_0x3395d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3395D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3395D4u;
        // 0x3395d8: 0xac6c007c  sw          $t4, 0x7C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3395d4) {
            ctx->pc = 0x33983Cu;
            goto label_33983c;
        }
    }
    ctx->pc = 0x3395DCu;
    // 0x3395dc: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3395dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x3395e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3395e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3395e4: 0x24a5ab80  addiu       $a1, $a1, -0x5480
    ctx->pc = 0x3395e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945664));
    // 0x3395e8: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x3395E8u;
    SET_GPR_U32(ctx, 31, 0x3395F0u);
    ctx->pc = 0x3395ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3395E8u;
    // 0x3395ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x3395E8u, 0x3395F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3395F0u;
label_3395f0:
    // 0x3395f0: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x3395f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x3395f4: 0x8c626ec0  lw          $v0, 0x6EC0($v1)
    ctx->pc = 0x3395f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x3395f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3395f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3395fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3395fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x339600: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x339600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339604: 0x186003ce  blez        $v1, . + 4 + (0x3CE << 2)
    ctx->pc = 0x339604u;
    {
        const bool branch_taken_0x339604 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x339608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339604u;
        // 0x339608: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339604) {
            ctx->pc = 0x33A540u;
            goto label_33a540;
        }
    }
    ctx->pc = 0x33960Cu;
    // 0x33960c: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x33960cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
    // 0x339610: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x339610u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x339614: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x339614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x339618: 0x3c15005b  lui         $s5, 0x5B
    ctx->pc = 0x339618u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)91 << 16));
    // 0x33961c: 0x3c013b93  lui         $at, 0x3B93
    ctx->pc = 0x33961cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15251 << 16));
    // 0x339620: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x339620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
    // 0x339624: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x339624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x339628: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x339628u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33962c: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x33962cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x339630: 0x3421aa9f  ori         $at, $at, 0xAA9F
    ctx->pc = 0x339630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43679);
    // 0x339634: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x339634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x339638: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x339638u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33963c: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x33963cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x339640: 0x8ea26ec0  lw          $v0, 0x6EC0($s5)
    ctx->pc = 0x339640u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x339644: 0x0  nop
    ctx->pc = 0x339644u;
    // NOP
label_339648:
    // 0x339648: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x339648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x33964c: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x33964cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x339650: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x339654: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x339654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x339658: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x339658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33965c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x33965cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x339660: 0xa2000074  sb          $zero, 0x74($s0)
    ctx->pc = 0x339660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x339664: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x339664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339668: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x339668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x33966c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x33966Cu;
    SET_GPR_U32(ctx, 31, 0x339674u);
    ctx->pc = 0x339670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33966Cu;
    // 0x339670: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x33966Cu, 0x339674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339674u;
label_339674:
    // 0x339674: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x339674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x339678: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x339678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x33967c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33967cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x339680: 0x0  nop
    ctx->pc = 0x339680u;
    // NOP
    // 0x339684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x339684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x339688: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x339688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x33968c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x33968Cu;
    SET_GPR_U32(ctx, 31, 0x339694u);
    ctx->pc = 0x339690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33968Cu;
    // 0x339690: 0xe6000080  swc1        $f0, 0x80($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x33968Cu, 0x339694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339694u;
label_339694:
    // 0x339694: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x339694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x339698: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x339698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x33969c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33969cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3396a0: 0x0  nop
    ctx->pc = 0x3396a0u;
    // NOP
    // 0x3396a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3396a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3396a8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3396a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x3396ac: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x3396ACu;
    SET_GPR_U32(ctx, 31, 0x3396B4u);
    ctx->pc = 0x3396B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3396ACu;
    // 0x3396b0: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x3396ACu, 0x3396B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3396B4u;
label_3396b4:
    // 0x3396b4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x3396b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x3396b8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x3396b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x3396bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3396bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3396c0: 0x0  nop
    ctx->pc = 0x3396c0u;
    // NOP
    // 0x3396c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3396c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3396c8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3396c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x3396cc: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x3396CCu;
    SET_GPR_U32(ctx, 31, 0x3396D4u);
    ctx->pc = 0x3396D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3396CCu;
    // 0x3396d0: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x3396CCu, 0x3396D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3396D4u;
label_3396d4:
    // 0x3396d4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x3396d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x3396d8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x3396d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x3396dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3396dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3396e0: 0x0  nop
    ctx->pc = 0x3396e0u;
    // NOP
    // 0x3396e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3396e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3396e8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3396e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3396ec: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x3396ECu;
    SET_GPR_U32(ctx, 31, 0x3396F4u);
    ctx->pc = 0x3396F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3396ECu;
    // 0x3396f0: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x3396ECu, 0x3396F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3396F4u;
label_3396f4:
    // 0x3396f4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x3396f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x3396f8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x3396f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x3396fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3396fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x339700: 0x0  nop
    ctx->pc = 0x339700u;
    // NOP
    // 0x339704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x339704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x339708: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x339708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33970c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x33970Cu;
    SET_GPR_U32(ctx, 31, 0x339714u);
    ctx->pc = 0x339710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33970Cu;
    // 0x339710: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x33970Cu, 0x339714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339714u;
label_339714:
    // 0x339714: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x339714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x339718: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x339718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x33971c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33971cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x339720: 0x0  nop
    ctx->pc = 0x339720u;
    // NOP
    // 0x339724: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x339724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x339728: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x339728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33972c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x33972cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x339730: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x339730u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x339734: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x339734u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x339738: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x339738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33973c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x33973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339740: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x339740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339744: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x339744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x339748: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x339748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33974c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x33974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339750: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x339750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339754: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x339754u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x339758: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x339758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x33975c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x33975cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x339760: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x339760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x339764: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x339764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x339768: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x339768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33976c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33976cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x339770: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x339770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339774: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x339774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339778: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x339778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33977c: 0xc7a70038  lwc1        $f7, 0x38($sp)
    ctx->pc = 0x33977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x339780: 0x46140902  mul.s       $f4, $f1, $f20
    ctx->pc = 0x339780u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x339784: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x339784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x339788: 0x46143082  mul.s       $f2, $f6, $f20
    ctx->pc = 0x339788u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x33978c: 0x461438c2  mul.s       $f3, $f7, $f20
    ctx->pc = 0x33978cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x339790: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x339790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x339794: 0x46142802  mul.s       $f0, $f5, $f20
    ctx->pc = 0x339794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x339798: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x339798u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33979c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x33979cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3397a0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x3397a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3397a4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x3397a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3397a8: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x3397a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3397ac: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x3397acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3397b0: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x3397b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3397b4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3397B4u;
    SET_GPR_U32(ctx, 31, 0x3397BCu);
    ctx->pc = 0x3397B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3397B4u;
    // 0x3397b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3397B4u, 0x3397BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3397BCu;
label_3397bc:
    // 0x3397bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3397bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3397c0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3397c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3397c4: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x3397c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3397c8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3397c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3397cc: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x3397ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3397d0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3397d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3397d4: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x3397d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3397d8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x3397d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3397dc: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x3397dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3397e0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3397e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3397e4: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x3397e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3397e8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3397e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3397ec: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x3397ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3397f0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3397f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3397f4: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x3397f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3397f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3397f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3397fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3397fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x339800: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x339800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339804: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x339804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x339808: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x339808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x33980c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x33980cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x339810: 0xc0ce4a4  jal         func_339290
    ctx->pc = 0x339810u;
    SET_GPR_U32(ctx, 31, 0x339818u);
    ctx->pc = 0x339814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339810u;
    // 0x339814: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x339290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339290u, 0x339810u, 0x339818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339818u;
label_339818:
    // 0x339818: 0x8ea26ec0  lw          $v0, 0x6EC0($s5)
    ctx->pc = 0x339818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28352)));
    // 0x33981c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33981cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x339820: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x339820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x339824: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x339824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339828: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x339828u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33982c: 0x1460ff86  bnez        $v1, . + 4 + (-0x7A << 2)
    ctx->pc = 0x33982Cu;
    {
        const bool branch_taken_0x33982c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x339830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33982Cu;
        // 0x339830: 0x8ea26ec0  lw          $v0, 0x6EC0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33982c) {
            ctx->pc = 0x339648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339648;
        }
    }
    ctx->pc = 0x339834u;
    // 0x339834: 0x10000343  b           . + 4 + (0x343 << 2)
    ctx->pc = 0x339834u;
    {
        const bool branch_taken_0x339834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339834u;
        // 0x339838: 0xdfb001a0  ld          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339834) {
            ctx->pc = 0x33A544u;
            goto label_33a544;
        }
    }
    ctx->pc = 0x33983Cu;
label_33983c:
    // 0x33983c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x33983cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x339840: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x339840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x339844: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x339844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x339848: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x339848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x33984c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x33984cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x339850: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x339850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x339854: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x339854u;
    SET_GPR_U32(ctx, 31, 0x33985Cu);
    ctx->pc = 0x339858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339854u;
    // 0x339858: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x339854u, 0x33985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33985Cu;
label_33985c:
    // 0x33985c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33985Cu;
    SET_GPR_U32(ctx, 31, 0x339864u);
    ctx->pc = 0x339860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33985Cu;
    // 0x339860: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33985Cu, 0x339864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339864u;
label_339864:
    // 0x339864: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x339864u;
    SET_GPR_U32(ctx, 31, 0x33986Cu);
    ctx->pc = 0x339868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339864u;
    // 0x339868: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x339864u, 0x33986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33986Cu;
label_33986c:
    // 0x33986c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33986Cu;
    SET_GPR_U32(ctx, 31, 0x339874u);
    ctx->pc = 0x339870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33986Cu;
    // 0x339870: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33986Cu, 0x339874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339874u;
label_339874:
    // 0x339874: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x339874u;
    SET_GPR_U32(ctx, 31, 0x33987Cu);
    ctx->pc = 0x339878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339874u;
    // 0x339878: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x339874u, 0x33987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33987Cu;
label_33987c:
    // 0x33987c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33987Cu;
    SET_GPR_U32(ctx, 31, 0x339884u);
    ctx->pc = 0x339880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33987Cu;
    // 0x339880: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33987Cu, 0x339884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339884u;
label_339884:
    // 0x339884: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x339884u;
    SET_GPR_U32(ctx, 31, 0x33988Cu);
    ctx->pc = 0x339888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339884u;
    // 0x339888: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x339884u, 0x33988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33988Cu;
label_33988c:
    // 0x33988c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x33988cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x339890: 0x3c11005b  lui         $s1, 0x5B
    ctx->pc = 0x339890u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)91 << 16));
    // 0x339894: 0x24426f70  addiu       $v0, $v0, 0x6F70
    ctx->pc = 0x339894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28528));
    // 0x339898: 0x26316f60  addiu       $s1, $s1, 0x6F60
    ctx->pc = 0x339898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28512));
    // 0x33989c: 0x27b60110  addiu       $s6, $sp, 0x110
    ctx->pc = 0x33989cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3398a0: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3398a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x3398a4: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3398a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x3398a8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x3398a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x3398ac: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x3398acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x3398b0: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3398b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x3398b4: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x3398b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x3398b8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3398b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x3398bc: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x3398bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x3398c0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x3398c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x3398c4: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x3398c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x3398c8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x3398c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x3398cc: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x3398ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x3398d0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x3398d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x3398d4: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x3398d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x3398d8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3398d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x5B6F70u));
    // 0x3398dc: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x3398dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x5B6F60u));
    // 0x3398e0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3398e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3398e4: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x3398e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3398e8: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x3398e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3398ec: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3398ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3398f0: 0xc7a20114  lwc1        $f2, 0x114($sp)
    ctx->pc = 0x3398f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3398f4: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x3398f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3398f8: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x3398f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3398fc: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x3398fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339900: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x339900u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x339904: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x339904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x339908: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x339908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x33990c: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x33990cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x339910: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x339910u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x339914: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x339914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339918: 0x3c10005b  lui         $s0, 0x5B
    ctx->pc = 0x339918u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
    // 0x33991c: 0x3c13005b  lui         $s3, 0x5B
    ctx->pc = 0x33991cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)91 << 16));
    // 0x339920: 0x26146f98  addiu       $s4, $s0, 0x6F98
    ctx->pc = 0x339920u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 28568));
    // 0x339924: 0x26756f90  addiu       $s5, $s3, 0x6F90
    ctx->pc = 0x339924u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 28560));
    // 0x339928: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x339928u;
    { uint32_t bits = FAST_READ32(0x5B6F9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33992c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x33992cu;
    { uint32_t bits = FAST_READ32(0x5B6F94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339930: 0xc6146f98  lwc1        $f20, 0x6F98($s0)
    ctx->pc = 0x339930u;
    { uint32_t bits = FAST_READ32(0x5B6F98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x339934: 0xc6626f90  lwc1        $f2, 0x6F90($s3)
    ctx->pc = 0x339934u;
    { uint32_t bits = FAST_READ32(0x5B6F90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339938: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x339938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x33993c: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x33993cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x339940: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x339940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x339944: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x339944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x339948: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x339948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x33994c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x33994cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x339950: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x339950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339954: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x339954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339958: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x339958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33995c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x33995cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x339960: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x339960u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x339964: 0x460425dc  madd.s      $f23, $f4, $f4
    ctx->pc = 0x339964u;
    ctx->f[23] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x339968: 0x461705c4  c1          0x1705C4
    ctx->pc = 0x339968u;
    ctx->f[23] = FPU_SQRT_S(ctx->f[0]);
    // 0x33996c: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x33996cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x339970: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x339970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x339974: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x339974u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x339978: 0x0  nop
    ctx->pc = 0x339978u;
    // NOP
    // 0x33997c: 0x0  nop
    ctx->pc = 0x33997cu;
    // NOP
    // 0x339980: 0x46140504  c1          0x140504
    ctx->pc = 0x339980u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x339984: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x339984u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339988: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x339988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33998c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x33998cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x339990: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x339990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x339994: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x339994u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x339998: 0x4a0003bf  vwaitq
    ctx->pc = 0x339998u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x33999c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x33999cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3399a0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x3399a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3399a4: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x3399A4u;
    SET_GPR_U32(ctx, 31, 0x3399ACu);
    ctx->pc = 0x3399A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3399A4u;
    // 0x3399a8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x3399A4u, 0x3399ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3399ACu;
label_3399ac:
    // 0x3399ac: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x3399acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3399b0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x3399b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3399b4: 0x0  nop
    ctx->pc = 0x3399b4u;
    // NOP
    // 0x3399b8: 0x0  nop
    ctx->pc = 0x3399b8u;
    // NOP
    // 0x3399bc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3399bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x3399c0: 0x0  nop
    ctx->pc = 0x3399c0u;
    // NOP
    // 0x3399c4: 0x0  nop
    ctx->pc = 0x3399c4u;
    // NOP
    // 0x3399c8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3399c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3399cc: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x3399ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3399d0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x3399d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3399d4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3399d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3399d8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x3399d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3399dc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x3399dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3399e0: 0xc7b50160  lwc1        $f21, 0x160($sp)
    ctx->pc = 0x3399e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3399e4: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x3399e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x3399e8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x3399e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3399ec: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x3399ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3399f0: 0x4601b842  mul.s       $f1, $f23, $f1
    ctx->pc = 0x3399f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x3399f4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x3399f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3399f8: 0x4602b882  mul.s       $f2, $f23, $f2
    ctx->pc = 0x3399f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x3399fc: 0x4603b8c2  mul.s       $f3, $f23, $f3
    ctx->pc = 0x3399fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[3]);
    // 0x339a00: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x339a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x339a04: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x339a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x339a08: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x339a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x339a0c: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x339a0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x339a10: 0x0  nop
    ctx->pc = 0x339a10u;
    // NOP
    // 0x339a14: 0x0  nop
    ctx->pc = 0x339a14u;
    // NOP
    // 0x339a18: 0x46150a03  div.s       $f8, $f1, $f21
    ctx->pc = 0x339a18u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[1], ctx->f[21]); }
    // 0x339a1c: 0x461511c3  div.s       $f7, $f2, $f21
    ctx->pc = 0x339a1cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[2], ctx->f[21]); }
    // 0x339a20: 0xe7a500b4  swc1        $f5, 0xB4($sp)
    ctx->pc = 0x339a20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x339a24: 0x0  nop
    ctx->pc = 0x339a24u;
    // NOP
    // 0x339a28: 0x0  nop
    ctx->pc = 0x339a28u;
    // NOP
    // 0x339a2c: 0x46151983  div.s       $f6, $f3, $f21
    ctx->pc = 0x339a2cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[3], ctx->f[21]); }
    // 0x339a30: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x339a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x339a34: 0x0  nop
    ctx->pc = 0x339a34u;
    // NOP
    // 0x339a38: 0x0  nop
    ctx->pc = 0x339a38u;
    // NOP
    // 0x339a3c: 0x46150103  div.s       $f4, $f0, $f21
    ctx->pc = 0x339a3cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x339a40: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x339a40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x339a44: 0xe7a30118  swc1        $f3, 0x118($sp)
    ctx->pc = 0x339a44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x339a48: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x339a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x339a4c: 0xe7a80100  swc1        $f8, 0x100($sp)
    ctx->pc = 0x339a4cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x339a50: 0xe7a70104  swc1        $f7, 0x104($sp)
    ctx->pc = 0x339a50u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x339a54: 0xe7a60108  swc1        $f6, 0x108($sp)
    ctx->pc = 0x339a54u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x339a58: 0xe7a4010c  swc1        $f4, 0x10C($sp)
    ctx->pc = 0x339a58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x339a5c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x339a5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x339a60: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x339a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339a64: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x339a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339a68: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x339a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x339a6c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x339a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339a70: 0x24426f80  addiu       $v0, $v0, 0x6F80
    ctx->pc = 0x339a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28544));
    // 0x339a74: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x339a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x339a78: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x339a78u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x339a7c: 0x0  nop
    ctx->pc = 0x339a7cu;
    // NOP
    // 0x339a80: 0x0  nop
    ctx->pc = 0x339a80u;
    // NOP
    // 0x339a84: 0x46150083  div.s       $f2, $f0, $f21
    ctx->pc = 0x339a84u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x339a88: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x339a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x339a8c: 0x0  nop
    ctx->pc = 0x339a8cu;
    // NOP
    // 0x339a90: 0x0  nop
    ctx->pc = 0x339a90u;
    // NOP
    // 0x339a94: 0x4615a043  div.s       $f1, $f20, $f21
    ctx->pc = 0x339a94u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[21]); }
    // 0x339a98: 0xe7b40114  swc1        $f20, 0x114($sp)
    ctx->pc = 0x339a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x339a9c: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x339a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x339aa0: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x339aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x339aa4: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x339aa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x339aa8: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x339aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x339aac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x339aacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x5B6F80u));
    // 0x339ab0: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x339ab0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x339ab4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x339ab4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x339ab8: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x339ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339abc: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x339abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339ac0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x339ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x339ac4: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x339ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339ac8: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x339ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339acc: 0xc7a2011c  lwc1        $f2, 0x11C($sp)
    ctx->pc = 0x339accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339ad0: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x339ad0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x339ad4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x339ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x339ad8: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x339ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x339adc: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x339adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x339ae0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x339ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x339ae4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x339ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339ae8: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x339ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x339aec: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x339aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339af0: 0x24436fa0  addiu       $v1, $v0, 0x6FA0
    ctx->pc = 0x339af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28576));
    // 0x339af4: 0xc4546fa0  lwc1        $f20, 0x6FA0($v0)
    ctx->pc = 0x339af4u;
    { uint32_t bits = FAST_READ32(0x5B6FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x339af8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x339af8u;
    { uint32_t bits = FAST_READ32(0x5B6FA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339afc: 0xc6026f98  lwc1        $f2, 0x6F98($s0)
    ctx->pc = 0x339afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339b00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x339b00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x339b04: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x339b04u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x339b08: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x339b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x339b0c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x339b0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x339b10: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x339b10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x339b14: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x339b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x339b18: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x339b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339b1c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x339b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339b20: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x339b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x339b24: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x339b24u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x339b28: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x339b28u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x339b2c: 0x4604259c  madd.s      $f22, $f4, $f4
    ctx->pc = 0x339b2cu;
    ctx->f[22] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x339b30: 0x46160584  c1          0x160584
    ctx->pc = 0x339b30u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
    // 0x339b34: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x339b34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x339b38: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x339b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x339b3c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x339b3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x339b40: 0x0  nop
    ctx->pc = 0x339b40u;
    // NOP
    // 0x339b44: 0x0  nop
    ctx->pc = 0x339b44u;
    // NOP
    // 0x339b48: 0x46140504  c1          0x140504
    ctx->pc = 0x339b48u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x339b4c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x339b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x339b50: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x339b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x339b54: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x339b54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x339b58: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x339b58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x339b5c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x339b5cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x339b60: 0x4a0003bf  vwaitq
    ctx->pc = 0x339b60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x339b64: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x339b64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x339b68: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x339b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339b6c: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x339B6Cu;
    SET_GPR_U32(ctx, 31, 0x339B74u);
    ctx->pc = 0x339B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B6Cu;
    // 0x339b70: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x339B6Cu, 0x339B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B74u;
label_339b74:
    // 0x339b74: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x339b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339b78: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x339b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339b7c: 0x0  nop
    ctx->pc = 0x339b7cu;
    // NOP
    // 0x339b80: 0x0  nop
    ctx->pc = 0x339b80u;
    // NOP
    // 0x339b84: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x339b84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x339b88: 0x0  nop
    ctx->pc = 0x339b88u;
    // NOP
    // 0x339b8c: 0x0  nop
    ctx->pc = 0x339b8cu;
    // NOP
    // 0x339b90: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x339b90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x339b94: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x339b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x339b98: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x339b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x339b9c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x339b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339ba0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x339ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339ba4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x339ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339ba8: 0xc7a80164  lwc1        $f8, 0x164($sp)
    ctx->pc = 0x339ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x339bac: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x339bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x339bb0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x339bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339bb4: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x339bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339bb8: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x339bb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x339bbc: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x339bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339bc0: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x339bc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x339bc4: 0x4603b0c2  mul.s       $f3, $f22, $f3
    ctx->pc = 0x339bc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x339bc8: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x339bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x339bcc: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x339bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x339bd0: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x339bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x339bd4: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x339bd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x339bd8: 0x0  nop
    ctx->pc = 0x339bd8u;
    // NOP
    // 0x339bdc: 0x0  nop
    ctx->pc = 0x339bdcu;
    // NOP
    // 0x339be0: 0x46080a43  div.s       $f9, $f1, $f8
    ctx->pc = 0x339be0u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[1], ctx->f[8]); }
    // 0x339be4: 0x460811c3  div.s       $f7, $f2, $f8
    ctx->pc = 0x339be4u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[2], ctx->f[8]); }
    // 0x339be8: 0xe7a500c4  swc1        $f5, 0xC4($sp)
    ctx->pc = 0x339be8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x339bec: 0x0  nop
    ctx->pc = 0x339becu;
    // NOP
    // 0x339bf0: 0x0  nop
    ctx->pc = 0x339bf0u;
    // NOP
    // 0x339bf4: 0x46081983  div.s       $f6, $f3, $f8
    ctx->pc = 0x339bf4u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[3], ctx->f[8]); }
    // 0x339bf8: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x339bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x339bfc: 0x0  nop
    ctx->pc = 0x339bfcu;
    // NOP
    // 0x339c00: 0x0  nop
    ctx->pc = 0x339c00u;
    // NOP
    // 0x339c04: 0x46080103  div.s       $f4, $f0, $f8
    ctx->pc = 0x339c04u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[8]); }
    // 0x339c08: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x339c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x339c0c: 0xe7a30118  swc1        $f3, 0x118($sp)
    ctx->pc = 0x339c0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x339c10: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x339c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x339c14: 0xe7a90100  swc1        $f9, 0x100($sp)
    ctx->pc = 0x339c14u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x339c18: 0xe7a70104  swc1        $f7, 0x104($sp)
    ctx->pc = 0x339c18u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x339c1c: 0xe7a60108  swc1        $f6, 0x108($sp)
    ctx->pc = 0x339c1cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x339c20: 0xe7a4010c  swc1        $f4, 0x10C($sp)
    ctx->pc = 0x339c20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x339c24: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x339c24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x339c28: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x339c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339c2c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x339c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339c30: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x339c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339c34: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x339c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x339c38: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x339c38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x339c3c: 0x0  nop
    ctx->pc = 0x339c3cu;
    // NOP
    // 0x339c40: 0x0  nop
    ctx->pc = 0x339c40u;
    // NOP
    // 0x339c44: 0x46080083  div.s       $f2, $f0, $f8
    ctx->pc = 0x339c44u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[8]); }
    // 0x339c48: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x339c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x339c4c: 0x0  nop
    ctx->pc = 0x339c4cu;
    // NOP
    // 0x339c50: 0x0  nop
    ctx->pc = 0x339c50u;
    // NOP
    // 0x339c54: 0x4608a043  div.s       $f1, $f20, $f8
    ctx->pc = 0x339c54u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[8]); }
    // 0x339c58: 0xe7b40114  swc1        $f20, 0x114($sp)
    ctx->pc = 0x339c58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x339c5c: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x339c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x339c60: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x339c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x339c64: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x339c64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x339c68: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x339c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x339c6c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x339c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x339c70: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x339c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339c74: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x339c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x339c78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x339c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x339c7c: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x339c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x339c80: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x339c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x339c84: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x339c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x339c88: 0x4601b802  mul.s       $f0, $f23, $f1
    ctx->pc = 0x339c88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x339c8c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x339c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339c90: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x339c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339c94: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x339c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x339c98: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x339c98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x339c9c: 0xc6a60004  lwc1        $f6, 0x4($s5)
    ctx->pc = 0x339c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x339ca0: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x339ca0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x339ca4: 0xc6656f90  lwc1        $f5, 0x6F90($s3)
    ctx->pc = 0x339ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x339ca8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x339ca8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x339cac: 0xe7a600d4  swc1        $f6, 0xD4($sp)
    ctx->pc = 0x339cacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x339cb0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x339cb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x339cb4: 0xe7a500d0  swc1        $f5, 0xD0($sp)
    ctx->pc = 0x339cb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x339cb8: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x339cb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x339cbc: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x339cbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x339cc0: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x339cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x339cc4: 0xe7a3012c  swc1        $f3, 0x12C($sp)
    ctx->pc = 0x339cc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x339cc8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x339cc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x339ccc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x339cccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339cd0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x339cd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x339cd4: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x339cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339cd8: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x339cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x339cdc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x339cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339ce0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x339ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339ce4: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x339ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339ce8: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x339ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x339cec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x339cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x339cf0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x339cf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x339cf4: 0xc7a70130  lwc1        $f7, 0x130($sp)
    ctx->pc = 0x339cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x339cf8: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x339cf8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x339cfc: 0xc7a60134  lwc1        $f6, 0x134($sp)
    ctx->pc = 0x339cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x339d00: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x339d00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x339d04: 0xc7a40138  lwc1        $f4, 0x138($sp)
    ctx->pc = 0x339d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x339d08: 0xc7a5013c  lwc1        $f5, 0x13C($sp)
    ctx->pc = 0x339d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x339d0c: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x339d0cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x339d10: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x339d10u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x339d14: 0xe7a40118  swc1        $f4, 0x118($sp)
    ctx->pc = 0x339d14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x339d18: 0xe7a5011c  swc1        $f5, 0x11C($sp)
    ctx->pc = 0x339d18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x339d1c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x339d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x339d20: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x339d20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x339d24: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x339d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x339d28: 0xe7a3013c  swc1        $f3, 0x13C($sp)
    ctx->pc = 0x339d28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x339d2c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x339d2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x339d30: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x339d30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x339d34: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x339d34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x339d38: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x339d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339d3c: 0xc7a30140  lwc1        $f3, 0x140($sp)
    ctx->pc = 0x339d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339d40: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x339d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339d44: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x339d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339d48: 0x46004706  mov.s       $f28, $f8
    ctx->pc = 0x339d48u;
    ctx->f[28] = FPU_MOV_S(ctx->f[8]);
    // 0x339d4c: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x339d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339d50: 0x4600aec6  mov.s       $f27, $f21
    ctx->pc = 0x339d50u;
    ctx->f[27] = FPU_MOV_S(ctx->f[21]);
    // 0x339d54: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x339d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339d58: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x339d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x339d5c: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x339d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    // 0x339d60: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x339d60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x339d64: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x339d64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x339d68: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x339d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x339d6c: 0xc0c3158  jal         func_30C560
    ctx->pc = 0x339D6Cu;
    SET_GPR_U32(ctx, 31, 0x339D74u);
    ctx->pc = 0x339D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339D6Cu;
    // 0x339d70: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C560u, 0x339D6Cu, 0x339D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339D74u;
label_339d74:
    // 0x339d74: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x339d74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x339d78: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x339d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x339d7c: 0x8c82bfcc  lw          $v0, -0x4034($a0)
    ctx->pc = 0x339d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBFCCu));
    // 0x339d80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x339D80u;
    {
        const bool branch_taken_0x339d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D80u;
        // 0x339d84: 0x3c03005b  lui         $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d80) {
            ctx->pc = 0x339DBCu;
            goto label_339dbc;
        }
    }
    ctx->pc = 0x339D88u;
    // 0x339d88: 0xc0c49da  jal         func_312768
    ctx->pc = 0x339D88u;
    SET_GPR_U32(ctx, 31, 0x339D90u);
    ctx->pc = 0x339D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339D88u;
    // 0x339d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312768u, 0x339D88u, 0x339D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339D90u;
label_339d90:
    // 0x339d90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x339D90u;
    {
        const bool branch_taken_0x339d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D90u;
        // 0x339d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d90) {
            ctx->pc = 0x339DB8u;
            goto label_339db8;
        }
    }
    ctx->pc = 0x339D98u;
    // 0x339d98: 0xc0c49d2  jal         func_312748
    ctx->pc = 0x339D98u;
    SET_GPR_U32(ctx, 31, 0x339DA0u);
    ctx->pc = 0x339D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339D98u;
    // 0x339d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312748u, 0x339D98u, 0x339DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339DA0u;
label_339da0:
    // 0x339da0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x339da0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339da4: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x339da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x339da8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339DA8u;
    {
        const bool branch_taken_0x339da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DA8u;
        // 0x339dac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339da8) {
            ctx->pc = 0x339DB4u;
            goto label_339db4;
        }
    }
    ctx->pc = 0x339DB0u;
    // 0x339db0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x339db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_339db4:
    // 0x339db4: 0xafa4016c  sw          $a0, 0x16C($sp)
    ctx->pc = 0x339db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 4));
label_339db8:
    // 0x339db8: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x339db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_339dbc:
    // 0x339dbc: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x339dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x339dc0: 0x8c626ec0  lw          $v0, 0x6EC0($v1)
    ctx->pc = 0x339dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28352)));
    // 0x339dc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x339dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339dc8: 0x24636ec0  addiu       $v1, $v1, 0x6EC0
    ctx->pc = 0x339dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28352));
    // 0x339dcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x339dd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x339dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x339dd4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x339dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x339dd8: 0x188001d2  blez        $a0, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x339DD8u;
    {
        const bool branch_taken_0x339dd8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x339DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DD8u;
        // 0x339ddc: 0xafa30170  sw          $v1, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339dd8) {
            ctx->pc = 0x33A524u;
            goto label_33a524;
        }
    }
    ctx->pc = 0x339DE0u;
    // 0x339de0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x339de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x339de4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x339de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x339de8: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x339de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x339dec: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x339decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
label_339df0:
    // 0x339df0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x339df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x339df4: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x339df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x339df8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x339df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339dfc: 0x186001b1  blez        $v1, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x339DFCu;
    {
        const bool branch_taken_0x339dfc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x339E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DFCu;
        // 0x339e00: 0xafa20198  sw          $v0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339dfc) {
            ctx->pc = 0x33A4C4u;
            goto label_33a4c4;
        }
    }
    ctx->pc = 0x339E04u;
    // 0x339e04: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x339e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x339e08: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x339e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x339e0c: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x339e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x339e10: 0x4485d000  mtc1        $a1, $f26
    ctx->pc = 0x339e10u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x339e14: 0x0  nop
    ctx->pc = 0x339e14u;
    // NOP
    // 0x339e18: 0x4680d6a0  cvt.s.w     $f26, $f26
    ctx->pc = 0x339e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[26], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x339e1c: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x339e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
    // 0x339e20: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x339e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x339e24: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x339e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x339e28: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x339e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x339e2c: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x339e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    // 0x339e30: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x339e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x339e34: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x339e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x339e38: 0x3c013bd4  lui         $at, 0x3BD4
    ctx->pc = 0x339e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15316 << 16));
    // 0x339e3c: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x339e3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x339e40: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x339e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x339e44: 0x3c01bfe0  lui         $at, 0xBFE0
    ctx->pc = 0x339e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49120 << 16));
    // 0x339e48: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x339e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x339e4c: 0x27be0110  addiu       $fp, $sp, 0x110
    ctx->pc = 0x339e4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x339e50: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x339e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x339e54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x339e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x339e58: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x339e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x339e5c: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x339e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
label_339e60:
    // 0x339e60: 0x4484c800  mtc1        $a0, $f25
    ctx->pc = 0x339e60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x339e64: 0x0  nop
    ctx->pc = 0x339e64u;
    // NOP
    // 0x339e68: 0x4680ce60  cvt.s.w     $f25, $f25
    ctx->pc = 0x339e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[25], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x339e6c: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x339e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    // 0x339e70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x339e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x339e74: 0x8fb60170  lw          $s6, 0x170($sp)
    ctx->pc = 0x339e74u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x339e78: 0xafa4019c  sw          $a0, 0x19C($sp)
    ctx->pc = 0x339e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 4));
    // 0x339e7c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x339e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x339e80: 0x24846fa8  addiu       $a0, $a0, 0x6FA8
    ctx->pc = 0x339e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28584));
    // 0x339e84: 0x24970004  addiu       $s7, $a0, 0x4
    ctx->pc = 0x339e84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_339e88:
    // 0x339e88: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x339e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x339e8c: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x339e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x339e90: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x339e90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x339e94: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x339e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x339e98: 0x508018  mult        $s0, $v0, $s0
    ctx->pc = 0x339e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x339e9c: 0x2463bf40  addiu       $v1, $v1, -0x40C0
    ctx->pc = 0x339e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950720));
    // 0x339ea0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x339ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x339ea4: 0x2442bf40  addiu       $v0, $v0, -0x40C0
    ctx->pc = 0x339ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950720));
    // 0x339ea8: 0x400013  mtlo        $v0
    ctx->pc = 0x339ea8u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x339eac: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x339eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x339eb0: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x339eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x339eb4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x339eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x339eb8: 0x26130002  addiu       $s3, $s0, 0x2
    ctx->pc = 0x339eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x339ebc: 0x7054a000  madd        $s4, $v0, $s4
    ctx->pc = 0x339ebcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x339ec0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x339ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x339ec4: 0x26120003  addiu       $s2, $s0, 0x3
    ctx->pc = 0x339ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x339ec8: 0x139880  sll         $s3, $s3, 2
    ctx->pc = 0x339ec8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x339ecc: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x339eccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x339ed0: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x339ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x339ed4: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x339ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x339ed8: 0x26150005  addiu       $s5, $s0, 0x5
    ctx->pc = 0x339ed8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x339edc: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x339edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339ee0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x339ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x339ee4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x339ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x339ee8: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x339ee8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x339eec: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x339eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x339ef0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x339ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x339ef4: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x339ef4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x339ef8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x339ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339efc: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x339efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x339f00: 0xe6c10050  swc1        $f1, 0x50($s6)
    ctx->pc = 0x339f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 80), bits); }
    // 0x339f04: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x339f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339f08: 0xe6c00054  swc1        $f0, 0x54($s6)
    ctx->pc = 0x339f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 84), bits); }
    // 0x339f0c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x339f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339f10: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x339f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339f14: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x339f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x339f18: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x339f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x339f1c: 0xe6c10058  swc1        $f1, 0x58($s6)
    ctx->pc = 0x339f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 88), bits); }
    // 0x339f20: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x339f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339f24: 0xe6c0005c  swc1        $f0, 0x5C($s6)
    ctx->pc = 0x339f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 92), bits); }
    // 0x339f28: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x339f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339f2c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x339f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339f30: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x339f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x339f34: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x339f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x339f38: 0xe6c10060  swc1        $f1, 0x60($s6)
    ctx->pc = 0x339f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 96), bits); }
    // 0x339f3c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x339f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x339f40: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x339f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339f44: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x339F44u;
    SET_GPR_U32(ctx, 31, 0x339F4Cu);
    ctx->pc = 0x339F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339F44u;
    // 0x339f48: 0xe6c00064  swc1        $f0, 0x64($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x339F44u, 0x339F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339F4Cu;
label_339f4c:
    // 0x339f4c: 0x0  nop
    ctx->pc = 0x339f4cu;
    // NOP
    // 0x339f50: 0x0  nop
    ctx->pc = 0x339f50u;
    // NOP
    // 0x339f54: 0x461bbac3  div.s       $f11, $f23, $f27
    ctx->pc = 0x339f54u;
    { if (ctx->f[27] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[11] = FPU_DIV_S(ctx->f[23], ctx->f[27]); }
    // 0x339f58: 0xc6e0fffc  lwc1        $f0, -0x4($s7)
    ctx->pc = 0x339f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339f5c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x339f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339f60: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x339f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x339f64: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x339f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339f68: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x339f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339f6c: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x339f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x339f70: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x339f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x339f74: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x339f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x339f78: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x339f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x339f7c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x339f7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x339f80: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x339f80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x339f84: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x339f84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x339f88: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x339f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x339f8c: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x339f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x339f90: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x339f90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x339f94: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x339f94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x339f98: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x339f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x339f9c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x339f9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x339fa0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x339fa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339fa4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x339fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x339fa8: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x339fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x339fac: 0x0  nop
    ctx->pc = 0x339facu;
    // NOP
    // 0x339fb0: 0x0  nop
    ctx->pc = 0x339fb0u;
    // NOP
    // 0x339fb4: 0x461cb283  div.s       $f10, $f22, $f28
    ctx->pc = 0x339fb4u;
    { if (ctx->f[28] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[22], ctx->f[28]); }
    // 0x339fb8: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x339fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339fbc: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x339fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x339fc0: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x339fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x339fc4: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x339fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339fc8: 0xc7a4003c  lwc1        $f4, 0x3C($sp)
    ctx->pc = 0x339fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x339fcc: 0xc7a80038  lwc1        $f8, 0x38($sp)
    ctx->pc = 0x339fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x339fd0: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x339fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339fd4: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x339fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x339fd8: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x339fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339fdc: 0xc7a60148  lwc1        $f6, 0x148($sp)
    ctx->pc = 0x339fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x339fe0: 0xc7a7014c  lwc1        $f7, 0x14C($sp)
    ctx->pc = 0x339fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x339fe4: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x339fe4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x339fe8: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x339fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x339fec: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x339fecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x339ff0: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x339ff0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x339ff4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x339ff4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x339ff8: 0xe7a60128  swc1        $f6, 0x128($sp)
    ctx->pc = 0x339ff8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x339ffc: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x339ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x33a000: 0xe7a7012c  swc1        $f7, 0x12C($sp)
    ctx->pc = 0x33a000u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x33a004: 0xe7a50140  swc1        $f5, 0x140($sp)
    ctx->pc = 0x33a004u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x33a008: 0xe7a30144  swc1        $f3, 0x144($sp)
    ctx->pc = 0x33a008u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x33a00c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x33a00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x33a010: 0xe7a4014c  swc1        $f4, 0x14C($sp)
    ctx->pc = 0x33a010u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x33a014: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x33a014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x33a018: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x33a018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x33a01c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33a01cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a020: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x33a020u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a024: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33a024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33a028: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x33a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a02c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x33a02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a030: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x33a030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a034: 0xc7a20158  lwc1        $f2, 0x158($sp)
    ctx->pc = 0x33a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a038: 0xc7a3015c  lwc1        $f3, 0x15C($sp)
    ctx->pc = 0x33a038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33a03c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x33a03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x33a040: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x33a040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x33a044: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x33a044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x33a048: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x33a048u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x33a04c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x33a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33a050: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x33a050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x33a054: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x33a054u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a058: 0xc6e0fffc  lwc1        $f0, -0x4($s7)
    ctx->pc = 0x33a058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a05c: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x33a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a060: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x33a060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a064: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x33a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33a068: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x33a068u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x33a06c: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x33a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33a070: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x33a070u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x33a074: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x33a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33a078: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x33a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a07c: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x33a07cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x33a080: 0xc7a60030  lwc1        $f6, 0x30($sp)
    ctx->pc = 0x33a080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33a084: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x33a084u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x33a088: 0xc7a70034  lwc1        $f7, 0x34($sp)
    ctx->pc = 0x33a088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33a08c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x33a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a090: 0xc7a80028  lwc1        $f8, 0x28($sp)
    ctx->pc = 0x33a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33a094: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x33a094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x33a098: 0xc7a90038  lwc1        $f9, 0x38($sp)
    ctx->pc = 0x33a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x33a09c: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x33a09cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x33a0a0: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x33a0a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x33a0a4: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x33a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x33a0a8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x33a0a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x33a0ac: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x33a0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x33a0b0: 0x46061982  mul.s       $f6, $f3, $f6
    ctx->pc = 0x33a0b0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x33a0b4: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x33a0b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x33a0b8: 0x460719c2  mul.s       $f7, $f3, $f7
    ctx->pc = 0x33a0b8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x33a0bc: 0xe7a50124  swc1        $f5, 0x124($sp)
    ctx->pc = 0x33a0bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x33a0c0: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x33a0c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x33a0c4: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x33a0c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x33a0c8: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x33a0c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x33a0cc: 0xe7a60130  swc1        $f6, 0x130($sp)
    ctx->pc = 0x33a0ccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x33a0d0: 0xe7a70134  swc1        $f7, 0x134($sp)
    ctx->pc = 0x33a0d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x33a0d4: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x33a0d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x33a0d8: 0xe7a30138  swc1        $f3, 0x138($sp)
    ctx->pc = 0x33a0d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x33a0dc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33a0dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a0e0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33a0e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a0e4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33a0e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33a0e8: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x33a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a0ec: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x33a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a0f0: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x33a0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a0f4: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x33a0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a0f8: 0xc7a3014c  lwc1        $f3, 0x14C($sp)
    ctx->pc = 0x33a0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33a0fc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x33a0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x33a100: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x33a100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x33a104: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x33a104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x33a108: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x33a108u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x33a10c: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x33a10cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x33a110: 0xfac10010  sqc2        $vf1, 0x10($s6)
    ctx->pc = 0x33a110u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a114: 0xc6e0fffc  lwc1        $f0, -0x4($s7)
    ctx->pc = 0x33a114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a118: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x33a118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a11c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x33a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a120: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x33a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33a124: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x33a124u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x33a128: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x33a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33a12c: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x33a12cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x33a130: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x33a130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33a134: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x33a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a138: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x33a138u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x33a13c: 0xc7a60030  lwc1        $f6, 0x30($sp)
    ctx->pc = 0x33a13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33a140: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x33a140u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x33a144: 0xc7a70034  lwc1        $f7, 0x34($sp)
    ctx->pc = 0x33a144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33a148: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x33a148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a14c: 0xc7a80028  lwc1        $f8, 0x28($sp)
    ctx->pc = 0x33a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33a150: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x33a150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x33a154: 0xc7a90038  lwc1        $f9, 0x38($sp)
    ctx->pc = 0x33a154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x33a158: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x33a158u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x33a15c: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x33a15cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x33a160: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x33a160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x33a164: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x33a164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x33a168: 0x46061982  mul.s       $f6, $f3, $f6
    ctx->pc = 0x33a168u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x33a16c: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x33a16cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x33a170: 0x460719c2  mul.s       $f7, $f3, $f7
    ctx->pc = 0x33a170u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x33a174: 0xe7a50124  swc1        $f5, 0x124($sp)
    ctx->pc = 0x33a174u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x33a178: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x33a178u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x33a17c: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x33a17cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x33a180: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x33a180u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x33a184: 0xe7a60130  swc1        $f6, 0x130($sp)
    ctx->pc = 0x33a184u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x33a188: 0xe7a70134  swc1        $f7, 0x134($sp)
    ctx->pc = 0x33a188u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x33a18c: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x33a18cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x33a190: 0xe7a30138  swc1        $f3, 0x138($sp)
    ctx->pc = 0x33a190u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x33a194: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33a194u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a198: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33a198u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a19c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33a19cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33a1a0: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x33a1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a1a4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x33a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a1a8: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x33a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a1ac: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x33a1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a1b0: 0xc7a3014c  lwc1        $f3, 0x14C($sp)
    ctx->pc = 0x33a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33a1b4: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x33a1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x33a1b8: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x33a1b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x33a1bc: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x33a1bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x33a1c0: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x33a1c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x33a1c4: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x33a1c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x33a1c8: 0xfac10020  sqc2        $vf1, 0x20($s6)
    ctx->pc = 0x33a1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a1cc: 0xc6e0fffc  lwc1        $f0, -0x4($s7)
    ctx->pc = 0x33a1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a1d0: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x33a1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a1d4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x33a1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a1d8: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x33a1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33a1dc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x33a1dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x33a1e0: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x33a1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33a1e4: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x33a1e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x33a1e8: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x33a1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33a1ec: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x33a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a1f0: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x33a1f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x33a1f4: 0xc7a60030  lwc1        $f6, 0x30($sp)
    ctx->pc = 0x33a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33a1f8: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x33a1f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x33a1fc: 0xc7a70034  lwc1        $f7, 0x34($sp)
    ctx->pc = 0x33a1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33a200: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x33a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a204: 0xc7a80028  lwc1        $f8, 0x28($sp)
    ctx->pc = 0x33a204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33a208: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x33a208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x33a20c: 0xc7a90038  lwc1        $f9, 0x38($sp)
    ctx->pc = 0x33a20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x33a210: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x33a210u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x33a214: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x33a214u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x33a218: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x33a218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x33a21c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x33a21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x33a220: 0x46061982  mul.s       $f6, $f3, $f6
    ctx->pc = 0x33a220u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x33a224: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x33a224u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x33a228: 0x460719c2  mul.s       $f7, $f3, $f7
    ctx->pc = 0x33a228u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x33a22c: 0xe7a50124  swc1        $f5, 0x124($sp)
    ctx->pc = 0x33a22cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x33a230: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x33a230u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x33a234: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x33a234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x33a238: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x33a238u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x33a23c: 0xe7a60130  swc1        $f6, 0x130($sp)
    ctx->pc = 0x33a23cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x33a240: 0xe7a70134  swc1        $f7, 0x134($sp)
    ctx->pc = 0x33a240u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x33a244: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x33a244u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x33a248: 0xe7a30138  swc1        $f3, 0x138($sp)
    ctx->pc = 0x33a248u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x33a24c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33a24cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a250: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33a250u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a254: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33a254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33a258: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x33a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a25c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x33a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a260: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x33a260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a264: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x33a264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a268: 0xc7a3014c  lwc1        $f3, 0x14C($sp)
    ctx->pc = 0x33a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33a26c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x33a26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x33a270: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x33a270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x33a274: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x33a274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x33a278: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x33a278u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x33a27c: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x33a27cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x33a280: 0xfac10030  sqc2        $vf1, 0x30($s6)
    ctx->pc = 0x33a280u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a284: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x33A284u;
    SET_GPR_U32(ctx, 31, 0x33A28Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x33A284u, 0x33A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A28Cu;
label_33a28c:
    // 0x33a28c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x33a28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x33a290: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x33a290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x33a294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33a294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33a298: 0x0  nop
    ctx->pc = 0x33a298u;
    // NOP
    // 0x33a29c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33a29cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33a2a0: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x33a2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x33a2a4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x33A2A4u;
    SET_GPR_U32(ctx, 31, 0x33A2ACu);
    ctx->pc = 0x33A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A2A4u;
    // 0x33a2a8: 0xe6c00040  swc1        $f0, 0x40($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x33A2A4u, 0x33A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2ACu;
label_33a2ac:
    // 0x33a2ac: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x33a2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x33a2b0: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x33a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x33a2b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33a2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33a2b8: 0x0  nop
    ctx->pc = 0x33a2b8u;
    // NOP
    // 0x33a2bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33a2bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33a2c0: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x33a2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x33a2c4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x33A2C4u;
    SET_GPR_U32(ctx, 31, 0x33A2CCu);
    ctx->pc = 0x33A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A2C4u;
    // 0x33a2c8: 0xe6c00044  swc1        $f0, 0x44($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x33A2C4u, 0x33A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2CCu;
label_33a2cc:
    // 0x33a2cc: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x33a2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x33a2d0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x33a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33a2d4: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x33a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x33a2d8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x33a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x33a2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33a2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33a2e0: 0x0  nop
    ctx->pc = 0x33a2e0u;
    // NOP
    // 0x33a2e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33a2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33a2e8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x33a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x33a2ec: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x33a2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x33a2f0: 0xe6c00048  swc1        $f0, 0x48($s6)
    ctx->pc = 0x33a2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 72), bits); }
    // 0x33a2f4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33a2f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a2f8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x33a2f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a2fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33a2fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33a300: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x33a300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a304: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x33a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a308: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x33a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a30c: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x33a30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a310: 0xc7a5012c  lwc1        $f5, 0x12C($sp)
    ctx->pc = 0x33a310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33a314: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x33a314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x33a318: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x33a318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x33a31c: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x33a31cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x33a320: 0xe7a5011c  swc1        $f5, 0x11C($sp)
    ctx->pc = 0x33a320u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x33a324: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x33a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a328: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x33a328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33a32c: 0xc7c40008  lwc1        $f4, 0x8($fp)
    ctx->pc = 0x33a32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33a330: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x33a330u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x33a334: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x33a334u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x33a338: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x33a338u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x33a33c: 0x46050144  c1          0x50144
    ctx->pc = 0x33a33cu;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x33a340: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x33a340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33a344: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33a344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33a348: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x33a348u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x33a34c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x33A34Cu;
    {
        const bool branch_taken_0x33a34c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A34Cu;
        // 0x33a350: 0x4600b086  mov.s       $f2, $f22 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a34c) {
            ctx->pc = 0x33A358u;
            goto label_33a358;
        }
    }
    ctx->pc = 0x33A354u;
    // 0x33a354: 0x4600b886  mov.s       $f2, $f23
    ctx->pc = 0x33a354u;
    ctx->f[2] = FPU_MOV_S(ctx->f[23]);
label_33a358:
    // 0x33a358: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x33a358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x33a35c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x33a35cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x33a360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33a360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33a364: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x33a364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x33a368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33a368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33a36c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x33a36cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x33a370: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x33a370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33a374: 0x0  nop
    ctx->pc = 0x33a374u;
    // NOP
    // 0x33a378: 0x0  nop
    ctx->pc = 0x33a378u;
    // NOP
    // 0x33a37c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x33a37cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x33a380: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33a380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33a384: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x33a384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33a388: 0x0  nop
    ctx->pc = 0x33a388u;
    // NOP
    // 0x33a38c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33A38Cu;
    {
        const bool branch_taken_0x33a38c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33a38c) {
            ctx->pc = 0x33A390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A38Cu;
            // 0x33a390: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A394u;
            goto label_33a394;
        }
    }
    ctx->pc = 0x33A394u;
label_33a394:
    // 0x33a394: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A394u;
    {
        const bool branch_taken_0x33a394 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A394u;
        // 0x33a398: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a394) {
            ctx->pc = 0x33A3B0u;
            goto label_33a3b0;
        }
    }
    ctx->pc = 0x33A39Cu;
    // 0x33a39c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33a39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33a3a0: 0x0  nop
    ctx->pc = 0x33a3a0u;
    // NOP
    // 0x33a3a4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x33a3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x33a3a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33A3A8u;
    {
        const bool branch_taken_0x33a3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a3a8) {
            ctx->pc = 0x33A3C8u;
            goto label_33a3c8;
        }
    }
    ctx->pc = 0x33A3B0u;
label_33a3b0:
    // 0x33a3b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33a3b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33a3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33a3b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33a3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33a3bc: 0x0  nop
    ctx->pc = 0x33a3bcu;
    // NOP
    // 0x33a3c0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x33a3c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x33a3c4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x33a3c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_33a3c8:
    // 0x33a3c8: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x33A3C8u;
    SET_GPR_U32(ctx, 31, 0x33A3D0u);
    ctx->pc = 0x33A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A3C8u;
    // 0x33a3cc: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x33A3C8u, 0x33A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A3D0u;
label_33a3d0:
    // 0x33a3d0: 0xaec20070  sw          $v0, 0x70($s6)
    ctx->pc = 0x33a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 112), GPR_U32(ctx, 2));
    // 0x33a3d4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33a3d8: 0x8c82bfcc  lw          $v0, -0x4034($a0)
    ctx->pc = 0x33a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBFCCu));
    // 0x33a3dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A3DCu;
    {
        const bool branch_taken_0x33a3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3DCu;
        // 0x33a3e0: 0x8fa2016c  lw          $v0, 0x16C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3dc) {
            ctx->pc = 0x33A3ECu;
            goto label_33a3ec;
        }
    }
    ctx->pc = 0x33A3E4u;
    // 0x33a3e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33A3E4u;
    {
        const bool branch_taken_0x33a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3E4u;
        // 0x33a3e8: 0xaec20090  sw          $v0, 0x90($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3e4) {
            ctx->pc = 0x33A3F0u;
            goto label_33a3f0;
        }
    }
    ctx->pc = 0x33A3ECu;
label_33a3ec:
    // 0x33a3ec: 0xaec00090  sw          $zero, 0x90($s6)
    ctx->pc = 0x33a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 0));
label_33a3f0:
    // 0x33a3f0: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x33a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x33a3f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a3f8: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x33a3f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x33a3fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a400: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x33a400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x33a404: 0xa2c20074  sb          $v0, 0x74($s6)
    ctx->pc = 0x33a404u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x33a408: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x33a408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x33a40c: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x33a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x33a410: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x33A410u;
    SET_GPR_U32(ctx, 31, 0x33A418u);
    ctx->pc = 0x33A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A410u;
    // 0x33a414: 0xafa40170  sw          $a0, 0x170($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x33A410u, 0x33A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A418u;
label_33a418:
    // 0x33a418: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33a418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33a41c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x33a41cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x33a420: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x33A420u;
    SET_GPR_U32(ctx, 31, 0x33A428u);
    ctx->pc = 0x33A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A420u;
    // 0x33a424: 0xe6c00080  swc1        $f0, 0x80($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x33A420u, 0x33A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A428u;
label_33a428:
    // 0x33a428: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33a428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33a42c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x33a42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x33a430: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x33A430u;
    SET_GPR_U32(ctx, 31, 0x33A438u);
    ctx->pc = 0x33A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A430u;
    // 0x33a434: 0xe6c00084  swc1        $f0, 0x84($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x33A430u, 0x33A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A438u;
label_33a438:
    // 0x33a438: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33a438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33a43c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x33a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x33a440: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33a440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33a444: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x33a444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33a448: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33a448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a44c: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x33a44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x33a450: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x33a450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x33a454: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x33a454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x33a458: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33a458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a45c: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x33a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x33a460: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x33a460u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x33a464: 0xc0ce4a4  jal         func_339290
    ctx->pc = 0x33A464u;
    SET_GPR_U32(ctx, 31, 0x33A46Cu);
    ctx->pc = 0x33A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A464u;
    // 0x33a468: 0xe6c00088  swc1        $f0, 0x88($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x339290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339290u, 0x33A464u, 0x33A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A46Cu;
label_33a46c:
    // 0x33a46c: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x33a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x33a470: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x33a470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x33a474: 0x1440fe84  bnez        $v0, . + 4 + (-0x17C << 2)
    ctx->pc = 0x33A474u;
    {
        const bool branch_taken_0x33a474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A474u;
        // 0x33a478: 0x26d600a0  addiu       $s6, $s6, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a474) {
            ctx->pc = 0x339E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339e88;
        }
    }
    ctx->pc = 0x33A47Cu;
    // 0x33a47c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x33a47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x33a480: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x33a480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x33a484: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33a484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a488: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33a488u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a48c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33a48cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33a490: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x33a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a494: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x33a494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33a498: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x33a498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a49c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x33a49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a4a0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x33a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a4a4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x33a4a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x33a4a8: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x33a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33a4ac: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33a4acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33a4b0: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x33a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x33a4b4: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x33a4b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x33a4b8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x33a4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33a4bc: 0x1440fe68  bnez        $v0, . + 4 + (-0x198 << 2)
    ctx->pc = 0x33A4BCu;
    {
        const bool branch_taken_0x33a4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4BCu;
        // 0x33a4c0: 0xe7a200b4  swc1        $f2, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a4bc) {
            ctx->pc = 0x339E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339e60;
        }
    }
    ctx->pc = 0x33A4C4u;
label_33a4c4:
    // 0x33a4c4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x33a4c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a4c8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x33a4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a4cc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x33a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a4d0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x33a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a4d4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x33a4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x33a4d8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x33a4d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x33a4dc: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x33a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x33a4e0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x33a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x33a4e4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33a4e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a4e8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33a4e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a4ec: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33a4ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33a4f0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x33a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a4f4: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x33a4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33a4f8: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x33a4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a4fc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x33a4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a500: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x33a500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a504: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x33a504u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x33a508: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x33a508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x33a50c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33a50cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33a510: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x33a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x33a514: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x33a514u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x33a518: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x33a518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33a51c: 0x1440fe34  bnez        $v0, . + 4 + (-0x1CC << 2)
    ctx->pc = 0x33A51Cu;
    {
        const bool branch_taken_0x33a51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A51Cu;
        // 0x33a520: 0xe7a200c4  swc1        $f2, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a51c) {
            ctx->pc = 0x339DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339df0;
        }
    }
    ctx->pc = 0x33A524u;
label_33a524:
    // 0x33a524: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x33a524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x33a528: 0x8c826ec0  lw          $v0, 0x6EC0($a0)
    ctx->pc = 0x33a528u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x33a52c: 0x24836ec0  addiu       $v1, $a0, 0x6EC0
    ctx->pc = 0x33a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28352));
    // 0x33a530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33a530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33a534: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33a534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33a538: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x33a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x33a53c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x33a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_33a540:
    // 0x33a540: 0xdfb001a0  ld          $s0, 0x1A0($sp)
    ctx->pc = 0x33a540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_33a544:
    // 0x33a544: 0xdfb101a8  ld          $s1, 0x1A8($sp)
    ctx->pc = 0x33a544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x33a548: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x33a548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x33a54c: 0xdfb301b8  ld          $s3, 0x1B8($sp)
    ctx->pc = 0x33a54cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x33a550: 0xdfb401c0  ld          $s4, 0x1C0($sp)
    ctx->pc = 0x33a550u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x33a554: 0xdfb501c8  ld          $s5, 0x1C8($sp)
    ctx->pc = 0x33a554u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x33a558: 0xdfb601d0  ld          $s6, 0x1D0($sp)
    ctx->pc = 0x33a558u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x33a55c: 0xdfb701d8  ld          $s7, 0x1D8($sp)
    ctx->pc = 0x33a55cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x33a560: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x33a560u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x33a564: 0xdfbf01e8  ld          $ra, 0x1E8($sp)
    ctx->pc = 0x33a564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x33a568: 0xc7bc0230  lwc1        $f28, 0x230($sp)
    ctx->pc = 0x33a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x33a56c: 0xc7bb0228  lwc1        $f27, 0x228($sp)
    ctx->pc = 0x33a56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x33a570: 0xc7ba0220  lwc1        $f26, 0x220($sp)
    ctx->pc = 0x33a570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x33a574: 0xc7b90218  lwc1        $f25, 0x218($sp)
    ctx->pc = 0x33a574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x33a578: 0xc7b80210  lwc1        $f24, 0x210($sp)
    ctx->pc = 0x33a578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x33a57c: 0xc7b70208  lwc1        $f23, 0x208($sp)
    ctx->pc = 0x33a57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33a580: 0xc7b60200  lwc1        $f22, 0x200($sp)
    ctx->pc = 0x33a580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33a584: 0xc7b501f8  lwc1        $f21, 0x1F8($sp)
    ctx->pc = 0x33a584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33a588: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x33a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33a58c: 0x3e00008  jr          $ra
    ctx->pc = 0x33A58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A58Cu;
        // 0x33a590: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A594u;
    // 0x33a594: 0x0  nop
    ctx->pc = 0x33a594u;
    // NOP
    ctx->pc = 0x33a598u;
}
