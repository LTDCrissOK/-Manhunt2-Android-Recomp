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

// Function: sub_00189250
// Address: 0x189250 - 0x189d70
void sub_00189250_0x189250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189250_0x189250");
#endif

    switch (ctx->pc) {
        case 0x1892acu: goto label_1892ac;
        case 0x1892bcu: goto label_1892bc;
        case 0x1892d0u: goto label_1892d0;
        case 0x1892e0u: goto label_1892e0;
        case 0x1892e8u: goto label_1892e8;
        case 0x1892f0u: goto label_1892f0;
        case 0x1892fcu: goto label_1892fc;
        case 0x18930cu: goto label_18930c;
        case 0x189314u: goto label_189314;
        case 0x189324u: goto label_189324;
        case 0x18932cu: goto label_18932c;
        case 0x189340u: goto label_189340;
        case 0x1893b8u: goto label_1893b8;
        case 0x18942cu: goto label_18942c;
        case 0x189438u: goto label_189438;
        case 0x189440u: goto label_189440;
        case 0x1894e4u: goto label_1894e4;
        case 0x189524u: goto label_189524;
        case 0x18957cu: goto label_18957c;
        case 0x1895e8u: goto label_1895e8;
        case 0x189628u: goto label_189628;
        case 0x189634u: goto label_189634;
        case 0x1896bcu: goto label_1896bc;
        case 0x1896ccu: goto label_1896cc;
        case 0x1896d4u: goto label_1896d4;
        case 0x189a14u: goto label_189a14;
        case 0x189a30u: goto label_189a30;
        case 0x189a40u: goto label_189a40;
        case 0x189a68u: goto label_189a68;
        case 0x189a78u: goto label_189a78;
        case 0x189a90u: goto label_189a90;
        case 0x189aa0u: goto label_189aa0;
        case 0x189ab8u: goto label_189ab8;
        case 0x189bc4u: goto label_189bc4;
        case 0x189be0u: goto label_189be0;
        case 0x189bf4u: goto label_189bf4;
        case 0x189c00u: goto label_189c00;
        case 0x189c14u: goto label_189c14;
        case 0x189c38u: goto label_189c38;
        case 0x189c68u: goto label_189c68;
        case 0x189cb8u: goto label_189cb8;
        case 0x189cc4u: goto label_189cc4;
        case 0x189cd0u: goto label_189cd0;
        case 0x189d38u: goto label_189d38;
        default: break;
    }

    ctx->pc = 0x189250u;

    // 0x189250: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x189250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x189254: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x189254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x189258: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18925c: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x18925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x189260: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x189260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x189264: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x189264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189268: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x189268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x18926c: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x18926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x189270: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x189270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x189274: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x189274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x189278: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x189278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x18927c: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x18927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x189280: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x189280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x189284: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x189284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x189288: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x189288u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x18928c: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x18928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189290: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x189290u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189294: 0x0  nop
    ctx->pc = 0x189294u;
    // NOP
    // 0x189298: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x189298u;
    {
        const bool branch_taken_0x189298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189298u;
        // 0x18929c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189298) {
            ctx->pc = 0x1892C4u;
            goto label_1892c4;
        }
    }
    ctx->pc = 0x1892A0u;
    // 0x1892a0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1892a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1892a4: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x1892A4u;
    SET_GPR_U32(ctx, 31, 0x1892ACu);
    ctx->pc = 0x1892A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892A4u;
    // 0x1892a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1892A4u, 0x1892ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892ACu;
label_1892ac:
    // 0x1892ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1892acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1892b0: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1892b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x1892b4: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x1892B4u;
    SET_GPR_U32(ctx, 31, 0x1892BCu);
    ctx->pc = 0x1892B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892B4u;
    // 0x1892b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1892B4u, 0x1892BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892BCu;
label_1892bc:
    // 0x1892bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1892BCu;
    {
        const bool branch_taken_0x1892bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1892bc) {
            ctx->pc = 0x1892E0u;
            goto label_1892e0;
        }
    }
    ctx->pc = 0x1892C4u;
label_1892c4:
    // 0x1892c4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1892c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1892c8: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x1892C8u;
    SET_GPR_U32(ctx, 31, 0x1892D0u);
    ctx->pc = 0x1892CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892C8u;
    // 0x1892cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1892C8u, 0x1892D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892D0u;
label_1892d0:
    // 0x1892d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1892d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1892d4: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1892d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x1892d8: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x1892D8u;
    SET_GPR_U32(ctx, 31, 0x1892E0u);
    ctx->pc = 0x1892DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892D8u;
    // 0x1892dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1892D8u, 0x1892E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892E0u;
label_1892e0:
    // 0x1892e0: 0xc062f48  jal         func_18BD20
    ctx->pc = 0x1892E0u;
    SET_GPR_U32(ctx, 31, 0x1892E8u);
    ctx->pc = 0x1892E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892E0u;
    // 0x1892e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD20u, 0x1892E0u, 0x1892E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892E8u;
label_1892e8:
    // 0x1892e8: 0xc061a26  jal         func_186898
    ctx->pc = 0x1892E8u;
    SET_GPR_U32(ctx, 31, 0x1892F0u);
    ctx->pc = 0x1892ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892E8u;
    // 0x1892ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1892E8u, 0x1892F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892F0u;
label_1892f0:
    // 0x1892f0: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x1892f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1892f4: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1892F4u;
    SET_GPR_U32(ctx, 31, 0x1892FCu);
    ctx->pc = 0x1892F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892F4u;
    // 0x1892f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1892F4u, 0x1892FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892FCu;
label_1892fc:
    // 0x1892fc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1892FCu;
    {
        const bool branch_taken_0x1892fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1892fc) {
            ctx->pc = 0x189300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1892FCu;
            // 0x189300: 0xc6400070  lwc1        $f0, 0x70($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18934Cu;
            goto label_18934c;
        }
    }
    ctx->pc = 0x189304u;
    // 0x189304: 0xc061a1e  jal         func_186878
    ctx->pc = 0x189304u;
    SET_GPR_U32(ctx, 31, 0x18930Cu);
    ctx->pc = 0x189308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189304u;
    // 0x189308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x189304u, 0x18930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18930Cu;
label_18930c:
    // 0x18930c: 0xc06d9b2  jal         func_1B66C8
    ctx->pc = 0x18930Cu;
    SET_GPR_U32(ctx, 31, 0x189314u);
    ctx->pc = 0x189310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18930Cu;
    // 0x189310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B66C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B66C8u, 0x18930Cu, 0x189314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189314u;
label_189314:
    // 0x189314: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x189314u;
    {
        const bool branch_taken_0x189314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189314) {
            ctx->pc = 0x189338u;
            goto label_189338;
        }
    }
    ctx->pc = 0x18931Cu;
    // 0x18931c: 0xc061a26  jal         func_186898
    ctx->pc = 0x18931Cu;
    SET_GPR_U32(ctx, 31, 0x189324u);
    ctx->pc = 0x189320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18931Cu;
    // 0x189320: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x18931Cu, 0x189324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189324u;
label_189324:
    // 0x189324: 0xc072674  jal         func_1C99D0
    ctx->pc = 0x189324u;
    SET_GPR_U32(ctx, 31, 0x18932Cu);
    ctx->pc = 0x189328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189324u;
    // 0x189328: 0x2444002c  addiu       $a0, $v0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99D0u, 0x189324u, 0x18932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18932Cu;
label_18932c:
    // 0x18932c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x18932cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x189330: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x189330u;
    {
        const bool branch_taken_0x189330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189330) {
            ctx->pc = 0x189334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189330u;
            // 0x189334: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189388u;
            goto label_189388;
        }
    }
    ctx->pc = 0x189338u;
label_189338:
    // 0x189338: 0xc061a1e  jal         func_186878
    ctx->pc = 0x189338u;
    SET_GPR_U32(ctx, 31, 0x189340u);
    ctx->pc = 0x18933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189338u;
    // 0x18933c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x189338u, 0x189340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189340u;
label_189340:
    // 0x189340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x189340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189344: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x189344u;
    {
        const bool branch_taken_0x189344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189344u;
        // 0x189348: 0xac43021c  sw          $v1, 0x21C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189344) {
            ctx->pc = 0x189384u;
            goto label_189384;
        }
    }
    ctx->pc = 0x18934Cu;
label_18934c:
    // 0x18934c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18934cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189350: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189354: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x189354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x189358: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x189358u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18935c: 0x0  nop
    ctx->pc = 0x18935cu;
    // NOP
    // 0x189360: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x189360u;
    {
        const bool branch_taken_0x189360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189360u;
        // 0x189364: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189360) {
            ctx->pc = 0x189370u;
            goto label_189370;
        }
    }
    ctx->pc = 0x189368u;
    // 0x189368: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x189368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18936c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x18936cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_189370:
    // 0x189370: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x189370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189374: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x189374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189378: 0xe44004fc  swc1        $f0, 0x4FC($v0)
    ctx->pc = 0x189378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1276), bits); }
    // 0x18937c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x18937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189380: 0xe4410500  swc1        $f1, 0x500($v0)
    ctx->pc = 0x189380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1280), bits); }
label_189384:
    // 0x189384: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x189384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_189388:
    // 0x189388: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x189388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x18938c: 0x8c450334  lw          $a1, 0x334($v0)
    ctx->pc = 0x18938cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x189390: 0x8ca40150  lw          $a0, 0x150($a1)
    ctx->pc = 0x189390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x189394: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x189394u;
    {
        const bool branch_taken_0x189394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x189398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189394u;
        // 0x189398: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189394) {
            ctx->pc = 0x1893A4u;
            goto label_1893a4;
        }
    }
    ctx->pc = 0x18939Cu;
    // 0x18939c: 0x14820079  bne         $a0, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x18939Cu;
    {
        const bool branch_taken_0x18939c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1893A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18939Cu;
        // 0x1893a0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18939c) {
            ctx->pc = 0x189584u;
            goto label_189584;
        }
    }
    ctx->pc = 0x1893A4u;
label_1893a4:
    // 0x1893a4: 0x8ca20160  lw          $v0, 0x160($a1)
    ctx->pc = 0x1893a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x1893a8: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1893A8u;
    {
        const bool branch_taken_0x1893a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893A8u;
        // 0x1893ac: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893a8) {
            ctx->pc = 0x189584u;
            goto label_189584;
        }
    }
    ctx->pc = 0x1893B0u;
    // 0x1893b0: 0xc061a26  jal         func_186898
    ctx->pc = 0x1893B0u;
    SET_GPR_U32(ctx, 31, 0x1893B8u);
    ctx->pc = 0x1893B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1893B0u;
    // 0x1893b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1893B0u, 0x1893B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1893B8u;
label_1893b8:
    // 0x1893b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1893b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1893bc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1893bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1893c0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1893C0u;
    {
        const bool branch_taken_0x1893c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893C0u;
        // 0x1893c4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893c0) {
            ctx->pc = 0x189424u;
            goto label_189424;
        }
    }
    ctx->pc = 0x1893C8u;
    // 0x1893c8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1893c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1893cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1893CCu;
    {
        const bool branch_taken_0x1893cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1893D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893CCu;
        // 0x1893d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893cc) {
            ctx->pc = 0x1893E8u;
            goto label_1893e8;
        }
    }
    ctx->pc = 0x1893D4u;
    // 0x1893d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1893d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1893d8: 0x0  nop
    ctx->pc = 0x1893d8u;
    // NOP
    // 0x1893dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1893dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1893e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1893E0u;
    {
        const bool branch_taken_0x1893e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1893e0) {
            ctx->pc = 0x189400u;
            goto label_189400;
        }
    }
    ctx->pc = 0x1893E8u;
label_1893e8:
    // 0x1893e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1893e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1893ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1893ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1893f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1893f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1893f4: 0x0  nop
    ctx->pc = 0x1893f4u;
    // NOP
    // 0x1893f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1893f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1893fc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1893fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_189400:
    // 0x189400: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x189400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x189404: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x189404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x189408: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18940c: 0xc6410080  lwc1        $f1, 0x80($s2)
    ctx->pc = 0x18940cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189410: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x189410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x189414: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189418: 0x0  nop
    ctx->pc = 0x189418u;
    // NOP
    // 0x18941c: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x18941Cu;
    {
        const bool branch_taken_0x18941c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18941Cu;
        // 0x189420: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18941c) {
            ctx->pc = 0x189584u;
            goto label_189584;
        }
    }
    ctx->pc = 0x189424u;
label_189424:
    // 0x189424: 0xc061a1e  jal         func_186878
    ctx->pc = 0x189424u;
    SET_GPR_U32(ctx, 31, 0x18942Cu);
    ctx->pc = 0x189428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189424u;
    // 0x189428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x189424u, 0x18942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18942Cu;
label_18942c:
    // 0x18942c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189430: 0xc061a1e  jal         func_186878
    ctx->pc = 0x189430u;
    SET_GPR_U32(ctx, 31, 0x189438u);
    ctx->pc = 0x189434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189430u;
    // 0x189434: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x189430u, 0x189438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189438u;
label_189438:
    // 0x189438: 0xc06e0e6  jal         func_1B8398
    ctx->pc = 0x189438u;
    SET_GPR_U32(ctx, 31, 0x189440u);
    ctx->pc = 0x18943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189438u;
    // 0x18943c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x189438u, 0x189440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189440u;
label_189440:
    // 0x189440: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x189440u;
    {
        const bool branch_taken_0x189440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189440u;
        // 0x189444: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189440) {
            ctx->pc = 0x1894BCu;
            goto label_1894bc;
        }
    }
    ctx->pc = 0x189448u;
    // 0x189448: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x189448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18944c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x18944cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x189450: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x189450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x189454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189458: 0xc4611074  lwc1        $f1, 0x1074($v1)
    ctx->pc = 0x189458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18945c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x189460: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189460u;
    {
        const bool branch_taken_0x189460 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x189464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189460u;
        // 0x189464: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189460) {
            ctx->pc = 0x18947Cu;
            goto label_18947c;
        }
    }
    ctx->pc = 0x189468u;
    // 0x189468: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18946c: 0x0  nop
    ctx->pc = 0x18946cu;
    // NOP
    // 0x189470: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x189470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x189474: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x189474u;
    {
        const bool branch_taken_0x189474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189474) {
            ctx->pc = 0x189498u;
            goto label_189498;
        }
    }
    ctx->pc = 0x18947Cu;
label_18947c:
    // 0x18947c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18947cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x189480: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x189480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x189484: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x189488: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18948c: 0x0  nop
    ctx->pc = 0x18948cu;
    // NOP
    // 0x189490: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x189490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x189494: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x189494u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_189498:
    // 0x189498: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x189498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18949c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18949cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1894a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1894a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1894a4: 0x0  nop
    ctx->pc = 0x1894a4u;
    // NOP
    // 0x1894a8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1894a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1894ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1894acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1894b0: 0x0  nop
    ctx->pc = 0x1894b0u;
    // NOP
    // 0x1894b4: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x1894B4u;
    {
        const bool branch_taken_0x1894b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1894B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894B4u;
        // 0x1894b8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894b4) {
            ctx->pc = 0x189584u;
            goto label_189584;
        }
    }
    ctx->pc = 0x1894BCu;
label_1894bc:
    // 0x1894bc: 0xc6410074  lwc1        $f1, 0x74($s2)
    ctx->pc = 0x1894bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1894c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1894c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1894c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1894c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1894c8: 0x0  nop
    ctx->pc = 0x1894c8u;
    // NOP
    // 0x1894cc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1894ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1894d0: 0x0  nop
    ctx->pc = 0x1894d0u;
    // NOP
    // 0x1894d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1894D4u;
    {
        const bool branch_taken_0x1894d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1894D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894D4u;
        // 0x1894d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894d4) {
            ctx->pc = 0x1894ECu;
            goto label_1894ec;
        }
    }
    ctx->pc = 0x1894DCu;
    // 0x1894dc: 0xc062974  jal         func_18A5D0
    ctx->pc = 0x1894DCu;
    SET_GPR_U32(ctx, 31, 0x1894E4u);
    ctx->pc = 0x1894E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1894DCu;
    // 0x1894e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x1894DCu, 0x1894E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1894E4u;
label_1894e4:
    // 0x1894e4: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x1894E4u;
    {
        const bool branch_taken_0x1894e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894E4u;
        // 0x1894e8: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894e4) {
            ctx->pc = 0x189D3Cu;
            goto label_189d3c;
        }
    }
    ctx->pc = 0x1894ECu;
label_1894ec:
    // 0x1894ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1894ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1894f0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1894f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1894f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1894f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1894f8: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x1894f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1894fc: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x1894fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x189500: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x189500u;
    {
        const bool branch_taken_0x189500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x189500) {
            ctx->pc = 0x189504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189500u;
            // 0x189504: 0x8ca2036c  lw          $v0, 0x36C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18952Cu;
            goto label_18952c;
        }
    }
    ctx->pc = 0x189508u;
    // 0x189508: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x189508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18950c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x189510: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x189510u;
    {
        const bool branch_taken_0x189510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x189510) {
            ctx->pc = 0x189514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189510u;
            // 0x189514: 0x8ca2036c  lw          $v0, 0x36C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189530u;
            goto label_189530;
        }
    }
    ctx->pc = 0x189518u;
    // 0x189518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18951c: 0xc062974  jal         func_18A5D0
    ctx->pc = 0x18951Cu;
    SET_GPR_U32(ctx, 31, 0x189524u);
    ctx->pc = 0x189520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18951Cu;
    // 0x189520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x18951Cu, 0x189524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189524u;
label_189524:
    // 0x189524: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x189524u;
    {
        const bool branch_taken_0x189524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189524u;
        // 0x189528: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189524) {
            ctx->pc = 0x189D3Cu;
            goto label_189d3c;
        }
    }
    ctx->pc = 0x18952Cu;
label_18952c:
    // 0x18952c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18952cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_189530:
    // 0x189530: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x189530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x189534: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x189534u;
    {
        const bool branch_taken_0x189534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x189534) {
            ctx->pc = 0x189554u;
            goto label_189554;
        }
    }
    ctx->pc = 0x18953Cu;
    // 0x18953c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18953cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189544: 0x0  nop
    ctx->pc = 0x189544u;
    // NOP
    // 0x189548: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x189548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x18954c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18954Cu;
    {
        const bool branch_taken_0x18954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18954Cu;
        // 0x189550: 0xe6400078  swc1        $f0, 0x78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18954c) {
            ctx->pc = 0x18956Cu;
            goto label_18956c;
        }
    }
    ctx->pc = 0x189554u;
label_189554:
    // 0x189554: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18955c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18955cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x189560: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189564: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x189564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x189568: 0xe6410070  swc1        $f1, 0x70($s2)
    ctx->pc = 0x189568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_18956c:
    // 0x18956c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x18956cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x189570: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x189570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x189574: 0xc062364  jal         func_188D90
    ctx->pc = 0x189574u;
    SET_GPR_U32(ctx, 31, 0x18957Cu);
    ctx->pc = 0x189578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189574u;
    // 0x189578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188D90u, 0x189574u, 0x18957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18957Cu;
label_18957c:
    // 0x18957c: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x18957Cu;
    {
        const bool branch_taken_0x18957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18957Cu;
        // 0x189580: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18957c) {
            ctx->pc = 0x189D3Cu;
            goto label_189d3c;
        }
    }
    ctx->pc = 0x189584u;
label_189584:
    // 0x189584: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x189584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x189588: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189588u;
    {
        const bool branch_taken_0x189588 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189588u;
        // 0x18958c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189588) {
            ctx->pc = 0x1895A4u;
            goto label_1895a4;
        }
    }
    ctx->pc = 0x189590u;
    // 0x189590: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x189594: 0x0  nop
    ctx->pc = 0x189594u;
    // NOP
    // 0x189598: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x189598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18959c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18959Cu;
    {
        const bool branch_taken_0x18959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18959c) {
            ctx->pc = 0x1895BCu;
            goto label_1895bc;
        }
    }
    ctx->pc = 0x1895A4u;
label_1895a4:
    // 0x1895a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1895a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1895a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1895a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1895ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1895acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1895b0: 0x0  nop
    ctx->pc = 0x1895b0u;
    // NOP
    // 0x1895b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1895b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1895b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1895b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1895bc:
    // 0x1895bc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1895bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1895c0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1895c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1895c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1895c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1895c8: 0xc6410080  lwc1        $f1, 0x80($s2)
    ctx->pc = 0x1895c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1895cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1895ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1895d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1895d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1895d4: 0x0  nop
    ctx->pc = 0x1895d4u;
    // NOP
    // 0x1895d8: 0x450001d8  bc1f        . + 4 + (0x1D8 << 2)
    ctx->pc = 0x1895D8u;
    {
        const bool branch_taken_0x1895d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1895DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895D8u;
        // 0x1895dc: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895d8) {
            ctx->pc = 0x189D3Cu;
            goto label_189d3c;
        }
    }
    ctx->pc = 0x1895E0u;
    // 0x1895e0: 0xc061a26  jal         func_186898
    ctx->pc = 0x1895E0u;
    SET_GPR_U32(ctx, 31, 0x1895E8u);
    ctx->pc = 0x1895E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895E0u;
    // 0x1895e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1895E0u, 0x1895E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895E8u;
label_1895e8:
    // 0x1895e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1895e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1895ec: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1895ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1895f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1895f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1895f4: 0x106201d0  beq         $v1, $v0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x1895F4u;
    {
        const bool branch_taken_0x1895f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1895F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895F4u;
        // 0x1895f8: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895f4) {
            ctx->pc = 0x189D38u;
            goto label_189d38;
        }
    }
    ctx->pc = 0x1895FCu;
    // 0x1895fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1895fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189600: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x189600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x189604: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x189604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x189608: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189608u;
    {
        const bool branch_taken_0x189608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x18960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189608u;
        // 0x18960c: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189608) {
            ctx->pc = 0x189618u;
            goto label_189618;
        }
    }
    ctx->pc = 0x189610u;
    // 0x189610: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x189610u;
    {
        const bool branch_taken_0x189610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x189610) {
            ctx->pc = 0x189614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189610u;
            // 0x189614: 0xc6400074  lwc1        $f0, 0x74($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x189684u;
            goto label_189684;
        }
    }
    ctx->pc = 0x189618u;
label_189618:
    // 0x189618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18961c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x18961cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x189620: 0xc061a26  jal         func_186898
    ctx->pc = 0x189620u;
    SET_GPR_U32(ctx, 31, 0x189628u);
    ctx->pc = 0x189624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189620u;
    // 0x189624: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x189620u, 0x189628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189628u;
label_189628:
    // 0x189628: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x189628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x18962c: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x18962Cu;
    SET_GPR_U32(ctx, 31, 0x189634u);
    ctx->pc = 0x189630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18962Cu;
    // 0x189630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x18962Cu, 0x189634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189634u;
label_189634:
    // 0x189634: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x189634u;
    {
        const bool branch_taken_0x189634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189634) {
            ctx->pc = 0x189638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189634u;
            // 0x189638: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189670u;
            goto label_189670;
        }
    }
    ctx->pc = 0x18963Cu;
    // 0x18963c: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x18963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189640: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189644: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189648: 0x0  nop
    ctx->pc = 0x189648u;
    // NOP
    // 0x18964c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x18964cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189650: 0x0  nop
    ctx->pc = 0x189650u;
    // NOP
    // 0x189654: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x189654u;
    {
        const bool branch_taken_0x189654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189654) {
            ctx->pc = 0x189658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189654u;
            // 0x189658: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18966Cu;
            goto label_18966c;
        }
    }
    ctx->pc = 0x18965Cu;
    // 0x18965c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18965cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x189660: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189664: 0x0  nop
    ctx->pc = 0x189664u;
    // NOP
    // 0x189668: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x189668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18966c:
    // 0x18966c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_189670:
    // 0x189670: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x189670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189674: 0xe44004fc  swc1        $f0, 0x4FC($v0)
    ctx->pc = 0x189674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1276), bits); }
    // 0x189678: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x189678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18967c: 0xe4410500  swc1        $f1, 0x500($v0)
    ctx->pc = 0x18967cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1280), bits); }
    // 0x189680: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x189680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189684:
    // 0x189684: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189688: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x189688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18968c: 0x0  nop
    ctx->pc = 0x18968cu;
    // NOP
    // 0x189690: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x189690u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189694: 0x0  nop
    ctx->pc = 0x189694u;
    // NOP
    // 0x189698: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x189698u;
    {
        const bool branch_taken_0x189698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189698) {
            ctx->pc = 0x1896C4u;
            goto label_1896c4;
        }
    }
    ctx->pc = 0x1896A0u;
    // 0x1896a0: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1896a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1896a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1896a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1896a8: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1896a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x1896ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1896acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1896b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1896b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1896b4: 0xc06275c  jal         func_189D70
    ctx->pc = 0x1896B4u;
    SET_GPR_U32(ctx, 31, 0x1896BCu);
    ctx->pc = 0x1896B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1896B4u;
    // 0x1896b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189D70u, 0x1896B4u, 0x1896BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1896BCu;
label_1896bc:
    // 0x1896bc: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x1896BCu;
    {
        const bool branch_taken_0x1896bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896BCu;
        // 0x1896c0: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896bc) {
            ctx->pc = 0x189D3Cu;
            goto label_189d3c;
        }
    }
    ctx->pc = 0x1896C4u;
label_1896c4:
    // 0x1896c4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1896C4u;
    SET_GPR_U32(ctx, 31, 0x1896CCu);
    ctx->pc = 0x1896C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1896C4u;
    // 0x1896c8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1896C4u, 0x1896CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1896CCu;
label_1896cc:
    // 0x1896cc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1896CCu;
    SET_GPR_U32(ctx, 31, 0x1896D4u);
    ctx->pc = 0x1896D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1896CCu;
    // 0x1896d0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1896CCu, 0x1896D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1896D4u;
label_1896d4:
    // 0x1896d4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1896d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1896d8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1896d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1896dc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1896dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1896e0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1896e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1896e4: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x1896e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x1896e8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1896e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1896ec: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1896ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1896f0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1896f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1896f4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1896f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1896f8: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1896f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1896fc: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1896fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x189700: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x189700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x189704: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x189704u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189708: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x189708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18970c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x18970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x189710: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x189710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x189714: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x189714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x189718: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x189718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x18971c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x18971cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x189720: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x189720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189724: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x189724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x189728: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x189728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x18972c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18972cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189730: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x189730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x189734: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x189734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189738: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x189738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18973c: 0x8c441004  lw          $a0, 0x1004($v0)
    ctx->pc = 0x18973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x189740: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x189740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x189744: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x189744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x189748: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x189748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x18974c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x18974cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x189750: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x189750u;
    {
        const bool branch_taken_0x189750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189750) {
            ctx->pc = 0x189754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189750u;
            // 0x189754: 0x8c820fe8  lw          $v0, 0xFE8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1897DCu;
            goto label_1897dc;
        }
    }
    ctx->pc = 0x189758u;
    // 0x189758: 0x7a430100  lq          $v1, 0x100($s2)
    ctx->pc = 0x189758u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x18975c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18975cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x189760: 0x8c840fe8  lw          $a0, 0xFE8($a0)
    ctx->pc = 0x189760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x189764: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x189764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189768: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x189768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x18976c: 0x788201e0  lq          $v0, 0x1E0($a0)
    ctx->pc = 0x18976cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x189770: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x189770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x189774: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x189774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x189778: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x189778u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18977c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18977cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x189780: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x189780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x189784: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x189784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x189788: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x189788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18978c: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x18978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x189790: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x189790u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x189794: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x189794u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x189798: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x189798u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18979c: 0x0  nop
    ctx->pc = 0x18979cu;
    // NOP
    // 0x1897a0: 0x0  nop
    ctx->pc = 0x1897a0u;
    // NOP
    // 0x1897a4: 0x46010084  c1          0x10084
    ctx->pc = 0x1897a4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1897a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1897a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1897acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1897b0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1897b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897b4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1897b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1897b8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1897b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1897bc: 0x0  nop
    ctx->pc = 0x1897bcu;
    // NOP
    // 0x1897c0: 0x45000063  bc1f        . + 4 + (0x63 << 2)
    ctx->pc = 0x1897C0u;
    {
        const bool branch_taken_0x1897c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1897C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897C0u;
        // 0x1897c4: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897c0) {
            ctx->pc = 0x189950u;
            goto label_189950;
        }
    }
    ctx->pc = 0x1897C8u;
    // 0x1897c8: 0x0  nop
    ctx->pc = 0x1897c8u;
    // NOP
    // 0x1897cc: 0x0  nop
    ctx->pc = 0x1897ccu;
    // NOP
    // 0x1897d0: 0x4602a003  div.s       $f0, $f20, $f2
    ctx->pc = 0x1897d0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
    // 0x1897d4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1897D4u;
    {
        const bool branch_taken_0x1897d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1897d4) {
            ctx->pc = 0x18993Cu;
            goto label_18993c;
        }
    }
    ctx->pc = 0x1897DCu;
label_1897dc:
    // 0x1897dc: 0xc44001e0  lwc1        $f0, 0x1E0($v0)
    ctx->pc = 0x1897dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1897e0: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1897e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1897e4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1897e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1897e8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1897e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1897ec: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x1897ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1897f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1897f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1897f4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1897f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1897f8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1897f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1897fc: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x1897fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x189800: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x189800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x189804: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x189804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x189808: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x189808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x18980c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x18980cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x189810: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x189810u;
    {
        const bool branch_taken_0x189810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189810) {
            ctx->pc = 0x189814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189810u;
            // 0x189814: 0x8c85036c  lw          $a1, 0x36C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189838u;
            goto label_189838;
        }
    }
    ctx->pc = 0x189818u;
    // 0x189818: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x189818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x18981c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189820: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x189820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x189824: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x189824u;
    {
        const bool branch_taken_0x189824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189824) {
            ctx->pc = 0x189828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189824u;
            // 0x189828: 0x8c85036c  lw          $a1, 0x36C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189838u;
            goto label_189838;
        }
    }
    ctx->pc = 0x18982Cu;
    // 0x18982c: 0x46141000  add.s       $f0, $f2, $f20
    ctx->pc = 0x18982cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x189830: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x189830u;
    {
        const bool branch_taken_0x189830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189830u;
        // 0x189834: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189830) {
            ctx->pc = 0x1898C0u;
            goto label_1898c0;
        }
    }
    ctx->pc = 0x189838u;
label_189838:
    // 0x189838: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x189838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18983c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x18983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x189840: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x189840u;
    {
        const bool branch_taken_0x189840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x189844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189840u;
        // 0x189844: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189840) {
            ctx->pc = 0x18986Cu;
            goto label_18986c;
        }
    }
    ctx->pc = 0x189848u;
    // 0x189848: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x189848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x18984c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189850: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x189850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x189854: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x189854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x189858: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x189858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18985c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18985cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x189860: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x189860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x189864: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x189864u;
    {
        const bool branch_taken_0x189864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189864u;
        // 0x189868: 0xc7a30090  lwc1        $f3, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189864) {
            ctx->pc = 0x189898u;
            goto label_189898;
        }
    }
    ctx->pc = 0x18986Cu;
label_18986c:
    // 0x18986c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x18986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x189870: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x189870u;
    {
        const bool branch_taken_0x189870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x189870) {
            ctx->pc = 0x189874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189870u;
            // 0x189874: 0x7a430100  lq          $v1, 0x100($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1898C4u;
            goto label_1898c4;
        }
    }
    ctx->pc = 0x189878u;
    // 0x189878: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x189878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x18987c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189880: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x189880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x189884: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x189884u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x189888: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x189888u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18988c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18988cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x189890: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x189890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x189894: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x189894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_189898:
    // 0x189898: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x189898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18989c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x18989cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1898a0: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1898a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1898a4: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x1898a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1898a8: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x1898a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1898ac: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1898acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1898b0: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1898b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1898b4: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x1898b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1898b8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1898b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1898bc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1898bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_1898c0:
    // 0x1898c0: 0x7a430100  lq          $v1, 0x100($s2)
    ctx->pc = 0x1898c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 256)));
label_1898c4:
    // 0x1898c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1898c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1898c8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1898c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1898cc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1898ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1898d0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1898d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1898d4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1898d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1898d8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1898d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1898dc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1898dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1898e0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1898e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1898e4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1898e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1898e8: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x1898e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1898ec: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x1898ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1898f0: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x1898f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1898f4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1898f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1898f8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1898f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1898fc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1898fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x189900: 0x0  nop
    ctx->pc = 0x189900u;
    // NOP
    // 0x189904: 0x0  nop
    ctx->pc = 0x189904u;
    // NOP
    // 0x189908: 0x46010084  c1          0x10084
    ctx->pc = 0x189908u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x18990c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18990cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189910: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189914: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x189914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189918: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x189918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x18991c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x18991cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189920: 0x0  nop
    ctx->pc = 0x189920u;
    // NOP
    // 0x189924: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x189924u;
    {
        const bool branch_taken_0x189924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189924u;
        // 0x189928: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189924) {
            ctx->pc = 0x189950u;
            goto label_189950;
        }
    }
    ctx->pc = 0x18992Cu;
    // 0x18992c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18992cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189934: 0x0  nop
    ctx->pc = 0x189934u;
    // NOP
    // 0x189938: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x189938u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_18993c:
    // 0x18993c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18993cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x189940: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x189940u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x189944: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x189944u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x189948: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x189948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18994c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x18994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_189950:
    // 0x189950: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x189950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x189954: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x189954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x189958: 0xc462c61c  lwc1        $f2, -0x39E4($v1)
    ctx->pc = 0x189958u;
    { uint32_t bits = FAST_READ32(0x45C61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18995c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x18995cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x189960: 0xc480405c  lwc1        $f0, 0x405C($a0)
    ctx->pc = 0x189960u;
    { uint32_t bits = FAST_READ32(0x46405Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189964: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x189964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189968: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x189968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x18996c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18996cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x189970: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x189970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x189974: 0xc443c6a4  lwc1        $f3, -0x395C($v0)
    ctx->pc = 0x189974u;
    { uint32_t bits = FAST_READ32(0x45C6A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x189978: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x189978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18997c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x18997cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x189980: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x189980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x189984: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x189984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x189988: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x189988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x18998c: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x18998cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x189990: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x189990u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x189994: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x189994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x189998: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x189998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18999c: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x18999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1899a0: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x1899a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1899a4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1899a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1899a8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1899a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1899ac: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1899acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1899b0: 0x0  nop
    ctx->pc = 0x1899b0u;
    // NOP
    // 0x1899b4: 0x0  nop
    ctx->pc = 0x1899b4u;
    // NOP
    // 0x1899b8: 0x46010084  c1          0x10084
    ctx->pc = 0x1899b8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1899bc: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x1899bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1899c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1899c4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1899c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899c8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1899c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1899cc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1899ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1899d0: 0x0  nop
    ctx->pc = 0x1899d0u;
    // NOP
    // 0x1899d4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1899D4u;
    {
        const bool branch_taken_0x1899d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1899D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899D4u;
        // 0x1899d8: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899d4) {
            ctx->pc = 0x189A00u;
            goto label_189a00;
        }
    }
    ctx->pc = 0x1899DCu;
    // 0x1899dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1899dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1899e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1899e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1899e4: 0x0  nop
    ctx->pc = 0x1899e4u;
    // NOP
    // 0x1899e8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1899e8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1899ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1899ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1899f0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1899f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1899f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1899f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1899f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1899f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1899fc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1899fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_189a00:
    // 0x189a00: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x189a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x189a04: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x189a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a0c: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x189A0Cu;
    SET_GPR_U32(ctx, 31, 0x189A14u);
    ctx->pc = 0x189A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A0Cu;
    // 0x189a10: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x189A0Cu, 0x189A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A14u;
label_189a14:
    // 0x189a14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x189a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189a18: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x189a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x189a1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x189a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189a20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x189a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x189a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a28: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x189A28u;
    SET_GPR_U32(ctx, 31, 0x189A30u);
    ctx->pc = 0x189A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A28u;
    // 0x189a2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x189A28u, 0x189A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A30u;
label_189a30:
    // 0x189a30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x189a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a38: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x189A38u;
    SET_GPR_U32(ctx, 31, 0x189A40u);
    ctx->pc = 0x189A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A38u;
    // 0x189a3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x189A38u, 0x189A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A40u;
label_189a40:
    // 0x189a40: 0x1220006c  beqz        $s1, . + 4 + (0x6C << 2)
    ctx->pc = 0x189A40u;
    {
        const bool branch_taken_0x189a40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A40u;
        // 0x189a44: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a40) {
            ctx->pc = 0x189BF4u;
            goto label_189bf4;
        }
    }
    ctx->pc = 0x189A48u;
    // 0x189a48: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x189a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189a4c: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x189a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x189a50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x189a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x189a54: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x189A54u;
    {
        const bool branch_taken_0x189a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x189A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A54u;
        // 0x189a58: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a54) {
            ctx->pc = 0x189A88u;
            goto label_189a88;
        }
    }
    ctx->pc = 0x189A5Cu;
    // 0x189a5c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x189a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x189a60: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x189A60u;
    SET_GPR_U32(ctx, 31, 0x189A68u);
    ctx->pc = 0x189A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A60u;
    // 0x189a64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x189A60u, 0x189A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A68u;
label_189a68:
    // 0x189a68: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x189a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189a6c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x189a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x189a70: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x189A70u;
    SET_GPR_U32(ctx, 31, 0x189A78u);
    ctx->pc = 0x189A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A70u;
    // 0x189a74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x189A70u, 0x189A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A78u;
label_189a78:
    // 0x189a78: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x189a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x189a7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189a80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x189A80u;
    {
        const bool branch_taken_0x189a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A80u;
        // 0x189a84: 0xe6400070  swc1        $f0, 0x70($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a80) {
            ctx->pc = 0x189AB0u;
            goto label_189ab0;
        }
    }
    ctx->pc = 0x189A88u;
label_189a88:
    // 0x189a88: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x189A88u;
    SET_GPR_U32(ctx, 31, 0x189A90u);
    ctx->pc = 0x189A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A88u;
    // 0x189a8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x189A88u, 0x189A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A90u;
label_189a90:
    // 0x189a90: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x189a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189a94: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x189a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x189a98: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x189A98u;
    SET_GPR_U32(ctx, 31, 0x189AA0u);
    ctx->pc = 0x189A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A98u;
    // 0x189a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x189A98u, 0x189AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189AA0u;
label_189aa0:
    // 0x189aa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189aa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189aa8: 0x0  nop
    ctx->pc = 0x189aa8u;
    // NOP
    // 0x189aac: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x189aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_189ab0:
    // 0x189ab0: 0xc062f48  jal         func_18BD20
    ctx->pc = 0x189AB0u;
    SET_GPR_U32(ctx, 31, 0x189AB8u);
    ctx->pc = 0x189AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AB0u;
    // 0x189ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD20u, 0x189AB0u, 0x189AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189AB8u;
label_189ab8:
    // 0x189ab8: 0x7a420100  lq          $v0, 0x100($s2)
    ctx->pc = 0x189ab8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x189abc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x189abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x189ac0: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x189ac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x189ac4: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x189ac4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x189ac8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x189ac8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x189acc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x189accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x189ad0: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x189ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x189ad4: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x189ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x189ad8: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x189ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x189adc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x189adcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x189ae0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x189ae0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x189ae4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x189ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x189ae8: 0x0  nop
    ctx->pc = 0x189ae8u;
    // NOP
    // 0x189aec: 0x0  nop
    ctx->pc = 0x189aecu;
    // NOP
    // 0x189af0: 0x46000044  c1          0x44
    ctx->pc = 0x189af0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x189af4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x189af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x189af8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x189af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x189afc: 0x0  nop
    ctx->pc = 0x189afcu;
    // NOP
    // 0x189b00: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x189b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189b04: 0x0  nop
    ctx->pc = 0x189b04u;
    // NOP
    // 0x189b08: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x189B08u;
    {
        const bool branch_taken_0x189b08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B08u;
        // 0x189b0c: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b08) {
            ctx->pc = 0x189B34u;
            goto label_189b34;
        }
    }
    ctx->pc = 0x189B10u;
    // 0x189b10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189b14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189b18: 0x0  nop
    ctx->pc = 0x189b18u;
    // NOP
    // 0x189b1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x189b1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x189b20: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x189b20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x189b24: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x189b24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x189b28: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x189b28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x189b2c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x189b2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x189b30: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x189b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_189b34:
    // 0x189b34: 0xc7c1c61c  lwc1        $f1, -0x39E4($fp)
    ctx->pc = 0x189b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294952476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189b38: 0xc6e2405c  lwc1        $f2, 0x405C($s7)
    ctx->pc = 0x189b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x189b3c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x189b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b40: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x189b40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x189b44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x189b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x189b48: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x189b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x189b4c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x189b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x189b50: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x189b50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x189b54: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x189b54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x189b58: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x189b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x189b5c: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x189b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x189b60: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x189b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x189b64: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x189b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x189b68: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x189b68u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x189b6c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x189b6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x189b70: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x189b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x189b74: 0x0  nop
    ctx->pc = 0x189b74u;
    // NOP
    // 0x189b78: 0x0  nop
    ctx->pc = 0x189b78u;
    // NOP
    // 0x189b7c: 0x46000044  c1          0x44
    ctx->pc = 0x189b7cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x189b80: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x189b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x189b84: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x189b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189b88: 0x0  nop
    ctx->pc = 0x189b88u;
    // NOP
    // 0x189b8c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x189B8Cu;
    {
        const bool branch_taken_0x189b8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B8Cu;
        // 0x189b90: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b8c) {
            ctx->pc = 0x189BB8u;
            goto label_189bb8;
        }
    }
    ctx->pc = 0x189B94u;
    // 0x189b94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189b9c: 0x0  nop
    ctx->pc = 0x189b9cu;
    // NOP
    // 0x189ba0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x189ba0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x189ba4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x189ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x189ba8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x189ba8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x189bac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x189bacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x189bb0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x189bb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x189bb4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x189bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_189bb8:
    // 0x189bb8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x189bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189bbc: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x189BBCu;
    SET_GPR_U32(ctx, 31, 0x189BC4u);
    ctx->pc = 0x189BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BBCu;
    // 0x189bc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x189BBCu, 0x189BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BC4u;
label_189bc4:
    // 0x189bc4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x189bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189bc8: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x189bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x189bcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x189bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189bd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x189bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x189bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bd8: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x189BD8u;
    SET_GPR_U32(ctx, 31, 0x189BE0u);
    ctx->pc = 0x189BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BD8u;
    // 0x189bdc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x189BD8u, 0x189BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BE0u;
label_189be0:
    // 0x189be0: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x189BE0u;
    {
        const bool branch_taken_0x189be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189be0) {
            ctx->pc = 0x189BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189BE0u;
            // 0x189be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189CBCu;
            goto label_189cbc;
        }
    }
    ctx->pc = 0x189BE8u;
    // 0x189be8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x189be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bec: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x189BECu;
    SET_GPR_U32(ctx, 31, 0x189BF4u);
    ctx->pc = 0x189BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BECu;
    // 0x189bf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x189BECu, 0x189BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BF4u;
label_189bf4:
    // 0x189bf4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x189bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189bf8: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x189BF8u;
    SET_GPR_U32(ctx, 31, 0x189C00u);
    ctx->pc = 0x189BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BF8u;
    // 0x189bfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x189BF8u, 0x189C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C00u;
label_189c00:
    // 0x189c00: 0x3c05ffdb  lui         $a1, 0xFFDB
    ctx->pc = 0x189c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65499 << 16));
    // 0x189c04: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x189c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x189c08: 0x34a5fdef  ori         $a1, $a1, 0xFDEF
    ctx->pc = 0x189c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65007);
    // 0x189c0c: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x189C0Cu;
    SET_GPR_U32(ctx, 31, 0x189C14u);
    ctx->pc = 0x189C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C0Cu;
    // 0x189c10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x189C0Cu, 0x189C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C14u;
label_189c14:
    // 0x189c14: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x189C14u;
    {
        const bool branch_taken_0x189c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C14u;
        // 0x189c18: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c14) {
            ctx->pc = 0x189C40u;
            goto label_189c40;
        }
    }
    ctx->pc = 0x189C1Cu;
    // 0x189c1c: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x189c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
    // 0x189c20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x189c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x189c24: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x189c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x189c28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x189c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x189c2c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x189c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x189c30: 0xc06275c  jal         func_189D70
    ctx->pc = 0x189C30u;
    SET_GPR_U32(ctx, 31, 0x189C38u);
    ctx->pc = 0x189C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C30u;
    // 0x189c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189D70u, 0x189C30u, 0x189C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C38u;
label_189c38:
    // 0x189c38: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x189C38u;
    {
        const bool branch_taken_0x189c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C38u;
        // 0x189c3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c38) {
            ctx->pc = 0x189D30u;
            goto label_189d30;
        }
    }
    ctx->pc = 0x189C40u;
label_189c40:
    // 0x189c40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x189c40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c44: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x189c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
    // 0x189c48: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x189C48u;
    {
        const bool branch_taken_0x189c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C48u;
        // 0x189c4c: 0x60582d  daddu       $t3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c48) {
            ctx->pc = 0x189D2Cu;
            goto label_189d2c;
        }
    }
    ctx->pc = 0x189C50u;
    // 0x189c50: 0x3c070006  lui         $a3, 0x6
    ctx->pc = 0x189c50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)6 << 16));
    // 0x189c54: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x189c54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x189c58: 0x3c0a0048  lui         $t2, 0x48
    ctx->pc = 0x189c58u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)72 << 16));
    // 0x189c5c: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x189c5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x189c60: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x189c60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x189c64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x189c64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189c68:
    // 0x189c68: 0x8d432b20  lw          $v1, 0x2B20($t2)
    ctx->pc = 0x189c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 11040)));
    // 0x189c6c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x189c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189c70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x189c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189c74: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x189c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x189c78: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x189c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x189c7c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x189c7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x189c80: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x189C80u;
    {
        const bool branch_taken_0x189c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C80u;
        // 0x189c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c80) {
            ctx->pc = 0x189C8Cu;
            goto label_189c8c;
        }
    }
    ctx->pc = 0x189C88u;
    // 0x189c88: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x189c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_189c8c:
    // 0x189c8c: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x189c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x189c90: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x189c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x189c94: 0x50470009  beql        $v0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x189C94u;
    {
        const bool branch_taken_0x189c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x189c94) {
            ctx->pc = 0x189C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189C94u;
            // 0x189c98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189CBCu;
            goto label_189cbc;
        }
    }
    ctx->pc = 0x189C9Cu;
    // 0x189c9c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x189C9Cu;
    {
        const bool branch_taken_0x189c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C9Cu;
        // 0x189ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c9c) {
            ctx->pc = 0x189CA8u;
            goto label_189ca8;
        }
    }
    ctx->pc = 0x189CA4u;
    // 0x189ca4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x189ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_189ca8:
    // 0x189ca8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x189ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x189cac: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x189cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x189cb0: 0x14460009  bne         $v0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x189CB0u;
    {
        const bool branch_taken_0x189cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x189cb0) {
            ctx->pc = 0x189CD8u;
            goto label_189cd8;
        }
    }
    ctx->pc = 0x189CB8u;
label_189cb8:
    // 0x189cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_189cbc:
    // 0x189cbc: 0xc062974  jal         func_18A5D0
    ctx->pc = 0x189CBCu;
    SET_GPR_U32(ctx, 31, 0x189CC4u);
    ctx->pc = 0x189CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CBCu;
    // 0x189cc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x189CBCu, 0x189CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CC4u;
label_189cc4:
    // 0x189cc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x189cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189cc8: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x189CC8u;
    SET_GPR_U32(ctx, 31, 0x189CD0u);
    ctx->pc = 0x189CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CC8u;
    // 0x189ccc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x189CC8u, 0x189CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CD0u;
label_189cd0:
    // 0x189cd0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x189CD0u;
    {
        const bool branch_taken_0x189cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CD0u;
        // 0x189cd4: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cd0) {
            ctx->pc = 0x189D3Cu;
            goto label_189d3c;
        }
    }
    ctx->pc = 0x189CD8u;
label_189cd8:
    // 0x189cd8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x189CD8u;
    {
        const bool branch_taken_0x189cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CD8u;
        // 0x189cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cd8) {
            ctx->pc = 0x189CE4u;
            goto label_189ce4;
        }
    }
    ctx->pc = 0x189CE0u;
    // 0x189ce0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x189ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_189ce4:
    // 0x189ce4: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x189ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x189ce8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x189ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x189cec: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x189cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x189cf0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x189CF0u;
    {
        const bool branch_taken_0x189cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CF0u;
        // 0x189cf4: 0x8d622b1c  lw          $v0, 0x2B1C($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cf0) {
            ctx->pc = 0x189D1Cu;
            goto label_189d1c;
        }
    }
    ctx->pc = 0x189CF8u;
    // 0x189cf8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x189CF8u;
    {
        const bool branch_taken_0x189cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CF8u;
        // 0x189cfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cf8) {
            ctx->pc = 0x189D04u;
            goto label_189d04;
        }
    }
    ctx->pc = 0x189D00u;
    // 0x189d00: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x189d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_189d04:
    // 0x189d04: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x189d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x189d08: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x189d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x189d0c: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x189d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x189d10: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x189d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x189d14: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x189D14u;
    {
        const bool branch_taken_0x189d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D14u;
        // 0x189d18: 0x8d622b1c  lw          $v0, 0x2B1C($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d14) {
            ctx->pc = 0x189CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189cb8;
        }
    }
    ctx->pc = 0x189D1Cu;
label_189d1c:
    // 0x189d1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x189d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x189d20: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x189d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x189d24: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x189D24u;
    {
        const bool branch_taken_0x189d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D24u;
        // 0x189d28: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d24) {
            ctx->pc = 0x189C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189c68;
        }
    }
    ctx->pc = 0x189D2Cu;
label_189d2c:
    // 0x189d2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x189d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_189d30:
    // 0x189d30: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x189D30u;
    SET_GPR_U32(ctx, 31, 0x189D38u);
    ctx->pc = 0x189D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D30u;
    // 0x189d34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x189D30u, 0x189D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D38u;
label_189d38:
    // 0x189d38: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x189d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_189d3c:
    // 0x189d3c: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x189d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x189d40: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x189d40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x189d44: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x189d44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x189d48: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x189d48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x189d4c: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x189d4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x189d50: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x189d50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x189d54: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x189d54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x189d58: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x189d58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x189d5c: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x189d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189d60: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x189d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x189d64: 0x3e00008  jr          $ra
    ctx->pc = 0x189D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D64u;
        // 0x189d68: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189D6Cu;
    // 0x189d6c: 0x0  nop
    ctx->pc = 0x189d6cu;
    // NOP
    ctx->pc = 0x189d70u;
}
