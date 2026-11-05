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

// Function: sub_001953B8
// Address: 0x1953b8 - 0x195608
void sub_001953B8_0x1953b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001953B8_0x1953b8");
#endif

    switch (ctx->pc) {
        case 0x195460u: goto label_195460;
        case 0x195470u: goto label_195470;
        case 0x195494u: goto label_195494;
        case 0x1954a0u: goto label_1954a0;
        case 0x19551cu: goto label_19551c;
        case 0x195524u: goto label_195524;
        case 0x19552cu: goto label_19552c;
        case 0x1955c4u: goto label_1955c4;
        default: break;
    }

    ctx->pc = 0x1953b8u;

    // 0x1953b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1953b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1953bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1953bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1953c0: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1953c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1953c4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1953c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1953c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1953c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953cc: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1953ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1953d0: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1953d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1953d4: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1953d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1953d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1953D8u;
    {
        const bool branch_taken_0x1953d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1953DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953D8u;
        // 0x1953dc: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953d8) {
            ctx->pc = 0x1953F4u;
            goto label_1953f4;
        }
    }
    ctx->pc = 0x1953E0u;
    // 0x1953e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1953e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1953e4: 0x0  nop
    ctx->pc = 0x1953e4u;
    // NOP
    // 0x1953e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1953e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1953ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1953ECu;
    {
        const bool branch_taken_0x1953ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953ec) {
            ctx->pc = 0x195410u;
            goto label_195410;
        }
    }
    ctx->pc = 0x1953F4u;
label_1953f4:
    // 0x1953f4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1953f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1953f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1953f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1953fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1953fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x195400: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x195400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195404: 0x0  nop
    ctx->pc = 0x195404u;
    // NOP
    // 0x195408: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19540c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19540cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_195410:
    // 0x195410: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x195410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x195414: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x195414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x195418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19541c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x195420: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x195420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x195424: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x195424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x195428: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x195428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19542c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19542cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195430: 0xc4411074  lwc1        $f1, 0x1074($v0)
    ctx->pc = 0x195430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195434: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x195434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x195438: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x195438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19543c: 0x0  nop
    ctx->pc = 0x19543cu;
    // NOP
    // 0x195440: 0x4501006a  bc1t        . + 4 + (0x6A << 2)
    ctx->pc = 0x195440u;
    {
        const bool branch_taken_0x195440 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195440u;
        // 0x195444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195440) {
            ctx->pc = 0x1955ECu;
            goto label_1955ec;
        }
    }
    ctx->pc = 0x195448u;
    // 0x195448: 0x26510020  addiu       $s1, $s2, 0x20
    ctx->pc = 0x195448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x19544c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x195450: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x195450u;
    {
        const bool branch_taken_0x195450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195450u;
        // 0x195454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195450) {
            ctx->pc = 0x1955ECu;
            goto label_1955ec;
        }
    }
    ctx->pc = 0x195458u;
    // 0x195458: 0xc061a12  jal         func_186848
    ctx->pc = 0x195458u;
    SET_GPR_U32(ctx, 31, 0x195460u);
    ctx->pc = 0x19545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195458u;
    // 0x19545c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x195458u, 0x195460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195460u;
label_195460:
    // 0x195460: 0x244601e0  addiu       $a2, $v0, 0x1E0
    ctx->pc = 0x195460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x195464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x195464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195468: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x195468u;
    SET_GPR_U32(ctx, 31, 0x195470u);
    ctx->pc = 0x19546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195468u;
    // 0x19546c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x195468u, 0x195470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195470u;
label_195470:
    // 0x195470: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x195470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195474: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x195474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x195478: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x195478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19547c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x19547cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x195480: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x195480u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x195484: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x195484u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x195488: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x195488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x19548c: 0xc061a12  jal         func_186848
    ctx->pc = 0x19548Cu;
    SET_GPR_U32(ctx, 31, 0x195494u);
    ctx->pc = 0x195490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19548Cu;
    // 0x195490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19548Cu, 0x195494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195494u;
label_195494:
    // 0x195494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195498: 0xc072c82  jal         func_1CB208
    ctx->pc = 0x195498u;
    SET_GPR_U32(ctx, 31, 0x1954A0u);
    ctx->pc = 0x19549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195498u;
    // 0x19549c: 0x244501e0  addiu       $a1, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB208u, 0x195498u, 0x1954A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954A0u;
label_1954a0:
    // 0x1954a0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1954a0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1954a4: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x1954a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x1954a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1954a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1954ac: 0x0  nop
    ctx->pc = 0x1954acu;
    // NOP
    // 0x1954b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1954b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1954b4: 0x0  nop
    ctx->pc = 0x1954b4u;
    // NOP
    // 0x1954b8: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x1954B8u;
    {
        const bool branch_taken_0x1954b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1954BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954B8u;
        // 0x1954bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954b8) {
            ctx->pc = 0x1955ECu;
            goto label_1955ec;
        }
    }
    ctx->pc = 0x1954C0u;
    // 0x1954c0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1954c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1954c4: 0x8c440ff8  lw          $a0, 0xFF8($v0)
    ctx->pc = 0x1954c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1954c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1954c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1954cc: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1954ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1954d0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1954D0u;
    {
        const bool branch_taken_0x1954d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1954d0) {
            ctx->pc = 0x1954F4u;
            goto label_1954f4;
        }
    }
    ctx->pc = 0x1954D8u;
    // 0x1954d8: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x1954d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x1954dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1954dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1954e0: 0x0  nop
    ctx->pc = 0x1954e0u;
    // NOP
    // 0x1954e4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1954e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1954e8: 0x0  nop
    ctx->pc = 0x1954e8u;
    // NOP
    // 0x1954ec: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1954ECu;
    {
        const bool branch_taken_0x1954ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1954ec) {
            ctx->pc = 0x1954F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1954ECu;
            // 0x1954f0: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195514u;
            goto label_195514;
        }
    }
    ctx->pc = 0x1954F4u;
label_1954f4:
    // 0x1954f4: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x1954f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x1954f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1954f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1954fc: 0x0  nop
    ctx->pc = 0x1954fcu;
    // NOP
    // 0x195500: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x195500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195504: 0x0  nop
    ctx->pc = 0x195504u;
    // NOP
    // 0x195508: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x195508u;
    {
        const bool branch_taken_0x195508 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195508u;
        // 0x19550c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195508) {
            ctx->pc = 0x1955ECu;
            goto label_1955ec;
        }
    }
    ctx->pc = 0x195510u;
    // 0x195510: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x195510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_195514:
    // 0x195514: 0xc06faee  jal         func_1BEBB8
    ctx->pc = 0x195514u;
    SET_GPR_U32(ctx, 31, 0x19551Cu);
    ctx->pc = 0x195518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195514u;
    // 0x195518: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x195514u, 0x19551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19551Cu;
label_19551c:
    // 0x19551c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19551Cu;
    SET_GPR_U32(ctx, 31, 0x195524u);
    ctx->pc = 0x195520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19551Cu;
    // 0x195520: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19551Cu, 0x195524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195524u;
label_195524:
    // 0x195524: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x195524u;
    SET_GPR_U32(ctx, 31, 0x19552Cu);
    ctx->pc = 0x195528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195524u;
    // 0x195528: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x195524u, 0x19552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19552Cu;
label_19552c:
    // 0x19552c: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x19552cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x195530: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x195530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x195534: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x195534u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195538: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x195538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19553c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x19553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x195540: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x195540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x195544: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x195544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x195548: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x195548u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19554c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x19554cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195550: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x195550u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x195554: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x195554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x195558: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x195558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19555c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x19555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x195560: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x195560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x195564: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x195564u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x195568: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x195568u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x19556c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x19556cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x195570: 0x0  nop
    ctx->pc = 0x195570u;
    // NOP
    // 0x195574: 0x0  nop
    ctx->pc = 0x195574u;
    // NOP
    // 0x195578: 0x46010084  c1          0x10084
    ctx->pc = 0x195578u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x19557c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x19557cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x195580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x195580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195584: 0x0  nop
    ctx->pc = 0x195584u;
    // NOP
    // 0x195588: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x195588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19558c: 0x0  nop
    ctx->pc = 0x19558cu;
    // NOP
    // 0x195590: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x195590u;
    {
        const bool branch_taken_0x195590 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x195594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195590u;
        // 0x195594: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195590) {
            ctx->pc = 0x1955BCu;
            goto label_1955bc;
        }
    }
    ctx->pc = 0x195598u;
    // 0x195598: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x195598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19559c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19559cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1955a0: 0x0  nop
    ctx->pc = 0x1955a0u;
    // NOP
    // 0x1955a4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1955a4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1955a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1955a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1955ac: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1955acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1955b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1955b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1955b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1955b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1955b8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1955b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_1955bc:
    // 0x1955bc: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x1955BCu;
    SET_GPR_U32(ctx, 31, 0x1955C4u);
    ctx->pc = 0x1955C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955BCu;
    // 0x1955c0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x1955BCu, 0x1955C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955C4u;
label_1955c4:
    // 0x1955c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1955C4u;
    {
        const bool branch_taken_0x1955c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1955C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955C4u;
        // 0x1955c8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1955c4) {
            ctx->pc = 0x1955E0u;
            goto label_1955e0;
        }
    }
    ctx->pc = 0x1955CCu;
    // 0x1955cc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1955ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1955d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1955d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1955d4: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x1955d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x1955d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1955D8u;
    {
        const bool branch_taken_0x1955d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1955DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955D8u;
        // 0x1955dc: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1955d8) {
            ctx->pc = 0x1955ECu;
            goto label_1955ec;
        }
    }
    ctx->pc = 0x1955E0u;
label_1955e0:
    // 0x1955e0: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1955e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1955e4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1955e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1955e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1955e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1955ec:
    // 0x1955ec: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1955ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1955f0: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1955f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1955f4: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1955f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1955f8: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1955f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1955fc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1955fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x195600: 0x3e00008  jr          $ra
    ctx->pc = 0x195600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195600u;
        // 0x195604: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195608u;
}
