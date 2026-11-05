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

// Function: sub_002555B8
// Address: 0x2555b8 - 0x255a38
void sub_002555B8_0x2555b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002555B8_0x2555b8");
#endif

    switch (ctx->pc) {
        case 0x25562cu: goto label_25562c;
        case 0x255644u: goto label_255644;
        case 0x2556c0u: goto label_2556c0;
        case 0x2556f0u: goto label_2556f0;
        case 0x255700u: goto label_255700;
        case 0x255718u: goto label_255718;
        case 0x255720u: goto label_255720;
        case 0x255764u: goto label_255764;
        case 0x255784u: goto label_255784;
        case 0x255790u: goto label_255790;
        case 0x255798u: goto label_255798;
        case 0x2557c8u: goto label_2557c8;
        case 0x2557d8u: goto label_2557d8;
        case 0x2557e0u: goto label_2557e0;
        case 0x2557ecu: goto label_2557ec;
        case 0x2557f8u: goto label_2557f8;
        case 0x255814u: goto label_255814;
        case 0x255894u: goto label_255894;
        case 0x2558d0u: goto label_2558d0;
        case 0x2558d8u: goto label_2558d8;
        case 0x255910u: goto label_255910;
        case 0x255918u: goto label_255918;
        case 0x25595cu: goto label_25595c;
        case 0x2559acu: goto label_2559ac;
        case 0x2559b8u: goto label_2559b8;
        case 0x2559d0u: goto label_2559d0;
        case 0x2559d8u: goto label_2559d8;
        default: break;
    }

    ctx->pc = 0x2555b8u;

    // 0x2555b8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2555b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2555bc: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x2555bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x2555c0: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x2555c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x2555c4: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x2555c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x2555c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2555c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2555cc: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x2555ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x2555d0: 0x24573d20  addiu       $s7, $v0, 0x3D20
    ctx->pc = 0x2555d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x2555d4: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x2555d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x2555d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2555d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2555dc: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x2555dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x2555e0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2555e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2555e4: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x2555e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x2555e8: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x2555e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x2555ec: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x2555ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x2555f0: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x2555f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x2555f4: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x2555f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x2555f8: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x2555f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2555fc: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x2555fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x255600: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x255600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255604: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x255604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255608: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x255608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25560c: 0xafa60104  sw          $a2, 0x104($sp)
    ctx->pc = 0x25560cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
    // 0x255610: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x255610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255614: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x255614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x255618: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x255618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25561c: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x25561cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x255620: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x255620u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x255624: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x255624u;
    SET_GPR_U32(ctx, 31, 0x25562Cu);
    ctx->pc = 0x255628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255624u;
    // 0x255628: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x255624u, 0x25562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25562Cu;
label_25562c:
    // 0x25562c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x25562cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x255630: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x255630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x255634: 0x7fa00020  sq          $zero, 0x20($sp)
    ctx->pc = 0x255634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 0));
    // 0x255638: 0x7fa00050  sq          $zero, 0x50($sp)
    ctx->pc = 0x255638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 0));
    // 0x25563c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25563Cu;
    SET_GPR_U32(ctx, 31, 0x255644u);
    ctx->pc = 0x255640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25563Cu;
    // 0x255640: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25563Cu, 0x255644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255644u;
label_255644:
    // 0x255644: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x255644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x255648: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x255648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x25564c: 0x7fa00070  sq          $zero, 0x70($sp)
    ctx->pc = 0x25564cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 0));
    // 0x255650: 0x7fa000a0  sq          $zero, 0xA0($sp)
    ctx->pc = 0x255650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 0));
    // 0x255654: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x255654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x255658: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x255658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x25565c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25565cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255660: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x255660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x255664: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x255664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x255668: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x255668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x25566c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25566cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255670: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x255670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x255674: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x255674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x255678: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x255678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25567c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x25567cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x255680: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x255680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x255684: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x255684u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x255688: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x255688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x25568c: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x25568cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x255690: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x255690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x255694: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x255694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x255698: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x255698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x25569c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x25569cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x2556a0: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2556A0u;
    {
        const bool branch_taken_0x2556a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2556A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556A0u;
        // 0x2556a4: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556a0) {
            ctx->pc = 0x25588Cu;
            goto label_25588c;
        }
    }
    ctx->pc = 0x2556A8u;
    // 0x2556a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2556a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2556ac: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x2556acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBE30u));
    // 0x2556b0: 0x14600077  bnez        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2556B0u;
    {
        const bool branch_taken_0x2556b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2556B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556B0u;
        // 0x2556b4: 0x8fa200b4  lw          $v0, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556b0) {
            ctx->pc = 0x255890u;
            goto label_255890;
        }
    }
    ctx->pc = 0x2556B8u;
    // 0x2556b8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2556B8u;
    {
        const bool branch_taken_0x2556b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2556b8) {
            ctx->pc = 0x255868u;
            goto label_255868;
        }
    }
    ctx->pc = 0x2556C0u;
label_2556c0:
    // 0x2556c0: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x2556c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2556c4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2556c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2556c8: 0x8ee50004  lw          $a1, 0x4($s7)
    ctx->pc = 0x2556c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2556cc: 0x24550f90  addiu       $s5, $v0, 0xF90
    ctx->pc = 0x2556ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x2556d0: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x2556d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x2556d4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2556d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2556d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2556d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2556dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2556dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2556e0: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x2556e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2556e4: 0xaee5000c  sw          $a1, 0xC($s7)
    ctx->pc = 0x2556e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 5));
    // 0x2556e8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2556E8u;
    {
        const bool branch_taken_0x2556e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2556ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556E8u;
        // 0x2556ec: 0x27b600f0  addiu       $s6, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556e8) {
            ctx->pc = 0x25583Cu;
            goto label_25583c;
        }
    }
    ctx->pc = 0x2556F0u;
label_2556f0:
    // 0x2556f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2556f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2556f4: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x2556f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x2556f8: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x2556F8u;
    SET_GPR_U32(ctx, 31, 0x255700u);
    ctx->pc = 0x2556FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2556F8u;
    // 0x2556fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x2556F8u, 0x255700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255700u;
label_255700:
    // 0x255700: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x255700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x255704: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x255704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x255708: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x255708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25570c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25570cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255710: 0xc08d78e  jal         func_235E38
    ctx->pc = 0x255710u;
    SET_GPR_U32(ctx, 31, 0x255718u);
    ctx->pc = 0x255714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255710u;
    // 0x255714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235E38u, 0x255710u, 0x255718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255718u;
label_255718:
    // 0x255718: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x255718u;
    SET_GPR_U32(ctx, 31, 0x255720u);
    ctx->pc = 0x25571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255718u;
    // 0x25571c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x255718u, 0x255720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255720u;
label_255720:
    // 0x255720: 0xafb500d8  sw          $s5, 0xD8($sp)
    ctx->pc = 0x255720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 21));
    // 0x255724: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255728: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x255728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x25572c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25572cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255730: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x255730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x255734: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x255734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x255738: 0x24421408  addiu       $v0, $v0, 0x1408
    ctx->pc = 0x255738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5128));
    // 0x25573c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x25573cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x255740: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x255740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x255744: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x255744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255748: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x255748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x25574c: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x25574cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x255750: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x255750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x255754: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x255754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x255758: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x255758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x25575c: 0xc06fc1a  jal         func_1BF068
    ctx->pc = 0x25575Cu;
    SET_GPR_U32(ctx, 31, 0x255764u);
    ctx->pc = 0x255760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25575Cu;
    // 0x255760: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF068u, 0x25575Cu, 0x255764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255764u;
label_255764:
    // 0x255764: 0x8e500fe8  lw          $s0, 0xFE8($s2)
    ctx->pc = 0x255764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4072)));
    // 0x255768: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x255768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x25576c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255770: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x255770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x255774: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x255774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x255778: 0xe6d40008  swc1        $f20, 0x8($s6)
    ctx->pc = 0x255778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x25577c: 0xc06f894  jal         func_1BE250
    ctx->pc = 0x25577Cu;
    SET_GPR_U32(ctx, 31, 0x255784u);
    ctx->pc = 0x255780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25577Cu;
    // 0x255780: 0xafa000fc  sw          $zero, 0xFC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE250u, 0x25577Cu, 0x255784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255784u;
label_255784:
    // 0x255784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255788: 0xc0701da  jal         func_1C0768
    ctx->pc = 0x255788u;
    SET_GPR_U32(ctx, 31, 0x255790u);
    ctx->pc = 0x25578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255788u;
    // 0x25578c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0768u, 0x255788u, 0x255790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255790u;
label_255790:
    // 0x255790: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x255790u;
    {
        const bool branch_taken_0x255790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255790u;
        // 0x255794: 0xafb500d8  sw          $s5, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255790) {
            ctx->pc = 0x255824u;
            goto label_255824;
        }
    }
    ctx->pc = 0x255798u;
label_255798:
    // 0x255798: 0x50920029  beql        $a0, $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x255798u;
    {
        const bool branch_taken_0x255798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x255798) {
            ctx->pc = 0x25579Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255798u;
            // 0x25579c: 0x8ee2000c  lw          $v0, 0xC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255840u;
            goto label_255840;
        }
    }
    ctx->pc = 0x2557A0u;
    // 0x2557a0: 0x8c821060  lw          $v0, 0x1060($a0)
    ctx->pc = 0x2557a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
    // 0x2557a4: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x2557a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x2557a8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2557A8u;
    {
        const bool branch_taken_0x2557a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2557ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557A8u;
        // 0x2557ac: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557a8) {
            ctx->pc = 0x25583Cu;
            goto label_25583c;
        }
    }
    ctx->pc = 0x2557B0u;
    // 0x2557b0: 0x8c860104  lw          $a2, 0x104($a0)
    ctx->pc = 0x2557b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2557b4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2557b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2557b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2557b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2557bc: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x2557bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2557c0: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x2557C0u;
    SET_GPR_U32(ctx, 31, 0x2557C8u);
    ctx->pc = 0x2557C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557C0u;
    // 0x2557c4: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x2557C0u, 0x2557C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557C8u;
label_2557c8:
    // 0x2557c8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2557C8u;
    {
        const bool branch_taken_0x2557c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2557CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557C8u;
        // 0x2557cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557c8) {
            ctx->pc = 0x25583Cu;
            goto label_25583c;
        }
    }
    ctx->pc = 0x2557D0u;
    // 0x2557d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2557D0u;
    {
        const bool branch_taken_0x2557d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2557D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557D0u;
        // 0x2557d4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557d0) {
            ctx->pc = 0x25580Cu;
            goto label_25580c;
        }
    }
    ctx->pc = 0x2557D8u;
label_2557d8:
    // 0x2557d8: 0xc095368  jal         func_254DA0
    ctx->pc = 0x2557D8u;
    SET_GPR_U32(ctx, 31, 0x2557E0u);
    ctx->pc = 0x2557DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557D8u;
    // 0x2557dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x2557D8u, 0x2557E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557E0u;
label_2557e0:
    // 0x2557e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2557e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557e4: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x2557E4u;
    SET_GPR_U32(ctx, 31, 0x2557ECu);
    ctx->pc = 0x2557E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557E4u;
    // 0x2557e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x2557E4u, 0x2557ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557ECu;
label_2557ec:
    // 0x2557ec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2557ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2557f0: 0xc040ac8  jal         func_102B20
    ctx->pc = 0x2557F0u;
    SET_GPR_U32(ctx, 31, 0x2557F8u);
    ctx->pc = 0x2557F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557F0u;
    // 0x2557f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102B20u, 0x2557F0u, 0x2557F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557F8u;
label_2557f8:
    // 0x2557f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2557F8u;
    {
        const bool branch_taken_0x2557f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2557FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557F8u;
        // 0x2557fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557f8) {
            ctx->pc = 0x25580Cu;
            goto label_25580c;
        }
    }
    ctx->pc = 0x255800u;
    // 0x255800: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x255800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x255804: 0x1040ffba  beqz        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x255804u;
    {
        const bool branch_taken_0x255804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255804u;
        // 0x255808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255804) {
            ctx->pc = 0x2556F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2556f0;
        }
    }
    ctx->pc = 0x25580Cu;
label_25580c:
    // 0x25580c: 0xc095368  jal         func_254DA0
    ctx->pc = 0x25580Cu;
    SET_GPR_U32(ctx, 31, 0x255814u);
    ctx->pc = 0x255810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25580Cu;
    // 0x255810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x25580Cu, 0x255814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255814u;
label_255814:
    // 0x255814: 0x90430022  lbu         $v1, 0x22($v0)
    ctx->pc = 0x255814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x255818: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x255818u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25581c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x25581Cu;
    {
        const bool branch_taken_0x25581c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25581c) {
            ctx->pc = 0x2557D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2557d8;
        }
    }
    ctx->pc = 0x255824u;
label_255824:
    // 0x255824: 0xde421020  ld          $v0, 0x1020($s2)
    ctx->pc = 0x255824u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 4128)));
    // 0x255828: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x255828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x25582c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x25582cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x255830: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255834: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x255834u;
    {
        const bool branch_taken_0x255834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255834u;
        // 0x255838: 0xfe421020  sd          $v0, 0x1020($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255834) {
            ctx->pc = 0x255868u;
            goto label_255868;
        }
    }
    ctx->pc = 0x25583Cu;
label_25583c:
    // 0x25583c: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x25583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_255840:
    // 0x255840: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x255840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255844: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x255844u;
    {
        const bool branch_taken_0x255844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255844u;
        // 0x255848: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255844) {
            ctx->pc = 0x255850u;
            goto label_255850;
        }
    }
    ctx->pc = 0x25584Cu;
    // 0x25584c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25584cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255850:
    // 0x255850: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x255850u;
    {
        const bool branch_taken_0x255850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x255850) {
            ctx->pc = 0x255860u;
            goto label_255860;
        }
    }
    ctx->pc = 0x255858u;
    // 0x255858: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x255858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25585c: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x25585cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
label_255860:
    // 0x255860: 0x1480ffcd  bnez        $a0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x255860u;
    {
        const bool branch_taken_0x255860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x255860) {
            ctx->pc = 0x255798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255798;
        }
    }
    ctx->pc = 0x255868u;
label_255868:
    // 0x255868: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x255868u;
    {
        const bool branch_taken_0x255868 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x25586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255868u;
        // 0x25586c: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255868) {
            ctx->pc = 0x25588Cu;
            goto label_25588c;
        }
    }
    ctx->pc = 0x255870u;
    // 0x255870: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x255870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x255874: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x255874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x255878: 0x1440ff91  bnez        $v0, . + 4 + (-0x6F << 2)
    ctx->pc = 0x255878u;
    {
        const bool branch_taken_0x255878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255878u;
        // 0x25587c: 0xafa30108  sw          $v1, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255878) {
            ctx->pc = 0x2556C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2556c0;
        }
    }
    ctx->pc = 0x255880u;
    // 0x255880: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x255880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x255884: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x255884u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255888: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x255888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_25588c:
    // 0x25588c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x25588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_255890:
    // 0x255890: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x255890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_255894:
    // 0x255894: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x255894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x255898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x255898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25589c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25589Cu;
    {
        const bool branch_taken_0x25589c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25589Cu;
        // 0x2558a0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25589c) {
            ctx->pc = 0x2558A8u;
            goto label_2558a8;
        }
    }
    ctx->pc = 0x2558A4u;
    // 0x2558a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2558a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2558a8:
    // 0x2558a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2558A8u;
    {
        const bool branch_taken_0x2558a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2558a8) {
            ctx->pc = 0x2558B8u;
            goto label_2558b8;
        }
    }
    ctx->pc = 0x2558B0u;
    // 0x2558b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2558b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2558b4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2558b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_2558b8:
    // 0x2558b8: 0x5480fff6  bnel        $a0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2558B8u;
    {
        const bool branch_taken_0x2558b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2558b8) {
            ctx->pc = 0x2558BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2558B8u;
            // 0x2558bc: 0xa0800021  sb          $zero, 0x21($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255894;
        }
    }
    ctx->pc = 0x2558C0u;
    // 0x2558c0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2558c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2558c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2558C4u;
    {
        const bool branch_taken_0x2558c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558C4u;
        // 0x2558c8: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558c4) {
            ctx->pc = 0x2558E8u;
            goto label_2558e8;
        }
    }
    ctx->pc = 0x2558CCu;
    // 0x2558cc: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x2558ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2558d0:
    // 0x2558d0: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x2558D0u;
    SET_GPR_U32(ctx, 31, 0x2558D8u);
    ctx->pc = 0x2558D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2558D0u;
    // 0x2558d4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x2558D0u, 0x2558D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2558D8u;
label_2558d8:
    // 0x2558d8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2558d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2558dc: 0x0  nop
    ctx->pc = 0x2558dcu;
    // NOP
    // 0x2558e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2558E0u;
    {
        const bool branch_taken_0x2558e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2558E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558E0u;
        // 0x2558e4: 0x8fa500b4  lw          $a1, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558e0) {
            ctx->pc = 0x2558D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2558d0;
        }
    }
    ctx->pc = 0x2558E8u;
label_2558e8:
    // 0x2558e8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2558e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2558ec: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x2558ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2558f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2558f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558f4: 0x24710f90  addiu       $s1, $v1, 0xF90
    ctx->pc = 0x2558f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x2558f8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2558f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2558fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2558fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255900: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x255900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x255904: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x255904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x255908: 0xc08d78e  jal         func_235E38
    ctx->pc = 0x255908u;
    SET_GPR_U32(ctx, 31, 0x255910u);
    ctx->pc = 0x25590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255908u;
    // 0x25590c: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235E38u, 0x255908u, 0x255910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255910u;
label_255910:
    // 0x255910: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x255910u;
    SET_GPR_U32(ctx, 31, 0x255918u);
    ctx->pc = 0x255914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255910u;
    // 0x255914: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x255910u, 0x255918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255918u;
label_255918:
    // 0x255918: 0xafb100d8  sw          $s1, 0xD8($sp)
    ctx->pc = 0x255918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 17));
    // 0x25591c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x25591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255920: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x255920u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x255924: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x255924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255928: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x255928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x25592c: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x25592cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x255930: 0x24431408  addiu       $v1, $v0, 0x1408
    ctx->pc = 0x255930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5128));
    // 0x255934: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x255934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255938: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x255938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x25593c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x25593cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x255940: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x255940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x255944: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x255944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x255948: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x255948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x25594c: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x25594cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x255950: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x255950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x255954: 0xc06fc1a  jal         func_1BF068
    ctx->pc = 0x255954u;
    SET_GPR_U32(ctx, 31, 0x25595Cu);
    ctx->pc = 0x255958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255954u;
    // 0x255958: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF068u, 0x255954u, 0x25595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25595Cu;
label_25595c:
    // 0x25595c: 0xde431020  ld          $v1, 0x1020($s2)
    ctx->pc = 0x25595cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 4128)));
    // 0x255960: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x255960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x255964: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x255964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x255968: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x255968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25596c: 0xfe431020  sd          $v1, 0x1020($s2)
    ctx->pc = 0x25596cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4128), GPR_U64(ctx, 3));
    // 0x255970: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x255970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x255974: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x255974u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x255978: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x255978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x25597c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25597Cu;
    {
        const bool branch_taken_0x25597c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25597Cu;
        // 0x255980: 0x8fa200b4  lw          $v0, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25597c) {
            ctx->pc = 0x2559BCu;
            goto label_2559bc;
        }
    }
    ctx->pc = 0x255984u;
    // 0x255984: 0x8e500fe8  lw          $s0, 0xFE8($s2)
    ctx->pc = 0x255984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4072)));
    // 0x255988: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25598c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25598cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255990: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x255990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x255994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255998: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x255998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x25599c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x25599cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2559a0: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x2559a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x2559a4: 0xc06f894  jal         func_1BE250
    ctx->pc = 0x2559A4u;
    SET_GPR_U32(ctx, 31, 0x2559ACu);
    ctx->pc = 0x2559A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559A4u;
    // 0x2559a8: 0xafa000fc  sw          $zero, 0xFC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE250u, 0x2559A4u, 0x2559ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559ACu;
label_2559ac:
    // 0x2559ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2559acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559b0: 0xc0701da  jal         func_1C0768
    ctx->pc = 0x2559B0u;
    SET_GPR_U32(ctx, 31, 0x2559B8u);
    ctx->pc = 0x2559B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559B0u;
    // 0x2559b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0768u, 0x2559B0u, 0x2559B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559B8u;
label_2559b8:
    // 0x2559b8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2559b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2559bc:
    // 0x2559bc: 0xafb100d8  sw          $s1, 0xD8($sp)
    ctx->pc = 0x2559bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 17));
    // 0x2559c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2559C0u;
    {
        const bool branch_taken_0x2559c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2559C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559C0u;
        // 0x2559c4: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559c0) {
            ctx->pc = 0x2559E8u;
            goto label_2559e8;
        }
    }
    ctx->pc = 0x2559C8u;
    // 0x2559c8: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x2559c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2559cc: 0x0  nop
    ctx->pc = 0x2559ccu;
    // NOP
label_2559d0:
    // 0x2559d0: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x2559D0u;
    SET_GPR_U32(ctx, 31, 0x2559D8u);
    ctx->pc = 0x2559D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559D0u;
    // 0x2559d4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x2559D0u, 0x2559D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559D8u;
label_2559d8:
    // 0x2559d8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2559d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2559dc: 0x0  nop
    ctx->pc = 0x2559dcu;
    // NOP
    // 0x2559e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2559E0u;
    {
        const bool branch_taken_0x2559e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2559E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559E0u;
        // 0x2559e4: 0x8fa500b4  lw          $a1, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559e0) {
            ctx->pc = 0x2559D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2559d0;
        }
    }
    ctx->pc = 0x2559E8u;
label_2559e8:
    // 0x2559e8: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x2559e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2559ec: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x2559ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2559f0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x2559f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2559f4: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x2559f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2559f8: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x2559f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2559fc: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x2559fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x255a00: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x255a00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x255a04: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x255a04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x255a08: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x255a08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x255a0c: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x255a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x255a10: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x255a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x255a14: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x255a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x255a18: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x255a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x255a1c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x255a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x255a20: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x255a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x255a24: 0x3e00008  jr          $ra
    ctx->pc = 0x255A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A24u;
        // 0x255a28: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255A2Cu;
    // 0x255a2c: 0x0  nop
    ctx->pc = 0x255a2cu;
    // NOP
    // 0x255a30: 0x27bd01f0  addiu       $sp, $sp, 0x1F0
    ctx->pc = 0x255a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x255a34: 0x0  nop
    ctx->pc = 0x255a34u;
    // NOP
    ctx->pc = 0x255a38u;
}
