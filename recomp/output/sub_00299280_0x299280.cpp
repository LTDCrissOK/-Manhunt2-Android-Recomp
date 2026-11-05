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

// Function: sub_00299280
// Address: 0x299280 - 0x299388
void sub_00299280_0x299280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299280_0x299280");
#endif

    switch (ctx->pc) {
        case 0x299294u: goto label_299294;
        case 0x2992e0u: goto label_2992e0;
        case 0x2992e8u: goto label_2992e8;
        case 0x2992f0u: goto label_2992f0;
        case 0x2992f8u: goto label_2992f8;
        case 0x299344u: goto label_299344;
        case 0x29934cu: goto label_29934c;
        case 0x299354u: goto label_299354;
        case 0x29935cu: goto label_29935c;
        case 0x29936cu: goto label_29936c;
        case 0x299374u: goto label_299374;
        default: break;
    }

    ctx->pc = 0x299280u;

    // 0x299280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299288: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x299288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29928c: 0xc0a1dea  jal         func_2877A8
    ctx->pc = 0x29928Cu;
    SET_GPR_U32(ctx, 31, 0x299294u);
    ctx->pc = 0x299290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29928Cu;
    // 0x299290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2877A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2877A8u, 0x29928Cu, 0x299294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299294u;
label_299294:
    // 0x299294: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x299294u;
    {
        const bool branch_taken_0x299294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299294) {
            ctx->pc = 0x2992F0u;
            goto label_2992f0;
        }
    }
    ctx->pc = 0x29929Cu;
    // 0x29929c: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x29929cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2992a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2992a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2992a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2992a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2992a8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2992a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2992ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2992acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2992b0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2992b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2992b4: 0x0  nop
    ctx->pc = 0x2992b4u;
    // NOP
    // 0x2992b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2992B8u;
    {
        const bool branch_taken_0x2992b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2992BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992B8u;
        // 0x2992bc: 0xe600007c  swc1        $f0, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992b8) {
            ctx->pc = 0x2992C8u;
            goto label_2992c8;
        }
    }
    ctx->pc = 0x2992C0u;
    // 0x2992c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2992C0u;
    {
        const bool branch_taken_0x2992c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992C0u;
        // 0x2992c4: 0xe602007c  swc1        $f2, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992c0) {
            ctx->pc = 0x2992E0u;
            goto label_2992e0;
        }
    }
    ctx->pc = 0x2992C8u;
label_2992c8:
    // 0x2992c8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2992c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2992cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2992ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2992d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2992d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2992d4: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2992d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2992d8: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x2992D8u;
    SET_GPR_U32(ctx, 31, 0x2992E0u);
    ctx->pc = 0x2992DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992D8u;
    // 0x2992dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2992D8u, 0x2992E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992E0u;
label_2992e0:
    // 0x2992e0: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2992E0u;
    SET_GPR_U32(ctx, 31, 0x2992E8u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2992E0u, 0x2992E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992E8u;
label_2992e8:
    // 0x2992e8: 0xc0a723c  jal         func_29C8F0
    ctx->pc = 0x2992E8u;
    SET_GPR_U32(ctx, 31, 0x2992F0u);
    ctx->pc = 0x2992ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992E8u;
    // 0x2992ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C8F0u, 0x2992E8u, 0x2992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992F0u;
label_2992f0:
    // 0x2992f0: 0xc0a1e2c  jal         func_2878B0
    ctx->pc = 0x2992F0u;
    SET_GPR_U32(ctx, 31, 0x2992F8u);
    ctx->pc = 0x2878B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2878B0u, 0x2992F0u, 0x2992F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992F8u;
label_2992f8:
    // 0x2992f8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2992F8u;
    {
        const bool branch_taken_0x2992f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2992f8) {
            ctx->pc = 0x299354u;
            goto label_299354;
        }
    }
    ctx->pc = 0x299300u;
    // 0x299300: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x299300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299304: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x299308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29930c: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x29930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299310: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299314: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x299314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299318: 0x0  nop
    ctx->pc = 0x299318u;
    // NOP
    // 0x29931c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29931Cu;
    {
        const bool branch_taken_0x29931c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29931Cu;
        // 0x299320: 0xe600007c  swc1        $f0, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29931c) {
            ctx->pc = 0x29932Cu;
            goto label_29932c;
        }
    }
    ctx->pc = 0x299324u;
    // 0x299324: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x299324u;
    {
        const bool branch_taken_0x299324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299324u;
        // 0x299328: 0xe602007c  swc1        $f2, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299324) {
            ctx->pc = 0x299344u;
            goto label_299344;
        }
    }
    ctx->pc = 0x29932Cu;
label_29932c:
    // 0x29932c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x29932cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x299330: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x299330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x299334: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x299334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x299338: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x299338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x29933c: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x29933Cu;
    SET_GPR_U32(ctx, 31, 0x299344u);
    ctx->pc = 0x299340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29933Cu;
    // 0x299340: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x29933Cu, 0x299344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299344u;
label_299344:
    // 0x299344: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x299344u;
    SET_GPR_U32(ctx, 31, 0x29934Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x299344u, 0x29934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29934Cu;
label_29934c:
    // 0x29934c: 0xc0a723c  jal         func_29C8F0
    ctx->pc = 0x29934Cu;
    SET_GPR_U32(ctx, 31, 0x299354u);
    ctx->pc = 0x299350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29934Cu;
    // 0x299350: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C8F0u, 0x29934Cu, 0x299354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299354u;
label_299354:
    // 0x299354: 0xc0a1f58  jal         func_287D60
    ctx->pc = 0x299354u;
    SET_GPR_U32(ctx, 31, 0x29935Cu);
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x299354u, 0x29935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29935Cu;
label_29935c:
    // 0x29935c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29935Cu;
    {
        const bool branch_taken_0x29935c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29935Cu;
        // 0x299360: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29935c) {
            ctx->pc = 0x299378u;
            goto label_299378;
        }
    }
    ctx->pc = 0x299364u;
    // 0x299364: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x299364u;
    SET_GPR_U32(ctx, 31, 0x29936Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x299364u, 0x29936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29936Cu;
label_29936c:
    // 0x29936c: 0xc0a718a  jal         func_29C628
    ctx->pc = 0x29936Cu;
    SET_GPR_U32(ctx, 31, 0x299374u);
    ctx->pc = 0x299370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29936Cu;
    // 0x299370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C628u, 0x29936Cu, 0x299374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299374u;
label_299374:
    // 0x299374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299378:
    // 0x299378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x299378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29937c: 0x3e00008  jr          $ra
    ctx->pc = 0x29937Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29937Cu;
        // 0x299380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29937Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299384u;
    // 0x299384: 0x0  nop
    ctx->pc = 0x299384u;
    // NOP
    ctx->pc = 0x299388u;
}
