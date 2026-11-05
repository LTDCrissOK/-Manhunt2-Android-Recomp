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

// Function: sub_003E2910
// Address: 0x3e2910 - 0x3e2b10
void sub_003E2910_0x3e2910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2910_0x3e2910");
#endif

    switch (ctx->pc) {
        case 0x3e2938u: goto label_3e2938;
        case 0x3e2a50u: goto label_3e2a50;
        default: break;
    }

    ctx->pc = 0x3e2910u;

    // 0x3e2910: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3e2910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2914: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e2918: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x3e2918u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e291c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x3e291cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2920: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x3e2920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x3e2924: 0x24480002  addiu       $t0, $v0, 0x2
    ctx->pc = 0x3e2924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3e2928: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x3e2928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3e292c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3E292Cu;
    {
        const bool branch_taken_0x3e292c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E292Cu;
        // 0x3e2930: 0x27ac0008  addiu       $t4, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e292c) {
            ctx->pc = 0x3E29B0u;
            goto label_3e29b0;
        }
    }
    ctx->pc = 0x3E2934u;
    // 0x3e2934: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x3e2934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3e2938:
    // 0x3e2938: 0x10a1818  mult        $v1, $t0, $t2
    ctx->pc = 0x3e2938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3e293c: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x3e293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x3e2940: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e2940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2944: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x3e2944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2948: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x3e2948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e294c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e294cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2950: 0x0  nop
    ctx->pc = 0x3e2950u;
    // NOP
    // 0x3e2954: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E2954u;
    {
        const bool branch_taken_0x3e2954 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2954u;
        // 0x3e2958: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2954) {
            ctx->pc = 0x3E2960u;
            goto label_3e2960;
        }
    }
    ctx->pc = 0x3E295Cu;
    // 0x3e295c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e295cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2960:
    // 0x3e2960: 0x12a1018  mult        $v0, $t1, $t2
    ctx->pc = 0x3e2960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e2964: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x3e2964u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x3e2968: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3e2968u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e296c: 0x4d2021  addu        $a0, $v0, $t5
    ctx->pc = 0x3e296cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3e2970: 0x10a1018  mult        $v0, $t0, $t2
    ctx->pc = 0x3e2970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e2974: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x3e2974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3e2978: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3e2978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e297c: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x3e297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3e2980: 0x24040  sll         $t0, $v0, 1
    ctx->pc = 0x3e2980u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3e2984: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3e2984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3e2988: 0x106282a  slt         $a1, $t0, $a2
    ctx->pc = 0x3e2988u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3e298c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3e298cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2990: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3e2990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3e2994: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3e2994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2998: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3e2998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3e299c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x3e299cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e29a0: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x3e29a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3e29a4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3e29a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e29a8: 0x14a0ffe3  bnez        $a1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3E29A8u;
    {
        const bool branch_taken_0x3e29a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E29ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E29A8u;
        // 0x3e29ac: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e29a8) {
            ctx->pc = 0x3E2938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2938;
        }
    }
    ctx->pc = 0x3E29B0u;
label_3e29b0:
    // 0x3e29b0: 0x55060013  bnel        $t0, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3E29B0u;
    {
        const bool branch_taken_0x3e29b0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x3e29b0) {
            ctx->pc = 0x3E29B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E29B0u;
            // 0x3e29b4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2A00u;
            goto label_3e2a00;
        }
    }
    ctx->pc = 0x3E29B8u;
    // 0x3e29b8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3e29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e29bc: 0x1032018  mult        $a0, $t0, $v1
    ctx->pc = 0x3e29bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e29c0: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x3e29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x3e29c4: 0x1232018  mult        $a0, $t1, $v1
    ctx->pc = 0x3e29c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e29c8: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x3e29c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x3e29cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3e29ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e29d0: 0x2509ffff  addiu       $t1, $t0, -0x1
    ctx->pc = 0x3e29d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e29d4: 0x8d1821  addu        $v1, $a0, $t5
    ctx->pc = 0x3e29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x3e29d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3e29d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3e29dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3e29dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e29e0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3e29e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3e29e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3e29e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e29e8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3e29e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3e29ec: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x3e29ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e29f0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3e29f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3e29f4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3e29f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e29f8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3e29f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3e29fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e29fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3e2a00:
    // 0x3e2a00: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3e2a00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2a04: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2a08: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3e2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e2a0c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2a10: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3e2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3e2a14: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x3e2a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e2a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e2a1c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3e2a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2a20: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x3e2a20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3e2a24: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3e2a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2a28: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x3e2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x3e2a2c: 0xc4e2000c  lwc1        $f2, 0xC($a3)
    ctx->pc = 0x3e2a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2a30: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3e2a30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2a34: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3e2a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2a38: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3e2a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2a3c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x3e2a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2a40: 0xe5820004  swc1        $f2, 0x4($t4)
    ctx->pc = 0x3e2a40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x3e2a44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3E2A44u;
    {
        const bool branch_taken_0x3e2a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2A44u;
        // 0x3e2a48: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2a44) {
            ctx->pc = 0x3E2A98u;
            goto label_3e2a98;
        }
    }
    ctx->pc = 0x3E2A4Cu;
    // 0x3e2a4c: 0x0  nop
    ctx->pc = 0x3e2a4cu;
    // NOP
label_3e2a50:
    // 0x3e2a50: 0x4d2021  addu        $a0, $v0, $t5
    ctx->pc = 0x3e2a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3e2a54: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x3e2a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e2a58: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3e2a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2a5c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3e2a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2a60: 0x4d2821  addu        $a1, $v0, $t5
    ctx->pc = 0x3e2a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3e2a64: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x3e2a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3e2a68: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3e2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e2a6c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3e2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3e2a70: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3e2a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e2a78: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x3e2a78u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3e2a7c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x3e2a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3e2a80: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3e2a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2a84: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3e2a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3e2a88: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3e2a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2a8c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x3e2a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x3e2a90: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x3e2a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2a94: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x3e2a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_3e2a98:
    // 0x3e2a98: 0x168102a  slt         $v0, $t3, $t0
    ctx->pc = 0x3e2a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3e2a9c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3E2A9Cu;
    {
        const bool branch_taken_0x3e2a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2A9Cu;
        // 0x3e2aa0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2a9c) {
            ctx->pc = 0x3E2AD4u;
            goto label_3e2ad4;
        }
    }
    ctx->pc = 0x3E2AA4u;
    // 0x3e2aa4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3e2aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2aa8: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x3e2aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e2aac: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x3e2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x3e2ab0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3e2ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2ab4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3e2ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2ab8: 0x0  nop
    ctx->pc = 0x3e2ab8u;
    // NOP
    // 0x3e2abc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E2ABCu;
    {
        const bool branch_taken_0x3e2abc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2ABCu;
        // 0x3e2ac0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2abc) {
            ctx->pc = 0x3E2AC8u;
            goto label_3e2ac8;
        }
    }
    ctx->pc = 0x3E2AC4u;
    // 0x3e2ac4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e2ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2ac8:
    // 0x3e2ac8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3e2ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3e2acc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3E2ACCu;
    {
        const bool branch_taken_0x3e2acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2ACCu;
        // 0x3e2ad0: 0xc31018  mult        $v0, $a2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2acc) {
            ctx->pc = 0x3E2A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2a50;
        }
    }
    ctx->pc = 0x3E2AD4u;
label_3e2ad4:
    // 0x3e2ad4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3e2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e2ad8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3e2ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2adc: 0x1021818  mult        $v1, $t0, $v0
    ctx->pc = 0x3e2adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3e2ae0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3e2ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2ae4: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x3e2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x3e2ae8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x3e2ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3e2aec: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3e2aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3e2af0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3e2af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2af4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3e2af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3e2af8: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x3e2af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2afc: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x3e2afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3e2b00: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3e2b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2b04: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x3e2b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3e2b08: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2B08u;
        // 0x3e2b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2B10u;
}
