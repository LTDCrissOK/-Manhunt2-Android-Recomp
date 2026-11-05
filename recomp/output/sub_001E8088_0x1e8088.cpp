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

// Function: sub_001E8088
// Address: 0x1e8088 - 0x1e86d0
void sub_001E8088_0x1e8088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8088_0x1e8088");
#endif

    switch (ctx->pc) {
        case 0x1e80f4u: goto label_1e80f4;
        case 0x1e8104u: goto label_1e8104;
        case 0x1e8114u: goto label_1e8114;
        case 0x1e811cu: goto label_1e811c;
        case 0x1e81a0u: goto label_1e81a0;
        case 0x1e81a8u: goto label_1e81a8;
        case 0x1e82c4u: goto label_1e82c4;
        case 0x1e8378u: goto label_1e8378;
        case 0x1e83b0u: goto label_1e83b0;
        case 0x1e83b8u: goto label_1e83b8;
        case 0x1e8464u: goto label_1e8464;
        case 0x1e847cu: goto label_1e847c;
        case 0x1e8548u: goto label_1e8548;
        case 0x1e856cu: goto label_1e856c;
        case 0x1e8580u: goto label_1e8580;
        case 0x1e85f0u: goto label_1e85f0;
        case 0x1e8614u: goto label_1e8614;
        case 0x1e8620u: goto label_1e8620;
        case 0x1e8630u: goto label_1e8630;
        case 0x1e8644u: goto label_1e8644;
        default: break;
    }

    ctx->pc = 0x1e8088u;

    // 0x1e8088: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1e8088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1e808c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e8090: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x1e8090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x1e8094: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x1e8094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x1e8098: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e8098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e809c: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1e809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1e80a0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1e80a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80a4: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1e80a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1e80a8: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1e80a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1e80ac: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x1e80acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x1e80b0: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x1e80b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x1e80b4: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x1e80b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
    // 0x1e80b8: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x1e80b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x1e80bc: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x1e80bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x1e80c0: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1e80c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1e80c4: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1e80c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1e80c8: 0xc440d970  lwc1        $f0, -0x2690($v0)
    ctx->pc = 0x1e80c8u;
    { uint32_t bits = FAST_READ32(0x45D970u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e80cc: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x1e80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x1e80d0: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x1e80d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x1e80d4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e80d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e80d8: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x1e80d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x1e80dc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1e80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1e80e0: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x1e80e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e80e4: 0x1280010e  beqz        $s4, . + 4 + (0x10E << 2)
    ctx->pc = 0x1E80E4u;
    {
        const bool branch_taken_0x1e80e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80E4u;
        // 0x1e80e8: 0x8c56000c  lw          $s6, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80e4) {
            ctx->pc = 0x1E8520u;
            goto label_1e8520;
        }
    }
    ctx->pc = 0x1E80ECu;
    // 0x1e80ec: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1E80ECu;
    SET_GPR_U32(ctx, 31, 0x1E80F4u);
    ctx->pc = 0x1E80F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E80ECu;
    // 0x1e80f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1E80ECu, 0x1E80F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E80F4u;
label_1e80f4:
    // 0x1e80f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e80f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e80f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80fc: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x1E80FCu;
    SET_GPR_U32(ctx, 31, 0x1E8104u);
    ctx->pc = 0x1E8100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E80FCu;
    // 0x1e8100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x1E80FCu, 0x1E8104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8104u;
label_1e8104:
    // 0x1e8104: 0x12400098  beqz        $s2, . + 4 + (0x98 << 2)
    ctx->pc = 0x1E8104u;
    {
        const bool branch_taken_0x1e8104 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8104) {
            ctx->pc = 0x1E8368u;
            goto label_1e8368;
        }
    }
    ctx->pc = 0x1E810Cu;
    // 0x1e810c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E810Cu;
    SET_GPR_U32(ctx, 31, 0x1E8114u);
    ctx->pc = 0x1E8110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E810Cu;
    // 0x1e8110: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E810Cu, 0x1E8114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8114u;
label_1e8114:
    // 0x1e8114: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E8114u;
    SET_GPR_U32(ctx, 31, 0x1E811Cu);
    ctx->pc = 0x1E8118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8114u;
    // 0x1e8118: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E8114u, 0x1E811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E811Cu;
label_1e811c:
    // 0x1e811c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1e811cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1e8120: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1e8120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e8124: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1e8124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1e8128: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1e8128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1e812c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1e812cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1e8130: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x1e8130u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e8134: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1e8134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1e8138: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x1e8138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x1e813c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1e813cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1e8140: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1e8140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1e8144: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1e8144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1e8148: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1e8148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1e814c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e814cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8150: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e8150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8154: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1e8154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1e8158: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1e8158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1e815c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1e815cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1e8160: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1e8160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1e8164: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e8164u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8168: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e8168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e816c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1e816cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1e8170: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1e8170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1e8174: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e8174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e8178: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1E8178u;
    {
        const bool branch_taken_0x1e8178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8178u;
        // 0x1e817c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8178) {
            ctx->pc = 0x1E8368u;
            goto label_1e8368;
        }
    }
    ctx->pc = 0x1E8180u;
    // 0x1e8180: 0xc7b50090  lwc1        $f21, 0x90($sp)
    ctx->pc = 0x1e8180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e8184: 0x27be0050  addiu       $fp, $sp, 0x50
    ctx->pc = 0x1e8184u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e8188: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e8188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e818c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e818cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e8190: 0x26970030  addiu       $s7, $s4, 0x30
    ctx->pc = 0x1e8190u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1e8194: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x1e8194u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e8198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e8198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e819c: 0x0  nop
    ctx->pc = 0x1e819cu;
    // NOP
label_1e81a0:
    // 0x1e81a0: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E81A0u;
    SET_GPR_U32(ctx, 31, 0x1E81A8u);
    ctx->pc = 0x1E81A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81A0u;
    // 0x1e81a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1E81A0u, 0x1E81A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81A8u;
label_1e81a8:
    // 0x1e81a8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1e81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e81ac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e81acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e81b0: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1e81b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e81b4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e81b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e81b8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e81b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e81bc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1e81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1e81c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e81c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e81c4: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1e81c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e81c8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e81c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e81cc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1e81ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e81d0: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1e81d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e81d4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e81d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e81d8: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1e81d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e81dc: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1e81dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e81e0: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1e81e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e81e4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e81e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e81e8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e81e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e81ec: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e81ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e81f0: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x1e81f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e81f4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1e81f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e81f8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e81f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e81fc: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1e81fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8200: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1e8200u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8204: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1e8204u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8208: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e8208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e820c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e820cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e8210: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e8210u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e8214: 0xfba50060  sqc2        $vf5, 0x60($sp)
    ctx->pc = 0x1e8214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e8218: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1e8218u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e821c: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x1e821cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e8220: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e8220u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8224: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e8224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8228: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1e8228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e822c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8230: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e8230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8234: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e8234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e8238: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e8238u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e823c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e823cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e8240: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e8240u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e8244: 0x0  nop
    ctx->pc = 0x1e8244u;
    // NOP
    // 0x1e8248: 0x0  nop
    ctx->pc = 0x1e8248u;
    // NOP
    // 0x1e824c: 0x46000044  c1          0x44
    ctx->pc = 0x1e824cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e8250: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1e8250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1e8254: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1e8254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8258: 0x0  nop
    ctx->pc = 0x1e8258u;
    // NOP
    // 0x1e825c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1E825Cu;
    {
        const bool branch_taken_0x1e825c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E825Cu;
        // 0x1e8260: 0xe7a10090  swc1        $f1, 0x90($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e825c) {
            ctx->pc = 0x1E8288u;
            goto label_1e8288;
        }
    }
    ctx->pc = 0x1E8264u;
    // 0x1e8264: 0x0  nop
    ctx->pc = 0x1e8264u;
    // NOP
    // 0x1e8268: 0x0  nop
    ctx->pc = 0x1e8268u;
    // NOP
    // 0x1e826c: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x1e826cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x1e8270: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e8270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8274: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e8274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e8278: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e8278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e827c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1e827cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e8280: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e8280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e8284: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e8284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e8288:
    // 0x1e8288: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1e8288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1e828c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1e828cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1e8290: 0x8ca291f0  lw          $v0, -0x6E10($a1)
    ctx->pc = 0x1e8290u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91F0u));
    // 0x1e8294: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1e8294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e8298: 0x8cc391ec  lw          $v1, -0x6E14($a2)
    ctx->pc = 0x1e8298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ECu));
    // 0x1e829c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e829cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e82a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e82a4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1e82a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1e82a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e82ac: 0xc4c0d970  lwc1        $f0, -0x2690($a2)
    ctx->pc = 0x1e82acu;
    { uint32_t bits = FAST_READ32(0x45D970u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e82b0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e82b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e82b4: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x1e82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1e82b8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e82b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e82bc: 0xc079fec  jal         func_1E7FB0
    ctx->pc = 0x1E82BCu;
    SET_GPR_U32(ctx, 31, 0x1E82C4u);
    ctx->pc = 0x1E82C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E82BCu;
    // 0x1e82c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7FB0u, 0x1E82BCu, 0x1E82C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E82C4u;
label_1e82c4:
    // 0x1e82c4: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E82C4u;
    {
        const bool branch_taken_0x1e82c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e82c4) {
            ctx->pc = 0x1E82C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E82C4u;
            // 0x1e82c8: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8358u;
            goto label_1e8358;
        }
    }
    ctx->pc = 0x1E82CCu;
    // 0x1e82cc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e82ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e82d0: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1e82d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e82d4: 0xda830010  lqc2        $vf3, 0x10($s4)
    ctx->pc = 0x1e82d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1e82d8: 0xda840020  lqc2        $vf4, 0x20($s4)
    ctx->pc = 0x1e82d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1e82dc: 0xda850030  lqc2        $vf5, 0x30($s4)
    ctx->pc = 0x1e82dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1e82e0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e82e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e82e4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e82e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e82e8: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1e82e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e82ec: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1e82ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e82f0: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e82f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e82f4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e82f8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e82f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e82fc: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1e82fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e8300: 0xda830010  lqc2        $vf3, 0x10($s4)
    ctx->pc = 0x1e8300u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1e8304: 0xda840020  lqc2        $vf4, 0x20($s4)
    ctx->pc = 0x1e8304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1e8308: 0xda850030  lqc2        $vf5, 0x30($s4)
    ctx->pc = 0x1e8308u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1e830c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e830cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e8310: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e8310u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e8314: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e8314u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e8318: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x1e8318u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e831c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1e831cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e8320: 0xae130034  sw          $s3, 0x34($s0)
    ctx->pc = 0x1e8320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 19));
    // 0x1e8324: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1e8324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1e8328: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x1e8328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x1e832c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e832cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e8330: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e8330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e8334: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1e8334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1e8338: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e8338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e833c: 0x8c4391f0  lw          $v1, -0x6E10($v0)
    ctx->pc = 0x1e833cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91F0u));
    // 0x1e8340: 0x2c620050  sltiu       $v0, $v1, 0x50
    ctx->pc = 0x1e8340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1e8344: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8344u;
    {
        const bool branch_taken_0x1e8344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8344u;
        // 0x1e8348: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8344) {
            ctx->pc = 0x1E8368u;
            goto label_1e8368;
        }
    }
    ctx->pc = 0x1E834Cu;
    // 0x1e834c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e834cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e8350: 0xac6291f0  sw          $v0, -0x6E10($v1)
    ctx->pc = 0x1e8350u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F91F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91F0u, _value); } while (0);
    // 0x1e8354: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e8354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e8358:
    // 0x1e8358: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e8358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e835c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e835cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e8360: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
    ctx->pc = 0x1E8360u;
    {
        const bool branch_taken_0x1e8360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8360u;
        // 0x1e8364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8360) {
            ctx->pc = 0x1E81A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e81a0;
        }
    }
    ctx->pc = 0x1E8368u;
label_1e8368:
    // 0x1e8368: 0x12c000c9  beqz        $s6, . + 4 + (0xC9 << 2)
    ctx->pc = 0x1E8368u;
    {
        const bool branch_taken_0x1e8368 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8368u;
        // 0x1e836c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8368) {
            ctx->pc = 0x1E8690u;
            goto label_1e8690;
        }
    }
    ctx->pc = 0x1E8370u;
    // 0x1e8370: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E8370u;
    SET_GPR_U32(ctx, 31, 0x1E8378u);
    ctx->pc = 0x1E8374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8370u;
    // 0x1e8374: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E8370u, 0x1E8378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8378u;
label_1e8378:
    // 0x1e8378: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1e8378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1e837c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1e837cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1e8380: 0x7fa00050  sq          $zero, 0x50($sp)
    ctx->pc = 0x1e8380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 0));
    // 0x1e8384: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x1e8384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x1e8388: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1e8388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1e838c: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x1E838Cu;
    {
        const bool branch_taken_0x1e838c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E838Cu;
        // 0x1e8390: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e838c) {
            ctx->pc = 0x1E868Cu;
            goto label_1e868c;
        }
    }
    ctx->pc = 0x1E8394u;
    // 0x1e8394: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e8394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e8398: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x1e8398u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e839c: 0xc454d970  lwc1        $f20, -0x2690($v0)
    ctx->pc = 0x1e839cu;
    { uint32_t bits = FAST_READ32(0x45D970u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e83a0: 0x26920030  addiu       $s2, $s4, 0x30
    ctx->pc = 0x1e83a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1e83a4: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x1e83a4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x1e83a8: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x1e83a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e83ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e83acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e83b0:
    // 0x1e83b0: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E83B0u;
    SET_GPR_U32(ctx, 31, 0x1E83B8u);
    ctx->pc = 0x1E83B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E83B0u;
    // 0x1e83b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E83B0u, 0x1E83B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E83B8u;
label_1e83b8:
    // 0x1e83b8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e83b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e83bc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1e83bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e83c0: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x1e83c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e83c4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1e83c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e83c8: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1e83c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e83cc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e83ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e83d0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1e83d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e83d4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e83d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e83d8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e83d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e83dc: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x1e83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1e83e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e83e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e83e4: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1e83e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e83e8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e83e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e83ec: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e83ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e83f0: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1e83f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e83f4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e83f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e83f8: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1e83f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e83fc: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1e83fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8400: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1e8400u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8404: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e8404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e8408: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e8408u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e840c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e840cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e8410: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x1e8410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e8414: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e8414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e8418: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e8418u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e841c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e841cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8420: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1e8420u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8424: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1e8424u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8428: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1e8428u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e842c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e842cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e8430: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e8430u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e8434: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e8434u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e8438: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x1e8438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e843c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1e843cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1e8440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e8440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8444: 0x8ca391f0  lw          $v1, -0x6E10($a1)
    ctx->pc = 0x1e8444u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91F0u));
    // 0x1e8448: 0x8fc291ec  lw          $v0, -0x6E14($fp)
    ctx->pc = 0x1e8448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939116)));
    // 0x1e844c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e844cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e8450: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1e8450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e8454: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e8454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8458: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1e8458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e845c: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x1E845Cu;
    SET_GPR_U32(ctx, 31, 0x1E8464u);
    ctx->pc = 0x1E8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E845Cu;
    // 0x1e8460: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x1E845Cu, 0x1E8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8464u;
label_1e8464:
    // 0x1e8464: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E8464u;
    {
        const bool branch_taken_0x1e8464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8464u;
        // 0x1e8468: 0x8fa400b4  lw          $a0, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8464) {
            ctx->pc = 0x1E8504u;
            goto label_1e8504;
        }
    }
    ctx->pc = 0x1E846Cu;
    // 0x1e846c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e8470: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8474: 0xc079fa2  jal         func_1E7E88
    ctx->pc = 0x1E8474u;
    SET_GPR_U32(ctx, 31, 0x1E847Cu);
    ctx->pc = 0x1E8478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8474u;
    // 0x1e8478: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E88u, 0x1E8474u, 0x1E847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E847Cu;
label_1e847c:
    // 0x1e847c: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E847Cu;
    {
        const bool branch_taken_0x1e847c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e847c) {
            ctx->pc = 0x1E8480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E847Cu;
            // 0x1e8480: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8508u;
            goto label_1e8508;
        }
    }
    ctx->pc = 0x1E8484u;
    // 0x1e8484: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e8484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8488: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1e8488u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e848c: 0xda830010  lqc2        $vf3, 0x10($s4)
    ctx->pc = 0x1e848cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1e8490: 0xda840020  lqc2        $vf4, 0x20($s4)
    ctx->pc = 0x1e8490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1e8494: 0xda850030  lqc2        $vf5, 0x30($s4)
    ctx->pc = 0x1e8494u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1e8498: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e8498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e849c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e849cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e84a0: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1e84a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e84a4: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1e84a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e84a8: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e84a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e84ac: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e84acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e84b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e84b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e84b4: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1e84b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e84b8: 0xda830010  lqc2        $vf3, 0x10($s4)
    ctx->pc = 0x1e84b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1e84bc: 0xda840020  lqc2        $vf4, 0x20($s4)
    ctx->pc = 0x1e84bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1e84c0: 0xda850030  lqc2        $vf5, 0x30($s4)
    ctx->pc = 0x1e84c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1e84c4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e84c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e84c8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e84c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e84cc: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e84ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e84d0: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x1e84d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e84d4: 0xae130034  sw          $s3, 0x34($s0)
    ctx->pc = 0x1e84d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 19));
    // 0x1e84d8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1e84d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1e84dc: 0xae170038  sw          $s7, 0x38($s0)
    ctx->pc = 0x1e84dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 23));
    // 0x1e84e0: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x1e84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x1e84e4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e84e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e84e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e84e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e84ec: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1e84ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1e84f0: 0x8cc391f0  lw          $v1, -0x6E10($a2)
    ctx->pc = 0x1e84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939120)));
    // 0x1e84f4: 0x2c620050  sltiu       $v0, $v1, 0x50
    ctx->pc = 0x1e84f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1e84f8: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1E84F8u;
    {
        const bool branch_taken_0x1e84f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84F8u;
        // 0x1e84fc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84f8) {
            ctx->pc = 0x1E868Cu;
            goto label_1e868c;
        }
    }
    ctx->pc = 0x1E8500u;
    // 0x1e8500: 0xacc291f0  sw          $v0, -0x6E10($a2)
    ctx->pc = 0x1e8500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294939120), GPR_U32(ctx, 2));
label_1e8504:
    // 0x1e8504: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1e8504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1e8508:
    // 0x1e8508: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e8508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e850c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e850cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e8510: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x1E8510u;
    {
        const bool branch_taken_0x1e8510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8510u;
        // 0x1e8514: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8510) {
            ctx->pc = 0x1E83B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e83b0;
        }
    }
    ctx->pc = 0x1E8518u;
    // 0x1e8518: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1E8518u;
    {
        const bool branch_taken_0x1e8518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8518u;
        // 0x1e851c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8518) {
            ctx->pc = 0x1E8690u;
            goto label_1e8690;
        }
    }
    ctx->pc = 0x1E8520u;
label_1e8520:
    // 0x1e8520: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E8520u;
    {
        const bool branch_taken_0x1e8520 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8520) {
            ctx->pc = 0x1E85C8u;
            goto label_1e85c8;
        }
    }
    ctx->pc = 0x1E8528u;
    // 0x1e8528: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e8528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e852c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E852Cu;
    {
        const bool branch_taken_0x1e852c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E852Cu;
        // 0x1e8530: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e852c) {
            ctx->pc = 0x1E85C8u;
            goto label_1e85c8;
        }
    }
    ctx->pc = 0x1E8534u;
    // 0x1e8534: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e8534u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e8538: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x1e8538u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x1e853c: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x1e853cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e8540: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e8540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e8544: 0x0  nop
    ctx->pc = 0x1e8544u;
    // NOP
label_1e8548:
    // 0x1e8548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e8548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e854c: 0x8c6291f0  lw          $v0, -0x6E10($v1)
    ctx->pc = 0x1e854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939120)));
    // 0x1e8550: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e8550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8554: 0x8ea391ec  lw          $v1, -0x6E14($s5)
    ctx->pc = 0x1e8554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939116)));
    // 0x1e8558: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e855c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e855cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8560: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e8560u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8564: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E8564u;
    SET_GPR_U32(ctx, 31, 0x1E856Cu);
    ctx->pc = 0x1E8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8564u;
    // 0x1e8568: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1E8564u, 0x1E856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E856Cu;
label_1e856c:
    // 0x1e856c: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x1e856cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1e8570: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e8570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8574: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8578: 0xc079fec  jal         func_1E7FB0
    ctx->pc = 0x1E8578u;
    SET_GPR_U32(ctx, 31, 0x1E8580u);
    ctx->pc = 0x1E857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8578u;
    // 0x1e857c: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7FB0u, 0x1E8578u, 0x1E8580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8580u;
label_1e8580:
    // 0x1e8580: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E8580u;
    {
        const bool branch_taken_0x1e8580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8580u;
        // 0x1e8584: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8580) {
            ctx->pc = 0x1E85B4u;
            goto label_1e85b4;
        }
    }
    ctx->pc = 0x1E8588u;
    // 0x1e8588: 0xae130034  sw          $s3, 0x34($s0)
    ctx->pc = 0x1e8588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 19));
    // 0x1e858c: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x1e858cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
    // 0x1e8590: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x1e8590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x1e8594: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e8594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e8598: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e8598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e859c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1e859cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1e85a0: 0x8c8391f0  lw          $v1, -0x6E10($a0)
    ctx->pc = 0x1e85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939120)));
    // 0x1e85a4: 0x2c620050  sltiu       $v0, $v1, 0x50
    ctx->pc = 0x1e85a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1e85a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E85A8u;
    {
        const bool branch_taken_0x1e85a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85A8u;
        // 0x1e85ac: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85a8) {
            ctx->pc = 0x1E85C8u;
            goto label_1e85c8;
        }
    }
    ctx->pc = 0x1E85B0u;
    // 0x1e85b0: 0xac8291f0  sw          $v0, -0x6E10($a0)
    ctx->pc = 0x1e85b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294939120), GPR_U32(ctx, 2));
label_1e85b4:
    // 0x1e85b4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e85b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e85b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e85bc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e85bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e85c0: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1E85C0u;
    {
        const bool branch_taken_0x1e85c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e85c0) {
            ctx->pc = 0x1E85C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E85C0u;
            // 0x1e85c4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8548;
        }
    }
    ctx->pc = 0x1E85C8u;
label_1e85c8:
    // 0x1e85c8: 0x12c00031  beqz        $s6, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E85C8u;
    {
        const bool branch_taken_0x1e85c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85C8u;
        // 0x1e85cc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85c8) {
            ctx->pc = 0x1E8690u;
            goto label_1e8690;
        }
    }
    ctx->pc = 0x1E85D0u;
    // 0x1e85d0: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1e85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1e85d4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E85D4u;
    {
        const bool branch_taken_0x1e85d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85D4u;
        // 0x1e85d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85d4) {
            ctx->pc = 0x1E8690u;
            goto label_1e8690;
        }
    }
    ctx->pc = 0x1E85DCu;
    // 0x1e85dc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e85e0: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1e85e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1e85e4: 0xc454d970  lwc1        $f20, -0x2690($v0)
    ctx->pc = 0x1e85e4u;
    { uint32_t bits = FAST_READ32(0x45D970u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e85e8: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1e85e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e85ec: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1e85ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_1e85f0:
    // 0x1e85f0: 0x8e8391ec  lw          $v1, -0x6E14($s4)
    ctx->pc = 0x1e85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939116)));
    // 0x1e85f4: 0x8ca291f0  lw          $v0, -0x6E10($a1)
    ctx->pc = 0x1e85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294939120)));
    // 0x1e85f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e85f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e85fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e85fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8600: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8608: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e8608u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e860c: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E860Cu;
    SET_GPR_U32(ctx, 31, 0x1E8614u);
    ctx->pc = 0x1E8610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E860Cu;
    // 0x1e8610: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E860Cu, 0x1E8614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8614u;
label_1e8614:
    // 0x1e8614: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1e8614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e8618: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x1E8618u;
    SET_GPR_U32(ctx, 31, 0x1E8620u);
    ctx->pc = 0x1E861Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8618u;
    // 0x1e861c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x1E8618u, 0x1E8620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8620u;
label_1e8620:
    // 0x1e8620: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E8620u;
    {
        const bool branch_taken_0x1e8620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8620u;
        // 0x1e8624: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8620) {
            ctx->pc = 0x1E8678u;
            goto label_1e8678;
        }
    }
    ctx->pc = 0x1E8628u;
    // 0x1e8628: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E8628u;
    SET_GPR_U32(ctx, 31, 0x1E8630u);
    ctx->pc = 0x1E862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8628u;
    // 0x1e862c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E8628u, 0x1E8630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8630u;
label_1e8630:
    // 0x1e8630: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x1e8630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1e8634: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e8634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8638: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e863c: 0xc079fa2  jal         func_1E7E88
    ctx->pc = 0x1E863Cu;
    SET_GPR_U32(ctx, 31, 0x1E8644u);
    ctx->pc = 0x1E8640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E863Cu;
    // 0x1e8640: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E88u, 0x1E863Cu, 0x1E8644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8644u;
label_1e8644:
    // 0x1e8644: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E8644u;
    {
        const bool branch_taken_0x1e8644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8644u;
        // 0x1e8648: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8644) {
            ctx->pc = 0x1E8678u;
            goto label_1e8678;
        }
    }
    ctx->pc = 0x1E864Cu;
    // 0x1e864c: 0xae130034  sw          $s3, 0x34($s0)
    ctx->pc = 0x1e864cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 19));
    // 0x1e8650: 0xae120038  sw          $s2, 0x38($s0)
    ctx->pc = 0x1e8650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
    // 0x1e8654: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x1e8654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x1e8658: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e8658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e865c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e865cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e8660: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1e8660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1e8664: 0x8cc391f0  lw          $v1, -0x6E10($a2)
    ctx->pc = 0x1e8664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939120)));
    // 0x1e8668: 0x2c620050  sltiu       $v0, $v1, 0x50
    ctx->pc = 0x1e8668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1e866c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E866Cu;
    {
        const bool branch_taken_0x1e866c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E866Cu;
        // 0x1e8670: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e866c) {
            ctx->pc = 0x1E868Cu;
            goto label_1e868c;
        }
    }
    ctx->pc = 0x1E8674u;
    // 0x1e8674: 0xacc291f0  sw          $v0, -0x6E10($a2)
    ctx->pc = 0x1e8674u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294939120), GPR_U32(ctx, 2));
label_1e8678:
    // 0x1e8678: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1e8678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1e867c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e867cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e8680: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e8680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e8684: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1E8684u;
    {
        const bool branch_taken_0x1e8684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8684u;
        // 0x1e8688: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8684) {
            ctx->pc = 0x1E85F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e85f0;
        }
    }
    ctx->pc = 0x1E868Cu;
label_1e868c:
    // 0x1e868c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e868cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1e8690:
    // 0x1e8690: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1e8690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e8694: 0x8c6291f0  lw          $v0, -0x6E10($v1)
    ctx->pc = 0x1e8694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939120)));
    // 0x1e8698: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1e8698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e869c: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1e869cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e86a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e86a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e86a4: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x1e86a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e86a8: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x1e86a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e86ac: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x1e86acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1e86b0: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x1e86b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e86b4: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x1e86b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1e86b8: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x1e86b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e86bc: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x1e86bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1e86c0: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1e86c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e86c4: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1e86c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e86c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E86C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86C8u;
        // 0x1e86cc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E86C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E86D0u;
}
