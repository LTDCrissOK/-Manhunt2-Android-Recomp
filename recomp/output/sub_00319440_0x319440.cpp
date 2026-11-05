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

// Function: sub_00319440
// Address: 0x319440 - 0x319a08
void sub_00319440_0x319440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319440_0x319440");
#endif

    switch (ctx->pc) {
        case 0x3194bcu: goto label_3194bc;
        case 0x3195b8u: goto label_3195b8;
        case 0x319620u: goto label_319620;
        case 0x319688u: goto label_319688;
        case 0x3196f0u: goto label_3196f0;
        case 0x319864u: goto label_319864;
        case 0x31986cu: goto label_31986c;
        case 0x319874u: goto label_319874;
        case 0x319884u: goto label_319884;
        case 0x3198ccu: goto label_3198cc;
        case 0x3198ecu: goto label_3198ec;
        case 0x3199c8u: goto label_3199c8;
        default: break;
    }

    ctx->pc = 0x319440u;

    // 0x319440: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x319440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x319444: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x319444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x319448: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x319448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x31944c: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x31944cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x319450: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x319450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x319454: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x319454u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x319458: 0x26022450  addiu       $v0, $s0, 0x2450
    ctx->pc = 0x319458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9296));
    // 0x31945c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x31945cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x319460: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x319460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x319464: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x319464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x319468: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x319468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x31946c: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x31946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x319470: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x319470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x319474: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x319474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x319478: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x319478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x31947c: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x31947cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x319480: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x319480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x319484: 0x8c64bd48  lw          $a0, -0x42B8($v1)
    ctx->pc = 0x319484u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x319488: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x319488u;
    { uint32_t bits = FAST_READ32(0x4C2454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31948c: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x31948cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x319490: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x319490u;
    { uint32_t bits = FAST_READ32(0x4C245Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319494: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x319494u;
    { uint32_t bits = FAST_READ32(0x4C2458u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319498: 0x24710040  addiu       $s1, $v1, 0x40
    ctx->pc = 0x319498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x31949c: 0xc6022450  lwc1        $f2, 0x2450($s0)
    ctx->pc = 0x31949cu;
    { uint32_t bits = FAST_READ32(0x4C2450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3194a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3194a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3194a4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3194a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3194a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3194a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3194ac: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3194acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3194b0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3194b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3194b4: 0xc0b14ae  jal         func_2C52B8
    ctx->pc = 0x3194B4u;
    SET_GPR_U32(ctx, 31, 0x3194BCu);
    ctx->pc = 0x3194B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3194B4u;
    // 0x3194b8: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x3194B4u, 0x3194BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3194BCu;
label_3194bc:
    // 0x3194bc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3194bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3194c0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3194c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3194c4: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x3194c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3194c8: 0x0  nop
    ctx->pc = 0x3194c8u;
    // NOP
    // 0x3194cc: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3194CCu;
    {
        const bool branch_taken_0x3194cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3194D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194CCu;
        // 0x3194d0: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194cc) {
            ctx->pc = 0x319540u;
            goto label_319540;
        }
    }
    ctx->pc = 0x3194D4u;
    // 0x3194d4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3194d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3194d8: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x3194d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3194dc: 0x0  nop
    ctx->pc = 0x3194dcu;
    // NOP
    // 0x3194e0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3194E0u;
    {
        const bool branch_taken_0x3194e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3194E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194E0u;
        // 0x3194e4: 0x8ce2aa88  lw          $v0, -0x5578($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194e0) {
            ctx->pc = 0x319540u;
            goto label_319540;
        }
    }
    ctx->pc = 0x3194E8u;
    // 0x3194e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3194E8u;
    {
        const bool branch_taken_0x3194e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3194ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194E8u;
        // 0x3194ec: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194e8) {
            ctx->pc = 0x3194FCu;
            goto label_3194fc;
        }
    }
    ctx->pc = 0x3194F0u;
    // 0x3194f0: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x3194f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3194f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3194F4u;
    {
        const bool branch_taken_0x3194f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3194F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194F4u;
        // 0x3194f8: 0xe7b60034  swc1        $f22, 0x34($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194f4) {
            ctx->pc = 0x319510u;
            goto label_319510;
        }
    }
    ctx->pc = 0x3194FCu;
label_3194fc:
    // 0x3194fc: 0x24432470  addiu       $v1, $v0, 0x2470
    ctx->pc = 0x3194fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x319500: 0xc4402470  lwc1        $f0, 0x2470($v0)
    ctx->pc = 0x319500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319504: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x319504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319508: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x319508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31950c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x31950cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_319510:
    // 0x319510: 0x3c013bc4  lui         $at, 0x3BC4
    ctx->pc = 0x319510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15300 << 16));
    // 0x319514: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x319514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x319518: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x319518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31951c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x31951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319520: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x319520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319524: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x319524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x319528: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x319528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x31952c: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x31952cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x319530: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x319530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x319534: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x319534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x319538: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x319538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31953c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x31953cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_319540:
    // 0x319540: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x319540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319544: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x319544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x319548: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x319548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31954c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x31954cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x319550: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x319550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x319554: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x319554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x319558: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x319558u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31955c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x31955cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x319560: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x319560u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x319564: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x319564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x319568: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x319568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x31956c: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x31956cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x319570: 0x27b600d0  addiu       $s6, $sp, 0xD0
    ctx->pc = 0x319570u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x319574: 0x4500006d  bc1f        . + 4 + (0x6D << 2)
    ctx->pc = 0x319574u;
    {
        const bool branch_taken_0x319574 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319574u;
        // 0x319578: 0x27be00b0  addiu       $fp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319574) {
            ctx->pc = 0x31972Cu;
            goto label_31972c;
        }
    }
    ctx->pc = 0x31957Cu;
    // 0x31957c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x31957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319580: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x319580u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319584: 0x0  nop
    ctx->pc = 0x319584u;
    // NOP
    // 0x319588: 0x45000068  bc1f        . + 4 + (0x68 << 2)
    ctx->pc = 0x319588u;
    {
        const bool branch_taken_0x319588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319588u;
        // 0x31958c: 0x8ce2aa88  lw          $v0, -0x5578($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319588) {
            ctx->pc = 0x31972Cu;
            goto label_31972c;
        }
    }
    ctx->pc = 0x319590u;
    // 0x319590: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319590u;
    {
        const bool branch_taken_0x319590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319590u;
        // 0x319594: 0x240603fb  addiu       $a2, $zero, 0x3FB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319590) {
            ctx->pc = 0x3195A0u;
            goto label_3195a0;
        }
    }
    ctx->pc = 0x319598u;
    // 0x319598: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x319598u;
    {
        const bool branch_taken_0x319598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319598u;
        // 0x31959c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319598) {
            ctx->pc = 0x3195DCu;
            goto label_3195dc;
        }
    }
    ctx->pc = 0x3195A0u;
label_3195a0:
    // 0x3195a0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x3195a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x3195a4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3195a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3195a8: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x3195a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x3195ac: 0x24650078  addiu       $a1, $v1, 0x78
    ctx->pc = 0x3195acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x3195b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3195b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2480u));
    // 0x3195b4: 0x0  nop
    ctx->pc = 0x3195b4u;
    // NOP
label_3195b8:
    // 0x3195b8: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3195B8u;
    {
        const bool branch_taken_0x3195b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3195b8) {
            ctx->pc = 0x3195BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3195B8u;
            // 0x3195bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3195DCu;
            goto label_3195dc;
        }
    }
    ctx->pc = 0x3195C0u;
    // 0x3195c0: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3195C0u;
    {
        const bool branch_taken_0x3195c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3195C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195C0u;
        // 0x3195c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195c0) {
            ctx->pc = 0x3195DCu;
            goto label_3195dc;
        }
    }
    ctx->pc = 0x3195C8u;
    // 0x3195c8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3195c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x3195cc: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x3195ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3195d0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3195D0u;
    {
        const bool branch_taken_0x3195d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3195d0) {
            ctx->pc = 0x3195D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3195D0u;
            // 0x3195d4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3195B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3195b8;
        }
    }
    ctx->pc = 0x3195D8u;
    // 0x3195d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3195d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3195dc:
    // 0x3195dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3195DCu;
    {
        const bool branch_taken_0x3195dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3195E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195DCu;
        // 0x3195e0: 0x8ce2aa88  lw          $v0, -0x5578($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195dc) {
            ctx->pc = 0x3195F8u;
            goto label_3195f8;
        }
    }
    ctx->pc = 0x3195E4u;
    // 0x3195e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3195e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3195e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3195e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3195ec: 0x0  nop
    ctx->pc = 0x3195ecu;
    // NOP
    // 0x3195f0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3195f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3195f4: 0x8ce2aa88  lw          $v0, -0x5578($a3)
    ctx->pc = 0x3195f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
label_3195f8:
    // 0x3195f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3195F8u;
    {
        const bool branch_taken_0x3195f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3195FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195F8u;
        // 0x3195fc: 0x240603fc  addiu       $a2, $zero, 0x3FC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195f8) {
            ctx->pc = 0x319608u;
            goto label_319608;
        }
    }
    ctx->pc = 0x319600u;
    // 0x319600: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x319600u;
    {
        const bool branch_taken_0x319600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319600u;
        // 0x319604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319600) {
            ctx->pc = 0x319644u;
            goto label_319644;
        }
    }
    ctx->pc = 0x319608u;
label_319608:
    // 0x319608: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x319608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x31960c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x31960cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x319610: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x319610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x319614: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x319614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x319618: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x319618u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2480u));
    // 0x31961c: 0x0  nop
    ctx->pc = 0x31961cu;
    // NOP
label_319620:
    // 0x319620: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x319620u;
    {
        const bool branch_taken_0x319620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x319620) {
            ctx->pc = 0x319624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319620u;
            // 0x319624: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319644u;
            goto label_319644;
        }
    }
    ctx->pc = 0x319628u;
    // 0x319628: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x319628u;
    {
        const bool branch_taken_0x319628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x31962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319628u;
        // 0x31962c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319628) {
            ctx->pc = 0x319644u;
            goto label_319644;
        }
    }
    ctx->pc = 0x319630u;
    // 0x319630: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x319630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x319634: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x319634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x319638: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x319638u;
    {
        const bool branch_taken_0x319638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319638) {
            ctx->pc = 0x31963Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319638u;
            // 0x31963c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319620;
        }
    }
    ctx->pc = 0x319640u;
    // 0x319640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x319640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319644:
    // 0x319644: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x319644u;
    {
        const bool branch_taken_0x319644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319644u;
        // 0x319648: 0x8ce2aa88  lw          $v0, -0x5578($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319644) {
            ctx->pc = 0x319660u;
            goto label_319660;
        }
    }
    ctx->pc = 0x31964Cu;
    // 0x31964c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x31964cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x319650: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x319650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319654: 0x0  nop
    ctx->pc = 0x319654u;
    // NOP
    // 0x319658: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x319658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31965c: 0x8ce2aa88  lw          $v0, -0x5578($a3)
    ctx->pc = 0x31965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
label_319660:
    // 0x319660: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319660u;
    {
        const bool branch_taken_0x319660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319660u;
        // 0x319664: 0x240603fd  addiu       $a2, $zero, 0x3FD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319660) {
            ctx->pc = 0x319670u;
            goto label_319670;
        }
    }
    ctx->pc = 0x319668u;
    // 0x319668: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x319668u;
    {
        const bool branch_taken_0x319668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319668u;
        // 0x31966c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319668) {
            ctx->pc = 0x3196ACu;
            goto label_3196ac;
        }
    }
    ctx->pc = 0x319670u;
label_319670:
    // 0x319670: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x319670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x319674: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x319674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x319678: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x319678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x31967c: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x31967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x319680: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x319680u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2480u));
    // 0x319684: 0x0  nop
    ctx->pc = 0x319684u;
    // NOP
label_319688:
    // 0x319688: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x319688u;
    {
        const bool branch_taken_0x319688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x319688) {
            ctx->pc = 0x31968Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319688u;
            // 0x31968c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3196ACu;
            goto label_3196ac;
        }
    }
    ctx->pc = 0x319690u;
    // 0x319690: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x319690u;
    {
        const bool branch_taken_0x319690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x319694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319690u;
        // 0x319694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319690) {
            ctx->pc = 0x3196ACu;
            goto label_3196ac;
        }
    }
    ctx->pc = 0x319698u;
    // 0x319698: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x319698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x31969c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x31969cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3196a0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3196A0u;
    {
        const bool branch_taken_0x3196a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3196a0) {
            ctx->pc = 0x3196A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3196A0u;
            // 0x3196a4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319688;
        }
    }
    ctx->pc = 0x3196A8u;
    // 0x3196a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3196a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3196ac:
    // 0x3196ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3196ACu;
    {
        const bool branch_taken_0x3196ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3196B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196ACu;
        // 0x3196b0: 0x8ce2aa88  lw          $v0, -0x5578($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196ac) {
            ctx->pc = 0x3196C8u;
            goto label_3196c8;
        }
    }
    ctx->pc = 0x3196B4u;
    // 0x3196b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3196b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3196b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3196b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3196bc: 0x0  nop
    ctx->pc = 0x3196bcu;
    // NOP
    // 0x3196c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3196c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3196c4: 0x8ce2aa88  lw          $v0, -0x5578($a3)
    ctx->pc = 0x3196c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
label_3196c8:
    // 0x3196c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3196C8u;
    {
        const bool branch_taken_0x3196c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3196CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196C8u;
        // 0x3196cc: 0x240603fe  addiu       $a2, $zero, 0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196c8) {
            ctx->pc = 0x3196D8u;
            goto label_3196d8;
        }
    }
    ctx->pc = 0x3196D0u;
    // 0x3196d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3196D0u;
    {
        const bool branch_taken_0x3196d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3196D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196D0u;
        // 0x3196d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196d0) {
            ctx->pc = 0x319714u;
            goto label_319714;
        }
    }
    ctx->pc = 0x3196D8u;
label_3196d8:
    // 0x3196d8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x3196d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x3196dc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x3196dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3196e0: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x3196e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x3196e4: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x3196e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x3196e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3196e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2480u));
    // 0x3196ec: 0x0  nop
    ctx->pc = 0x3196ecu;
    // NOP
label_3196f0:
    // 0x3196f0: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3196F0u;
    {
        const bool branch_taken_0x3196f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3196f0) {
            ctx->pc = 0x3196F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3196F0u;
            // 0x3196f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319714u;
            goto label_319714;
        }
    }
    ctx->pc = 0x3196F8u;
    // 0x3196f8: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3196F8u;
    {
        const bool branch_taken_0x3196f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3196FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196F8u;
        // 0x3196fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196f8) {
            ctx->pc = 0x319714u;
            goto label_319714;
        }
    }
    ctx->pc = 0x319700u;
    // 0x319700: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x319700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x319704: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x319704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x319708: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x319708u;
    {
        const bool branch_taken_0x319708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319708) {
            ctx->pc = 0x31970Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319708u;
            // 0x31970c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3196F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3196f0;
        }
    }
    ctx->pc = 0x319710u;
    // 0x319710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x319710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319714:
    // 0x319714: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x319714u;
    {
        const bool branch_taken_0x319714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319714u;
        // 0x319718: 0x8ce2aa88  lw          $v0, -0x5578($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319714) {
            ctx->pc = 0x319730u;
            goto label_319730;
        }
    }
    ctx->pc = 0x31971Cu;
    // 0x31971c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31971cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x319720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x319720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319724: 0x0  nop
    ctx->pc = 0x319724u;
    // NOP
    // 0x319728: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x319728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31972c:
    // 0x31972c: 0x8ce2aa88  lw          $v0, -0x5578($a3)
    ctx->pc = 0x31972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
label_319730:
    // 0x319730: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x319730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x319734: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x319734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x319738: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x319738u;
    {
        const bool branch_taken_0x319738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319738u;
        // 0x31973c: 0x26032450  addiu       $v1, $s0, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319738) {
            ctx->pc = 0x319750u;
            goto label_319750;
        }
    }
    ctx->pc = 0x319740u;
    // 0x319740: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x319740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x319744: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x319744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x319748: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x319748u;
    {
        const bool branch_taken_0x319748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319748) {
            ctx->pc = 0x31974Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319748u;
            // 0x31974c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319758u;
            goto label_319758;
        }
    }
    ctx->pc = 0x319750u;
label_319750:
    // 0x319750: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x319750u;
    {
        const bool branch_taken_0x319750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319750u;
        // 0x319754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319750) {
            ctx->pc = 0x31975Cu;
            goto label_31975c;
        }
    }
    ctx->pc = 0x319758u;
label_319758:
    // 0x319758: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x319758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_31975c:
    // 0x31975c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31975Cu;
    {
        const bool branch_taken_0x31975c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31975Cu;
        // 0x319760: 0x8ce2aa88  lw          $v0, -0x5578($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31975c) {
            ctx->pc = 0x319790u;
            goto label_319790;
        }
    }
    ctx->pc = 0x319764u;
    // 0x319764: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x319764u;
    {
        const bool branch_taken_0x319764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319764u;
        // 0x319768: 0x26032450  addiu       $v1, $s0, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319764) {
            ctx->pc = 0x31977Cu;
            goto label_31977c;
        }
    }
    ctx->pc = 0x31976Cu;
    // 0x31976c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x31976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x319770: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x319770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x319774: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x319774u;
    {
        const bool branch_taken_0x319774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319774) {
            ctx->pc = 0x319778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319774u;
            // 0x319778: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319784u;
            goto label_319784;
        }
    }
    ctx->pc = 0x31977Cu;
label_31977c:
    // 0x31977c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31977Cu;
    {
        const bool branch_taken_0x31977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31977Cu;
        // 0x319780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31977c) {
            ctx->pc = 0x319788u;
            goto label_319788;
        }
    }
    ctx->pc = 0x319784u;
label_319784:
    // 0x319784: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x319784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_319788:
    // 0x319788: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x319788u;
    {
        const bool branch_taken_0x319788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319788u;
        // 0x31978c: 0x8ce2aa88  lw          $v0, -0x5578($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319788) {
            ctx->pc = 0x3197A4u;
            goto label_3197a4;
        }
    }
    ctx->pc = 0x319790u;
label_319790:
    // 0x319790: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x319790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x319794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x319794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319798: 0x0  nop
    ctx->pc = 0x319798u;
    // NOP
    // 0x31979c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x31979cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x3197a0: 0x8ce2aa88  lw          $v0, -0x5578($a3)
    ctx->pc = 0x3197a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
label_3197a4:
    // 0x3197a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3197A4u;
    {
        const bool branch_taken_0x3197a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197A4u;
        // 0x3197a8: 0x26032450  addiu       $v1, $s0, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197a4) {
            ctx->pc = 0x3197BCu;
            goto label_3197bc;
        }
    }
    ctx->pc = 0x3197ACu;
    // 0x3197ac: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3197acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3197b0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3197b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3197b4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3197B4u;
    {
        const bool branch_taken_0x3197b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3197b4) {
            ctx->pc = 0x3197B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3197B4u;
            // 0x3197b8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3197C4u;
            goto label_3197c4;
        }
    }
    ctx->pc = 0x3197BCu;
label_3197bc:
    // 0x3197bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3197BCu;
    {
        const bool branch_taken_0x3197bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197BCu;
        // 0x3197c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197bc) {
            ctx->pc = 0x3197C8u;
            goto label_3197c8;
        }
    }
    ctx->pc = 0x3197C4u;
label_3197c4:
    // 0x3197c4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3197c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3197c8:
    // 0x3197c8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3197C8u;
    {
        const bool branch_taken_0x3197c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197C8u;
        // 0x3197cc: 0x8ce2aa88  lw          $v0, -0x5578($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197c8) {
            ctx->pc = 0x31980Cu;
            goto label_31980c;
        }
    }
    ctx->pc = 0x3197D0u;
    // 0x3197d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3197D0u;
    {
        const bool branch_taken_0x3197d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197D0u;
        // 0x3197d4: 0x26102450  addiu       $s0, $s0, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197d0) {
            ctx->pc = 0x3197E8u;
            goto label_3197e8;
        }
    }
    ctx->pc = 0x3197D8u;
    // 0x3197d8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3197d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3197dc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3197dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3197e0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3197E0u;
    {
        const bool branch_taken_0x3197e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3197e0) {
            ctx->pc = 0x3197E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3197E0u;
            // 0x3197e4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3197F0u;
            goto label_3197f0;
        }
    }
    ctx->pc = 0x3197E8u;
label_3197e8:
    // 0x3197e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3197E8u;
    {
        const bool branch_taken_0x3197e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197E8u;
        // 0x3197ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197e8) {
            ctx->pc = 0x3197F4u;
            goto label_3197f4;
        }
    }
    ctx->pc = 0x3197F0u;
label_3197f0:
    // 0x3197f0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3197f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3197f4:
    // 0x3197f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3197F4u;
    {
        const bool branch_taken_0x3197f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197F4u;
        // 0x3197f8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197f4) {
            ctx->pc = 0x319810u;
            goto label_319810;
        }
    }
    ctx->pc = 0x3197FCu;
    // 0x3197fc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3197fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x319800: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x319800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319804: 0x0  nop
    ctx->pc = 0x319804u;
    // NOP
    // 0x319808: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x319808u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_31980c:
    // 0x31980c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31980cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_319810:
    // 0x319810: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x319810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x319814: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x319814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x319818: 0xc4422b30  lwc1        $f2, 0x2B30($v0)
    ctx->pc = 0x319818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31981c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x319820: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x319820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x319824: 0x46151142  mul.s       $f5, $f2, $f21
    ctx->pc = 0x319824u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x319828: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x319828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31982c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x31982cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x319830: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x319830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319834: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x319834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319838: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x319838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x31983c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31983cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x319840: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x319840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x319844: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x319844u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x319848: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x319848u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x31984c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x31984cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x319850: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x319850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x319854: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x319854u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x319858: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x319858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x31985c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31985Cu;
    SET_GPR_U32(ctx, 31, 0x319864u);
    ctx->pc = 0x319860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31985Cu;
    // 0x319860: 0xe7a30010  swc1        $f3, 0x10($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31985Cu, 0x319864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319864u;
label_319864:
    // 0x319864: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x319864u;
    SET_GPR_U32(ctx, 31, 0x31986Cu);
    ctx->pc = 0x319868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319864u;
    // 0x319868: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x319864u, 0x31986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31986Cu;
label_31986c:
    // 0x31986c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x31986Cu;
    SET_GPR_U32(ctx, 31, 0x319874u);
    ctx->pc = 0x319870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31986Cu;
    // 0x319870: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x31986Cu, 0x319874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319874u;
label_319874:
    // 0x319874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x319874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319878: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x319878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31987c: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x31987Cu;
    SET_GPR_U32(ctx, 31, 0x319884u);
    ctx->pc = 0x319880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31987Cu;
    // 0x319880: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x31987Cu, 0x319884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319884u;
label_319884:
    // 0x319884: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x319884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x319888: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x319888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x31988c: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x31988cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x319890: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x319890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x319894: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x319894u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x319898: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x319898u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31989c: 0xda630010  lqc2        $vf3, 0x10($s3)
    ctx->pc = 0x31989cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3198a0: 0xda640020  lqc2        $vf4, 0x20($s3)
    ctx->pc = 0x3198a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3198a4: 0xda650030  lqc2        $vf5, 0x30($s3)
    ctx->pc = 0x3198a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x3198a8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x3198a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3198ac: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x3198acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3198b0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x3198b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3198b4: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x3198b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3198b8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x3198b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3198bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3198bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3198c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198c4: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x3198C4u;
    SET_GPR_U32(ctx, 31, 0x3198CCu);
    ctx->pc = 0x3198C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3198C4u;
    // 0x3198c8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x3198C4u, 0x3198CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3198CCu;
label_3198cc:
    // 0x3198cc: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x3198ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3198d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3198d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198d4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3198d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3198d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3198d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198dc: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x3198dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x3198e0: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x3198e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x3198e4: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x3198E4u;
    SET_GPR_U32(ctx, 31, 0x3198ECu);
    ctx->pc = 0x3198E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3198E4u;
    // 0x3198e8: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x3198E4u, 0x3198ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3198ECu;
label_3198ec:
    // 0x3198ec: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x3198ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3198f0: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x3198f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3198f4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x3198f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3198f8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x3198f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3198fc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3198fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319900: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x319900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x319904: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x319904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x319908: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x319908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31990c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x31990cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x319910: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x319910u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x319914: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x319914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x319918: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x319918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x31991c: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x31991cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x319920: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x319920u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x319924: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x319924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x319928: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x319928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31992c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x31992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319930: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x319930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319934: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x319934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x319938: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x319938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31993c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x31993cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x319940: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x319940u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x319944: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x319944u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x319948: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x319948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x31994c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x31994cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x319950: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x319950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x319954: 0xe7a400dc  swc1        $f4, 0xDC($sp)
    ctx->pc = 0x319954u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x319958: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x319958u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x31995c: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x31995cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x319960: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x319960u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x319964: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x319964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x319968: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x319968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31996c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x31996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319970: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x319970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319974: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x319974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319978: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x319978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x31997c: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x31997cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x319980: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x319980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x319984: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x319984u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x319988: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x319988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x31998c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31998cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319990: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x319990u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319994: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x319994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x319998: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x319998u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31999c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31999cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3199a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3199a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3199a4: 0xc4602b30  lwc1        $f0, 0x2B30($v1)
    ctx->pc = 0x3199a4u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3199a8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3199a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3199ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3199acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3199b0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3199b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x3199b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3199b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3199b8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3199b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3199bc: 0x8c62bd48  lw          $v0, -0x42B8($v1)
    ctx->pc = 0x3199bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x3199c0: 0xc0c48da  jal         func_312368
    ctx->pc = 0x3199C0u;
    SET_GPR_U32(ctx, 31, 0x3199C8u);
    ctx->pc = 0x3199C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3199C0u;
    // 0x3199c4: 0x8c440100  lw          $a0, 0x100($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x3199C0u, 0x3199C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3199C8u;
label_3199c8:
    // 0x3199c8: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x3199c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3199cc: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x3199ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3199d0: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x3199d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3199d4: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x3199d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3199d8: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x3199d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3199dc: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x3199dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3199e0: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x3199e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3199e4: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x3199e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3199e8: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x3199e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3199ec: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x3199ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3199f0: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x3199f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3199f4: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x3199f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3199f8: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x3199f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3199fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3199FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199FCu;
        // 0x319a00: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3199FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319A04u;
    // 0x319a04: 0x0  nop
    ctx->pc = 0x319a04u;
    // NOP
    ctx->pc = 0x319a08u;
}
