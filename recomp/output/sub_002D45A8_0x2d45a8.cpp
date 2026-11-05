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

// Function: sub_002D45A8
// Address: 0x2d45a8 - 0x2d4720
void sub_002D45A8_0x2d45a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D45A8_0x2d45a8");
#endif

    switch (ctx->pc) {
        case 0x2d45dcu: goto label_2d45dc;
        case 0x2d45f8u: goto label_2d45f8;
        case 0x2d46ccu: goto label_2d46cc;
        case 0x2d46dcu: goto label_2d46dc;
        case 0x2d46f4u: goto label_2d46f4;
        case 0x2d4704u: goto label_2d4704;
        default: break;
    }

    ctx->pc = 0x2d45a8u;

    // 0x2d45a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d45a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d45ac: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2d45acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d45b0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2d45b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2d45b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d45b8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2d45b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2d45bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d45bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d45c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2d45c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2d45c4: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x2d45c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d45c8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2d45c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2d45cc: 0x8c44bd20  lw          $a0, -0x42E0($v0)
    ctx->pc = 0x2d45ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD20u));
    // 0x2d45d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d45d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d45d4: 0xc0b5906  jal         func_2D6418
    ctx->pc = 0x2D45D4u;
    SET_GPR_U32(ctx, 31, 0x2D45DCu);
    ctx->pc = 0x2D45D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D45D4u;
    // 0x2d45d8: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6418u, 0x2D45D4u, 0x2D45DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D45DCu;
label_2d45dc:
    // 0x2d45dc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2d45dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d45e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d45e4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2d45e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2d45e8: 0x1600003a  bnez        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D45E8u;
    {
        const bool branch_taken_0x2d45e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D45ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45E8u;
        // 0x2d45ec: 0xac51b5f0  sw          $s1, -0x4A10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948336), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d45e8) {
            ctx->pc = 0x2D46D4u;
            goto label_2d46d4;
        }
    }
    ctx->pc = 0x2D45F0u;
    // 0x2d45f0: 0xc0b50fe  jal         func_2D43F8
    ctx->pc = 0x2D45F0u;
    SET_GPR_U32(ctx, 31, 0x2D45F8u);
    ctx->pc = 0x2D45F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D45F0u;
    // 0x2d45f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D43F8u, 0x2D45F0u, 0x2D45F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D45F8u;
label_2d45f8:
    // 0x2d45f8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2d45f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2d45fc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d45fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2d4600: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x2d4600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4604: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x2d4604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4608: 0x8c62bd48  lw          $v0, -0x42B8($v1)
    ctx->pc = 0x2d4608u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2d460c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2d460cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d4610: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x2d4610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x2d4614: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x2d4614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4618: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2d4618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2d461c: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2d461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2d4620: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x2d4620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2d4624: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d4624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d4628: 0x24860070  addiu       $a2, $a0, 0x70
    ctx->pc = 0x2d4628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2d462c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4630: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d4630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d4634: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d4634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4638: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2d4638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d463c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2d463cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4640: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2d4640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d4644: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x2d4644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4648: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2d4648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d464c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2d464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4650: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2d4650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2d4654: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2d4654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4658: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x2d4658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2d465c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2d465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4660: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x2d4660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x2d4664: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x2d4664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4668: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2d4668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d466c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2d466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4670: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2d4670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2d4674: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d4674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4678: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x2d4678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x2d467c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4680: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x2d4680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x2d4684: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x2d4684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4688: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2d4688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d468c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2d468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4690: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x2d4690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2d4694: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2d4694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4698: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x2d4698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2d469c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2d469cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d46a0: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x2d46a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2d46a4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2d46a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d46a8: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x2d46a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d46ac: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x2d46acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d46b0: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x2d46b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d46b4: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x2d46b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d46b8: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x2d46b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d46bc: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x2d46bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d46c0: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x2d46c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d46c4: 0xc0c48da  jal         func_312368
    ctx->pc = 0x2D46C4u;
    SET_GPR_U32(ctx, 31, 0x2D46CCu);
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x2D46C4u, 0x2D46CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46CCu;
label_2d46cc:
    // 0x2d46cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D46CCu;
    {
        const bool branch_taken_0x2d46cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D46CCu;
        // 0x2d46d0: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46cc) {
            ctx->pc = 0x2D46F8u;
            goto label_2d46f8;
        }
    }
    ctx->pc = 0x2D46D4u;
label_2d46d4:
    // 0x2d46d4: 0xc0b50fe  jal         func_2D43F8
    ctx->pc = 0x2D46D4u;
    SET_GPR_U32(ctx, 31, 0x2D46DCu);
    ctx->pc = 0x2D46D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D46D4u;
    // 0x2d46d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D43F8u, 0x2D46D4u, 0x2D46DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46DCu;
label_2d46dc:
    // 0x2d46dc: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x2d46dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x2d46e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d46e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46e4: 0x24a51d50  addiu       $a1, $a1, 0x1D50
    ctx->pc = 0x2d46e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7504));
    // 0x2d46e8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2d46e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2d46ec: 0xc0c8a76  jal         func_3229D8
    ctx->pc = 0x2D46ECu;
    SET_GPR_U32(ctx, 31, 0x2D46F4u);
    ctx->pc = 0x2D46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D46ECu;
    // 0x2d46f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3229D8u, 0x2D46ECu, 0x2D46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46F4u;
label_2d46f4:
    // 0x2d46f4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2d46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2d46f8:
    // 0x2d46f8: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x2d46f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x2d46fc: 0xc0c9ab0  jal         func_326AC0
    ctx->pc = 0x2D46FCu;
    SET_GPR_U32(ctx, 31, 0x2D4704u);
    ctx->pc = 0x2D4700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D46FCu;
    // 0x2d4700: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326AC0u, 0x2D46FCu, 0x2D4704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4704u;
label_2d4704:
    // 0x2d4704: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2d4704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4708: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2d4708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d470c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2d470cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4710: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d4710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d4714: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4714u;
        // 0x2d4718: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D471Cu;
    // 0x2d471c: 0x0  nop
    ctx->pc = 0x2d471cu;
    // NOP
    ctx->pc = 0x2d4720u;
}
