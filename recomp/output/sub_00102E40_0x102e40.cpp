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

// Function: sub_00102E40
// Address: 0x102e40 - 0x102fb8
void sub_00102E40_0x102e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102E40_0x102e40");
#endif

    switch (ctx->pc) {
        case 0x102e90u: goto label_102e90;
        case 0x102eb0u: goto label_102eb0;
        case 0x102ec0u: goto label_102ec0;
        case 0x102ec8u: goto label_102ec8;
        case 0x102ee4u: goto label_102ee4;
        case 0x102ef8u: goto label_102ef8;
        case 0x102f38u: goto label_102f38;
        case 0x102f68u: goto label_102f68;
        case 0x102f78u: goto label_102f78;
        default: break;
    }

    ctx->pc = 0x102e40u;

    // 0x102e40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x102e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102e44: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x102e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x102e48: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x102e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x102e4c: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x102e4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102e50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x102e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x102e54: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x102e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x102e58: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x102e58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x102e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x102e60: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x102e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x102e64: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x102e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x102e68: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x102e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x102e6c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x102e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x102e70: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x102e70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x102e74: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x102e74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x102e78: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x102E78u;
    {
        const bool branch_taken_0x102e78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x102E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E78u;
        // 0x102e7c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e78) {
            ctx->pc = 0x102E98u;
            goto label_102e98;
        }
    }
    ctx->pc = 0x102E80u;
    // 0x102e80: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x102e80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102e84: 0x0  nop
    ctx->pc = 0x102e84u;
    // NOP
    // 0x102e88: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x102E88u;
    {
        const bool branch_taken_0x102e88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x102e88) {
            ctx->pc = 0x102E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102E88u;
            // 0x102e8c: 0x460d6d82  mul.s       $f22, $f13, $f13 (Delay Slot)
            ctx->f[22] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x102E9Cu;
            goto label_102e9c;
        }
    }
    ctx->pc = 0x102E90u;
label_102e90:
    // 0x102e90: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x102E90u;
    {
        const bool branch_taken_0x102e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E90u;
        // 0x102e94: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e90) {
            ctx->pc = 0x102F80u;
            goto label_102f80;
        }
    }
    ctx->pc = 0x102E98u;
label_102e98:
    // 0x102e98: 0x460d6d82  mul.s       $f22, $f13, $f13
    ctx->pc = 0x102e98u;
    ctx->f[22] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_102e9c:
    // 0x102e9c: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x102e9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ea0: 0x460c6542  mul.s       $f21, $f12, $f12
    ctx->pc = 0x102ea0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x102ea4: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x102ea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ea8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x102ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x102eac: 0x0  nop
    ctx->pc = 0x102eacu;
    // NOP
label_102eb0:
    // 0x102eb0: 0x92700022  lbu         $s0, 0x22($s3)
    ctx->pc = 0x102eb0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x102eb4: 0x1200fff6  beqz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x102EB4u;
    {
        const bool branch_taken_0x102eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x102EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EB4u;
        // 0x102eb8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102eb4) {
            ctx->pc = 0x102E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102e90;
        }
    }
    ctx->pc = 0x102EBCu;
    // 0x102ebc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x102ebcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102ec0:
    // 0x102ec0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x102EC0u;
    SET_GPR_U32(ctx, 31, 0x102EC8u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x102EC0u, 0x102EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102EC8u;
label_102ec8:
    // 0x102ec8: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x102ec8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x102ecc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x102eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ed0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x102ED0u;
    {
        const bool branch_taken_0x102ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x102ed0) {
            ctx->pc = 0x102ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102ED0u;
            // 0x102ed4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x102ED8u;
            goto label_102ed8;
        }
    }
    ctx->pc = 0x102ED8u;
label_102ed8:
    // 0x102ed8: 0x2810  mfhi        $a1
    ctx->pc = 0x102ed8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x102edc: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x102EDCu;
    SET_GPR_U32(ctx, 31, 0x102EE4u);
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x102EDCu, 0x102EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102EE4u;
label_102ee4:
    // 0x102ee4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x102ee4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102ee8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x102ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102eec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x102eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ef0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x102EF0u;
    SET_GPR_U32(ctx, 31, 0x102EF8u);
    ctx->pc = 0x102EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102EF0u;
    // 0x102ef4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x102EF0u, 0x102EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102EF8u;
label_102ef8:
    // 0x102ef8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x102ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x102efc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x102efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x102f00: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x102f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x102f04: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x102f04u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x102f08: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x102f08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x102f0c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x102f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x102f10: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x102f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102f14: 0x0  nop
    ctx->pc = 0x102f14u;
    // NOP
    // 0x102f18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x102F18u;
    {
        const bool branch_taken_0x102f18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x102f18) {
            ctx->pc = 0x102F28u;
            goto label_102f28;
        }
    }
    ctx->pc = 0x102F20u;
    // 0x102f20: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x102f20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x102f24: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x102f24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102f28:
    // 0x102f28: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x102F28u;
    {
        const bool branch_taken_0x102f28 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F28u;
        // 0x102f2c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f28) {
            ctx->pc = 0x102F40u;
            goto label_102f40;
        }
    }
    ctx->pc = 0x102F30u;
    // 0x102f30: 0x1640ffe3  bnez        $s2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x102F30u;
    {
        const bool branch_taken_0x102f30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x102f30) {
            ctx->pc = 0x102EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102ec0;
        }
    }
    ctx->pc = 0x102F38u;
label_102f38:
    // 0x102f38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x102F38u;
    {
        const bool branch_taken_0x102f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F38u;
        // 0x102f3c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f38) {
            ctx->pc = 0x102F80u;
            goto label_102f80;
        }
    }
    ctx->pc = 0x102F40u;
label_102f40:
    // 0x102f40: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x102f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102f44: 0x0  nop
    ctx->pc = 0x102f44u;
    // NOP
    // 0x102f48: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x102F48u;
    {
        const bool branch_taken_0x102f48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x102F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F48u;
        // 0x102f4c: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f48) {
            ctx->pc = 0x102F70u;
            goto label_102f70;
        }
    }
    ctx->pc = 0x102F50u;
    // 0x102f50: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x102f50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102f54: 0x0  nop
    ctx->pc = 0x102f54u;
    // NOP
    // 0x102f58: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x102F58u;
    {
        const bool branch_taken_0x102f58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x102F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F58u;
        // 0x102f5c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f58) {
            ctx->pc = 0x102F80u;
            goto label_102f80;
        }
    }
    ctx->pc = 0x102F60u;
    // 0x102f60: 0xc0414a2  jal         func_105288
    ctx->pc = 0x102F60u;
    SET_GPR_U32(ctx, 31, 0x102F68u);
    ctx->pc = 0x102F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F60u;
    // 0x102f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x102F60u, 0x102F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F68u;
label_102f68:
    // 0x102f68: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x102F68u;
    {
        const bool branch_taken_0x102f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F68u;
        // 0x102f6c: 0x222a00a  movz        $s4, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f68) {
            ctx->pc = 0x102F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102f38;
        }
    }
    ctx->pc = 0x102F70u;
label_102f70:
    // 0x102f70: 0xc0414a2  jal         func_105288
    ctx->pc = 0x102F70u;
    SET_GPR_U32(ctx, 31, 0x102F78u);
    ctx->pc = 0x102F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F70u;
    // 0x102f74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x102F70u, 0x102F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F78u;
label_102f78:
    // 0x102f78: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x102F78u;
    {
        const bool branch_taken_0x102f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F78u;
        // 0x102f7c: 0x262a00a  movz        $s4, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f78) {
            ctx->pc = 0x102EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102eb0;
        }
    }
    ctx->pc = 0x102F80u;
label_102f80:
    // 0x102f80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x102f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102f84: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x102f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102f88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x102f88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102f8c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x102f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102f90: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x102f90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102f94: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x102f94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x102f98: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x102f98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102f9c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x102f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x102fa0: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x102fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x102fa4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x102fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x102fa8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x102fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x102fac: 0x3e00008  jr          $ra
    ctx->pc = 0x102FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FACu;
        // 0x102fb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102FB4u;
    // 0x102fb4: 0x0  nop
    ctx->pc = 0x102fb4u;
    // NOP
    ctx->pc = 0x102fb8u;
}
