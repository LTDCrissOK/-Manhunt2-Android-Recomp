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

// Function: sub_002FCA30
// Address: 0x2fca30 - 0x2fccb0
void sub_002FCA30_0x2fca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCA30_0x2fca30");
#endif

    switch (ctx->pc) {
        case 0x2fcb84u: goto label_2fcb84;
        case 0x2fcbf8u: goto label_2fcbf8;
        case 0x2fcc00u: goto label_2fcc00;
        case 0x2fcc14u: goto label_2fcc14;
        case 0x2fcc2cu: goto label_2fcc2c;
        case 0x2fcc34u: goto label_2fcc34;
        case 0x2fcc40u: goto label_2fcc40;
        case 0x2fcc50u: goto label_2fcc50;
        default: break;
    }

    ctx->pc = 0x2fca30u;

    // 0x2fca30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2fca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2fca34: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2fca34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fca38: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2fca38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2fca3c: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x2fca3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fca40: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2fca40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2fca44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fca44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fca48: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2fca48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2fca4c: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x2fca4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fca50: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2fca50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2fca54: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x2fca54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fca58: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2fca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2fca5c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2fca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x2fca60: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2fca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2fca64: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2fca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2fca68: 0x8e2c11e8  lw          $t4, 0x11E8($s1)
    ctx->pc = 0x2fca68u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    // 0x2fca6c: 0x8d820104  lw          $v0, 0x104($t4)
    ctx->pc = 0x2fca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 260)));
    // 0x2fca70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fca70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fca74: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2fca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fca78: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x2fca78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2fca7c: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x2fca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2fca80: 0x24660060  addiu       $a2, $v1, 0x60
    ctx->pc = 0x2fca80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2fca84: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fca84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fca88: 0x24680070  addiu       $t0, $v1, 0x70
    ctx->pc = 0x2fca88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2fca8c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2fca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fca90: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2fca90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fca94: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2fca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fca98: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2fca98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fca9c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2fca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcaa0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2fcaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2fcaa4: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x2fcaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcaa8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2fcaa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2fcaac: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2fcaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcab0: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x2fcab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x2fcab4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2fcab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcab8: 0xe5610008  swc1        $f1, 0x8($t3)
    ctx->pc = 0x2fcab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x2fcabc: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2fcabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcac0: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x2fcac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x2fcac4: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x2fcac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcac8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2fcac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fcacc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2fcaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcad0: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2fcad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2fcad4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2fcad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcad8: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x2fcad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x2fcadc: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2fcadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcae0: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x2fcae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x2fcae4: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x2fcae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcae8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2fcae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2fcaec: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2fcaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcaf0: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x2fcaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x2fcaf4: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x2fcaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcaf8: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x2fcaf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x2fcafc: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x2fcafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcb00: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x2fcb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x2fcb04: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2fcb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2fcb08: 0x8d840104  lw          $a0, 0x104($t4)
    ctx->pc = 0x2fcb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 260)));
    // 0x2fcb0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fcb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fcb10: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2fcb10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fcb14: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2fcb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2fcb18: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fcb18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fcb1c: 0xf8c10060  sqc2        $vf1, 0x60($a2)
    ctx->pc = 0x2fcb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fcb20: 0x8e2311e8  lw          $v1, 0x11E8($s1)
    ctx->pc = 0x2fcb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    // 0x2fcb24: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2fcb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2fcb28: 0x8c660104  lw          $a2, 0x104($v1)
    ctx->pc = 0x2fcb28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2fcb2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fcb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fcb30: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2fcb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fcb34: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2fcb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2fcb38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fcb38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fcb3c: 0xf8610050  sqc2        $vf1, 0x50($v1)
    ctx->pc = 0x2fcb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fcb40: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x2fcb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    // 0x2fcb44: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2fcb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2fcb48: 0x8c860104  lw          $a2, 0x104($a0)
    ctx->pc = 0x2fcb48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2fcb4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fcb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fcb50: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2fcb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fcb54: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2fcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2fcb58: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fcb58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fcb5c: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x2fcb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fcb60: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fcb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fcb64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fcb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb68: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x2fcb68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb6c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2fcb6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb70: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2fcb70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fcb74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fcb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb7c: 0xc0bf32c  jal         func_2FCCB0
    ctx->pc = 0x2FCB7Cu;
    SET_GPR_U32(ctx, 31, 0x2FCB84u);
    ctx->pc = 0x2FCB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCB7Cu;
    // 0x2fcb80: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCCB0u, 0x2FCB7Cu, 0x2FCB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB84u;
label_2fcb84:
    // 0x2fcb84: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2fcb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcb88: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2fcb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x2fcb8c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2fcb8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x2fcb90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fcb90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcb94: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2fcb94u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2fcb98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2fcb98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fcb9c: 0x0  nop
    ctx->pc = 0x2fcb9cu;
    // NOP
    // 0x2fcba0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2FCBA0u;
    {
        const bool branch_taken_0x2fcba0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBA0u;
        // 0x2fcba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcba0) {
            ctx->pc = 0x2FCBD4u;
            goto label_2fcbd4;
        }
    }
    ctx->pc = 0x2FCBA8u;
    // 0x2fcba8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2fcba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcbac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2fcbacu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2fcbb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2fcbb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fcbb4: 0x0  nop
    ctx->pc = 0x2fcbb4u;
    // NOP
    // 0x2fcbb8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCBB8u;
    {
        const bool branch_taken_0x2fcbb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBB8u;
        // 0x2fcbbc: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbb8) {
            ctx->pc = 0x2FCBD4u;
            goto label_2fcbd4;
        }
    }
    ctx->pc = 0x2FCBC0u;
    // 0x2fcbc0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2fcbc0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2fcbc4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2fcbc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fcbc8: 0x0  nop
    ctx->pc = 0x2fcbc8u;
    // NOP
    // 0x2fcbcc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FCBCCu;
    {
        const bool branch_taken_0x2fcbcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fcbcc) {
            ctx->pc = 0x2FCBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCBCCu;
            // 0x2fcbd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCBD4u;
            goto label_2fcbd4;
        }
    }
    ctx->pc = 0x2FCBD4u;
label_2fcbd4:
    // 0x2fcbd4: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2FCBD4u;
    {
        const bool branch_taken_0x2fcbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBD4u;
        // 0x2fcbd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbd4) {
            ctx->pc = 0x2FCC88u;
            goto label_2fcc88;
        }
    }
    ctx->pc = 0x2FCBDCu;
    // 0x2fcbdc: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x2fcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    // 0x2fcbe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcbe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fcbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcbe8: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2fcbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2fcbec: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2fcbecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fcbf0: 0xc0bf360  jal         func_2FCD80
    ctx->pc = 0x2FCBF0u;
    SET_GPR_U32(ctx, 31, 0x2FCBF8u);
    ctx->pc = 0x2FCBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCBF0u;
    // 0x2fcbf4: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCD80u, 0x2FCBF0u, 0x2FCBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBF8u;
label_2fcbf8:
    // 0x2fcbf8: 0xc0bf662  jal         func_2FD988
    ctx->pc = 0x2FCBF8u;
    SET_GPR_U32(ctx, 31, 0x2FCC00u);
    ctx->pc = 0x2FCBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCBF8u;
    // 0x2fcbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD988u, 0x2FCBF8u, 0x2FCC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC00u;
label_2fcc00:
    // 0x2fcc00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fcc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc04: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FCC04u;
    {
        const bool branch_taken_0x2fcc04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcc04) {
            ctx->pc = 0x2FCC38u;
            goto label_2fcc38;
        }
    }
    ctx->pc = 0x2FCC0Cu;
    // 0x2fcc0c: 0xc0bf454  jal         func_2FD150
    ctx->pc = 0x2FCC0Cu;
    SET_GPR_U32(ctx, 31, 0x2FCC14u);
    ctx->pc = 0x2FCC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC0Cu;
    // 0x2fcc10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD150u, 0x2FCC0Cu, 0x2FCC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC14u;
label_2fcc14:
    // 0x2fcc14: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2fcc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2fcc18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fcc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc20: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2fcc20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fcc24: 0xc0bf360  jal         func_2FCD80
    ctx->pc = 0x2FCC24u;
    SET_GPR_U32(ctx, 31, 0x2FCC2Cu);
    ctx->pc = 0x2FCC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC24u;
    // 0x2fcc28: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCD80u, 0x2FCC24u, 0x2FCC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC2Cu;
label_2fcc2c:
    // 0x2fcc2c: 0xc0bf662  jal         func_2FD988
    ctx->pc = 0x2FCC2Cu;
    SET_GPR_U32(ctx, 31, 0x2FCC34u);
    ctx->pc = 0x2FCC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC2Cu;
    // 0x2fcc30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD988u, 0x2FCC2Cu, 0x2FCC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC34u;
label_2fcc34:
    // 0x2fcc34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fcc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fcc38:
    // 0x2fcc38: 0xc0bf454  jal         func_2FD150
    ctx->pc = 0x2FCC38u;
    SET_GPR_U32(ctx, 31, 0x2FCC40u);
    ctx->pc = 0x2FCC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC38u;
    // 0x2fcc3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD150u, 0x2FCC38u, 0x2FCC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC40u;
label_2fcc40:
    // 0x2fcc40: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCC40u;
    {
        const bool branch_taken_0x2fcc40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC40u;
        // 0x2fcc44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc40) {
            ctx->pc = 0x2FCC58u;
            goto label_2fcc58;
        }
    }
    ctx->pc = 0x2FCC48u;
    // 0x2fcc48: 0xc0bf670  jal         func_2FD9C0
    ctx->pc = 0x2FCC48u;
    SET_GPR_U32(ctx, 31, 0x2FCC50u);
    ctx->pc = 0x2FCC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC48u;
    // 0x2fcc4c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD9C0u, 0x2FCC48u, 0x2FCC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC50u;
label_2fcc50:
    // 0x2fcc50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2FCC50u;
    {
        const bool branch_taken_0x2fcc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC50u;
        // 0x2fcc54: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc50) {
            ctx->pc = 0x2FCC88u;
            goto label_2fcc88;
        }
    }
    ctx->pc = 0x2FCC58u;
label_2fcc58:
    // 0x2fcc58: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x2fcc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    // 0x2fcc5c: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x2fcc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2fcc60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fcc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fcc64: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fcc64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcc68: 0xf8610040  sqc2        $vf1, 0x40($v1)
    ctx->pc = 0x2fcc68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fcc6c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2fcc6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fcc70: 0xf8610050  sqc2        $vf1, 0x50($v1)
    ctx->pc = 0x2fcc70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fcc74: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2fcc74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fcc78: 0xf8610060  sqc2        $vf1, 0x60($v1)
    ctx->pc = 0x2fcc78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fcc7c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2fcc7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fcc80: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x2fcc80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fcc84: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2fcc84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fcc88:
    // 0x2fcc88: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2fcc88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fcc8c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2fcc8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2fcc90: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2fcc90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fcc94: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2fcc94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2fcc98: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2fcc98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fcc9c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2fcc9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2fcca0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2fcca0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fcca4: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2fcca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fcca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCA8u;
        // 0x2fccac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCCB0u;
}
