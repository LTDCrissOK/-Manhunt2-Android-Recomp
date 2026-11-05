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

// Function: sub_002184A8
// Address: 0x2184a8 - 0x219218
void sub_002184A8_0x2184a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002184A8_0x2184a8");
#endif

    switch (ctx->pc) {
        case 0x2184f0u: goto label_2184f0;
        case 0x2184f8u: goto label_2184f8;
        case 0x218508u: goto label_218508;
        case 0x218514u: goto label_218514;
        case 0x218580u: goto label_218580;
        case 0x21858cu: goto label_21858c;
        case 0x2185b8u: goto label_2185b8;
        case 0x218604u: goto label_218604;
        case 0x21862cu: goto label_21862c;
        case 0x218668u: goto label_218668;
        case 0x2186d4u: goto label_2186d4;
        case 0x2186f0u: goto label_2186f0;
        case 0x2186fcu: goto label_2186fc;
        case 0x218804u: goto label_218804;
        case 0x218820u: goto label_218820;
        case 0x21883cu: goto label_21883c;
        case 0x218854u: goto label_218854;
        case 0x218870u: goto label_218870;
        case 0x2188a4u: goto label_2188a4;
        case 0x2188c4u: goto label_2188c4;
        case 0x2188ccu: goto label_2188cc;
        case 0x2188e8u: goto label_2188e8;
        case 0x21899cu: goto label_21899c;
        case 0x2189a8u: goto label_2189a8;
        case 0x2189b4u: goto label_2189b4;
        case 0x2189bcu: goto label_2189bc;
        case 0x2189d0u: goto label_2189d0;
        case 0x2189d8u: goto label_2189d8;
        case 0x2189f4u: goto label_2189f4;
        case 0x218a04u: goto label_218a04;
        case 0x218a18u: goto label_218a18;
        case 0x218a24u: goto label_218a24;
        case 0x218a44u: goto label_218a44;
        case 0x218a58u: goto label_218a58;
        case 0x218a60u: goto label_218a60;
        case 0x218a78u: goto label_218a78;
        case 0x218a8cu: goto label_218a8c;
        case 0x218a98u: goto label_218a98;
        case 0x218aa8u: goto label_218aa8;
        case 0x218ab8u: goto label_218ab8;
        case 0x218accu: goto label_218acc;
        case 0x218ad4u: goto label_218ad4;
        case 0x218ae0u: goto label_218ae0;
        case 0x218b34u: goto label_218b34;
        case 0x218b7cu: goto label_218b7c;
        case 0x218bb0u: goto label_218bb0;
        case 0x218bc0u: goto label_218bc0;
        case 0x218be8u: goto label_218be8;
        case 0x218c00u: goto label_218c00;
        case 0x218c08u: goto label_218c08;
        case 0x218c4cu: goto label_218c4c;
        case 0x218c5cu: goto label_218c5c;
        case 0x218c6cu: goto label_218c6c;
        case 0x218c88u: goto label_218c88;
        case 0x218c94u: goto label_218c94;
        case 0x218cb8u: goto label_218cb8;
        case 0x218cc4u: goto label_218cc4;
        case 0x218d70u: goto label_218d70;
        case 0x218d88u: goto label_218d88;
        case 0x218d90u: goto label_218d90;
        case 0x218dc8u: goto label_218dc8;
        case 0x218ddcu: goto label_218ddc;
        case 0x218e0cu: goto label_218e0c;
        case 0x218e14u: goto label_218e14;
        case 0x218e28u: goto label_218e28;
        case 0x218e34u: goto label_218e34;
        case 0x218f30u: goto label_218f30;
        case 0x218f48u: goto label_218f48;
        case 0x218f60u: goto label_218f60;
        case 0x218f68u: goto label_218f68;
        case 0x218f74u: goto label_218f74;
        case 0x218f80u: goto label_218f80;
        case 0x218fe4u: goto label_218fe4;
        case 0x218fecu: goto label_218fec;
        case 0x218ff4u: goto label_218ff4;
        case 0x21903cu: goto label_21903c;
        case 0x219050u: goto label_219050;
        case 0x219068u: goto label_219068;
        case 0x219080u: goto label_219080;
        case 0x219098u: goto label_219098;
        case 0x2190b0u: goto label_2190b0;
        case 0x2190e4u: goto label_2190e4;
        case 0x219104u: goto label_219104;
        case 0x21910cu: goto label_21910c;
        case 0x219128u: goto label_219128;
        case 0x2191e0u: goto label_2191e0;
        default: break;
    }

    ctx->pc = 0x2184a8u;

    // 0x2184a8: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2184a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x2184ac: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x2184acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
    // 0x2184b0: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x2184b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x2184b4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2184b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2184b8: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x2184b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x2184bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2184bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184c0: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x2184c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
    // 0x2184c4: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2184c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2184c8: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x2184c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x2184cc: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x2184ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x2184d0: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x2184d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
    // 0x2184d4: 0xffb50198  sd          $s5, 0x198($sp)
    ctx->pc = 0x2184d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 21));
    // 0x2184d8: 0xffb601a0  sd          $s6, 0x1A0($sp)
    ctx->pc = 0x2184d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 22));
    // 0x2184dc: 0xffb701a8  sd          $s7, 0x1A8($sp)
    ctx->pc = 0x2184dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 23));
    // 0x2184e0: 0xffbf01b8  sd          $ra, 0x1B8($sp)
    ctx->pc = 0x2184e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 31));
    // 0x2184e4: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x2184e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2184e8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2184E8u;
    SET_GPR_U32(ctx, 31, 0x2184F0u);
    ctx->pc = 0x2184ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184E8u;
    // 0x2184ec: 0xe7b401c0  swc1        $f20, 0x1C0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2184E8u, 0x2184F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184F0u;
label_2184f0:
    // 0x2184f0: 0xc076238  jal         func_1D88E0
    ctx->pc = 0x2184F0u;
    SET_GPR_U32(ctx, 31, 0x2184F8u);
    ctx->pc = 0x2184F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184F0u;
    // 0x2184f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88E0u, 0x2184F0u, 0x2184F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184F8u;
label_2184f8:
    // 0x2184f8: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x2184f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2184fc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2184fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218500: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x218500u;
    SET_GPR_U32(ctx, 31, 0x218508u);
    ctx->pc = 0x218504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218500u;
    // 0x218504: 0x27c4001c  addiu       $a0, $fp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x218500u, 0x218508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218508u;
label_218508:
    // 0x218508: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x218508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x21850c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21850Cu;
    SET_GPR_U32(ctx, 31, 0x218514u);
    ctx->pc = 0x218510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21850Cu;
    // 0x218510: 0x26051670  addiu       $a1, $s0, 0x1670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21850Cu, 0x218514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218514u;
label_218514:
    // 0x218514: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218518: 0x10400169  beqz        $v0, . + 4 + (0x169 << 2)
    ctx->pc = 0x218518u;
    {
        const bool branch_taken_0x218518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218518u;
        // 0x21851c: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218518) {
            ctx->pc = 0x218AC0u;
            goto label_218ac0;
        }
    }
    ctx->pc = 0x218520u;
    // 0x218520: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x218520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
    // 0x218524: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x218524u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x218528: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x218528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21852c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x21852cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x218530: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x218530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x218534: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x218534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x218538: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x218538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x21853c: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x21853cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x218540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218544: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x218544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x218548: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x218548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x21854c: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x21854cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x218550: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x218550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x218554: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x218554u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x218558: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x218558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21855c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21855cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x218560: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x218560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x218564: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x218564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x218568: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x218568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x21856c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x21856cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x218570: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x218570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x218574: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x218574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x218578: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x218578u;
    SET_GPR_U32(ctx, 31, 0x218580u);
    ctx->pc = 0x21857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218578u;
    // 0x21857c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x218578u, 0x218580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218580u;
label_218580:
    // 0x218580: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218584: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x218584u;
    SET_GPR_U32(ctx, 31, 0x21858Cu);
    ctx->pc = 0x218588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218584u;
    // 0x218588: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x218584u, 0x21858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21858Cu;
label_21858c:
    // 0x21858c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x21858cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x218590: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x218590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x218594: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x218594u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x218598: 0x7e000040  sq          $zero, 0x40($s0)
    ctx->pc = 0x218598u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 0));
    // 0x21859c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x21859cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2185a0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2185a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2185a4: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x2185a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2185a8: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x2185a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x2185ac: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x2185acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2185b0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2185B0u;
    SET_GPR_U32(ctx, 31, 0x2185B8u);
    ctx->pc = 0x2185B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185B0u;
    // 0x2185b4: 0xafd00000  sw          $s0, 0x0($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2185B0u, 0x2185B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185B8u;
label_2185b8:
    // 0x2185b8: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x2185b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2185bc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2185bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2185c0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2185c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2185c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2185c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2185c8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2185c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2185cc: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x2185ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2185d0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2185d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2185d4: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2185d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2185d8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2185d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2185dc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2185dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2185e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2185e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2185e4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2185e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2185e8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2185e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2185ec: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x2185ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2185f0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2185f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2185f4: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x2185f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2185f8: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2185f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2185fc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2185FCu;
    SET_GPR_U32(ctx, 31, 0x218604u);
    ctx->pc = 0x218600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185FCu;
    // 0x218600: 0xafc20004  sw          $v0, 0x4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2185FCu, 0x218604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218604u;
label_218604:
    // 0x218604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218608: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x218608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21860c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x21860cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x218610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218614: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x218614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x218618: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x218618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x21861c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x21861cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x218620: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x218620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x218624: 0xc079620  jal         func_1E5880
    ctx->pc = 0x218624u;
    SET_GPR_U32(ctx, 31, 0x21862Cu);
    ctx->pc = 0x218628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218624u;
    // 0x218628: 0xafd0000c  sw          $s0, 0xC($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5880u, 0x218624u, 0x21862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21862Cu;
label_21862c:
    // 0x21862c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x21862cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x218630: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x218630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x218634: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x218634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x218638: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x218638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21863c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x21863cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x218640: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x218640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x218644: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x218644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x218648: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x218648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21864c: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x21864cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x218650: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x218650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x218654: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x218654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x218658: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x218658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21865c: 0x27b500b0  addiu       $s5, $sp, 0xB0
    ctx->pc = 0x21865cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x218660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218668:
    // 0x218668: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x218668u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21866c: 0x0  nop
    ctx->pc = 0x21866cu;
    // NOP
    // 0x218670: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x218670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x218674: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x218674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x218678: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x218678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x21867c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21867cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x218680: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x218680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x218684: 0x28c40006  slti        $a0, $a2, 0x6
    ctx->pc = 0x218684u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x218688: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x218688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x21868c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x218690: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x218690u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x218694: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x218694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x218698: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x218698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21869c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x21869cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2186a0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2186a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2186a4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2186a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2186a8: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x2186a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x2186ac: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2186acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2186b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2186b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2186b4: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2186b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2186b8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2186b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2186bc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2186bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2186c0: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x2186c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x2186c4: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2186C4u;
    {
        const bool branch_taken_0x2186c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2186C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186C4u;
        // 0x2186c8: 0xe4410030  swc1        $f1, 0x30($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186c4) {
            ctx->pc = 0x218668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218668;
        }
    }
    ctx->pc = 0x2186CCu;
    // 0x2186cc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2186CCu;
    SET_GPR_U32(ctx, 31, 0x2186D4u);
    ctx->pc = 0x2186D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186CCu;
    // 0x2186d0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2186CCu, 0x2186D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186D4u;
label_2186d4:
    // 0x2186d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2186d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2186d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2186dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186e0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2186e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2186e4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2186e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2186e8: 0xc07633e  jal         func_1D8CF8
    ctx->pc = 0x2186E8u;
    SET_GPR_U32(ctx, 31, 0x2186F0u);
    ctx->pc = 0x2186ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186E8u;
    // 0x2186ec: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8CF8u, 0x2186E8u, 0x2186F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186F0u;
label_2186f0:
    // 0x2186f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2186f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186f4: 0xc079372  jal         func_1E4DC8
    ctx->pc = 0x2186F4u;
    SET_GPR_U32(ctx, 31, 0x2186FCu);
    ctx->pc = 0x2186F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186F4u;
    // 0x2186f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4DC8u, 0x2186F4u, 0x2186FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186FCu;
label_2186fc:
    // 0x2186fc: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x2186fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x218700: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x218700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x218704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218708: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x218708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21870c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x21870cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x218710: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x218710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x218714: 0x24c70030  addiu       $a3, $a2, 0x30
    ctx->pc = 0x218714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x218718: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x218718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x21871c: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x21871cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x218720: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x218720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x218724: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x218724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x218728: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x218728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x21872c: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x21872cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218730: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x218730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x218734: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x218734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x218738: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x218738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x21873c: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x21873cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x218740: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x218740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x218744: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x218744u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x218748: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x218748u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21874c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x21874cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218750: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x218750u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218754: 0xf8c10030  sqc2        $vf1, 0x30($a2)
    ctx->pc = 0x218754u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218758: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x218758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21875c: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x21875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x218760: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x218760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x218764: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x218764u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x218768: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x218768u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x21876c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x21876cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x218770: 0x0  nop
    ctx->pc = 0x218770u;
    // NOP
    // 0x218774: 0x0  nop
    ctx->pc = 0x218774u;
    // NOP
    // 0x218778: 0x46000044  c1          0x44
    ctx->pc = 0x218778u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x21877c: 0xe4c00054  swc1        $f0, 0x54($a2)
    ctx->pc = 0x21877cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x218780: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x218780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x218784: 0x0  nop
    ctx->pc = 0x218784u;
    // NOP
    // 0x218788: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x218788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21878c: 0x0  nop
    ctx->pc = 0x21878cu;
    // NOP
    // 0x218790: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x218790u;
    {
        const bool branch_taken_0x218790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218790u;
        // 0x218794: 0xe4c10050  swc1        $f1, 0x50($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218790) {
            ctx->pc = 0x2187BCu;
            goto label_2187bc;
        }
    }
    ctx->pc = 0x218798u;
    // 0x218798: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x218798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21879c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21879cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2187a0: 0x0  nop
    ctx->pc = 0x2187a0u;
    // NOP
    // 0x2187a4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2187a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2187a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2187a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2187ac: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x2187acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2187b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2187b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2187b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2187b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2187b8: 0xf8c10040  sqc2        $vf1, 0x40($a2)
    ctx->pc = 0x2187b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2187bc:
    // 0x2187bc: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x2187bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2187c0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x2187c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2187c4: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x2187c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2187c8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2187c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2187cc: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x2187ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2187d0: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x2187d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2187d4: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x2187d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2187d8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2187d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2187dc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2187dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2187e0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2187e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2187e4: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x2187e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2187e8: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x2187e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2187ec: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2187ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2187f0: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x2187f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2187f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2187f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2187f8: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2187f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2187fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2187FCu;
    SET_GPR_U32(ctx, 31, 0x218804u);
    ctx->pc = 0x218800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187FCu;
    // 0x218800: 0x24a51680  addiu       $a1, $a1, 0x1680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2187FCu, 0x218804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218804u;
label_218804:
    // 0x218804: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218808: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x218808u;
    {
        const bool branch_taken_0x218808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218808) {
            ctx->pc = 0x21887Cu;
            goto label_21887c;
        }
    }
    ctx->pc = 0x218810u;
    // 0x218810: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x218810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x218814: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x218814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x218818: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x218818u;
    SET_GPR_U32(ctx, 31, 0x218820u);
    ctx->pc = 0x21881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218818u;
    // 0x21881c: 0x24a51688  addiu       $a1, $a1, 0x1688 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x218818u, 0x218820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218820u;
label_218820:
    // 0x218820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218824: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x218824u;
    {
        const bool branch_taken_0x218824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218824) {
            ctx->pc = 0x21887Cu;
            goto label_21887c;
        }
    }
    ctx->pc = 0x21882Cu;
    // 0x21882c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21882cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x218830: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x218830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x218834: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x218834u;
    SET_GPR_U32(ctx, 31, 0x21883Cu);
    ctx->pc = 0x218838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218834u;
    // 0x218838: 0x24a51690  addiu       $a1, $a1, 0x1690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x218834u, 0x21883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21883Cu;
label_21883c:
    // 0x21883c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21883cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218840: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x218840u;
    {
        const bool branch_taken_0x218840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218840u;
        // 0x218844: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218840) {
            ctx->pc = 0x21887Cu;
            goto label_21887c;
        }
    }
    ctx->pc = 0x218848u;
    // 0x218848: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x218848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x21884c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21884Cu;
    SET_GPR_U32(ctx, 31, 0x218854u);
    ctx->pc = 0x218850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21884Cu;
    // 0x218850: 0x24651670  addiu       $a1, $v1, 0x1670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21884Cu, 0x218854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218854u;
label_218854:
    // 0x218854: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218858: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x218858u;
    {
        const bool branch_taken_0x218858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218858) {
            ctx->pc = 0x21887Cu;
            goto label_21887c;
        }
    }
    ctx->pc = 0x218860u;
    // 0x218860: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x218860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x218864: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x218864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x218868: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x218868u;
    SET_GPR_U32(ctx, 31, 0x218870u);
    ctx->pc = 0x21886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218868u;
    // 0x21886c: 0x24a51698  addiu       $a1, $a1, 0x1698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x218868u, 0x218870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218870u;
label_218870:
    // 0x218870: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218874: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x218874u;
    {
        const bool branch_taken_0x218874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218874) {
            ctx->pc = 0x218878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218874u;
            // 0x218878: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218990u;
            goto label_218990;
        }
    }
    ctx->pc = 0x21887Cu;
label_21887c:
    // 0x21887c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x21887cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x218880: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x218880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x218884: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x218884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x218888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21888c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x21888cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x218890: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x218890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x218894: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x218894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x218898: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x218898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x21889c: 0xc079848  jal         func_1E6120
    ctx->pc = 0x21889Cu;
    SET_GPR_U32(ctx, 31, 0x2188A4u);
    ctx->pc = 0x2188A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21889Cu;
    // 0x2188a0: 0x8fc4000c  lw          $a0, 0xC($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x21889Cu, 0x2188A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188A4u;
label_2188a4:
    // 0x2188a4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2188a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2188a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2188a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2188ac: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2188acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2188b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2188b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2188b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2188b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2188b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2188b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188bc: 0xc07a932  jal         func_1EA4C8
    ctx->pc = 0x2188BCu;
    SET_GPR_U32(ctx, 31, 0x2188C4u);
    ctx->pc = 0x2188C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188BCu;
    // 0x2188c0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA4C8u, 0x2188BCu, 0x2188C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188C4u;
label_2188c4:
    // 0x2188c4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2188C4u;
    SET_GPR_U32(ctx, 31, 0x2188CCu);
    ctx->pc = 0x2188C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188C4u;
    // 0x2188c8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2188C4u, 0x2188CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188CCu;
label_2188cc:
    // 0x2188cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2188ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2188d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2188d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2188d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2188d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2188dc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2188dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2188e0: 0xc07aaac  jal         func_1EAAB0
    ctx->pc = 0x2188E0u;
    SET_GPR_U32(ctx, 31, 0x2188E8u);
    ctx->pc = 0x2188E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188E0u;
    // 0x2188e4: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAB0u, 0x2188E0u, 0x2188E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188E8u;
label_2188e8:
    // 0x2188e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2188e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2188ec: 0x93a300a0  lbu         $v1, 0xA0($sp)
    ctx->pc = 0x2188ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2188f0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2188f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2188f4: 0xa3a20140  sb          $v0, 0x140($sp)
    ctx->pc = 0x2188f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 2));
    // 0x2188f8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2188f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2188fc: 0x93a20140  lbu         $v0, 0x140($sp)
    ctx->pc = 0x2188fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x218900: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x218900u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x218904: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x218904u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x218908: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x218908u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21890c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x21890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x218910: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x218910u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218914: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x218914u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218918: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x218918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21891c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x21891cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218920: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x218920u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218924: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x218924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218928: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x218928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x21892c: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x21892cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x218930: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x218930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x218934: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x218934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x218938: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x218938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21893c: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x21893cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x218940: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x218940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218944: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x218944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x218948: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x218948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21894c: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x21894cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x218950: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x218950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x218954: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x218954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x218958: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x218958u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21895c: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x21895cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x218960: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x218960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218964: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x218964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x218968: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x218968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21896c: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x21896cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x218970: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x218970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218974: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x218974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x218978: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x218978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21897c: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x21897cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x218980: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x218980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x218984: 0xf8810090  sqc2        $vf1, 0x90($a0)
    ctx->pc = 0x218984u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218988: 0xafd00018  sw          $s0, 0x18($fp)
    ctx->pc = 0x218988u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 16));
    // 0x21898c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21898cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_218990:
    // 0x218990: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x218990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218994: 0xc0f7804  jal         func_3DE010
    ctx->pc = 0x218994u;
    SET_GPR_U32(ctx, 31, 0x21899Cu);
    ctx->pc = 0x218998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218994u;
    // 0x218998: 0x248434f0  addiu       $a0, $a0, 0x34F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE010u, 0x218994u, 0x21899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21899Cu;
label_21899c:
    // 0x21899c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21899cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189a0: 0xc0860b4  jal         func_2182D0
    ctx->pc = 0x2189A0u;
    SET_GPR_U32(ctx, 31, 0x2189A8u);
    ctx->pc = 0x2189A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189A0u;
    // 0x2189a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2182D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2182D0u, 0x2189A0u, 0x2189A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189A8u;
label_2189a8:
    // 0x2189a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2189a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189ac: 0xc0860cc  jal         func_218330
    ctx->pc = 0x2189ACu;
    SET_GPR_U32(ctx, 31, 0x2189B4u);
    ctx->pc = 0x2189B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189ACu;
    // 0x2189b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218330u, 0x2189ACu, 0x2189B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189B4u;
label_2189b4:
    // 0x2189b4: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x2189B4u;
    SET_GPR_U32(ctx, 31, 0x2189BCu);
    ctx->pc = 0x2189B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189B4u;
    // 0x2189b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x2189B4u, 0x2189BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189BCu;
label_2189bc:
    // 0x2189bc: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2189BCu;
    {
        const bool branch_taken_0x2189bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2189bc) {
            ctx->pc = 0x2189FCu;
            goto label_2189fc;
        }
    }
    ctx->pc = 0x2189C4u;
    // 0x2189c4: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2189C4u;
    {
        const bool branch_taken_0x2189c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2189C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189C4u;
        // 0x2189c8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189c4) {
            ctx->pc = 0x2189FCu;
            goto label_2189fc;
        }
    }
    ctx->pc = 0x2189CCu;
    // 0x2189cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2189ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2189d0:
    // 0x2189d0: 0xc0860b4  jal         func_2182D0
    ctx->pc = 0x2189D0u;
    SET_GPR_U32(ctx, 31, 0x2189D8u);
    ctx->pc = 0x2189D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189D0u;
    // 0x2189d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2182D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2182D0u, 0x2189D0u, 0x2189D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189D8u;
label_2189d8:
    // 0x2189d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2189d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2189dc: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x2189dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2189e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2189e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2189e4: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x2189e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2189e8: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x2189e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x2189ec: 0xc0f782e  jal         func_3DE0B8
    ctx->pc = 0x2189ECu;
    SET_GPR_U32(ctx, 31, 0x2189F4u);
    ctx->pc = 0x2189F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189ECu;
    // 0x2189f0: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0B8u, 0x2189ECu, 0x2189F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189F4u;
label_2189f4:
    // 0x2189f4: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2189F4u;
    {
        const bool branch_taken_0x2189f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2189F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189F4u;
        // 0x2189f8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189f4) {
            ctx->pc = 0x2189D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2189d0;
        }
    }
    ctx->pc = 0x2189FCu;
label_2189fc:
    // 0x2189fc: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x2189FCu;
    SET_GPR_U32(ctx, 31, 0x218A04u);
    ctx->pc = 0x218A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189FCu;
    // 0x218a00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x2189FCu, 0x218A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A04u;
label_218a04:
    // 0x218a04: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x218A04u;
    {
        const bool branch_taken_0x218a04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x218a04) {
            ctx->pc = 0x218A3Cu;
            goto label_218a3c;
        }
    }
    ctx->pc = 0x218A0Cu;
    // 0x218a0c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x218A0Cu;
    {
        const bool branch_taken_0x218a0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x218a0c) {
            ctx->pc = 0x218A3Cu;
            goto label_218a3c;
        }
    }
    ctx->pc = 0x218A14u;
    // 0x218a14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218a18:
    // 0x218a18: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x218a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x218a1c: 0xc08610e  jal         func_218438
    ctx->pc = 0x218A1Cu;
    SET_GPR_U32(ctx, 31, 0x218A24u);
    ctx->pc = 0x218A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A1Cu;
    // 0x218a20: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218438u, 0x218A1Cu, 0x218A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A24u;
label_218a24:
    // 0x218a24: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x218a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x218a28: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x218a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x218a2c: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x218a2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x218a30: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x218a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x218a34: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x218A34u;
    {
        const bool branch_taken_0x218a34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x218A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A34u;
        // 0x218a38: 0x7fa300f0  sq          $v1, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a34) {
            ctx->pc = 0x218A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218a18;
        }
    }
    ctx->pc = 0x218A3Cu;
label_218a3c:
    // 0x218a3c: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x218A3Cu;
    SET_GPR_U32(ctx, 31, 0x218A44u);
    ctx->pc = 0x218A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A3Cu;
    // 0x218a40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x218A3Cu, 0x218A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A44u;
label_218a44:
    // 0x218a44: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x218A44u;
    {
        const bool branch_taken_0x218a44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x218a44) {
            ctx->pc = 0x218A70u;
            goto label_218a70;
        }
    }
    ctx->pc = 0x218A4Cu;
    // 0x218a4c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x218A4Cu;
    {
        const bool branch_taken_0x218a4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x218A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A4Cu;
        // 0x218a50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a4c) {
            ctx->pc = 0x218A70u;
            goto label_218a70;
        }
    }
    ctx->pc = 0x218A54u;
    // 0x218a54: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x218a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_218a58:
    // 0x218a58: 0xc0860cc  jal         func_218330
    ctx->pc = 0x218A58u;
    SET_GPR_U32(ctx, 31, 0x218A60u);
    ctx->pc = 0x218A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A58u;
    // 0x218a5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218330u, 0x218A58u, 0x218A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A60u;
label_218a60:
    // 0x218a60: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x218a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x218a64: 0x0  nop
    ctx->pc = 0x218a64u;
    // NOP
    // 0x218a68: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x218A68u;
    {
        const bool branch_taken_0x218a68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x218A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A68u;
        // 0x218a6c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a68) {
            ctx->pc = 0x218A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218a58;
        }
    }
    ctx->pc = 0x218A70u;
label_218a70:
    // 0x218a70: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x218A70u;
    SET_GPR_U32(ctx, 31, 0x218A78u);
    ctx->pc = 0x218A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A70u;
    // 0x218a74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x218A70u, 0x218A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A78u;
label_218a78:
    // 0x218a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a7c: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x218A7Cu;
    {
        const bool branch_taken_0x218a7c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x218a7c) {
            ctx->pc = 0x218AB0u;
            goto label_218ab0;
        }
    }
    ctx->pc = 0x218A84u;
    // 0x218a84: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x218A84u;
    SET_GPR_U32(ctx, 31, 0x218A8Cu);
    ctx->pc = 0x218A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A84u;
    // 0x218a88: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x218A84u, 0x218A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A8Cu;
label_218a8c:
    // 0x218a8c: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x218A8Cu;
    {
        const bool branch_taken_0x218a8c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x218a8c) {
            ctx->pc = 0x218AB0u;
            goto label_218ab0;
        }
    }
    ctx->pc = 0x218A94u;
    // 0x218a94: 0x0  nop
    ctx->pc = 0x218a94u;
    // NOP
label_218a98:
    // 0x218a98: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x218a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x218a9c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x218a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x218aa0: 0xc0b1ac6  jal         func_2C6B18
    ctx->pc = 0x218AA0u;
    SET_GPR_U32(ctx, 31, 0x218AA8u);
    ctx->pc = 0x218AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AA0u;
    // 0x218aa4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B18u, 0x218AA0u, 0x218AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AA8u;
label_218aa8:
    // 0x218aa8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x218AA8u;
    {
        const bool branch_taken_0x218aa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x218AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AA8u;
        // 0x218aac: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218aa8) {
            ctx->pc = 0x218A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218a98;
        }
    }
    ctx->pc = 0x218AB0u;
label_218ab0:
    // 0x218ab0: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x218AB0u;
    SET_GPR_U32(ctx, 31, 0x218AB8u);
    ctx->pc = 0x218AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AB0u;
    // 0x218ab4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x218AB0u, 0x218AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AB8u;
label_218ab8:
    // 0x218ab8: 0x100001ca  b           . + 4 + (0x1CA << 2)
    ctx->pc = 0x218AB8u;
    {
        const bool branch_taken_0x218ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AB8u;
        // 0x218abc: 0xdfb00170  ld          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ab8) {
            ctx->pc = 0x2191E4u;
            goto label_2191e4;
        }
    }
    ctx->pc = 0x218AC0u;
label_218ac0:
    // 0x218ac0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x218ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ac4: 0xc0860b4  jal         func_2182D0
    ctx->pc = 0x218AC4u;
    SET_GPR_U32(ctx, 31, 0x218ACCu);
    ctx->pc = 0x218AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AC4u;
    // 0x218ac8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2182D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2182D0u, 0x218AC4u, 0x218ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218ACCu;
label_218acc:
    // 0x218acc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x218ACCu;
    SET_GPR_U32(ctx, 31, 0x218AD4u);
    ctx->pc = 0x218AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218ACCu;
    // 0x218ad0: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x218ACCu, 0x218AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AD4u;
label_218ad4:
    // 0x218ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ad8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x218AD8u;
    SET_GPR_U32(ctx, 31, 0x218AE0u);
    ctx->pc = 0x218ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AD8u;
    // 0x218adc: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x218AD8u, 0x218AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AE0u;
label_218ae0:
    // 0x218ae0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x218ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218ae4: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x218ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x218ae8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x218ae8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218aec: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x218aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x218af0: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x218af0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x218af4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x218af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x218af8: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x218af8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x218afc: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x218afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x218b00: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x218b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x218b04: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x218b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x218b08: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x218b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218b0c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x218b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218b10: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x218b10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x218b14: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x218b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x218b18: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x218b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x218b1c: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x218b1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x218b20: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x218b20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x218b24: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x218b24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218b28: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x218b28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
    // 0x218b2c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x218B2Cu;
    SET_GPR_U32(ctx, 31, 0x218B34u);
    ctx->pc = 0x218B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B2Cu;
    // 0x218b30: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x218B2Cu, 0x218B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B34u;
label_218b34:
    // 0x218b34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x218b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x218b38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218b3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b40: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x218b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x218b44: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x218b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x218b48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x218b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218b4c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x218b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x218b50: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x218b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x218b54: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x218b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x218b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b5c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x218b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x218b60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x218b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b64: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x218b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x218b68: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x218b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x218b6c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x218b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x218b70: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x218b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x218b74: 0xc0860cc  jal         func_218330
    ctx->pc = 0x218B74u;
    SET_GPR_U32(ctx, 31, 0x218B7Cu);
    ctx->pc = 0x218B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B74u;
    // 0x218b78: 0xe4610004  swc1        $f1, 0x4($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x218330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218330u, 0x218B74u, 0x218B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B7Cu;
label_218b7c:
    // 0x218b7c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x218b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218b80: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x218b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x218b84: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x218b84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x218b88: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x218b88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218b8c: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x218b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218b90: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x218b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x218b94: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x218b94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218b98: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x218b98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218b9c: 0xafd00004  sw          $s0, 0x4($fp)
    ctx->pc = 0x218b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 16));
    // 0x218ba0: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x218ba0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ba4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ba8: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x218BA8u;
    SET_GPR_U32(ctx, 31, 0x218BB0u);
    ctx->pc = 0x218BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BA8u;
    // 0x218bac: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x218BA8u, 0x218BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BB0u;
label_218bb0:
    // 0x218bb0: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x218BB0u;
    {
        const bool branch_taken_0x218bb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x218BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BB0u;
        // 0x218bb4: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218bb0) {
            ctx->pc = 0x218C54u;
            goto label_218c54;
        }
    }
    ctx->pc = 0x218BB8u;
    // 0x218bb8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x218BB8u;
    SET_GPR_U32(ctx, 31, 0x218BC0u);
    ctx->pc = 0x218BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BB8u;
    // 0x218bbc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x218BB8u, 0x218BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BC0u;
label_218bc0:
    // 0x218bc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218bc4: 0x8fa50164  lw          $a1, 0x164($sp)
    ctx->pc = 0x218bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x218bc8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x218bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x218bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218bd0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x218bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x218bd4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x218bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x218bd8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x218bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x218bdc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x218bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x218be0: 0xc079620  jal         func_1E5880
    ctx->pc = 0x218BE0u;
    SET_GPR_U32(ctx, 31, 0x218BE8u);
    ctx->pc = 0x218BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BE0u;
    // 0x218be4: 0xafd0000c  sw          $s0, 0xC($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5880u, 0x218BE0u, 0x218BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BE8u;
label_218be8:
    // 0x218be8: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x218be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x218bec: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x218BECu;
    {
        const bool branch_taken_0x218bec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x218BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BECu;
        // 0x218bf0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218bec) {
            ctx->pc = 0x218C54u;
            goto label_218c54;
        }
    }
    ctx->pc = 0x218BF4u;
    // 0x218bf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x218bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218bf8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x218bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218bfc: 0x0  nop
    ctx->pc = 0x218bfcu;
    // NOP
label_218c00:
    // 0x218c00: 0xc0860b4  jal         func_2182D0
    ctx->pc = 0x218C00u;
    SET_GPR_U32(ctx, 31, 0x218C08u);
    ctx->pc = 0x218C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C00u;
    // 0x218c04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2182D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2182D0u, 0x218C00u, 0x218C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C08u;
label_218c08:
    // 0x218c08: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x218c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x218c0c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x218c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x218c10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c14: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x218c14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218c18: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x218c18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218c1c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x218c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x218c20: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x218c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x218c24: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x218c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x218c28: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x218c28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x218c2c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x218c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218c30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x218c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x218c34: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x218c34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x218c38: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x218c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x218c3c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x218c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x218c40: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x218c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x218c44: 0xc0f782e  jal         func_3DE0B8
    ctx->pc = 0x218C44u;
    SET_GPR_U32(ctx, 31, 0x218C4Cu);
    ctx->pc = 0x218C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C44u;
    // 0x218c48: 0xe4410030  swc1        $f1, 0x30($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0B8u, 0x218C44u, 0x218C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C4Cu;
label_218c4c:
    // 0x218c4c: 0x1640ffec  bnez        $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x218C4Cu;
    {
        const bool branch_taken_0x218c4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x218C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C4Cu;
        // 0x218c50: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c4c) {
            ctx->pc = 0x218C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218c00;
        }
    }
    ctx->pc = 0x218C54u;
label_218c54:
    // 0x218c54: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x218C54u;
    SET_GPR_U32(ctx, 31, 0x218C5Cu);
    ctx->pc = 0x218C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C54u;
    // 0x218c58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x218C54u, 0x218C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C5Cu;
label_218c5c:
    // 0x218c5c: 0x18400042  blez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x218C5Cu;
    {
        const bool branch_taken_0x218c5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x218C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C5Cu;
        // 0x218c60: 0xafa20168  sw          $v0, 0x168($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c5c) {
            ctx->pc = 0x218D68u;
            goto label_218d68;
        }
    }
    ctx->pc = 0x218C64u;
    // 0x218c64: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x218C64u;
    SET_GPR_U32(ctx, 31, 0x218C6Cu);
    ctx->pc = 0x218C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C64u;
    // 0x218c68: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x218C64u, 0x218C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C6Cu;
label_218c6c:
    // 0x218c6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x218c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218c78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x218c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x218c7c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x218c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x218c80: 0xc07633e  jal         func_1D8CF8
    ctx->pc = 0x218C80u;
    SET_GPR_U32(ctx, 31, 0x218C88u);
    ctx->pc = 0x218C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C80u;
    // 0x218c84: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8CF8u, 0x218C80u, 0x218C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C88u;
label_218c88:
    // 0x218c88: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x218c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x218c8c: 0xc079372  jal         func_1E4DC8
    ctx->pc = 0x218C8Cu;
    SET_GPR_U32(ctx, 31, 0x218C94u);
    ctx->pc = 0x218C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C8Cu;
    // 0x218c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4DC8u, 0x218C8Cu, 0x218C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C94u;
label_218c94:
    // 0x218c94: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x218c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x218c98: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x218C98u;
    {
        const bool branch_taken_0x218c98 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x218c98) {
            ctx->pc = 0x218D68u;
            goto label_218d68;
        }
    }
    ctx->pc = 0x218CA0u;
    // 0x218ca0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x218ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x218ca4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x218ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ca8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x218ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x218cac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x218cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x218cb0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x218cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218cb4: 0x0  nop
    ctx->pc = 0x218cb4u;
    // NOP
label_218cb8:
    // 0x218cb8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x218cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x218cbc: 0xc08610e  jal         func_218438
    ctx->pc = 0x218CBCu;
    SET_GPR_U32(ctx, 31, 0x218CC4u);
    ctx->pc = 0x218CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CBCu;
    // 0x218cc0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218438u, 0x218CBCu, 0x218CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CC4u;
label_218cc4:
    // 0x218cc4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x218cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x218cc8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x218cc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218ccc: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x218cccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218cd0: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x218cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x218cd4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x218cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x218cd8: 0x24c70030  addiu       $a3, $a2, 0x30
    ctx->pc = 0x218cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x218cdc: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x218cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x218ce0: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x218ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x218ce4: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x218ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x218ce8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x218ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x218cec: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x218cecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218cf0: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x218cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x218cf4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x218cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x218cf8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x218cf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218cfc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x218cfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218d00: 0xf8c10030  sqc2        $vf1, 0x30($a2)
    ctx->pc = 0x218d00u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218d04: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x218d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x218d08: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x218d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x218d0c: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x218d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x218d10: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x218d10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x218d14: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x218d14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x218d18: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x218d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x218d1c: 0x0  nop
    ctx->pc = 0x218d1cu;
    // NOP
    // 0x218d20: 0x0  nop
    ctx->pc = 0x218d20u;
    // NOP
    // 0x218d24: 0x46000044  c1          0x44
    ctx->pc = 0x218d24u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x218d28: 0xe4c00054  swc1        $f0, 0x54($a2)
    ctx->pc = 0x218d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x218d2c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x218d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218d30: 0x0  nop
    ctx->pc = 0x218d30u;
    // NOP
    // 0x218d34: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x218D34u;
    {
        const bool branch_taken_0x218d34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D34u;
        // 0x218d38: 0xe4c10050  swc1        $f1, 0x50($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d34) {
            ctx->pc = 0x218D5Cu;
            goto label_218d5c;
        }
    }
    ctx->pc = 0x218D3Cu;
    // 0x218d3c: 0x0  nop
    ctx->pc = 0x218d3cu;
    // NOP
    // 0x218d40: 0x0  nop
    ctx->pc = 0x218d40u;
    // NOP
    // 0x218d44: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x218d44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x218d48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x218d48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x218d4c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x218d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x218d50: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x218d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x218d54: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x218d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218d58: 0xf8c10040  sqc2        $vf1, 0x40($a2)
    ctx->pc = 0x218d58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_218d5c:
    // 0x218d5c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x218d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x218d60: 0x1640ffd5  bnez        $s2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x218D60u;
    {
        const bool branch_taken_0x218d60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x218D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D60u;
        // 0x218d64: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d60) {
            ctx->pc = 0x218CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218cb8;
        }
    }
    ctx->pc = 0x218D68u;
label_218d68:
    // 0x218d68: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x218D68u;
    SET_GPR_U32(ctx, 31, 0x218D70u);
    ctx->pc = 0x218D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D68u;
    // 0x218d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x218D68u, 0x218D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D70u;
label_218d70:
    // 0x218d70: 0x5840000c  blezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x218D70u;
    {
        const bool branch_taken_0x218d70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x218d70) {
            ctx->pc = 0x218D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218D70u;
            // 0x218d74: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218DA4u;
            goto label_218da4;
        }
    }
    ctx->pc = 0x218D78u;
    // 0x218d78: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x218D78u;
    {
        const bool branch_taken_0x218d78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x218d78) {
            ctx->pc = 0x218D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218D78u;
            // 0x218d7c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218DA4u;
            goto label_218da4;
        }
    }
    ctx->pc = 0x218D80u;
    // 0x218d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218d84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x218d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_218d88:
    // 0x218d88: 0xc0860cc  jal         func_218330
    ctx->pc = 0x218D88u;
    SET_GPR_U32(ctx, 31, 0x218D90u);
    ctx->pc = 0x218D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D88u;
    // 0x218d8c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218330u, 0x218D88u, 0x218D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D90u;
label_218d90:
    // 0x218d90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x218d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x218d94: 0x0  nop
    ctx->pc = 0x218d94u;
    // NOP
    // 0x218d98: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x218D98u;
    {
        const bool branch_taken_0x218d98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x218D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D98u;
        // 0x218d9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d98) {
            ctx->pc = 0x218D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218d88;
        }
    }
    ctx->pc = 0x218DA0u;
    // 0x218da0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x218da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_218da4:
    // 0x218da4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218da8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x218da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x218dac: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x218dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x218db0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x218db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x218db4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x218db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x218db8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x218db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x218dbc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x218dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x218dc0: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x218DC0u;
    SET_GPR_U32(ctx, 31, 0x218DC8u);
    ctx->pc = 0x218DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DC0u;
    // 0x218dc4: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x218DC0u, 0x218DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DC8u;
label_218dc8:
    // 0x218dc8: 0x18400051  blez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x218DC8u;
    {
        const bool branch_taken_0x218dc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x218DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DC8u;
        // 0x218dcc: 0xafa2016c  sw          $v0, 0x16C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218dc8) {
            ctx->pc = 0x218F10u;
            goto label_218f10;
        }
    }
    ctx->pc = 0x218DD0u;
    // 0x218dd0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x218dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x218dd4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x218DD4u;
    SET_GPR_U32(ctx, 31, 0x218DDCu);
    ctx->pc = 0x218DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DD4u;
    // 0x218dd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x218DD4u, 0x218DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DDCu;
label_218ddc:
    // 0x218ddc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218de0: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x218de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x218de4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x218de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x218de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218dec: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x218decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x218df0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x218df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x218df4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x218df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x218df8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x218df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x218dfc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x218dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x218e00: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x218e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x218e04: 0xc079e5a  jal         func_1E7968
    ctx->pc = 0x218E04u;
    SET_GPR_U32(ctx, 31, 0x218E0Cu);
    ctx->pc = 0x218E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E04u;
    // 0x218e08: 0xafd00010  sw          $s0, 0x10($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7968u, 0x218E04u, 0x218E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E0Cu;
label_218e0c:
    // 0x218e0c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x218E0Cu;
    SET_GPR_U32(ctx, 31, 0x218E14u);
    ctx->pc = 0x218E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E0Cu;
    // 0x218e10: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x218E0Cu, 0x218E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E14u;
label_218e14:
    // 0x218e14: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x218e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x218e18: 0x5860003e  blezl       $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x218E18u;
    {
        const bool branch_taken_0x218e18 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x218e18) {
            ctx->pc = 0x218E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218E18u;
            // 0x218e1c: 0x8fc20004  lw          $v0, 0x4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218F14u;
            goto label_218f14;
        }
    }
    ctx->pc = 0x218E20u;
    // 0x218e20: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x218e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x218e24: 0x0  nop
    ctx->pc = 0x218e24u;
    // NOP
label_218e28:
    // 0x218e28: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x218e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x218e2c: 0xc0b1ac6  jal         func_2C6B18
    ctx->pc = 0x218E2Cu;
    SET_GPR_U32(ctx, 31, 0x218E34u);
    ctx->pc = 0x218E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E2Cu;
    // 0x218e30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B18u, 0x218E2Cu, 0x218E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E34u;
label_218e34:
    // 0x218e34: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x218e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x218e38: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x218e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x218e3c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x218e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x218e40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x218e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x218e44: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x218e44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x218e48: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x218e48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218e4c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x218e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x218e50: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x218e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218e54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x218e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218e58: 0x0  nop
    ctx->pc = 0x218e58u;
    // NOP
    // 0x218e5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x218E5Cu;
    {
        const bool branch_taken_0x218e5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E5Cu;
        // 0x218e60: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e5c) {
            ctx->pc = 0x218E68u;
            goto label_218e68;
        }
    }
    ctx->pc = 0x218E64u;
    // 0x218e64: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x218e64u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_218e68:
    // 0x218e68: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x218e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x218e6c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x218e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218e70: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x218e70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x218e74: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x218e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218e78: 0x0  nop
    ctx->pc = 0x218e78u;
    // NOP
    // 0x218e7c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x218E7Cu;
    {
        const bool branch_taken_0x218e7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E7Cu;
        // 0x218e80: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e7c) {
            ctx->pc = 0x218E88u;
            goto label_218e88;
        }
    }
    ctx->pc = 0x218E84u;
    // 0x218e84: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x218e84u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_218e88:
    // 0x218e88: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x218e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x218e8c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x218e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218e90: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x218e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x218e94: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x218e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218e98: 0x0  nop
    ctx->pc = 0x218e98u;
    // NOP
    // 0x218e9c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x218E9Cu;
    {
        const bool branch_taken_0x218e9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E9Cu;
        // 0x218ea0: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e9c) {
            ctx->pc = 0x218EA8u;
            goto label_218ea8;
        }
    }
    ctx->pc = 0x218EA4u;
    // 0x218ea4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x218ea4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_218ea8:
    // 0x218ea8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x218ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218eac: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x218eacu;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x218eb0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x218eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218eb4: 0x0  nop
    ctx->pc = 0x218eb4u;
    // NOP
    // 0x218eb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x218EB8u;
    {
        const bool branch_taken_0x218eb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EB8u;
        // 0x218ebc: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218eb8) {
            ctx->pc = 0x218EC4u;
            goto label_218ec4;
        }
    }
    ctx->pc = 0x218EC0u;
    // 0x218ec0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x218ec0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_218ec4:
    // 0x218ec4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x218ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218ec8: 0x460028c6  mov.s       $f3, $f5
    ctx->pc = 0x218ec8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[5]);
    // 0x218ecc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x218eccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218ed0: 0x0  nop
    ctx->pc = 0x218ed0u;
    // NOP
    // 0x218ed4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x218ED4u;
    {
        const bool branch_taken_0x218ed4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ED4u;
        // 0x218ed8: 0xe7a20030  swc1        $f2, 0x30($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ed4) {
            ctx->pc = 0x218EE0u;
            goto label_218ee0;
        }
    }
    ctx->pc = 0x218EDCu;
    // 0x218edc: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x218edcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_218ee0:
    // 0x218ee0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x218ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218ee4: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x218ee4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
    // 0x218ee8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x218ee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218eec: 0x0  nop
    ctx->pc = 0x218eecu;
    // NOP
    // 0x218ef0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x218EF0u;
    {
        const bool branch_taken_0x218ef0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EF0u;
        // 0x218ef4: 0xe7a30034  swc1        $f3, 0x34($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ef0) {
            ctx->pc = 0x218EFCu;
            goto label_218efc;
        }
    }
    ctx->pc = 0x218EF8u;
    // 0x218ef8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x218ef8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_218efc:
    // 0x218efc: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x218efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x218f00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x218f00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x218f04: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x218f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x218f08: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x218F08u;
    {
        const bool branch_taken_0x218f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F08u;
        // 0x218f0c: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f08) {
            ctx->pc = 0x218E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218e28;
        }
    }
    ctx->pc = 0x218F10u;
label_218f10:
    // 0x218f10: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x218f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_218f14:
    // 0x218f14: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x218f14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x218f18: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x218f18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218f1c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x218f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x218f20: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x218f20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x218f24: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x218f24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218f28: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x218F28u;
    SET_GPR_U32(ctx, 31, 0x218F30u);
    ctx->pc = 0x218F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F28u;
    // 0x218f2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x218F28u, 0x218F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F30u;
label_218f30:
    // 0x218f30: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x218f30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f34: 0x1ac00031  blez        $s6, . + 4 + (0x31 << 2)
    ctx->pc = 0x218F34u;
    {
        const bool branch_taken_0x218f34 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x218F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F34u;
        // 0x218f38: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f34) {
            ctx->pc = 0x218FFCu;
            goto label_218ffc;
        }
    }
    ctx->pc = 0x218F3Cu;
    // 0x218f3c: 0x8fd20010  lw          $s2, 0x10($fp)
    ctx->pc = 0x218f3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x218f40: 0xc079e2e  jal         func_1E78B8
    ctx->pc = 0x218F40u;
    SET_GPR_U32(ctx, 31, 0x218F48u);
    ctx->pc = 0x218F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F40u;
    // 0x218f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E78B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E78B8u, 0x218F40u, 0x218F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F48u;
label_218f48:
    // 0x218f48: 0x1ac0002c  blez        $s6, . + 4 + (0x2C << 2)
    ctx->pc = 0x218F48u;
    {
        const bool branch_taken_0x218f48 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x218f48) {
            ctx->pc = 0x218FFCu;
            goto label_218ffc;
        }
    }
    ctx->pc = 0x218F50u;
    // 0x218f50: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x218f50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x218f54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f58: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x218f58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_218f60:
    // 0x218f60: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x218F60u;
    SET_GPR_U32(ctx, 31, 0x218F68u);
    ctx->pc = 0x218F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F60u;
    // 0x218f64: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x218F60u, 0x218F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F68u;
label_218f68:
    // 0x218f68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f6c: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x218F6Cu;
    SET_GPR_U32(ctx, 31, 0x218F74u);
    ctx->pc = 0x218F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F6Cu;
    // 0x218f70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x218F6Cu, 0x218F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F74u;
label_218f74:
    // 0x218f74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x218f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f78: 0xc0f7828  jal         func_3DE0A0
    ctx->pc = 0x218F78u;
    SET_GPR_U32(ctx, 31, 0x218F80u);
    ctx->pc = 0x218F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F78u;
    // 0x218f7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0A0u, 0x218F78u, 0x218F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F80u;
label_218f80:
    // 0x218f80: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x218f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x218f84: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x218f84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x218f88: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x218f88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x218f8c: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x218f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x218f90: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x218f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x218f94: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x218f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x218f98: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x218f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x218f9c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x218f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x218fa0: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x218fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x218fa4: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x218fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x218fa8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x218fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x218fac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x218facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x218fb0: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x218fb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x218fb4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x218fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x218fb8: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x218fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x218fbc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x218fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x218fc0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x218fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x218fc4: 0x2f08021  addu        $s0, $s7, $s0
    ctx->pc = 0x218fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x218fc8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x218fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x218fcc: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x218fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x218fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218fd4: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x218fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x218fd8: 0x26f70030  addiu       $s7, $s7, 0x30
    ctx->pc = 0x218fd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x218fdc: 0xc07a846  jal         func_1EA118
    ctx->pc = 0x218FDCu;
    SET_GPR_U32(ctx, 31, 0x218FE4u);
    ctx->pc = 0x218FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FDCu;
    // 0x218fe0: 0xae07000c  sw          $a3, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA118u, 0x218FDCu, 0x218FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FE4u;
label_218fe4:
    // 0x218fe4: 0xc0f7508  jal         func_3DD420
    ctx->pc = 0x218FE4u;
    SET_GPR_U32(ctx, 31, 0x218FECu);
    ctx->pc = 0x218FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FE4u;
    // 0x218fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD420u, 0x218FE4u, 0x218FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FECu;
label_218fec:
    // 0x218fec: 0xc07a880  jal         func_1EA200
    ctx->pc = 0x218FECu;
    SET_GPR_U32(ctx, 31, 0x218FF4u);
    ctx->pc = 0x218FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FECu;
    // 0x218ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA200u, 0x218FECu, 0x218FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FF4u;
label_218ff4:
    // 0x218ff4: 0x56a0ffda  bnel        $s5, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x218FF4u;
    {
        const bool branch_taken_0x218ff4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x218ff4) {
            ctx->pc = 0x218FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218FF4u;
            // 0x218ff8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218f60;
        }
    }
    ctx->pc = 0x218FFCu;
label_218ffc:
    // 0x218ffc: 0x16c00011  bnez        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x218FFCu;
    {
        const bool branch_taken_0x218ffc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x219000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FFCu;
        // 0x219000: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ffc) {
            ctx->pc = 0x219044u;
            goto label_219044;
        }
    }
    ctx->pc = 0x219004u;
    // 0x219004: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x219004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x219008: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x219008u;
    {
        const bool branch_taken_0x219008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219008) {
            ctx->pc = 0x21900Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219008u;
            // 0x21900c: 0x8fa40160  lw          $a0, 0x160($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219048u;
            goto label_219048;
        }
    }
    ctx->pc = 0x219010u;
    // 0x219010: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x219010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x219014: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x219014u;
    {
        const bool branch_taken_0x219014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x219014) {
            ctx->pc = 0x219018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219014u;
            // 0x219018: 0x8fa40160  lw          $a0, 0x160($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219048u;
            goto label_219048;
        }
    }
    ctx->pc = 0x21901Cu;
    // 0x21901c: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x21901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x219020: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x219020u;
    {
        const bool branch_taken_0x219020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219020) {
            ctx->pc = 0x219024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219020u;
            // 0x219024: 0x8fa40160  lw          $a0, 0x160($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219048u;
            goto label_219048;
        }
    }
    ctx->pc = 0x219028u;
    // 0x219028: 0x13c0006e  beqz        $fp, . + 4 + (0x6E << 2)
    ctx->pc = 0x219028u;
    {
        const bool branch_taken_0x219028 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x21902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219028u;
        // 0x21902c: 0xdfb00170  ld          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219028) {
            ctx->pc = 0x2191E4u;
            goto label_2191e4;
        }
    }
    ctx->pc = 0x219030u;
    // 0x219030: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x219030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219034: 0xc07624c  jal         func_1D8930
    ctx->pc = 0x219034u;
    SET_GPR_U32(ctx, 31, 0x21903Cu);
    ctx->pc = 0x219038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219034u;
    // 0x219038: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8930u, 0x219034u, 0x21903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21903Cu;
label_21903c:
    // 0x21903c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x21903Cu;
    {
        const bool branch_taken_0x21903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21903Cu;
        // 0x219040: 0xdfb00170  ld          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21903c) {
            ctx->pc = 0x2191E4u;
            goto label_2191e4;
        }
    }
    ctx->pc = 0x219044u;
label_219044:
    // 0x219044: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x219044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_219048:
    // 0x219048: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x219048u;
    SET_GPR_U32(ctx, 31, 0x219050u);
    ctx->pc = 0x21904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219048u;
    // 0x21904c: 0x24a51680  addiu       $a1, $a1, 0x1680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x219048u, 0x219050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219050u;
label_219050:
    // 0x219050: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x219050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x219054: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x219054u;
    {
        const bool branch_taken_0x219054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219054u;
        // 0x219058: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219054) {
            ctx->pc = 0x2190BCu;
            goto label_2190bc;
        }
    }
    ctx->pc = 0x21905Cu;
    // 0x21905c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x21905cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x219060: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x219060u;
    SET_GPR_U32(ctx, 31, 0x219068u);
    ctx->pc = 0x219064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219060u;
    // 0x219064: 0x24a51688  addiu       $a1, $a1, 0x1688 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x219060u, 0x219068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219068u;
label_219068:
    // 0x219068: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x219068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21906c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21906Cu;
    {
        const bool branch_taken_0x21906c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21906Cu;
        // 0x219070: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21906c) {
            ctx->pc = 0x2190BCu;
            goto label_2190bc;
        }
    }
    ctx->pc = 0x219074u;
    // 0x219074: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x219074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x219078: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x219078u;
    SET_GPR_U32(ctx, 31, 0x219080u);
    ctx->pc = 0x21907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219078u;
    // 0x21907c: 0x24a51690  addiu       $a1, $a1, 0x1690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x219078u, 0x219080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219080u;
label_219080:
    // 0x219080: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x219080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x219084: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x219084u;
    {
        const bool branch_taken_0x219084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219084u;
        // 0x219088: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219084) {
            ctx->pc = 0x2190BCu;
            goto label_2190bc;
        }
    }
    ctx->pc = 0x21908Cu;
    // 0x21908c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x21908cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x219090: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x219090u;
    SET_GPR_U32(ctx, 31, 0x219098u);
    ctx->pc = 0x219094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219090u;
    // 0x219094: 0x24651670  addiu       $a1, $v1, 0x1670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x219090u, 0x219098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219098u;
label_219098:
    // 0x219098: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x219098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21909c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21909Cu;
    {
        const bool branch_taken_0x21909c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2190A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21909Cu;
        // 0x2190a0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21909c) {
            ctx->pc = 0x2190BCu;
            goto label_2190bc;
        }
    }
    ctx->pc = 0x2190A4u;
    // 0x2190a4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2190a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2190a8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2190A8u;
    SET_GPR_U32(ctx, 31, 0x2190B0u);
    ctx->pc = 0x2190ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190A8u;
    // 0x2190ac: 0x24a51698  addiu       $a1, $a1, 0x1698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2190A8u, 0x2190B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190B0u;
label_2190b0:
    // 0x2190b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2190b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2190b4: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2190B4u;
    {
        const bool branch_taken_0x2190b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2190b4) {
            ctx->pc = 0x2190B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2190B4u;
            // 0x2190b8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2191D4u;
            goto label_2191d4;
        }
    }
    ctx->pc = 0x2190BCu;
label_2190bc:
    // 0x2190bc: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x2190bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x2190c0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2190c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2190c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2190c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2190c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2190c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190cc: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2190ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2190d0: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2190d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2190d4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2190d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2190d8: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x2190d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2190dc: 0xc079848  jal         func_1E6120
    ctx->pc = 0x2190DCu;
    SET_GPR_U32(ctx, 31, 0x2190E4u);
    ctx->pc = 0x2190E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190DCu;
    // 0x2190e0: 0x8fc4000c  lw          $a0, 0xC($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x2190DCu, 0x2190E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190E4u;
label_2190e4:
    // 0x2190e4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2190e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2190e8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2190e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2190ec: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2190ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2190f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2190f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2190f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2190f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2190f8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2190f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2190fc: 0xc07a932  jal         func_1EA4C8
    ctx->pc = 0x2190FCu;
    SET_GPR_U32(ctx, 31, 0x219104u);
    ctx->pc = 0x219100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190FCu;
    // 0x219100: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA4C8u, 0x2190FCu, 0x219104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219104u;
label_219104:
    // 0x219104: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x219104u;
    SET_GPR_U32(ctx, 31, 0x21910Cu);
    ctx->pc = 0x219108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219104u;
    // 0x219108: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x219104u, 0x21910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21910Cu;
label_21910c:
    // 0x21910c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21910cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219110: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x219110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219118: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x219118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21911c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x21911cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x219120: 0xc07aaac  jal         func_1EAAB0
    ctx->pc = 0x219120u;
    SET_GPR_U32(ctx, 31, 0x219128u);
    ctx->pc = 0x219124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219120u;
    // 0x219124: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAB0u, 0x219120u, 0x219128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219128u;
label_219128:
    // 0x219128: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x219128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21912c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x21912cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x219130: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x219130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x219134: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x219134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219138: 0xa3a200f0  sb          $v0, 0xF0($sp)
    ctx->pc = 0x219138u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 2));
    // 0x21913c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x21913cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x219140: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x219140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x219144: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x219144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x219148: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x219148u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21914c: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x21914cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219150: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x219150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x219154: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x219154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x219158: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x219158u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21915c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x21915cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x219160: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x219160u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219164: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x219164u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x219168: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x219168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21916c: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x21916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x219170: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x219170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x219174: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x219174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x219178: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x219178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x21917c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x21917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219180: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x219180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x219184: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x219184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219188: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x219188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x21918c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x21918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219190: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x219190u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x219194: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x219194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x219198: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x219198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x21919c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x21919cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2191a0: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x2191a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x2191a4: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x2191a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2191a8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2191a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2191ac: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2191acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2191b0: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x2191b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2191b4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2191b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2191b8: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2191b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2191bc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2191bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2191c0: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x2191c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2191c4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2191c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2191c8: 0xf8810090  sqc2        $vf1, 0x90($a0)
    ctx->pc = 0x2191c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2191cc: 0xafd00018  sw          $s0, 0x18($fp)
    ctx->pc = 0x2191ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 16));
    // 0x2191d0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2191d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_2191d4:
    // 0x2191d4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2191d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191d8: 0xc0f7804  jal         func_3DE010
    ctx->pc = 0x2191D8u;
    SET_GPR_U32(ctx, 31, 0x2191E0u);
    ctx->pc = 0x2191DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191D8u;
    // 0x2191dc: 0x248434f0  addiu       $a0, $a0, 0x34F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE010u, 0x2191D8u, 0x2191E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191E0u;
label_2191e0:
    // 0x2191e0: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x2191e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_2191e4:
    // 0x2191e4: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x2191e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2191e8: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x2191e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2191ec: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x2191ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2191f0: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x2191f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2191f4: 0xdfb50198  ld          $s5, 0x198($sp)
    ctx->pc = 0x2191f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2191f8: 0xdfb601a0  ld          $s6, 0x1A0($sp)
    ctx->pc = 0x2191f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2191fc: 0xdfb701a8  ld          $s7, 0x1A8($sp)
    ctx->pc = 0x2191fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x219200: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x219200u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x219204: 0xdfbf01b8  ld          $ra, 0x1B8($sp)
    ctx->pc = 0x219204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x219208: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x219208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21920c: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x21920cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x219210: 0x3e00008  jr          $ra
    ctx->pc = 0x219210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219210u;
        // 0x219214: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219218u;
}
