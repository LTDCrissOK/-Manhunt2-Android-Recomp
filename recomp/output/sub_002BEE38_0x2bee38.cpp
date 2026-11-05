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

// Function: sub_002BEE38
// Address: 0x2bee38 - 0x2bf080
void sub_002BEE38_0x2bee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEE38_0x2bee38");
#endif

    switch (ctx->pc) {
        case 0x2bee5cu: goto label_2bee5c;
        case 0x2bee64u: goto label_2bee64;
        case 0x2bee6cu: goto label_2bee6c;
        case 0x2beed8u: goto label_2beed8;
        case 0x2bef44u: goto label_2bef44;
        default: break;
    }

    ctx->pc = 0x2bee38u;

    // 0x2bee38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bee38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bee3c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bee40: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2bee40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2bee44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bee44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee48: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2bee48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bee4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bee4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee50: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2bee50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2bee54: 0xc0b0370  jal         func_2C0DC0
    ctx->pc = 0x2BEE54u;
    SET_GPR_U32(ctx, 31, 0x2BEE5Cu);
    ctx->pc = 0x2BEE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE54u;
    // 0x2bee58: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DC0u, 0x2BEE54u, 0x2BEE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE5Cu;
label_2bee5c:
    // 0x2bee5c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BEE5Cu;
    SET_GPR_U32(ctx, 31, 0x2BEE64u);
    ctx->pc = 0x2BEE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE5Cu;
    // 0x2bee60: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BEE5Cu, 0x2BEE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE64u;
label_2bee64:
    // 0x2bee64: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BEE64u;
    SET_GPR_U32(ctx, 31, 0x2BEE6Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BEE64u, 0x2BEE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE6Cu;
label_2bee6c:
    // 0x2bee6c: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bee70: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bee70u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bee74: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BEE74u;
    {
        const bool branch_taken_0x2bee74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bee74) {
            ctx->pc = 0x2BEE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEE74u;
            // 0x2bee78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEE7Cu;
            goto label_2bee7c;
        }
    }
    ctx->pc = 0x2BEE7Cu;
label_2bee7c:
    // 0x2bee7c: 0x1010  mfhi        $v0
    ctx->pc = 0x2bee7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bee80: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEE80u;
    {
        const bool branch_taken_0x2bee80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE80u;
        // 0x2bee84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee80) {
            ctx->pc = 0x2BEE9Cu;
            goto label_2bee9c;
        }
    }
    ctx->pc = 0x2BEE88u;
    // 0x2bee88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bee88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bee8c: 0x0  nop
    ctx->pc = 0x2bee8cu;
    // NOP
    // 0x2bee90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bee90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bee94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BEE94u;
    {
        const bool branch_taken_0x2bee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bee94) {
            ctx->pc = 0x2BEEB4u;
            goto label_2beeb4;
        }
    }
    ctx->pc = 0x2BEE9Cu;
label_2bee9c:
    // 0x2bee9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bee9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2beea0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2beea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2beea4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2beea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2beea8: 0x0  nop
    ctx->pc = 0x2beea8u;
    // NOP
    // 0x2beeac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2beeacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2beeb0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2beeb0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2beeb4:
    // 0x2beeb4: 0x3c013951  lui         $at, 0x3951
    ctx->pc = 0x2beeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14673 << 16));
    // 0x2beeb8: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2beeb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2beebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2beebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2beec0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2beec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2beec4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2beec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2beec8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2beec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2beecc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2beeccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2beed0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BEED0u;
    SET_GPR_U32(ctx, 31, 0x2BEED8u);
    ctx->pc = 0x2BEED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEED0u;
    // 0x2beed4: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BEED0u, 0x2BEED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEED8u;
label_2beed8:
    // 0x2beed8: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2beed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2beedc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2beedcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2beee0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BEEE0u;
    {
        const bool branch_taken_0x2beee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beee0) {
            ctx->pc = 0x2BEEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEEE0u;
            // 0x2beee4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEEE8u;
            goto label_2beee8;
        }
    }
    ctx->pc = 0x2BEEE8u;
label_2beee8:
    // 0x2beee8: 0x1010  mfhi        $v0
    ctx->pc = 0x2beee8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2beeec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEEECu;
    {
        const bool branch_taken_0x2beeec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEECu;
        // 0x2beef0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beeec) {
            ctx->pc = 0x2BEF08u;
            goto label_2bef08;
        }
    }
    ctx->pc = 0x2BEEF4u;
    // 0x2beef4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2beef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2beef8: 0x0  nop
    ctx->pc = 0x2beef8u;
    // NOP
    // 0x2beefc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2beefcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bef00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BEF00u;
    {
        const bool branch_taken_0x2bef00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bef00) {
            ctx->pc = 0x2BEF20u;
            goto label_2bef20;
        }
    }
    ctx->pc = 0x2BEF08u;
label_2bef08:
    // 0x2bef08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bef08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bef0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bef0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bef10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bef10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bef14: 0x0  nop
    ctx->pc = 0x2bef14u;
    // NOP
    // 0x2bef18: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bef18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bef1c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bef1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bef20:
    // 0x2bef20: 0x3c013951  lui         $at, 0x3951
    ctx->pc = 0x2bef20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14673 << 16));
    // 0x2bef24: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bef24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bef28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bef28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bef2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bef2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bef30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bef30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bef34: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bef34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bef38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bef38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bef3c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BEF3Cu;
    SET_GPR_U32(ctx, 31, 0x2BEF44u);
    ctx->pc = 0x2BEF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF3Cu;
    // 0x2bef40: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BEF3Cu, 0x2BEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF44u;
label_2bef44:
    // 0x2bef44: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bef48: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bef48u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bef4c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BEF4Cu;
    {
        const bool branch_taken_0x2bef4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bef4c) {
            ctx->pc = 0x2BEF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEF4Cu;
            // 0x2bef50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEF54u;
            goto label_2bef54;
        }
    }
    ctx->pc = 0x2BEF54u;
label_2bef54:
    // 0x2bef54: 0x1010  mfhi        $v0
    ctx->pc = 0x2bef54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bef58: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEF58u;
    {
        const bool branch_taken_0x2bef58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF58u;
        // 0x2bef5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef58) {
            ctx->pc = 0x2BEF74u;
            goto label_2bef74;
        }
    }
    ctx->pc = 0x2BEF60u;
    // 0x2bef60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bef60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bef64: 0x0  nop
    ctx->pc = 0x2bef64u;
    // NOP
    // 0x2bef68: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bef68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bef6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BEF6Cu;
    {
        const bool branch_taken_0x2bef6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bef6c) {
            ctx->pc = 0x2BEF8Cu;
            goto label_2bef8c;
        }
    }
    ctx->pc = 0x2BEF74u;
label_2bef74:
    // 0x2bef74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bef74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bef78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bef78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bef7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bef7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bef80: 0x0  nop
    ctx->pc = 0x2bef80u;
    // NOP
    // 0x2bef84: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bef84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bef88: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bef88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bef8c:
    // 0x2bef8c: 0x3c013951  lui         $at, 0x3951
    ctx->pc = 0x2bef8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14673 << 16));
    // 0x2bef90: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bef90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bef94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bef94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bef98: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2bef98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bef9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bef9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2befa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2befa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2befa4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2befa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2befa8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2befa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2befac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2befacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2befb0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2befb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2befb4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2befb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2befb8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2befb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2befbc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2befbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2befc0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2befc0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2befc4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2befc4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2befc8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2befc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2befcc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2befccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2befd0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2befd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2befd4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2befd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2befd8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2befd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2befdc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2befdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2befe0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2befe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2befe4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2befe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2befe8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2befe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2befec: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2befecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2beff0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2beff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2beff4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2beff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2beff8: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2beff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2beffc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2beffcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2bf000: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2bf000u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2bf004: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2bf004u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2bf008: 0x46010044  c1          0x10044
    ctx->pc = 0x2bf008u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bf00c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bf00cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf010: 0x0  nop
    ctx->pc = 0x2bf010u;
    // NOP
    // 0x2bf014: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bf014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf018: 0x0  nop
    ctx->pc = 0x2bf018u;
    // NOP
    // 0x2bf01c: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x2BF01Cu;
    {
        const bool branch_taken_0x2bf01c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf01c) {
            ctx->pc = 0x2BF020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF01Cu;
            // 0x2bf020: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF06Cu;
            goto label_2bf06c;
        }
    }
    ctx->pc = 0x2BF024u;
    // 0x2bf024: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bf024u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf028: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2bf028u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf02c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bf02cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf030: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x2bf030u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf034: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bf034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf038: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2bf038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bf03c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bf03cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bf040: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bf040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bf044: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bf044u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bf048: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bf048u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bf04c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2bf04cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf050: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x2bf050u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf054: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bf054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bf058: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bf058u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf05c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2bf05cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2bf060: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2bf060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf064: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x2bf064u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf068: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2bf068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2bf06c:
    // 0x2bf06c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2bf06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2bf070: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2bf070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bf074: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF074u;
        // 0x2bf078: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF07Cu;
    // 0x2bf07c: 0x0  nop
    ctx->pc = 0x2bf07cu;
    // NOP
    ctx->pc = 0x2bf080u;
}
