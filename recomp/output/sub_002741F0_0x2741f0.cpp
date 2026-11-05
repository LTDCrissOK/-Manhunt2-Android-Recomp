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

// Function: sub_002741F0
// Address: 0x2741f0 - 0x2744c0
void sub_002741F0_0x2741f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002741F0_0x2741f0");
#endif

    switch (ctx->pc) {
        case 0x274218u: goto label_274218;
        case 0x274244u: goto label_274244;
        case 0x27425cu: goto label_27425c;
        case 0x27426cu: goto label_27426c;
        case 0x2742b4u: goto label_2742b4;
        case 0x2742ccu: goto label_2742cc;
        case 0x2742e0u: goto label_2742e0;
        case 0x2742f4u: goto label_2742f4;
        case 0x2743f0u: goto label_2743f0;
        case 0x27441cu: goto label_27441c;
        case 0x2744a0u: goto label_2744a0;
        default: break;
    }

    ctx->pc = 0x2741f0u;

    // 0x2741f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2741f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2741f4: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2741f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2741f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2741f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741fc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2741fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x274200: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x274200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x274204: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x274204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x274208: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x274208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x27420c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x27420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x274210: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x274210u;
    SET_GPR_U32(ctx, 31, 0x274218u);
    ctx->pc = 0x274214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274210u;
    // 0x274214: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x274210u, 0x274218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274218u;
label_274218:
    // 0x274218: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x274218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x27421c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27421Cu;
    {
        const bool branch_taken_0x27421c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27421Cu;
        // 0x274220: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27421c) {
            ctx->pc = 0x27422Cu;
            goto label_27422c;
        }
    }
    ctx->pc = 0x274224u;
    // 0x274224: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x274224u;
    {
        const bool branch_taken_0x274224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x274228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274224u;
        // 0x274228: 0x262202e0  addiu       $v0, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274224) {
            ctx->pc = 0x274230u;
            goto label_274230;
        }
    }
    ctx->pc = 0x27422Cu;
label_27422c:
    // 0x27422c: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x27422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_274230:
    // 0x274230: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x274230u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274234: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x274234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x274238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27423c: 0xc09cf00  jal         func_273C00
    ctx->pc = 0x27423Cu;
    SET_GPR_U32(ctx, 31, 0x274244u);
    ctx->pc = 0x274240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27423Cu;
    // 0x274240: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273C00u, 0x27423Cu, 0x274244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274244u;
label_274244:
    // 0x274244: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x274244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x274248: 0x8e221e68  lw          $v0, 0x1E68($s1)
    ctx->pc = 0x274248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7784)));
    // 0x27424c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x27424cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274250: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x274250u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x274254: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x274254u;
    SET_GPR_U32(ctx, 31, 0x27425Cu);
    ctx->pc = 0x274258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274254u;
    // 0x274258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x274254u, 0x27425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27425Cu;
label_27425c:
    // 0x27425c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27425Cu;
    {
        const bool branch_taken_0x27425c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27425c) {
            ctx->pc = 0x274260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27425Cu;
            // 0x274260: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x274270u;
            goto label_274270;
        }
    }
    ctx->pc = 0x274264u;
    // 0x274264: 0xc0c4900  jal         func_312400
    ctx->pc = 0x274264u;
    SET_GPR_U32(ctx, 31, 0x27426Cu);
    ctx->pc = 0x274268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274264u;
    // 0x274268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x274264u, 0x27426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27426Cu;
label_27426c:
    // 0x27426c: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x27426cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274270:
    // 0x274270: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x274270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x274274: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x274274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x274278: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x274278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x27427c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27427cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x274280: 0x26300230  addiu       $s0, $s1, 0x230
    ctx->pc = 0x274280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x274284: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x274284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x274288: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x274288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27428c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27428cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274290: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x274290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274294: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x274294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x274298: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x274298u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27429c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27429cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2742a0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2742a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2742a4: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2742a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2742a8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2742a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2742ac: 0xc0f7f60  jal         func_3DFD80
    ctx->pc = 0x2742ACu;
    SET_GPR_U32(ctx, 31, 0x2742B4u);
    ctx->pc = 0x2742B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2742ACu;
    // 0x2742b0: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFD80u, 0x2742ACu, 0x2742B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2742B4u;
label_2742b4:
    // 0x2742b4: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2742b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2742b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2742b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2742bc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2742bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2742c0: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x2742c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2742c4: 0xc0f7f60  jal         func_3DFD80
    ctx->pc = 0x2742C4u;
    SET_GPR_U32(ctx, 31, 0x2742CCu);
    ctx->pc = 0x2742C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2742C4u;
    // 0x2742c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFD80u, 0x2742C4u, 0x2742CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2742CCu;
label_2742cc:
    // 0x2742cc: 0xac4001d0  sw          $zero, 0x1D0($v0)
    ctx->pc = 0x2742ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
    // 0x2742d0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2742d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2742d4: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2742d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2742d8: 0xc0c48da  jal         func_312368
    ctx->pc = 0x2742D8u;
    SET_GPR_U32(ctx, 31, 0x2742E0u);
    ctx->pc = 0x2742DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2742D8u;
    // 0x2742dc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x2742D8u, 0x2742E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2742E0u;
label_2742e0:
    // 0x2742e0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2742e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2742e4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2742e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2742e8: 0xf84102b0  sqc2        $vf1, 0x2B0($v0)
    ctx->pc = 0x2742e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 688), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2742ec: 0xc09cbc8  jal         func_272F20
    ctx->pc = 0x2742ECu;
    SET_GPR_U32(ctx, 31, 0x2742F4u);
    ctx->pc = 0x2742F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2742ECu;
    // 0x2742f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272F20u, 0x2742ECu, 0x2742F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2742F4u;
label_2742f4:
    // 0x2742f4: 0xc6210388  lwc1        $f1, 0x388($s1)
    ctx->pc = 0x2742f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2742f8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2742f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2742fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2742fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274300: 0x0  nop
    ctx->pc = 0x274300u;
    // NOP
    // 0x274304: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x274304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274308: 0x0  nop
    ctx->pc = 0x274308u;
    // NOP
    // 0x27430c: 0x45020065  bc1fl       . + 4 + (0x65 << 2)
    ctx->pc = 0x27430Cu;
    {
        const bool branch_taken_0x27430c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27430c) {
            ctx->pc = 0x274310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27430Cu;
            // 0x274310: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2744A4u;
            goto label_2744a4;
        }
    }
    ctx->pc = 0x274314u;
    // 0x274314: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x274314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x274318: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x274318u;
    {
        const bool branch_taken_0x274318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274318u;
        // 0x27431c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274318) {
            ctx->pc = 0x2744A0u;
            goto label_2744a0;
        }
    }
    ctx->pc = 0x274320u;
    // 0x274320: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x274320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x274324: 0x24435b40  addiu       $v1, $v0, 0x5B40
    ctx->pc = 0x274324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x274328: 0xc4415b40  lwc1        $f1, 0x5B40($v0)
    ctx->pc = 0x274328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27432c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x27432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274330: 0x263302e0  addiu       $s3, $s1, 0x2E0
    ctx->pc = 0x274330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x274334: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x274334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274338: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x274338u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x27433c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x27433cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x274340: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x274340u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x274344: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x274344u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x274348: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x274348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27434c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x27434cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x274350: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x274350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x274354: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x274354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x274358: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x274358u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27435c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x27435cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x274360: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x274360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x274364: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x274364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274368: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x274368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27436c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x27436cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274370: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x274370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274374: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x274374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274378: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x274378u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27437c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x27437cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x274380: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x274380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x274384: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x274384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x274388: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x274388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27438c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x27438cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x274390: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x274390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x274394: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x274394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x274398: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x274398u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x27439c: 0x4a0003bf  vwaitq
    ctx->pc = 0x27439cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2743a0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2743a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2743a4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2743a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2743a8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2743a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2743ac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2743acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2743b0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2743b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2743b4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2743b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2743b8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2743b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2743bc: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2743bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2743c0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2743c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2743c4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2743c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2743c8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2743c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2743cc: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2743ccu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2743d0: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2743d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2743d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2743d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2743d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2743d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2743dc: 0x0  nop
    ctx->pc = 0x2743dcu;
    // NOP
    // 0x2743e0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2743e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2743e4: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2743e4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2743e8: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2743E8u;
    SET_GPR_U32(ctx, 31, 0x2743F0u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2743E8u, 0x2743F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2743F0u;
label_2743f0:
    // 0x2743f0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2743f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2743f4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2743f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2743f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2743f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2743fc: 0xc6220388  lwc1        $f2, 0x388($s1)
    ctx->pc = 0x2743fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274400: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x274400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x274404: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x274404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274408: 0x0  nop
    ctx->pc = 0x274408u;
    // NOP
    // 0x27440c: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
    ctx->pc = 0x27440Cu;
    {
        const bool branch_taken_0x27440c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27440c) {
            ctx->pc = 0x274410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27440Cu;
            // 0x274410: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2744A4u;
            goto label_2744a4;
        }
    }
    ctx->pc = 0x274414u;
    // 0x274414: 0xc0f7f60  jal         func_3DFD80
    ctx->pc = 0x274414u;
    SET_GPR_U32(ctx, 31, 0x27441Cu);
    ctx->pc = 0x274418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274414u;
    // 0x274418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFD80u, 0x274414u, 0x27441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27441Cu;
label_27441c:
    // 0x27441c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x27441cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x274420: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x274420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x274424: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274428: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x274428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x27442c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x27442cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274430: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x274430u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x274434: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x274434u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x274438: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x274438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27443c: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x27443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274440: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x274440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x274444: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x274444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274448: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x274448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27444c: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x27444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274450: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x274450u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x274454: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x274454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x274458: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x274458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27445c: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x27445cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x274460: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x274460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x274464: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x274464u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x274468: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x274468u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x27446c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x27446cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x274470: 0xc6200314  lwc1        $f0, 0x314($s1)
    ctx->pc = 0x274470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274478: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x274478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27447c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27447cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274480: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x274480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274484: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x274484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274488: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x274488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27448c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x27448cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x274490: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x274490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x274494: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x274494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x274498: 0xc09d4c6  jal         func_275318
    ctx->pc = 0x274498u;
    SET_GPR_U32(ctx, 31, 0x2744A0u);
    ctx->pc = 0x27449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274498u;
    // 0x27449c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x275318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275318u, 0x274498u, 0x2744A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2744A0u;
label_2744a0:
    // 0x2744a0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2744a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2744a4:
    // 0x2744a4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2744a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2744a8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2744a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2744ac: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2744acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2744b0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2744b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2744b4: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2744b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2744b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2744B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2744BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744B8u;
        // 0x2744bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2744B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2744C0u;
}
