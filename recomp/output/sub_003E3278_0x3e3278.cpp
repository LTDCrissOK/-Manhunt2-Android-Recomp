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

// Function: sub_003E3278
// Address: 0x3e3278 - 0x3e3420
void sub_003E3278_0x3e3278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3278_0x3e3278");
#endif

    switch (ctx->pc) {
        case 0x3e32c0u: goto label_3e32c0;
        case 0x3e3340u: goto label_3e3340;
        case 0x3e33e8u: goto label_3e33e8;
        default: break;
    }

    ctx->pc = 0x3e3278u;

    // 0x3e3278: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3e3278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3e327c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x3e327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x3e3280: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x3e3280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x3e3284: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e3284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3288: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3e3288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3e328c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3e328cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3290: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3e3290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x3e3294: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x3e3294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x3e3298: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3e3298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x3e329c: 0x12350056  beq         $s1, $s5, . + 4 + (0x56 << 2)
    ctx->pc = 0x3E329Cu;
    {
        const bool branch_taken_0x3e329c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x3E32A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E329Cu;
        // 0x3e32a0: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e329c) {
            ctx->pc = 0x3E33F8u;
            goto label_3e33f8;
        }
    }
    ctx->pc = 0x3E32A4u;
    // 0x3e32a4: 0x26300014  addiu       $s0, $s1, 0x14
    ctx->pc = 0x3e32a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3e32a8: 0x12150053  beq         $s0, $s5, . + 4 + (0x53 << 2)
    ctx->pc = 0x3E32A8u;
    {
        const bool branch_taken_0x3e32a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x3E32ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E32A8u;
        // 0x3e32ac: 0x27b40008  addiu       $s4, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e32a8) {
            ctx->pc = 0x3E33F8u;
            goto label_3e33f8;
        }
    }
    ctx->pc = 0x3E32B0u;
    // 0x3e32b0: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3e32b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e32b4: 0x27b30028  addiu       $s3, $sp, 0x28
    ctx->pc = 0x3e32b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x3e32b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e32bc: 0x0  nop
    ctx->pc = 0x3e32bcu;
    // NOP
label_3e32c0:
    // 0x3e32c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e32c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e32c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e32c8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e32c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e32cc: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x3e32ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x3e32d0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3e32d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e32d4: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x3e32d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e32d8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3e32d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e32dc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3e32dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e32e0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3e32e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e32e4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3e32e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e32e8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3e32e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e32ec: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3e32ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e32f0: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x3e32f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x3e32f4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3e32f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e32f8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3e32f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e32fc: 0x0  nop
    ctx->pc = 0x3e32fcu;
    // NOP
    // 0x3e3300: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E3300u;
    {
        const bool branch_taken_0x3e3300 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3300u;
        // 0x3e3304: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3300) {
            ctx->pc = 0x3E330Cu;
            goto label_3e330c;
        }
    }
    ctx->pc = 0x3E3308u;
    // 0x3e3308: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e3308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e330c:
    // 0x3e330c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e3310: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3E3310u;
    {
        const bool branch_taken_0x3e3310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3310u;
        // 0x3e3314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3310) {
            ctx->pc = 0x3E33A4u;
            goto label_3e33a4;
        }
    }
    ctx->pc = 0x3E3318u;
    // 0x3e3318: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x3e3318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x3e331c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3e331cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3e3320: 0x911823  subu        $v1, $a0, $s1
    ctx->pc = 0x3e3320u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3e3324: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3e3324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3e3328: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x3e3328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e332c: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x3e332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x3e3330: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3e3330u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3e3334: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E3334u;
    {
        const bool branch_taken_0x3e3334 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3E3338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3334u;
        // 0x3e3338: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3334) {
            ctx->pc = 0x3E3378u;
            goto label_3e3378;
        }
    }
    ctx->pc = 0x3E333Cu;
    // 0x3e333c: 0x0  nop
    ctx->pc = 0x3e333cu;
    // NOP
label_3e3340:
    // 0x3e3340: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x3e3340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x3e3344: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x3e3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x3e3348: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3e3348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e334c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e3350: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3e3350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3e3354: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3e3354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3358: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x3e3358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3e335c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3e335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3360: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3e3360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3e3364: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3e3364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3368: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3e3368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3e336c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x3e336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3370: 0x1c60fff3  bgtz        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3E3370u;
    {
        const bool branch_taken_0x3e3370 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x3E3374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3370u;
        // 0x3e3374: 0xe4410010  swc1        $f1, 0x10($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3370) {
            ctx->pc = 0x3E3340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3340;
        }
    }
    ctx->pc = 0x3E3378u;
label_3e3378:
    // 0x3e3378: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3e3378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e337c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3e337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e3380: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3e3380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3384: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x3e3384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e3388: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x3e3388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3e338c: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x3e338cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x3e3390: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3e3390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3e3394: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3e3394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3398: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x3e3398u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x3e339c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3E339Cu;
    {
        const bool branch_taken_0x3e339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E339Cu;
        // 0x3e33a0: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e339c) {
            ctx->pc = 0x3E33ECu;
            goto label_3e33ec;
        }
    }
    ctx->pc = 0x3E33A4u;
label_3e33a4:
    // 0x3e33a4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3e33a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3e33a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e33a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e33ac: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3e33acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x3e33b0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3e33b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3e33b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e33b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e33b8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3e33b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x3e33bc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3e33bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e33c0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3e33c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e33c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3e33c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3e33c8: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x3e33c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x3e33cc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3e33ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e33d0: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x3e33d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e33d4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3e33d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3e33d8: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x3e33d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x3e33dc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3e33dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e33e0: 0xc0f8c7c  jal         func_3E31F0
    ctx->pc = 0x3E33E0u;
    SET_GPR_U32(ctx, 31, 0x3E33E8u);
    ctx->pc = 0x3E33E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E33E0u;
    // 0x3e33e4: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E31F0u, 0x3E33E0u, 0x3E33E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E33E8u;
label_3e33e8:
    // 0x3e33e8: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x3e33e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_3e33ec:
    // 0x3e33ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e33ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e33f0: 0x5615ffb3  bnel        $s0, $s5, . + 4 + (-0x4D << 2)
    ctx->pc = 0x3E33F0u;
    {
        const bool branch_taken_0x3e33f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x3e33f0) {
            ctx->pc = 0x3E33F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E33F0u;
            // 0x3e33f4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E32C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e32c0;
        }
    }
    ctx->pc = 0x3E33F8u;
label_3e33f8:
    // 0x3e33f8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3e33f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e33fc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3e33fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3e3400: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3e3400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e3404: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x3e3404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3e3408: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3e3408u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e340c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x3e340cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3e3410: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3e3410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e3414: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3414u;
        // 0x3e3418: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E341Cu;
    // 0x3e341c: 0x0  nop
    ctx->pc = 0x3e341cu;
    // NOP
    ctx->pc = 0x3e3420u;
}
