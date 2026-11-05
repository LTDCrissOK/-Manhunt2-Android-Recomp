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

// Function: sub_00274ED8
// Address: 0x274ed8 - 0x2751f8
void sub_00274ED8_0x274ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274ED8_0x274ed8");
#endif

    switch (ctx->pc) {
        case 0x274f78u: goto label_274f78;
        case 0x274facu: goto label_274fac;
        case 0x274fbcu: goto label_274fbc;
        case 0x274fccu: goto label_274fcc;
        case 0x274fdcu: goto label_274fdc;
        case 0x274ff4u: goto label_274ff4;
        case 0x275004u: goto label_275004;
        case 0x27501cu: goto label_27501c;
        case 0x2750c0u: goto label_2750c0;
        case 0x2750d0u: goto label_2750d0;
        case 0x2750e0u: goto label_2750e0;
        case 0x275174u: goto label_275174;
        case 0x275184u: goto label_275184;
        case 0x275194u: goto label_275194;
        case 0x2751b8u: goto label_2751b8;
        default: break;
    }

    ctx->pc = 0x274ed8u;

    // 0x274ed8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x274ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x274edc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x274edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274ee0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x274ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x274ee4: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x274ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x274ee8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x274ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x274eec: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x274eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x274ef0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x274ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x274ef4: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x274ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x274ef8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x274ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x274efc: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x274efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x274f00: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x274f00u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x274f04: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x274f04u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x274f08: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x274f08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x274f0c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x274f0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x274f10: 0xc4810378  lwc1        $f1, 0x378($a0)
    ctx->pc = 0x274f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274f14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x274f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274f18: 0x0  nop
    ctx->pc = 0x274f18u;
    // NOP
    // 0x274f1c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x274F1Cu;
    {
        const bool branch_taken_0x274f1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x274F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F1Cu;
        // 0x274f20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f1c) {
            ctx->pc = 0x274F3Cu;
            goto label_274f3c;
        }
    }
    ctx->pc = 0x274F24u;
    // 0x274f24: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x274f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x274f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f2c: 0xc4602b30  lwc1        $f0, 0x2B30($v1)
    ctx->pc = 0x274f2cu;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274f30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x274f30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x274f34: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x274F34u;
    {
        const bool branch_taken_0x274f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F34u;
        // 0x274f38: 0xe4800378  swc1        $f0, 0x378($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f34) {
            ctx->pc = 0x2751BCu;
            goto label_2751bc;
        }
    }
    ctx->pc = 0x274F3Cu;
label_274f3c:
    // 0x274f3c: 0xc480037c  lwc1        $f0, 0x37C($a0)
    ctx->pc = 0x274f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274f40: 0x24830220  addiu       $v1, $a0, 0x220
    ctx->pc = 0x274f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x274f44: 0xe4800378  swc1        $f0, 0x378($a0)
    ctx->pc = 0x274f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 888), bits); }
    // 0x274f48: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x274f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274f4c: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x274F4Cu;
    {
        const bool branch_taken_0x274f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F4Cu;
        // 0x274f50: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f4c) {
            ctx->pc = 0x2751B8u;
            goto label_2751b8;
        }
    }
    ctx->pc = 0x274F54u;
    // 0x274f54: 0x90820375  lbu         $v0, 0x375($a0)
    ctx->pc = 0x274f54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 885)));
    // 0x274f58: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x274F58u;
    {
        const bool branch_taken_0x274f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F58u;
        // 0x274f5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f58) {
            ctx->pc = 0x2751BCu;
            goto label_2751bc;
        }
    }
    ctx->pc = 0x274F60u;
    // 0x274f60: 0x8c930220  lw          $s3, 0x220($a0)
    ctx->pc = 0x274f60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x274f64: 0x12600095  beqz        $s3, . + 4 + (0x95 << 2)
    ctx->pc = 0x274F64u;
    {
        const bool branch_taken_0x274f64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F64u;
        // 0x274f68: 0x24840230  addiu       $a0, $a0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f64) {
            ctx->pc = 0x2751BCu;
            goto label_2751bc;
        }
    }
    ctx->pc = 0x274F6Cu;
    // 0x274f6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x274f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f70: 0xc09cd7a  jal         func_2735E8
    ctx->pc = 0x274F70u;
    SET_GPR_U32(ctx, 31, 0x274F78u);
    ctx->pc = 0x274F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274F70u;
    // 0x274f74: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2735E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2735E8u, 0x274F70u, 0x274F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F78u;
label_274f78:
    // 0x274f78: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x274F78u;
    {
        const bool branch_taken_0x274f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F78u;
        // 0x274f7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f78) {
            ctx->pc = 0x2751BCu;
            goto label_2751bc;
        }
    }
    ctx->pc = 0x274F80u;
    // 0x274f80: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x274f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x274f84: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x274f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x274f88: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x274F88u;
    {
        const bool branch_taken_0x274f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274f88) {
            ctx->pc = 0x275014u;
            goto label_275014;
        }
    }
    ctx->pc = 0x274F90u;
    // 0x274f90: 0x8e7111e8  lw          $s1, 0x11E8($s3)
    ctx->pc = 0x274f90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
    // 0x274f94: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x274F94u;
    {
        const bool branch_taken_0x274f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F94u;
        // 0x274f98: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f94) {
            ctx->pc = 0x274FFCu;
            goto label_274ffc;
        }
    }
    ctx->pc = 0x274F9Cu;
    // 0x274f9c: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x274f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x274fa0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x274fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274fa4: 0xc0f7d10  jal         func_3DF440
    ctx->pc = 0x274FA4u;
    SET_GPR_U32(ctx, 31, 0x274FACu);
    ctx->pc = 0x274FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274FA4u;
    // 0x274fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF440u, 0x274FA4u, 0x274FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274FACu;
label_274fac:
    // 0x274fac: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x274FACu;
    {
        const bool branch_taken_0x274fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274fac) {
            ctx->pc = 0x274FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274FACu;
            // 0x274fb0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274FE4u;
            goto label_274fe4;
        }
    }
    ctx->pc = 0x274FB4u;
    // 0x274fb4: 0xc0f7d1a  jal         func_3DF468
    ctx->pc = 0x274FB4u;
    SET_GPR_U32(ctx, 31, 0x274FBCu);
    ctx->pc = 0x274FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274FB4u;
    // 0x274fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF468u, 0x274FB4u, 0x274FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274FBCu;
label_274fbc:
    // 0x274fbc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x274FBCu;
    {
        const bool branch_taken_0x274fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274fbc) {
            ctx->pc = 0x274FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274FBCu;
            // 0x274fc0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274FE4u;
            goto label_274fe4;
        }
    }
    ctx->pc = 0x274FC4u;
    // 0x274fc4: 0xc0f7d24  jal         func_3DF490
    ctx->pc = 0x274FC4u;
    SET_GPR_U32(ctx, 31, 0x274FCCu);
    ctx->pc = 0x274FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274FC4u;
    // 0x274fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF490u, 0x274FC4u, 0x274FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274FCCu;
label_274fcc:
    // 0x274fcc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x274FCCu;
    {
        const bool branch_taken_0x274fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274fcc) {
            ctx->pc = 0x274FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274FCCu;
            // 0x274fd0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274FE4u;
            goto label_274fe4;
        }
    }
    ctx->pc = 0x274FD4u;
    // 0x274fd4: 0xc0f7d32  jal         func_3DF4C8
    ctx->pc = 0x274FD4u;
    SET_GPR_U32(ctx, 31, 0x274FDCu);
    ctx->pc = 0x274FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274FD4u;
    // 0x274fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF4C8u, 0x274FD4u, 0x274FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274FDCu;
label_274fdc:
    // 0x274fdc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274FDCu;
    {
        const bool branch_taken_0x274fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274fdc) {
            ctx->pc = 0x274FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274FDCu;
            // 0x274fe0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274FE4u;
            goto label_274fe4;
        }
    }
    ctx->pc = 0x274FE4u;
label_274fe4:
    // 0x274fe4: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x274FE4u;
    {
        const bool branch_taken_0x274fe4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x274fe4) {
            ctx->pc = 0x274FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274FE4u;
            // 0x274fe8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274FFCu;
            goto label_274ffc;
        }
    }
    ctx->pc = 0x274FECu;
    // 0x274fec: 0xc06b640  jal         func_1AD900
    ctx->pc = 0x274FECu;
    SET_GPR_U32(ctx, 31, 0x274FF4u);
    ctx->pc = 0x274FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274FECu;
    // 0x274ff0: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD900u, 0x274FECu, 0x274FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274FF4u;
label_274ff4:
    // 0x274ff4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x274FF4u;
    {
        const bool branch_taken_0x274ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274ff4) {
            ctx->pc = 0x274FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274FF4u;
            // 0x274ff8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274FFCu;
            goto label_274ffc;
        }
    }
    ctx->pc = 0x274FFCu;
label_274ffc:
    // 0x274ffc: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x274FFCu;
    SET_GPR_U32(ctx, 31, 0x275004u);
    ctx->pc = 0x275000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274FFCu;
    // 0x275000: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x274FFCu, 0x275004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275004u;
label_275004:
    // 0x275004: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x275004u;
    {
        const bool branch_taken_0x275004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275004u;
        // 0x275008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275004) {
            ctx->pc = 0x2751BCu;
            goto label_2751bc;
        }
    }
    ctx->pc = 0x27500Cu;
    // 0x27500c: 0x5680006c  bnel        $s4, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x27500Cu;
    {
        const bool branch_taken_0x27500c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x27500c) {
            ctx->pc = 0x275010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27500Cu;
            // 0x275010: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2751C0u;
            goto label_2751c0;
        }
    }
    ctx->pc = 0x275014u;
label_275014:
    // 0x275014: 0xc0f7f60  jal         func_3DFD80
    ctx->pc = 0x275014u;
    SET_GPR_U32(ctx, 31, 0x27501Cu);
    ctx->pc = 0x275018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275014u;
    // 0x275018: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFD80u, 0x275014u, 0x27501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27501Cu;
label_27501c:
    // 0x27501c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x27501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x275020: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x275020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275024: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x275024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x275028: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x275028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27502c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x27502cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x275030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275034: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x275034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275038: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x275038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x27503c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x27503cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x275040: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x275040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275044: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x275044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275048: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x275048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27504c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x27504cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x275050: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x275050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275054: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x275054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x275058: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x275058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x27505c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275060: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x275060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x275064: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x275064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x275068: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x275068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x27506c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x27506cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x275070: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x275070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x275074: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x275074u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275078: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x275078u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27507c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x27507cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x275080: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x275080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275084: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x275084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275088: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x275088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27508c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27508cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x275090: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x275090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275094: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x275094u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x275098: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x275098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27509c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x27509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2750a0: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x2750a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2750a4: 0x4600adc7  neg.s       $f23, $f21
    ctx->pc = 0x2750a4u;
    ctx->f[23] = FPU_NEG_S(ctx->f[21]);
    // 0x2750a8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2750a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2750ac: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2750acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2750b0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2750b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2750b4: 0x4617ad41  sub.s       $f21, $f21, $f23
    ctx->pc = 0x2750b4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x2750b8: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2750B8u;
    SET_GPR_U32(ctx, 31, 0x2750C0u);
    ctx->pc = 0x2750BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2750B8u;
    // 0x2750bc: 0xe7a3001c  swc1        $f3, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2750B8u, 0x2750C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2750C0u;
label_2750c0:
    // 0x2750c0: 0x4600ad82  mul.s       $f22, $f21, $f0
    ctx->pc = 0x2750c0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2750c4: 0x4617b580  add.s       $f22, $f22, $f23
    ctx->pc = 0x2750c4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x2750c8: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2750C8u;
    SET_GPR_U32(ctx, 31, 0x2750D0u);
    ctx->pc = 0x2750CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2750C8u;
    // 0x2750cc: 0x4616b580  add.s       $f22, $f22, $f22 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2750C8u, 0x2750D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2750D0u;
label_2750d0:
    // 0x2750d0: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x2750d0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2750d4: 0x4617a500  add.s       $f20, $f20, $f23
    ctx->pc = 0x2750d4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x2750d8: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2750D8u;
    SET_GPR_U32(ctx, 31, 0x2750E0u);
    ctx->pc = 0x2750DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2750D8u;
    // 0x2750dc: 0x4614a500  add.s       $f20, $f20, $f20 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2750D8u, 0x2750E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2750E0u;
label_2750e0:
    // 0x2750e0: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2750e0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2750e4: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2750e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2750e8: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x2750e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2750ec: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2750ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2750f0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2750f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2750f4: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x2750f4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x2750f8: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x2750f8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x2750fc: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2750fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x275100: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x275100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275104: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x275104u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x275108: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x275108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x27510c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x27510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275110: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x275110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x275114: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x275114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275118: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x275118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27511c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x27511cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x275120: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x275120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275124: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x275124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275128: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x275128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27512c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x27512cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275130: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x275130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275134: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x275134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x275138: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x275138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27513c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x27513cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x275140: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x275140u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x275144: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x275144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x275148: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x275148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x27514c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x27514cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x275150: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x275150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x275154: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x275154u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x275158: 0x4a0003bf  vwaitq
    ctx->pc = 0x275158u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x27515c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x27515cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x275160: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x275160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275164: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x275164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x275168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27516c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x27516Cu;
    SET_GPR_U32(ctx, 31, 0x275174u);
    ctx->pc = 0x275170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27516Cu;
    // 0x275170: 0x8c459df8  lw          $a1, -0x6208($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x27516Cu, 0x275174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275174u;
label_275174:
    // 0x275174: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x275174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275178: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x275178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27517c: 0xc0d9886  jal         func_366218
    ctx->pc = 0x27517Cu;
    SET_GPR_U32(ctx, 31, 0x275184u);
    ctx->pc = 0x275180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27517Cu;
    // 0x275180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366218u, 0x27517Cu, 0x275184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275184u;
label_275184:
    // 0x275184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275188: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x275188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27518c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27518Cu;
    SET_GPR_U32(ctx, 31, 0x275194u);
    ctx->pc = 0x275190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27518Cu;
    // 0x275190: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27518Cu, 0x275194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275194u;
label_275194:
    // 0x275194: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x275194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x275198: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x275198u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x27519c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x27519cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2751a0: 0x24e78150  addiu       $a3, $a3, -0x7EB0
    ctx->pc = 0x2751a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934864));
    // 0x2751a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2751a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2751a8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2751a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2751ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2751acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2751b0: 0xc07f672  jal         func_1FD9C8
    ctx->pc = 0x2751B0u;
    SET_GPR_U32(ctx, 31, 0x2751B8u);
    ctx->pc = 0x2751B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2751B0u;
    // 0x2751b4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9C8u, 0x2751B0u, 0x2751B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2751B8u;
label_2751b8:
    // 0x2751b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2751b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2751bc:
    // 0x2751bc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2751bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2751c0:
    // 0x2751c0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2751c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2751c4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2751c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2751c8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2751c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2751cc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2751ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2751d0: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2751d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2751d4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2751d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2751d8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2751d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2751dc: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x2751dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2751e0: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x2751e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2751e4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2751e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2751e8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2751e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2751ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2751ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2751F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751ECu;
        // 0x2751f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2751ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2751F4u;
    // 0x2751f4: 0x0  nop
    ctx->pc = 0x2751f4u;
    // NOP
    ctx->pc = 0x2751f8u;
}
