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

// Function: sub_001F4448
// Address: 0x1f4448 - 0x1f4858
void sub_001F4448_0x1f4448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4448_0x1f4448");
#endif

    switch (ctx->pc) {
        case 0x1f4548u: goto label_1f4548;
        case 0x1f4578u: goto label_1f4578;
        case 0x1f45ccu: goto label_1f45cc;
        case 0x1f45fcu: goto label_1f45fc;
        case 0x1f4614u: goto label_1f4614;
        case 0x1f462cu: goto label_1f462c;
        case 0x1f4654u: goto label_1f4654;
        case 0x1f467cu: goto label_1f467c;
        case 0x1f469cu: goto label_1f469c;
        case 0x1f4700u: goto label_1f4700;
        case 0x1f4720u: goto label_1f4720;
        case 0x1f4734u: goto label_1f4734;
        case 0x1f4748u: goto label_1f4748;
        case 0x1f47f4u: goto label_1f47f4;
        default: break;
    }

    ctx->pc = 0x1f4448u;

    // 0x1f4448: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f4448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f444c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f4450: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x1f4450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x1f4454: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1f4454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1f4458: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x1f4458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f445c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1f445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1f4460: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1f4460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1f4464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4468: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1f4468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1f446c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f446cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f4470: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1f4470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x1f4474: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x1f4474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1f4478: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1f4478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1f447c: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x1f447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x1f4480: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1f4480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1f4484: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1f4484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1f4488: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x1f4488u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1f448c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1f448cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1f4490: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1f4490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f4494: 0x90e24fb8  lbu         $v0, 0x4FB8($a3)
    ctx->pc = 0x1f4494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20408)));
    // 0x1f4498: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x1F4498u;
    {
        const bool branch_taken_0x1f4498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4498u;
        // 0x1f449c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4498) {
            ctx->pc = 0x1F4818u;
            goto label_1f4818;
        }
    }
    ctx->pc = 0x1F44A0u;
    // 0x1f44a0: 0x8c444f94  lw          $a0, 0x4F94($v0)
    ctx->pc = 0x1f44a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20372)));
    // 0x1f44a4: 0x508000dd  beql        $a0, $zero, . + 4 + (0xDD << 2)
    ctx->pc = 0x1F44A4u;
    {
        const bool branch_taken_0x1f44a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f44a4) {
            ctx->pc = 0x1F44A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F44A4u;
            // 0x1f44a8: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F481Cu;
            goto label_1f481c;
        }
    }
    ctx->pc = 0x1F44ACu;
    // 0x1f44ac: 0x8c8500b8  lw          $a1, 0xB8($a0)
    ctx->pc = 0x1f44acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1f44b0: 0x50a000da  beql        $a1, $zero, . + 4 + (0xDA << 2)
    ctx->pc = 0x1F44B0u;
    {
        const bool branch_taken_0x1f44b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f44b0) {
            ctx->pc = 0x1F44B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F44B0u;
            // 0x1f44b4: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F481Cu;
            goto label_1f481c;
        }
    }
    ctx->pc = 0x1F44B8u;
    // 0x1f44b8: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x1f44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1f44bc: 0x8cb30220  lw          $s3, 0x220($a1)
    ctx->pc = 0x1f44bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x1f44c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f44c4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1f44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1f44c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f44c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f44cc: 0xfa010130  sqc2        $vf1, 0x130($s0)
    ctx->pc = 0x1f44ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f44d0: 0x8c820234  lw          $v0, 0x234($a0)
    ctx->pc = 0x1f44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x1f44d4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F44D4u;
    {
        const bool branch_taken_0x1f44d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f44d4) {
            ctx->pc = 0x1F44D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F44D4u;
            // 0x1f44d8: 0x90e74fb8  lbu         $a3, 0x4FB8($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F450Cu;
            goto label_1f450c;
        }
    }
    ctx->pc = 0x1F44DCu;
    // 0x1f44dc: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x1f44dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1f44e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f44e4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1f44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1f44e8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f44e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f44ec: 0xfa010130  sqc2        $vf1, 0x130($s0)
    ctx->pc = 0x1f44ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f44f0: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x1f44f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f44f4: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x1f44f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x1f44f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f44f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f44fc: 0x0  nop
    ctx->pc = 0x1f44fcu;
    // NOP
    // 0x1f4500: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f4500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f4504: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x1f4504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x1f4508: 0x90e74fb8  lbu         $a3, 0x4FB8($a3)
    ctx->pc = 0x1f4508u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 20408)));
label_1f450c:
    // 0x1f450c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4510: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1f4510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1f4514: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x1f4514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x1f4518: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1f4518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f451c: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1F451Cu;
    {
        const bool branch_taken_0x1f451c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F451Cu;
        // 0x1f4520: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f451c) {
            ctx->pc = 0x1F4818u;
            goto label_1f4818;
        }
    }
    ctx->pc = 0x1F4524u;
    // 0x1f4524: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f4524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4528: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f4528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f452c: 0x26174fa0  addiu       $s7, $s0, 0x4FA0
    ctx->pc = 0x1f452cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 20384));
    // 0x1f4530: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x1f4530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
    // 0x1f4534: 0x26164fa8  addiu       $s6, $s0, 0x4FA8
    ctx->pc = 0x1f4534u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 20392));
    // 0x1f4538: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x1f4538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
    // 0x1f453c: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1f453cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1f4540: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f4540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f4544: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1f4544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1f4548:
    // 0x1f4548: 0x4a040  sll         $s4, $a0, 1
    ctx->pc = 0x1f4548u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f454c: 0x4a880  sll         $s5, $a0, 2
    ctx->pc = 0x1f454cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f4550: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1f4550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1f4554: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x1f4554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1f4558: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f4558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f455c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1f455cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f4560: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1f4560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1f4564: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1f4564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1f4568: 0x2c3f021  addu        $fp, $s6, $v1
    ctx->pc = 0x1f4568u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1f456c: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x1f456cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x1f4570: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1f4570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f4574: 0x0  nop
    ctx->pc = 0x1f4574u;
    // NOP
label_1f4578:
    // 0x1f4578: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1f4578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f457c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1f457cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f4580: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x1f4580u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f4584: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F4584u;
    {
        const bool branch_taken_0x1f4584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4584u;
        // 0x1f4588: 0xe7b6003c  swc1        $f22, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4584) {
            ctx->pc = 0x1F4604u;
            goto label_1f4604;
        }
    }
    ctx->pc = 0x1F458Cu;
    // 0x1f458c: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x1f458cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1f4590: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4590u;
    {
        const bool branch_taken_0x1f4590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4590u;
        // 0x1f4594: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4590) {
            ctx->pc = 0x1F45A8u;
            goto label_1f45a8;
        }
    }
    ctx->pc = 0x1F4598u;
    // 0x1f4598: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F4598u;
    {
        const bool branch_taken_0x1f4598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4598u;
        // 0x1f459c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4598) {
            ctx->pc = 0x1F45D4u;
            goto label_1f45d4;
        }
    }
    ctx->pc = 0x1F45A0u;
    // 0x1f45a0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1F45A0u;
    {
        const bool branch_taken_0x1f45a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f45a0) {
            ctx->pc = 0x1F47F8u;
            goto label_1f47f8;
        }
    }
    ctx->pc = 0x1F45A8u;
label_1f45a8:
    // 0x1f45a8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1f45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f45ac: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F45ACu;
    {
        const bool branch_taken_0x1f45ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45ACu;
        // 0x1f45b0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f45ac) {
            ctx->pc = 0x1F461Cu;
            goto label_1f461c;
        }
    }
    ctx->pc = 0x1F45B4u;
    // 0x1f45b4: 0x14650090  bne         $v1, $a1, . + 4 + (0x90 << 2)
    ctx->pc = 0x1F45B4u;
    {
        const bool branch_taken_0x1f45b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45B4u;
        // 0x1f45b8: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f45b4) {
            ctx->pc = 0x1F47F8u;
            goto label_1f47f8;
        }
    }
    ctx->pc = 0x1F45BCu;
    // 0x1f45bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f45bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f45c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45c4: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x1F45C4u;
    SET_GPR_U32(ctx, 31, 0x1F45CCu);
    ctx->pc = 0x1F45C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F45C4u;
    // 0x1f45c8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x1F45C4u, 0x1F45CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F45CCu;
label_1f45cc:
    // 0x1f45cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F45CCu;
    {
        const bool branch_taken_0x1f45cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f45cc) {
            ctx->pc = 0x1F462Cu;
            goto label_1f462c;
        }
    }
    ctx->pc = 0x1F45D4u;
label_1f45d4:
    // 0x1f45d4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1f45d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f45d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f45d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f45dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45e0: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x1f45e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1f45e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f45e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f45e8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1f45e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f45ec: 0x27a80038  addiu       $t0, $sp, 0x38
    ctx->pc = 0x1f45ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1f45f0: 0x27a9003c  addiu       $t1, $sp, 0x3C
    ctx->pc = 0x1f45f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1f45f4: 0xc07d216  jal         func_1F4858
    ctx->pc = 0x1F45F4u;
    SET_GPR_U32(ctx, 31, 0x1F45FCu);
    ctx->pc = 0x1F45F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F45F4u;
    // 0x1f45f8: 0x27aa0030  addiu       $t2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4858u, 0x1F45F4u, 0x1F45FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F45FCu;
label_1f45fc:
    // 0x1f45fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F45FCu;
    {
        const bool branch_taken_0x1f45fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f45fc) {
            ctx->pc = 0x1F462Cu;
            goto label_1f462c;
        }
    }
    ctx->pc = 0x1F4604u;
label_1f4604:
    // 0x1f4604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4608: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f460c: 0xc07d274  jal         func_1F49D0
    ctx->pc = 0x1F460Cu;
    SET_GPR_U32(ctx, 31, 0x1F4614u);
    ctx->pc = 0x1F4610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F460Cu;
    // 0x1f4610: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F49D0u, 0x1F460Cu, 0x1F4614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4614u;
label_1f4614:
    // 0x1f4614: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4614u;
    {
        const bool branch_taken_0x1f4614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4614) {
            ctx->pc = 0x1F462Cu;
            goto label_1f462c;
        }
    }
    ctx->pc = 0x1F461Cu;
label_1f461c:
    // 0x1f461c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f461cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4620: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4624: 0xc07d2c6  jal         func_1F4B18
    ctx->pc = 0x1F4624u;
    SET_GPR_U32(ctx, 31, 0x1F462Cu);
    ctx->pc = 0x1F4628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4624u;
    // 0x1f4628: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B18u, 0x1F4624u, 0x1F462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F462Cu;
label_1f462c:
    // 0x1f462c: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1F462Cu;
    {
        const bool branch_taken_0x1f462c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F462Cu;
        // 0x1f4630: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f462c) {
            ctx->pc = 0x1F47F4u;
            goto label_1f47f4;
        }
    }
    ctx->pc = 0x1F4634u;
    // 0x1f4634: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f4634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f4638: 0xa20200fc  sb          $v0, 0xFC($s0)
    ctx->pc = 0x1f4638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f463c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f463cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f4640: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1f4640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1f4644: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f4644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4648: 0x24449c38  addiu       $a0, $v0, -0x63C8
    ctx->pc = 0x1f4648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941752));
    // 0x1f464c: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F464Cu;
    SET_GPR_U32(ctx, 31, 0x1F4654u);
    ctx->pc = 0x1F4650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F464Cu;
    // 0x1f4650: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F464Cu, 0x1F4654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4654u;
label_1f4654:
    // 0x1f4654: 0x26120130  addiu       $s2, $s0, 0x130
    ctx->pc = 0x1f4654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1f4658: 0x93a30029  lbu         $v1, 0x29($sp)
    ctx->pc = 0x1f4658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f465c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4660: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f4660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4664: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f4664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4668: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1f4668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f466c: 0x0  nop
    ctx->pc = 0x1f466cu;
    // NOP
    // 0x1f4670: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1f4670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1f4674: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F4674u;
    SET_GPR_U32(ctx, 31, 0x1F467Cu);
    ctx->pc = 0x1F4678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4674u;
    // 0x1f4678: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F4674u, 0x1F467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F467Cu;
label_1f467c:
    // 0x1f467c: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x1f467cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1f4680: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f4680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4684: 0x0  nop
    ctx->pc = 0x1f4684u;
    // NOP
    // 0x1f4688: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
    ctx->pc = 0x1F4688u;
    {
        const bool branch_taken_0x1f4688 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4688u;
        // 0x1f468c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4688) {
            ctx->pc = 0x1F47F4u;
            goto label_1f47f4;
        }
    }
    ctx->pc = 0x1F4690u;
    // 0x1f4690: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f4690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f4694: 0xc07bc8c  jal         func_1EF230
    ctx->pc = 0x1F4694u;
    SET_GPR_U32(ctx, 31, 0x1F469Cu);
    ctx->pc = 0x1F4698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4694u;
    // 0x1f4698: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F4694u, 0x1F469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F469Cu;
label_1f469c:
    // 0x1f469c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1f469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1f46a0: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x1f46a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f46a4: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x1f46a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f46a8: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x1f46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1f46ac: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1f46acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f46b0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1f46b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f46b4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1f46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f46b8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F46B8u;
    {
        const bool branch_taken_0x1f46b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46B8u;
        // 0x1f46bc: 0x93b10028  lbu         $s1, 0x28($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f46b8) {
            ctx->pc = 0x1F46E8u;
            goto label_1f46e8;
        }
    }
    ctx->pc = 0x1F46C0u;
    // 0x1f46c0: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x1f46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1f46c4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1f46c4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f46c8: 0x0  nop
    ctx->pc = 0x1f46c8u;
    // NOP
    // 0x1f46cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f46ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f46d0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1f46d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1f46d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f46d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f46d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f46d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f46dc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f46dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f46e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f46e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f46e4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1f46e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f46e8:
    // 0x1f46e8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1f46e8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f46ec: 0x0  nop
    ctx->pc = 0x1f46ecu;
    // NOP
    // 0x1f46f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f46f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f46f4: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x1f46f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f46f8: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x1F46F8u;
    SET_GPR_U32(ctx, 31, 0x1F4700u);
    ctx->pc = 0x1F46FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F46F8u;
    // 0x1f46fc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1F46F8u, 0x1F4700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4700u;
label_1f4700:
    // 0x1f4700: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f4700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f4704: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f4704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f4708: 0xc60d0110  lwc1        $f13, 0x110($s0)
    ctx->pc = 0x1f4708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f470c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f470cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4710: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f4710u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f4714: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1f4714u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4718: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F4718u;
    SET_GPR_U32(ctx, 31, 0x1F4720u);
    ctx->pc = 0x1F471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4718u;
    // 0x1f471c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F4718u, 0x1F4720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4720u;
label_1f4720:
    // 0x1f4720: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f4720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4724: 0x0  nop
    ctx->pc = 0x1f4724u;
    // NOP
    // 0x1f4728: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f4728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f472c: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x1F472Cu;
    SET_GPR_U32(ctx, 31, 0x1F4734u);
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1F472Cu, 0x1F4734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4734u;
label_1f4734:
    // 0x1f4734: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f4734u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f4738: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f4738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f473c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f473cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4740: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1F4740u;
    SET_GPR_U32(ctx, 31, 0x1F4748u);
    ctx->pc = 0x1F4744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4740u;
    // 0x1f4744: 0xa202010c  sb          $v0, 0x10C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1F4740u, 0x1F4748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4748u;
label_1f4748:
    // 0x1f4748: 0x9203010c  lbu         $v1, 0x10C($s0)
    ctx->pc = 0x1f4748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1f474c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f4750: 0xa2020170  sb          $v0, 0x170($s0)
    ctx->pc = 0x1f4750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f4754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f4754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4758: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f4758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f475c: 0x0  nop
    ctx->pc = 0x1f475cu;
    // NOP
    // 0x1f4760: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f4760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f4764: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1f4764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1f4768: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x1f4768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1f476c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1f476cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1f4770: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f4770u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f4774: 0x2c840168  sltiu       $a0, $a0, 0x168
    ctx->pc = 0x1f4774u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)360) ? 1 : 0);
    // 0x1f4778: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1f4778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1f477c: 0xae050114  sw          $a1, 0x114($s0)
    ctx->pc = 0x1f477cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 5));
    // 0x1f4780: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f4780u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f4784: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f4784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f4788: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F4788u;
    {
        const bool branch_taken_0x1f4788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4788u;
        // 0x1f478c: 0xa202010c  sb          $v0, 0x10C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4788) {
            ctx->pc = 0x1F47CCu;
            goto label_1f47cc;
        }
    }
    ctx->pc = 0x1F4790u;
    // 0x1f4790: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f4790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4794: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1f4794u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4798: 0x0  nop
    ctx->pc = 0x1f4798u;
    // NOP
    // 0x1f479c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f479cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f47a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f47a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f47a4: 0x0  nop
    ctx->pc = 0x1f47a4u;
    // NOP
    // 0x1f47a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f47a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f47ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f47acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f47b0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1f47b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1f47b4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f47b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1f47b8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1f47b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f47bc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f47bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f47c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f47c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f47c4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1f47c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f47c8: 0xa203010c  sb          $v1, 0x10C($s0)
    ctx->pc = 0x1f47c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 3));
label_1f47cc:
    // 0x1f47cc: 0xa211011c  sb          $s1, 0x11C($s0)
    ctx->pc = 0x1f47ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f47d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f47d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f47d4: 0xe6140120  swc1        $f20, 0x120($s0)
    ctx->pc = 0x1f47d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f47d8: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f47d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f47dc: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f47dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f47e0: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f47e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f47e4: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f47e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f47e8: 0xae050124  sw          $a1, 0x124($s0)
    ctx->pc = 0x1f47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 5));
    // 0x1f47ec: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F47ECu;
    SET_GPR_U32(ctx, 31, 0x1F47F4u);
    ctx->pc = 0x1F47F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F47ECu;
    // 0x1f47f0: 0xae050140  sw          $a1, 0x140($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F47ECu, 0x1F47F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F47F4u;
label_1f47f4:
    // 0x1f47f4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1f47f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1f47f8:
    // 0x1f47f8: 0x1440ff5f  bnez        $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x1F47F8u;
    {
        const bool branch_taken_0x1f47f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47F8u;
        // 0x1f47fc: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f47f8) {
            ctx->pc = 0x1F4578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4578;
        }
    }
    ctx->pc = 0x1F4800u;
    // 0x1f4800: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1f4800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1f4804: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f4804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4808: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1f4808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f480c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1f480cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f4810: 0x1440ff4d  bnez        $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x1F4810u;
    {
        const bool branch_taken_0x1f4810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4810u;
        // 0x1f4814: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4810) {
            ctx->pc = 0x1F4548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4548;
        }
    }
    ctx->pc = 0x1F4818u;
label_1f4818:
    // 0x1f4818: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1f4818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f481c:
    // 0x1f481c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1f481cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f4820: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1f4820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f4824: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1f4824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1f4828: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f4828u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f482c: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1f482cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1f4830: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1f4830u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f4834: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x1f4834u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f4838: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1f4838u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f483c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1f483cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1f4840: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x1f4840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f4844: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1f4844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f4848: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1f4848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f484c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F484Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F484Cu;
        // 0x1f4850: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F484Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4854u;
    // 0x1f4854: 0x0  nop
    ctx->pc = 0x1f4854u;
    // NOP
    ctx->pc = 0x1f4858u;
}
