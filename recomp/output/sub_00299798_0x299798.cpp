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

// Function: sub_00299798
// Address: 0x299798 - 0x2998c8
void sub_00299798_0x299798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299798_0x299798");
#endif

    switch (ctx->pc) {
        case 0x2997acu: goto label_2997ac;
        case 0x2997f8u: goto label_2997f8;
        case 0x299800u: goto label_299800;
        case 0x299808u: goto label_299808;
        case 0x299810u: goto label_299810;
        case 0x299818u: goto label_299818;
        case 0x299820u: goto label_299820;
        case 0x29986cu: goto label_29986c;
        case 0x299874u: goto label_299874;
        case 0x29987cu: goto label_29987c;
        case 0x299884u: goto label_299884;
        case 0x29988cu: goto label_29988c;
        case 0x299894u: goto label_299894;
        case 0x2998a4u: goto label_2998a4;
        case 0x2998b4u: goto label_2998b4;
        default: break;
    }

    ctx->pc = 0x299798u;

    // 0x299798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29979c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29979cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2997a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2997a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2997a4: 0xc0a1dea  jal         func_2877A8
    ctx->pc = 0x2997A4u;
    SET_GPR_U32(ctx, 31, 0x2997ACu);
    ctx->pc = 0x2997A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997A4u;
    // 0x2997a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2877A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2877A8u, 0x2997A4u, 0x2997ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2997ACu;
label_2997ac:
    // 0x2997ac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2997ACu;
    {
        const bool branch_taken_0x2997ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2997ac) {
            ctx->pc = 0x299818u;
            goto label_299818;
        }
    }
    ctx->pc = 0x2997B4u;
    // 0x2997b4: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x2997b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2997b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2997b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2997bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2997bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2997c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2997c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2997c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2997c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2997c8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2997c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2997cc: 0x0  nop
    ctx->pc = 0x2997ccu;
    // NOP
    // 0x2997d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2997D0u;
    {
        const bool branch_taken_0x2997d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2997D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2997D0u;
        // 0x2997d4: 0xe600007c  swc1        $f0, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2997d0) {
            ctx->pc = 0x2997E0u;
            goto label_2997e0;
        }
    }
    ctx->pc = 0x2997D8u;
    // 0x2997d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2997D8u;
    {
        const bool branch_taken_0x2997d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2997DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2997D8u;
        // 0x2997dc: 0xe602007c  swc1        $f2, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2997d8) {
            ctx->pc = 0x2997F8u;
            goto label_2997f8;
        }
    }
    ctx->pc = 0x2997E0u;
label_2997e0:
    // 0x2997e0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2997e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2997e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2997e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2997e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2997e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2997ec: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2997ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2997f0: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x2997F0u;
    SET_GPR_U32(ctx, 31, 0x2997F8u);
    ctx->pc = 0x2997F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997F0u;
    // 0x2997f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2997F0u, 0x2997F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2997F8u;
label_2997f8:
    // 0x2997f8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2997F8u;
    SET_GPR_U32(ctx, 31, 0x299800u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2997F8u, 0x299800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299800u;
label_299800:
    // 0x299800: 0xc0a723c  jal         func_29C8F0
    ctx->pc = 0x299800u;
    SET_GPR_U32(ctx, 31, 0x299808u);
    ctx->pc = 0x299804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299800u;
    // 0x299804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C8F0u, 0x299800u, 0x299808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299808u;
label_299808:
    // 0x299808: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x299808u;
    SET_GPR_U32(ctx, 31, 0x299810u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x299808u, 0x299810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299810u;
label_299810:
    // 0x299810: 0xc0a7244  jal         func_29C910
    ctx->pc = 0x299810u;
    SET_GPR_U32(ctx, 31, 0x299818u);
    ctx->pc = 0x299814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299810u;
    // 0x299814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C910u, 0x299810u, 0x299818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299818u;
label_299818:
    // 0x299818: 0xc0a1e2c  jal         func_2878B0
    ctx->pc = 0x299818u;
    SET_GPR_U32(ctx, 31, 0x299820u);
    ctx->pc = 0x2878B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2878B0u, 0x299818u, 0x299820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299820u;
label_299820:
    // 0x299820: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x299820u;
    {
        const bool branch_taken_0x299820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299820) {
            ctx->pc = 0x29988Cu;
            goto label_29988c;
        }
    }
    ctx->pc = 0x299828u;
    // 0x299828: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x299828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29982c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29982cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299830: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x299830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299834: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x299834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299838: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29983c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x29983cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299840: 0x0  nop
    ctx->pc = 0x299840u;
    // NOP
    // 0x299844: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x299844u;
    {
        const bool branch_taken_0x299844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299844u;
        // 0x299848: 0xe600007c  swc1        $f0, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299844) {
            ctx->pc = 0x299854u;
            goto label_299854;
        }
    }
    ctx->pc = 0x29984Cu;
    // 0x29984c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29984Cu;
    {
        const bool branch_taken_0x29984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29984Cu;
        // 0x299850: 0xe602007c  swc1        $f2, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29984c) {
            ctx->pc = 0x29986Cu;
            goto label_29986c;
        }
    }
    ctx->pc = 0x299854u;
label_299854:
    // 0x299854: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x299854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x299858: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x299858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x29985c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29985cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x299860: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x299860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x299864: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x299864u;
    SET_GPR_U32(ctx, 31, 0x29986Cu);
    ctx->pc = 0x299868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299864u;
    // 0x299868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x299864u, 0x29986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29986Cu;
label_29986c:
    // 0x29986c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29986Cu;
    SET_GPR_U32(ctx, 31, 0x299874u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29986Cu, 0x299874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299874u;
label_299874:
    // 0x299874: 0xc0a723c  jal         func_29C8F0
    ctx->pc = 0x299874u;
    SET_GPR_U32(ctx, 31, 0x29987Cu);
    ctx->pc = 0x299878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299874u;
    // 0x299878: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C8F0u, 0x299874u, 0x29987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29987Cu;
label_29987c:
    // 0x29987c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29987Cu;
    SET_GPR_U32(ctx, 31, 0x299884u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29987Cu, 0x299884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299884u;
label_299884:
    // 0x299884: 0xc0a7244  jal         func_29C910
    ctx->pc = 0x299884u;
    SET_GPR_U32(ctx, 31, 0x29988Cu);
    ctx->pc = 0x299888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299884u;
    // 0x299888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C910u, 0x299884u, 0x29988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29988Cu;
label_29988c:
    // 0x29988c: 0xc0a1f58  jal         func_287D60
    ctx->pc = 0x29988Cu;
    SET_GPR_U32(ctx, 31, 0x299894u);
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x29988Cu, 0x299894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299894u;
label_299894:
    // 0x299894: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x299894u;
    {
        const bool branch_taken_0x299894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299894) {
            ctx->pc = 0x299898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299894u;
            // 0x299898: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2998B8u;
            goto label_2998b8;
        }
    }
    ctx->pc = 0x29989Cu;
    // 0x29989c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29989Cu;
    SET_GPR_U32(ctx, 31, 0x2998A4u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29989Cu, 0x2998A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2998A4u;
label_2998a4:
    // 0x2998a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2998a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2998a8: 0x260500b4  addiu       $a1, $s0, 0xB4
    ctx->pc = 0x2998a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x2998ac: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x2998ACu;
    SET_GPR_U32(ctx, 31, 0x2998B4u);
    ctx->pc = 0x2998B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2998ACu;
    // 0x2998b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x2998ACu, 0x2998B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2998B4u;
label_2998b4:
    // 0x2998b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2998b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2998b8:
    // 0x2998b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2998b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2998bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2998BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2998C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998BCu;
        // 0x2998c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2998BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2998C4u;
    // 0x2998c4: 0x0  nop
    ctx->pc = 0x2998c4u;
    // NOP
    ctx->pc = 0x2998c8u;
}
