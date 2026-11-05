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

// Function: sub_00390130
// Address: 0x390130 - 0x390258
void sub_00390130_0x390130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390130_0x390130");
#endif

    switch (ctx->pc) {
        case 0x390154u: goto label_390154;
        case 0x390170u: goto label_390170;
        case 0x390180u: goto label_390180;
        case 0x3901b4u: goto label_3901b4;
        case 0x3901c0u: goto label_3901c0;
        case 0x3901f4u: goto label_3901f4;
        case 0x390204u: goto label_390204;
        case 0x390220u: goto label_390220;
        case 0x390230u: goto label_390230;
        default: break;
    }

    ctx->pc = 0x390130u;

    // 0x390130: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x390130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x390134: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x390134u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x390138: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x390138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x39013c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x39013cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x390140: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x390140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x390144: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x390144u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x390148: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x390148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x39014c: 0xc0e4430  jal         func_3910C0
    ctx->pc = 0x39014Cu;
    SET_GPR_U32(ctx, 31, 0x390154u);
    ctx->pc = 0x390150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39014Cu;
    // 0x390150: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3910C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3910C0u, 0x39014Cu, 0x390154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390154u;
label_390154:
    // 0x390154: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x390154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x390158: 0x8c50a478  lw          $s0, -0x5B88($v0)
    ctx->pc = 0x390158u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47A478u));
    // 0x39015c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39015cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x390160: 0x12030035  beq         $s0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x390160u;
    {
        const bool branch_taken_0x390160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x390164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390160u;
        // 0x390164: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390160) {
            ctx->pc = 0x390238u;
            goto label_390238;
        }
    }
    ctx->pc = 0x390168u;
    // 0x390168: 0xc0e4ee0  jal         func_393B80
    ctx->pc = 0x390168u;
    SET_GPR_U32(ctx, 31, 0x390170u);
    ctx->pc = 0x39016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390168u;
    // 0x39016c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B80u, 0x390168u, 0x390170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390170u;
label_390170:
    // 0x390170: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x390170u;
    {
        const bool branch_taken_0x390170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390170u;
        // 0x390174: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390170) {
            ctx->pc = 0x39023Cu;
            goto label_39023c;
        }
    }
    ctx->pc = 0x390178u;
    // 0x390178: 0xc0e4ee0  jal         func_393B80
    ctx->pc = 0x390178u;
    SET_GPR_U32(ctx, 31, 0x390180u);
    ctx->pc = 0x39017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390178u;
    // 0x39017c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B80u, 0x390178u, 0x390180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390180u;
label_390180:
    // 0x390180: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x390180u;
    {
        const bool branch_taken_0x390180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390180u;
        // 0x390184: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390180) {
            ctx->pc = 0x39023Cu;
            goto label_39023c;
        }
    }
    ctx->pc = 0x390188u;
    // 0x390188: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x390188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39018c: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x39018cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x390190: 0x0  nop
    ctx->pc = 0x390190u;
    // NOP
    // 0x390194: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x390194u;
    {
        const bool branch_taken_0x390194 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x390194) {
            ctx->pc = 0x390198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390194u;
            // 0x390198: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39023Cu;
            goto label_39023c;
        }
    }
    ctx->pc = 0x39019Cu;
    // 0x39019c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x39019cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3901a0: 0x0  nop
    ctx->pc = 0x3901a0u;
    // NOP
    // 0x3901a4: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x3901A4u;
    {
        const bool branch_taken_0x3901a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3901A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3901A4u;
        // 0x3901a8: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3901a4) {
            ctx->pc = 0x39023Cu;
            goto label_39023c;
        }
    }
    ctx->pc = 0x3901ACu;
    // 0x3901ac: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x3901ACu;
    SET_GPR_U32(ctx, 31, 0x3901B4u);
    ctx->pc = 0x3901B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3901ACu;
    // 0x3901b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3901ACu, 0x3901B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3901B4u;
label_3901b4:
    // 0x3901b4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3901b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3901b8: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x3901B8u;
    SET_GPR_U32(ctx, 31, 0x3901C0u);
    ctx->pc = 0x3901BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3901B8u;
    // 0x3901bc: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3901B8u, 0x3901C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3901C0u;
label_3901c0:
    // 0x3901c0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x3901c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x3901c4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3901c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3901c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3901c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3901cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3901ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3901d0: 0x246398f0  addiu       $v1, $v1, -0x6710
    ctx->pc = 0x3901d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940912));
    // 0x3901d4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3901d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x3901d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3901d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3901dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3901dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3901e0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3901e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3901e4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3901E4u;
    {
        const bool branch_taken_0x3901e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3901E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3901E4u;
        // 0x3901e8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3901e4) {
            ctx->pc = 0x3901FCu;
            goto label_3901fc;
        }
    }
    ctx->pc = 0x3901ECu;
    // 0x3901ec: 0xc0e4e4a  jal         func_393928
    ctx->pc = 0x3901ECu;
    SET_GPR_U32(ctx, 31, 0x3901F4u);
    ctx->pc = 0x3901F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3901ECu;
    // 0x3901f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393928u, 0x3901ECu, 0x3901F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3901F4u;
label_3901f4:
    // 0x3901f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3901F4u;
    {
        const bool branch_taken_0x3901f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3901F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3901F4u;
        // 0x3901f8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3901f4) {
            ctx->pc = 0x390210u;
            goto label_390210;
        }
    }
    ctx->pc = 0x3901FCu;
label_3901fc:
    // 0x3901fc: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x3901FCu;
    SET_GPR_U32(ctx, 31, 0x390204u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x3901FCu, 0x390204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390204u;
label_390204:
    // 0x390204: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x390204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x390208: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x390208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x39020c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x39020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_390210:
    // 0x390210: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390210u;
    {
        const bool branch_taken_0x390210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x390210) {
            ctx->pc = 0x390228u;
            goto label_390228;
        }
    }
    ctx->pc = 0x390218u;
    // 0x390218: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390218u;
    SET_GPR_U32(ctx, 31, 0x390220u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390218u, 0x390220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390220u;
label_390220:
    // 0x390220: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x390220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390224: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x390224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_390228:
    // 0x390228: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x390228u;
    SET_GPR_U32(ctx, 31, 0x390230u);
    ctx->pc = 0x39022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390228u;
    // 0x39022c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x390228u, 0x390230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390230u;
label_390230:
    // 0x390230: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x390230u;
    {
        const bool branch_taken_0x390230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390230u;
        // 0x390234: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390230) {
            ctx->pc = 0x390240u;
            goto label_390240;
        }
    }
    ctx->pc = 0x390238u;
label_390238:
    // 0x390238: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x390238u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_39023c:
    // 0x39023c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39023cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_390240:
    // 0x390240: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x390240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390244: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x390244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x390248: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x390248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x39024c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x39024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x390250: 0x3e00008  jr          $ra
    ctx->pc = 0x390250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390250u;
        // 0x390254: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390258u;
}
