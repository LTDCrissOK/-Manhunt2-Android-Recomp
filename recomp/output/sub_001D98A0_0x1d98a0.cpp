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

// Function: sub_001D98A0
// Address: 0x1d98a0 - 0x1d9f88
void sub_001D98A0_0x1d98a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D98A0_0x1d98a0");
#endif

    switch (ctx->pc) {
        case 0x1d992cu: goto label_1d992c;
        case 0x1d9960u: goto label_1d9960;
        case 0x1d9a40u: goto label_1d9a40;
        case 0x1d9a4cu: goto label_1d9a4c;
        case 0x1d9a88u: goto label_1d9a88;
        case 0x1d9b70u: goto label_1d9b70;
        case 0x1d9b7cu: goto label_1d9b7c;
        case 0x1d9c28u: goto label_1d9c28;
        case 0x1d9d04u: goto label_1d9d04;
        case 0x1d9d0cu: goto label_1d9d0c;
        case 0x1d9d40u: goto label_1d9d40;
        case 0x1d9d4cu: goto label_1d9d4c;
        case 0x1d9dd8u: goto label_1d9dd8;
        case 0x1d9e48u: goto label_1d9e48;
        case 0x1d9f38u: goto label_1d9f38;
        default: break;
    }

    ctx->pc = 0x1d98a0u;

    // 0x1d98a0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1d98a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1d98a4: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x1d98a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x1d98a8: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x1d98a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x1d98ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d98acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d98b0: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x1d98b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x1d98b4: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x1d98b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x1d98b8: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x1d98b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x1d98bc: 0xffb50118  sd          $s5, 0x118($sp)
    ctx->pc = 0x1d98bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 21));
    // 0x1d98c0: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x1d98c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x1d98c4: 0xffb70128  sd          $s7, 0x128($sp)
    ctx->pc = 0x1d98c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 23));
    // 0x1d98c8: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x1d98c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x1d98cc: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x1d98ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x1d98d0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d98d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d98d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d98d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D98D8u;
    {
        const bool branch_taken_0x1d98d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98D8u;
        // 0x1d98dc: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98d8) {
            ctx->pc = 0x1D98E8u;
            goto label_1d98e8;
        }
    }
    ctx->pc = 0x1D98E0u;
    // 0x1d98e0: 0x1000019c  b           . + 4 + (0x19C << 2)
    ctx->pc = 0x1D98E0u;
    {
        const bool branch_taken_0x1d98e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98E0u;
        // 0x1d98e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98e0) {
            ctx->pc = 0x1D9F54u;
            goto label_1d9f54;
        }
    }
    ctx->pc = 0x1D98E8u;
label_1d98e8:
    // 0x1d98e8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1d98ec: 0xc481d7e8  lwc1        $f1, -0x2818($a0)
    ctx->pc = 0x1d98ecu;
    { uint32_t bits = FAST_READ32(0x45D7E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d98f0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1d98f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d98f4: 0xc460d7e4  lwc1        $f0, -0x281C($v1)
    ctx->pc = 0x1d98f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d98f8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1d98f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d98fc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1d98fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1d9900: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d9900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9904: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1d9904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d9908: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1d9908u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d990c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d990cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d9910: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d9910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d9914: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1d9914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d9918: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d9918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d991c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1d991cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1d9920: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d9920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1d9924: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D9924u;
    SET_GPR_U32(ctx, 31, 0x1D992Cu);
    ctx->pc = 0x1D9928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9924u;
    // 0x1d9928: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D9924u, 0x1D992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D992Cu;
label_1d992c:
    // 0x1d992c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d9930: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x1d9930u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d9934: 0x27b400d0  addiu       $s4, $sp, 0xD0
    ctx->pc = 0x1d9934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d9938: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1d9938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d993c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1D993Cu;
    {
        const bool branch_taken_0x1d993c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D993Cu;
        // 0x1d9940: 0x27b600e0  addiu       $s6, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d993c) {
            ctx->pc = 0x1D9A1Cu;
            goto label_1d9a1c;
        }
    }
    ctx->pc = 0x1D9944u;
    // 0x1d9944: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d9944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d9948: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1D9948u;
    {
        const bool branch_taken_0x1d9948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9948u;
        // 0x1d994c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9948) {
            ctx->pc = 0x1D9A1Cu;
            goto label_1d9a1c;
        }
    }
    ctx->pc = 0x1D9950u;
    // 0x1d9950: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1d9950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d9954: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1d9954u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d9958: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1d9958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d995c: 0x0  nop
    ctx->pc = 0x1d995cu;
    // NOP
label_1d9960:
    // 0x1d9960: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1d9960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d9964: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d9964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d9968: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d9968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d996c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9970: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1d9970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9974: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1d9974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9978: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d997c: 0x0  nop
    ctx->pc = 0x1d997cu;
    // NOP
    // 0x1d9980: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9980u;
    {
        const bool branch_taken_0x1d9980 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9980) {
            ctx->pc = 0x1D9984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9980u;
            // 0x1d9984: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9988u;
            goto label_1d9988;
        }
    }
    ctx->pc = 0x1D9988u;
label_1d9988:
    // 0x1d9988: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1d9988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d998c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1d998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9990: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9994: 0x0  nop
    ctx->pc = 0x1d9994u;
    // NOP
    // 0x1d9998: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9998u;
    {
        const bool branch_taken_0x1d9998 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9998) {
            ctx->pc = 0x1D999Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9998u;
            // 0x1d999c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D99A0u;
            goto label_1d99a0;
        }
    }
    ctx->pc = 0x1D99A0u;
label_1d99a0:
    // 0x1d99a0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1d99a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d99a4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1d99a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d99a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d99a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d99ac: 0x0  nop
    ctx->pc = 0x1d99acu;
    // NOP
    // 0x1d99b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D99B0u;
    {
        const bool branch_taken_0x1d99b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d99b0) {
            ctx->pc = 0x1D99B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D99B0u;
            // 0x1d99b4: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D99B8u;
            goto label_1d99b8;
        }
    }
    ctx->pc = 0x1D99B8u;
label_1d99b8:
    // 0x1d99b8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1d99b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d99bc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d99bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d99c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d99c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d99c4: 0x0  nop
    ctx->pc = 0x1d99c4u;
    // NOP
    // 0x1d99c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D99C8u;
    {
        const bool branch_taken_0x1d99c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d99c8) {
            ctx->pc = 0x1D99CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D99C8u;
            // 0x1d99cc: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D99D0u;
            goto label_1d99d0;
        }
    }
    ctx->pc = 0x1D99D0u;
label_1d99d0:
    // 0x1d99d0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1d99d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d99d4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1d99d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d99d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d99d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d99dc: 0x0  nop
    ctx->pc = 0x1d99dcu;
    // NOP
    // 0x1d99e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D99E0u;
    {
        const bool branch_taken_0x1d99e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d99e0) {
            ctx->pc = 0x1D99E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D99E0u;
            // 0x1d99e4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D99E8u;
            goto label_1d99e8;
        }
    }
    ctx->pc = 0x1D99E8u;
label_1d99e8:
    // 0x1d99e8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1d99e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d99ec: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1d99ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d99f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d99f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d99f4: 0x0  nop
    ctx->pc = 0x1d99f4u;
    // NOP
    // 0x1d99f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D99F8u;
    {
        const bool branch_taken_0x1d99f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d99f8) {
            ctx->pc = 0x1D99FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D99F8u;
            // 0x1d99fc: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9A00u;
            goto label_1d9a00;
        }
    }
    ctx->pc = 0x1D9A00u;
label_1d9a00:
    // 0x1d9a00: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1d9a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d9a04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d9a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d9a08: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1d9a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9a0c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1d9a10: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1d9a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d9a14: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D9A14u;
    {
        const bool branch_taken_0x1d9a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A14u;
        // 0x1d9a18: 0x62900  sll         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a14) {
            ctx->pc = 0x1D9960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9960;
        }
    }
    ctx->pc = 0x1D9A1Cu;
label_1d9a1c:
    // 0x1d9a1c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d9a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d9a20: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1d9a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d9a24: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1D9A24u;
    {
        const bool branch_taken_0x1d9a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A24u;
        // 0x1d9a28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a24) {
            ctx->pc = 0x1D9B50u;
            goto label_1d9b50;
        }
    }
    ctx->pc = 0x1D9A2Cu;
    // 0x1d9a2c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d9a30: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1D9A30u;
    {
        const bool branch_taken_0x1d9a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A30u;
        // 0x1d9a34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a30) {
            ctx->pc = 0x1D9B50u;
            goto label_1d9b50;
        }
    }
    ctx->pc = 0x1D9A38u;
    // 0x1d9a38: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1d9a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d9a3c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1d9a40:
    // 0x1d9a40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a44: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1D9A44u;
    SET_GPR_U32(ctx, 31, 0x1D9A4Cu);
    ctx->pc = 0x1D9A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A44u;
    // 0x1d9a48: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1D9A44u, 0x1D9A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A4Cu;
label_1d9a4c:
    // 0x1d9a4c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1d9a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9a50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d9a54: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1d9a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d9a58: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d9a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9a5c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1d9a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1d9a60: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1d9a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9a64: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1d9a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1d9a68: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1d9a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9a6c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1d9a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1d9a70: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1d9a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9a74: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d9a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9a78: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d9a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d9a7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a80: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1D9A80u;
    SET_GPR_U32(ctx, 31, 0x1D9A88u);
    ctx->pc = 0x1D9A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A80u;
    // 0x1d9a84: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1D9A80u, 0x1D9A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A88u;
label_1d9a88:
    // 0x1d9a88: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x1d9a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9a8c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9a90: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1d9a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9a94: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d9a94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1d9a98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9a9c: 0x0  nop
    ctx->pc = 0x1d9a9cu;
    // NOP
    // 0x1d9aa0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9AA0u;
    {
        const bool branch_taken_0x1d9aa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9aa0) {
            ctx->pc = 0x1D9AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9AA0u;
            // 0x1d9aa4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9AA8u;
            goto label_1d9aa8;
        }
    }
    ctx->pc = 0x1D9AA8u;
label_1d9aa8:
    // 0x1d9aa8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1d9aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9aac: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1d9aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9ab0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d9ab0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1d9ab4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9ab8: 0x0  nop
    ctx->pc = 0x1d9ab8u;
    // NOP
    // 0x1d9abc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9ABCu;
    {
        const bool branch_taken_0x1d9abc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9abc) {
            ctx->pc = 0x1D9AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9ABCu;
            // 0x1d9ac0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9AC4u;
            goto label_1d9ac4;
        }
    }
    ctx->pc = 0x1D9AC4u;
label_1d9ac4:
    // 0x1d9ac4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d9ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9ac8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1d9ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9acc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d9accu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1d9ad0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9ad4: 0x0  nop
    ctx->pc = 0x1d9ad4u;
    // NOP
    // 0x1d9ad8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9AD8u;
    {
        const bool branch_taken_0x1d9ad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9ad8) {
            ctx->pc = 0x1D9ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9AD8u;
            // 0x1d9adc: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9AE0u;
            goto label_1d9ae0;
        }
    }
    ctx->pc = 0x1D9AE0u;
label_1d9ae0:
    // 0x1d9ae0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9ae4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1d9ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9ae8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d9ae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d9aec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9af0: 0x0  nop
    ctx->pc = 0x1d9af0u;
    // NOP
    // 0x1d9af4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9AF4u;
    {
        const bool branch_taken_0x1d9af4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9af4) {
            ctx->pc = 0x1D9AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9AF4u;
            // 0x1d9af8: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9AFCu;
            goto label_1d9afc;
        }
    }
    ctx->pc = 0x1D9AFCu;
label_1d9afc:
    // 0x1d9afc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1d9afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9b00: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1d9b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9b04: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d9b04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d9b08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9b0c: 0x0  nop
    ctx->pc = 0x1d9b0cu;
    // NOP
    // 0x1d9b10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9B10u;
    {
        const bool branch_taken_0x1d9b10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9b10) {
            ctx->pc = 0x1D9B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9B10u;
            // 0x1d9b14: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9B18u;
            goto label_1d9b18;
        }
    }
    ctx->pc = 0x1D9B18u;
label_1d9b18:
    // 0x1d9b18: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d9b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9b1c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1d9b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9b20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d9b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d9b24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9b28: 0x0  nop
    ctx->pc = 0x1d9b28u;
    // NOP
    // 0x1d9b2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9B2Cu;
    {
        const bool branch_taken_0x1d9b2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9b2c) {
            ctx->pc = 0x1D9B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9B2Cu;
            // 0x1d9b30: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9B34u;
            goto label_1d9b34;
        }
    }
    ctx->pc = 0x1D9B34u;
label_1d9b34:
    // 0x1d9b34: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d9b38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d9b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d9b3c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1d9b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d9b40: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d9b44: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1d9b44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d9b48: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1D9B48u;
    {
        const bool branch_taken_0x1d9b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B48u;
        // 0x1d9b4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b48) {
            ctx->pc = 0x1D9A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9a40;
        }
    }
    ctx->pc = 0x1D9B50u;
label_1d9b50:
    // 0x1d9b50: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1d9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1d9b54: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x1D9B54u;
    {
        const bool branch_taken_0x1d9b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b54) {
            ctx->pc = 0x1D9B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9B54u;
            // 0x1d9b58: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9CE4u;
            goto label_1d9ce4;
        }
    }
    ctx->pc = 0x1D9B5Cu;
    // 0x1d9b5c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d9b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d9b60: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1D9B60u;
    {
        const bool branch_taken_0x1d9b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B60u;
        // 0x1d9b64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b60) {
            ctx->pc = 0x1D9CE0u;
            goto label_1d9ce0;
        }
    }
    ctx->pc = 0x1D9B68u;
    // 0x1d9b68: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d9b6c: 0x0  nop
    ctx->pc = 0x1d9b6cu;
    // NOP
label_1d9b70:
    // 0x1d9b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9b74: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1D9B74u;
    SET_GPR_U32(ctx, 31, 0x1D9B7Cu);
    ctx->pc = 0x1D9B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B74u;
    // 0x1d9b78: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1D9B74u, 0x1D9B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B7Cu;
label_1d9b7c:
    // 0x1d9b7c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d9b80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d9b80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9b84: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d9b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9b88: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1d9b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9b8c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1d9b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9b90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9b94: 0x0  nop
    ctx->pc = 0x1d9b94u;
    // NOP
    // 0x1d9b98: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9B98u;
    {
        const bool branch_taken_0x1d9b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9b98) {
            ctx->pc = 0x1D9B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9B98u;
            // 0x1d9b9c: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BA0u;
            goto label_1d9ba0;
        }
    }
    ctx->pc = 0x1D9BA0u;
label_1d9ba0:
    // 0x1d9ba0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1d9ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9ba4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1d9ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9ba8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9bac: 0x0  nop
    ctx->pc = 0x1d9bacu;
    // NOP
    // 0x1d9bb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9BB0u;
    {
        const bool branch_taken_0x1d9bb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9bb0) {
            ctx->pc = 0x1D9BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9BB0u;
            // 0x1d9bb4: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BB8u;
            goto label_1d9bb8;
        }
    }
    ctx->pc = 0x1D9BB8u;
label_1d9bb8:
    // 0x1d9bb8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1d9bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9bbc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1d9bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9bc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9bc4: 0x0  nop
    ctx->pc = 0x1d9bc4u;
    // NOP
    // 0x1d9bc8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9BC8u;
    {
        const bool branch_taken_0x1d9bc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9bc8) {
            ctx->pc = 0x1D9BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9BC8u;
            // 0x1d9bcc: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BD0u;
            goto label_1d9bd0;
        }
    }
    ctx->pc = 0x1D9BD0u;
label_1d9bd0:
    // 0x1d9bd0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1d9bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9bd4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d9bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9bd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9bdc: 0x0  nop
    ctx->pc = 0x1d9bdcu;
    // NOP
    // 0x1d9be0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9BE0u;
    {
        const bool branch_taken_0x1d9be0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9be0) {
            ctx->pc = 0x1D9BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9BE0u;
            // 0x1d9be4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D9BE8u;
label_1d9be8:
    // 0x1d9be8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1d9be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9bec: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1d9becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9bf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9bf4: 0x0  nop
    ctx->pc = 0x1d9bf4u;
    // NOP
    // 0x1d9bf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9BF8u;
    {
        const bool branch_taken_0x1d9bf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9bf8) {
            ctx->pc = 0x1D9BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9BF8u;
            // 0x1d9bfc: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C00u;
            goto label_1d9c00;
        }
    }
    ctx->pc = 0x1D9C00u;
label_1d9c00:
    // 0x1d9c00: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1d9c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9c04: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1d9c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9c08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9c0c: 0x0  nop
    ctx->pc = 0x1d9c0cu;
    // NOP
    // 0x1d9c10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9C10u;
    {
        const bool branch_taken_0x1d9c10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9c10) {
            ctx->pc = 0x1D9C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9C10u;
            // 0x1d9c14: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C18u;
            goto label_1d9c18;
        }
    }
    ctx->pc = 0x1D9C18u;
label_1d9c18:
    // 0x1d9c18: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d9c1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c20: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1D9C20u;
    SET_GPR_U32(ctx, 31, 0x1D9C28u);
    ctx->pc = 0x1D9C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9C20u;
    // 0x1d9c24: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1D9C20u, 0x1D9C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9C28u;
label_1d9c28:
    // 0x1d9c28: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1d9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d9c2c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d9c2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9c30: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d9c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9c34: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1d9c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9c38: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1d9c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9c3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9c40: 0x0  nop
    ctx->pc = 0x1d9c40u;
    // NOP
    // 0x1d9c44: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9C44u;
    {
        const bool branch_taken_0x1d9c44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9c44) {
            ctx->pc = 0x1D9C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9C44u;
            // 0x1d9c48: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C4Cu;
            goto label_1d9c4c;
        }
    }
    ctx->pc = 0x1D9C4Cu;
label_1d9c4c:
    // 0x1d9c4c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1d9c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9c50: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1d9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9c54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9c58: 0x0  nop
    ctx->pc = 0x1d9c58u;
    // NOP
    // 0x1d9c5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9C5Cu;
    {
        const bool branch_taken_0x1d9c5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9c5c) {
            ctx->pc = 0x1D9C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9C5Cu;
            // 0x1d9c60: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C64u;
            goto label_1d9c64;
        }
    }
    ctx->pc = 0x1D9C64u;
label_1d9c64:
    // 0x1d9c64: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1d9c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9c68: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1d9c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9c6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9c70: 0x0  nop
    ctx->pc = 0x1d9c70u;
    // NOP
    // 0x1d9c74: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9C74u;
    {
        const bool branch_taken_0x1d9c74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9c74) {
            ctx->pc = 0x1D9C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9C74u;
            // 0x1d9c78: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C7Cu;
            goto label_1d9c7c;
        }
    }
    ctx->pc = 0x1D9C7Cu;
label_1d9c7c:
    // 0x1d9c7c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1d9c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9c80: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d9c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9c84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9c88: 0x0  nop
    ctx->pc = 0x1d9c88u;
    // NOP
    // 0x1d9c8c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9C8Cu;
    {
        const bool branch_taken_0x1d9c8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9c8c) {
            ctx->pc = 0x1D9C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9C8Cu;
            // 0x1d9c90: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C94u;
            goto label_1d9c94;
        }
    }
    ctx->pc = 0x1D9C94u;
label_1d9c94:
    // 0x1d9c94: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1d9c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9c98: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1d9c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9c9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9ca0: 0x0  nop
    ctx->pc = 0x1d9ca0u;
    // NOP
    // 0x1d9ca4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9CA4u;
    {
        const bool branch_taken_0x1d9ca4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9ca4) {
            ctx->pc = 0x1D9CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9CA4u;
            // 0x1d9ca8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9CACu;
            goto label_1d9cac;
        }
    }
    ctx->pc = 0x1D9CACu;
label_1d9cac:
    // 0x1d9cac: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1d9cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9cb0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1d9cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9cb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9cb8: 0x0  nop
    ctx->pc = 0x1d9cb8u;
    // NOP
    // 0x1d9cbc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9CBCu;
    {
        const bool branch_taken_0x1d9cbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9cbc) {
            ctx->pc = 0x1D9CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9CBCu;
            // 0x1d9cc0: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9CC4u;
            goto label_1d9cc4;
        }
    }
    ctx->pc = 0x1D9CC4u;
label_1d9cc4:
    // 0x1d9cc4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d9cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d9cc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d9cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d9ccc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1d9cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d9cd0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d9cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d9cd4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1d9cd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d9cd8: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1D9CD8u;
    {
        const bool branch_taken_0x1d9cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CD8u;
        // 0x1d9cdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9cd8) {
            ctx->pc = 0x1D9B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9b70;
        }
    }
    ctx->pc = 0x1D9CE0u;
label_1d9ce0:
    // 0x1d9ce0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1d9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1d9ce4:
    // 0x1d9ce4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d9ce4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ce8: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1d9ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9cec: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1d9cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d9cf0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d9cf4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1d9cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d9cf8: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1d9cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9cfc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D9CFCu;
    SET_GPR_U32(ctx, 31, 0x1D9D04u);
    ctx->pc = 0x1D9D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CFCu;
    // 0x1d9d00: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D9CFCu, 0x1D9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D04u;
label_1d9d04:
    // 0x1d9d04: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D9D04u;
    SET_GPR_U32(ctx, 31, 0x1D9D0Cu);
    ctx->pc = 0x1D9D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D04u;
    // 0x1d9d08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D9D04u, 0x1D9D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D0Cu;
label_1d9d0c:
    // 0x1d9d0c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1d9d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d9d10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d9d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d9d14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d9d18: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d9d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9d1c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1d9d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9d20: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d9d24: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d9d28: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d9d28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9d2c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1d9d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9d30: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1d9d30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9d34: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1d9d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d38: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1d9d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d9d3c: 0x0  nop
    ctx->pc = 0x1d9d3cu;
    // NOP
label_1d9d40:
    // 0x1d9d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d44: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D9D44u;
    SET_GPR_U32(ctx, 31, 0x1D9D4Cu);
    ctx->pc = 0x1D9D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D44u;
    // 0x1d9d48: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D9D44u, 0x1D9D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D4Cu;
label_1d9d4c:
    // 0x1d9d4c: 0x0  nop
    ctx->pc = 0x1d9d4cu;
    // NOP
    // 0x1d9d50: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9D50u;
    {
        const bool branch_taken_0x1d9d50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1D9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D50u;
        // 0x1d9d54: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d50) {
            ctx->pc = 0x1D9D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9d40;
        }
    }
    ctx->pc = 0x1D9D58u;
    // 0x1d9d58: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x1d9d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d9d5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d60: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1d9d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9d64: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1d9d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d9d68: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1d9d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9d6c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1d9d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9d70: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1d9d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d9d74: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x1d9d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d9d78: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1d9d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1d9d7c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1d9d7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1d9d80: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x1d9d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1d9d84: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x1d9d84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1d9d88: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x1d9d88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1d9d8c: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x1d9d8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1d9d90: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x1d9d90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1d9d94: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1d9d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1d9d98: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1d9d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1d9d9c: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x1d9d9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1d9da0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1d9da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1d9da4: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1d9da4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1d9da8: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x1d9da8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1d9dac: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1d9dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1d9db0: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1d9db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1d9db4: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x1d9db4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1d9db8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x1d9db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1d9dbc: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x1d9dbcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d9dc0: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x1d9dc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1d9dc4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x1d9dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1d9dc8: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x1d9dc8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1d9dcc: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x1d9dccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1d9dd0: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x1d9dd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1d9dd4: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x1d9dd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1d9dd8:
    // 0x1d9dd8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1d9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1d9ddc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d9ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9de0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1d9de0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9de4: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x1d9de4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d9de8: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x1d9de8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d9dec: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x1d9decu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d9df0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1d9df0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1d9df4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1d9df4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1d9df8: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1d9df8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1d9dfc: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1d9dfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d9e00: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d9e00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9e04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d9e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d9e08: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1d9e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d9e0c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D9E0Cu;
    {
        const bool branch_taken_0x1d9e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E0Cu;
        // 0x1d9e10: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e0c) {
            ctx->pc = 0x1D9DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9dd8;
        }
    }
    ctx->pc = 0x1D9E14u;
    // 0x1d9e14: 0xc6e0d7e4  lwc1        $f0, -0x281C($s7)
    ctx->pc = 0x1d9e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294957028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9e18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e1c: 0xc7c1d7e8  lwc1        $f1, -0x2818($fp)
    ctx->pc = 0x1d9e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294957032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9e20: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x1d9e20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e24: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1d9e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1d9e28: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1d9e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1d9e2c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d9e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d9e30: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x1d9e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x1d9e34: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x1d9e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1d9e38: 0xe6c10008  swc1        $f1, 0x8($s6)
    ctx->pc = 0x1d9e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x1d9e3c: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x1d9e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x1d9e40: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x1d9e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x1d9e44: 0x0  nop
    ctx->pc = 0x1d9e44u;
    // NOP
label_1d9e48:
    // 0x1d9e48: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1d9e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9e4c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1d9e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9e50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9e50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9e54: 0x0  nop
    ctx->pc = 0x1d9e54u;
    // NOP
    // 0x1d9e58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9E58u;
    {
        const bool branch_taken_0x1d9e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E58u;
        // 0x1d9e5c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e58) {
            ctx->pc = 0x1D9E64u;
            goto label_1d9e64;
        }
    }
    ctx->pc = 0x1D9E60u;
    // 0x1d9e60: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1d9e60u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_1d9e64:
    // 0x1d9e64: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x1d9e64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1d9e68: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1d9e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9e6c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1d9e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9e70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9e74: 0x0  nop
    ctx->pc = 0x1d9e74u;
    // NOP
    // 0x1d9e78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9E78u;
    {
        const bool branch_taken_0x1d9e78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9e78) {
            ctx->pc = 0x1D9E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9E78u;
            // 0x1d9e7c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9E80u;
            goto label_1d9e80;
        }
    }
    ctx->pc = 0x1D9E80u;
label_1d9e80:
    // 0x1d9e80: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1d9e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1d9e84: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x1d9e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9e88: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1d9e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9e8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9e8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9e90: 0x0  nop
    ctx->pc = 0x1d9e90u;
    // NOP
    // 0x1d9e94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9E94u;
    {
        const bool branch_taken_0x1d9e94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9e94) {
            ctx->pc = 0x1D9E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9E94u;
            // 0x1d9e98: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9E9Cu;
            goto label_1d9e9c;
        }
    }
    ctx->pc = 0x1D9E9Cu;
label_1d9e9c:
    // 0x1d9e9c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1d9e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1d9ea0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1d9ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9ea4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1d9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9ea8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9eac: 0x0  nop
    ctx->pc = 0x1d9eacu;
    // NOP
    // 0x1d9eb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9EB0u;
    {
        const bool branch_taken_0x1d9eb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9eb0) {
            ctx->pc = 0x1D9EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9EB0u;
            // 0x1d9eb4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9EB8u;
            goto label_1d9eb8;
        }
    }
    ctx->pc = 0x1D9EB8u;
label_1d9eb8:
    // 0x1d9eb8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1d9eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1d9ebc: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1d9ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9ec0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d9ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9ec4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9ec8: 0x0  nop
    ctx->pc = 0x1d9ec8u;
    // NOP
    // 0x1d9ecc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9ECCu;
    {
        const bool branch_taken_0x1d9ecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9ecc) {
            ctx->pc = 0x1D9ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9ECCu;
            // 0x1d9ed0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9ED4u;
            goto label_1d9ed4;
        }
    }
    ctx->pc = 0x1D9ED4u;
label_1d9ed4:
    // 0x1d9ed4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1d9ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1d9ed8: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1d9ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9edc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d9edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9ee0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d9ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9ee4: 0x0  nop
    ctx->pc = 0x1d9ee4u;
    // NOP
    // 0x1d9ee8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9EE8u;
    {
        const bool branch_taken_0x1d9ee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9ee8) {
            ctx->pc = 0x1D9EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9EE8u;
            // 0x1d9eec: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9EF0u;
            goto label_1d9ef0;
        }
    }
    ctx->pc = 0x1D9EF0u;
label_1d9ef0:
    // 0x1d9ef0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d9ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d9ef4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d9ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1d9ef8: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1d9ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d9efc: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D9EFCu;
    {
        const bool branch_taken_0x1d9efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EFCu;
        // 0x1d9f00: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9efc) {
            ctx->pc = 0x1D9E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9e48;
        }
    }
    ctx->pc = 0x1D9F04u;
    // 0x1d9f04: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1d9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1d9f08: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d9f0c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1d9f0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d9f10: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1d9f10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9f14: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1d9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1d9f18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d9f1c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1d9f1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1d9f20: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1d9f20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9f24: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d9f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f28: 0x52a2000a  beql        $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D9F28u;
    {
        const bool branch_taken_0x1d9f28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9f28) {
            ctx->pc = 0x1D9F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9F28u;
            // 0x1d9f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9F54u;
            goto label_1d9f54;
        }
    }
    ctx->pc = 0x1D9F30u;
    // 0x1d9f30: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x1d9f30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f34: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1d9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1d9f38:
    // 0x1d9f38: 0x0  nop
    ctx->pc = 0x1d9f38u;
    // NOP
    // 0x1d9f3c: 0x0  nop
    ctx->pc = 0x1d9f3cu;
    // NOP
    // 0x1d9f40: 0x0  nop
    ctx->pc = 0x1d9f40u;
    // NOP
    // 0x1d9f44: 0x0  nop
    ctx->pc = 0x1d9f44u;
    // NOP
    // 0x1d9f48: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9F48u;
    {
        const bool branch_taken_0x1d9f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D9F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F48u;
        // 0x1d9f4c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f48) {
            ctx->pc = 0x1D9F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9f38;
        }
    }
    ctx->pc = 0x1D9F50u;
    // 0x1d9f50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9f54:
    // 0x1d9f54: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x1d9f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d9f58: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x1d9f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d9f5c: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x1d9f5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d9f60: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x1d9f60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d9f64: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x1d9f64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d9f68: 0xdfb50118  ld          $s5, 0x118($sp)
    ctx->pc = 0x1d9f68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1d9f6c: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x1d9f6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d9f70: 0xdfb70128  ld          $s7, 0x128($sp)
    ctx->pc = 0x1d9f70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1d9f74: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x1d9f74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d9f78: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x1d9f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1d9f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F7Cu;
        // 0x1d9f80: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9F84u;
    // 0x1d9f84: 0x0  nop
    ctx->pc = 0x1d9f84u;
    // NOP
    ctx->pc = 0x1d9f88u;
}
