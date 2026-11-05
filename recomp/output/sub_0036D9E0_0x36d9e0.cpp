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

// Function: sub_0036D9E0
// Address: 0x36d9e0 - 0x36dd60
void sub_0036D9E0_0x36d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D9E0_0x36d9e0");
#endif

    switch (ctx->pc) {
        case 0x36da2cu: goto label_36da2c;
        case 0x36da5cu: goto label_36da5c;
        case 0x36dae0u: goto label_36dae0;
        case 0x36db08u: goto label_36db08;
        case 0x36db40u: goto label_36db40;
        case 0x36db50u: goto label_36db50;
        case 0x36db78u: goto label_36db78;
        case 0x36db98u: goto label_36db98;
        case 0x36dc08u: goto label_36dc08;
        case 0x36dcf4u: goto label_36dcf4;
        case 0x36dd2cu: goto label_36dd2c;
        default: break;
    }

    ctx->pc = 0x36d9e0u;

    // 0x36d9e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x36d9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x36d9e4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x36d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x36d9e8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x36d9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x36d9ec: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x36d9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d9f0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x36d9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x36d9f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36d9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d9f8: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x36d9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x36d9fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x36d9fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da00: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x36da00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x36da04: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x36da04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da08: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x36da08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x36da0c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x36da0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da10: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x36da10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x36da14: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x36da14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da18: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x36da18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x36da1c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x36da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x36da20: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x36da20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x36da24: 0xc0dd878  jal         func_3761E0
    ctx->pc = 0x36DA24u;
    SET_GPR_U32(ctx, 31, 0x36DA2Cu);
    ctx->pc = 0x36DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA24u;
    // 0x36da28: 0xafa60040  sw          $a2, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3761E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3761E0u, 0x36DA24u, 0x36DA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA2Cu;
label_36da2c:
    // 0x36da2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x36da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x36da30: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x36da30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x36da34: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x36da34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x36da38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x36da38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x36da3c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36DA3Cu;
    {
        const bool branch_taken_0x36da3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA3Cu;
        // 0x36da40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36da3c) {
            ctx->pc = 0x36DA64u;
            goto label_36da64;
        }
    }
    ctx->pc = 0x36DA44u;
    // 0x36da44: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x36da44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36da48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36da48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36da4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36da50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da54: 0xc0db3e4  jal         func_36CF90
    ctx->pc = 0x36DA54u;
    SET_GPR_U32(ctx, 31, 0x36DA5Cu);
    ctx->pc = 0x36DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA54u;
    // 0x36da58: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CF90u, 0x36DA54u, 0x36DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA5Cu;
label_36da5c:
    // 0x36da5c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x36DA5Cu;
    {
        const bool branch_taken_0x36da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA5Cu;
        // 0x36da60: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36da5c) {
            ctx->pc = 0x36DD30u;
            goto label_36dd30;
        }
    }
    ctx->pc = 0x36DA64u;
label_36da64:
    // 0x36da64: 0x12820011  beq         $s4, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x36DA64u;
    {
        const bool branch_taken_0x36da64 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x36DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA64u;
        // 0x36da68: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36da64) {
            ctx->pc = 0x36DAACu;
            goto label_36daac;
        }
    }
    ctx->pc = 0x36DA6Cu;
    // 0x36da6c: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x36da6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x36da70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36DA70u;
    {
        const bool branch_taken_0x36da70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA70u;
        // 0x36da74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36da70) {
            ctx->pc = 0x36DA88u;
            goto label_36da88;
        }
    }
    ctx->pc = 0x36DA78u;
    // 0x36da78: 0x5282000f  beql        $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x36DA78u;
    {
        const bool branch_taken_0x36da78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x36da78) {
            ctx->pc = 0x36DA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36DA78u;
            // 0x36da7c: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DAB8u;
            goto label_36dab8;
        }
    }
    ctx->pc = 0x36DA80u;
    // 0x36da80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36DA80u;
    {
        const bool branch_taken_0x36da80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da80) {
            ctx->pc = 0x36DAB4u;
            goto label_36dab4;
        }
    }
    ctx->pc = 0x36DA88u;
label_36da88:
    // 0x36da88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36da8c: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36DA8Cu;
    {
        const bool branch_taken_0x36da8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x36DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA8Cu;
        // 0x36da90: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36da8c) {
            ctx->pc = 0x36DAA4u;
            goto label_36daa4;
        }
    }
    ctx->pc = 0x36DA94u;
    // 0x36da94: 0x52820008  beql        $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36DA94u;
    {
        const bool branch_taken_0x36da94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x36da94) {
            ctx->pc = 0x36DA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36DA94u;
            // 0x36da98: 0x241e0005  addiu       $fp, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DAB8u;
            goto label_36dab8;
        }
    }
    ctx->pc = 0x36DA9Cu;
    // 0x36da9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36DA9Cu;
    {
        const bool branch_taken_0x36da9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da9c) {
            ctx->pc = 0x36DAB4u;
            goto label_36dab4;
        }
    }
    ctx->pc = 0x36DAA4u;
label_36daa4:
    // 0x36daa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36DAA4u;
    {
        const bool branch_taken_0x36daa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DAA4u;
        // 0x36daa8: 0x241e0004  addiu       $fp, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36daa4) {
            ctx->pc = 0x36DAB8u;
            goto label_36dab8;
        }
    }
    ctx->pc = 0x36DAACu;
label_36daac:
    // 0x36daac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x36DAACu;
    {
        const bool branch_taken_0x36daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DAACu;
        // 0x36dab0: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36daac) {
            ctx->pc = 0x36DAB8u;
            goto label_36dab8;
        }
    }
    ctx->pc = 0x36DAB4u;
label_36dab4:
    // 0x36dab4: 0xd  break       0
    ctx->pc = 0x36dab4u;
    runtime->handleBreak(rdram, ctx);
label_36dab8:
    // 0x36dab8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36dabc: 0x16820095  bne         $s4, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x36DABCu;
    {
        const bool branch_taken_0x36dabc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x36DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DABCu;
        // 0x36dac0: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dabc) {
            ctx->pc = 0x36DD14u;
            goto label_36dd14;
        }
    }
    ctx->pc = 0x36DAC4u;
    // 0x36dac4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36dac8: 0x9043cc11  lbu         $v1, -0x33EF($v0)
    ctx->pc = 0x36dac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FCC11u));
    // 0x36dacc: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x36DACCu;
    {
        const bool branch_taken_0x36dacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DACCu;
        // 0x36dad0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dacc) {
            ctx->pc = 0x36DBB8u;
            goto label_36dbb8;
        }
    }
    ctx->pc = 0x36DAD4u;
    // 0x36dad4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36DAD4u;
    {
        const bool branch_taken_0x36dad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DAD4u;
        // 0x36dad8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dad4) {
            ctx->pc = 0x36DAE8u;
            goto label_36dae8;
        }
    }
    ctx->pc = 0x36DADCu;
    // 0x36dadc: 0x0  nop
    ctx->pc = 0x36dadcu;
    // NOP
label_36dae0:
    // 0x36dae0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x36dae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x36dae4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36dae4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36dae8:
    // 0x36dae8: 0x12650034  beq         $s3, $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x36DAE8u;
    {
        const bool branch_taken_0x36dae8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x36DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DAE8u;
        // 0x36daec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dae8) {
            ctx->pc = 0x36DBBCu;
            goto label_36dbbc;
        }
    }
    ctx->pc = 0x36DAF0u;
    // 0x36daf0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36DAF0u;
    {
        const bool branch_taken_0x36daf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DAF0u;
        // 0x36daf4: 0x3264ffff  andi        $a0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36daf0) {
            ctx->pc = 0x36DAFCu;
            goto label_36dafc;
        }
    }
    ctx->pc = 0x36DAF8u;
    // 0x36daf8: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x36daf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_36dafc:
    // 0x36dafc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x36dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x36db00: 0xc0db3e6  jal         func_36CF98
    ctx->pc = 0x36DB00u;
    SET_GPR_U32(ctx, 31, 0x36DB08u);
    ctx->pc = 0x36DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DB00u;
    // 0x36db04: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CF98u, 0x36DB00u, 0x36DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB08u;
label_36db08:
    // 0x36db08: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36DB08u;
    {
        const bool branch_taken_0x36db08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB08u;
        // 0x36db0c: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36db08) {
            ctx->pc = 0x36DAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36dae0;
        }
    }
    ctx->pc = 0x36DB10u;
    // 0x36db10: 0x12650029  beq         $s3, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x36DB10u;
    {
        const bool branch_taken_0x36db10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x36DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB10u;
        // 0x36db14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36db10) {
            ctx->pc = 0x36DBB8u;
            goto label_36dbb8;
        }
    }
    ctx->pc = 0x36DB18u;
    // 0x36db18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x36db18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db1c: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x36db1cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x36db20: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36DB20u;
    {
        const bool branch_taken_0x36db20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36db20) {
            ctx->pc = 0x36DB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36DB20u;
            // 0x36db24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DB28u;
            goto label_36db28;
        }
    }
    ctx->pc = 0x36DB28u;
label_36db28:
    // 0x36db28: 0x8812  mflo        $s1
    ctx->pc = 0x36db28u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x36db2c: 0x1220007f  beqz        $s1, . + 4 + (0x7F << 2)
    ctx->pc = 0x36DB2Cu;
    {
        const bool branch_taken_0x36db2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB2Cu;
        // 0x36db30: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36db2c) {
            ctx->pc = 0x36DD2Cu;
            goto label_36dd2c;
        }
    }
    ctx->pc = 0x36DB34u;
    // 0x36db34: 0x3c14005c  lui         $s4, 0x5C
    ctx->pc = 0x36db34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)92 << 16));
    // 0x36db38: 0xafb50040  sw          $s5, 0x40($sp)
    ctx->pc = 0x36db38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
    // 0x36db3c: 0x0  nop
    ctx->pc = 0x36db3cu;
    // NOP
label_36db40:
    // 0x36db40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36db40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36db44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db48: 0xc0db4e2  jal         func_36D388
    ctx->pc = 0x36DB48u;
    SET_GPR_U32(ctx, 31, 0x36DB50u);
    ctx->pc = 0x36DB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DB48u;
    // 0x36db4c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D388u, 0x36DB48u, 0x36DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB50u;
label_36db50:
    // 0x36db50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36DB50u;
    {
        const bool branch_taken_0x36db50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB50u;
        // 0x36db54: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36db50) {
            ctx->pc = 0x36DB80u;
            goto label_36db80;
        }
    }
    ctx->pc = 0x36DB58u;
    // 0x36db58: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x36db58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x36db5c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x36DB5Cu;
    {
        const bool branch_taken_0x36db5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DB5Cu;
        // 0x36db60: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36db5c) {
            ctx->pc = 0x36DB98u;
            goto label_36db98;
        }
    }
    ctx->pc = 0x36DB64u;
    // 0x36db64: 0x2686f058  addiu       $a2, $s4, -0xFA8
    ctx->pc = 0x36db64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963288));
    // 0x36db68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36db68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db6c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x36db6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db70: 0xc0db596  jal         func_36D658
    ctx->pc = 0x36DB70u;
    SET_GPR_U32(ctx, 31, 0x36DB78u);
    ctx->pc = 0x36DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DB70u;
    // 0x36db74: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D658u, 0x36DB70u, 0x36DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB78u;
label_36db78:
    // 0x36db78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36DB78u;
    {
        const bool branch_taken_0x36db78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36db78) {
            ctx->pc = 0x36DB98u;
            goto label_36db98;
        }
    }
    ctx->pc = 0x36DB80u;
label_36db80:
    // 0x36db80: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x36db80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36db84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36db88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db8c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x36db8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36db90: 0xc0db596  jal         func_36D658
    ctx->pc = 0x36DB90u;
    SET_GPR_U32(ctx, 31, 0x36DB98u);
    ctx->pc = 0x36DB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DB90u;
    // 0x36db94: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D658u, 0x36DB90u, 0x36DB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB98u;
label_36db98:
    // 0x36db98: 0x52000002  beql        $s0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x36DB98u;
    {
        const bool branch_taken_0x36db98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36db98) {
            ctx->pc = 0x36DB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36DB98u;
            // 0x36db9c: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DBA4u;
            goto label_36dba4;
        }
    }
    ctx->pc = 0x36DBA0u;
    // 0x36dba0: 0x26100006  addiu       $s0, $s0, 0x6
    ctx->pc = 0x36dba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
label_36dba4:
    // 0x36dba4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36dba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x36dba8: 0x5671ffe5  bnel        $s3, $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x36DBA8u;
    {
        const bool branch_taken_0x36dba8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        if (branch_taken_0x36dba8) {
            ctx->pc = 0x36DBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36DBA8u;
            // 0x36dbac: 0xafb50040  sw          $s5, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36db40;
        }
    }
    ctx->pc = 0x36DBB0u;
    // 0x36dbb0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x36DBB0u;
    {
        const bool branch_taken_0x36dbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBB0u;
        // 0x36dbb4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dbb0) {
            ctx->pc = 0x36DD30u;
            goto label_36dd30;
        }
    }
    ctx->pc = 0x36DBB8u;
label_36dbb8:
    // 0x36dbb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36dbbc:
    // 0x36dbbc: 0x16820056  bne         $s4, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x36DBBCu;
    {
        const bool branch_taken_0x36dbbc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x36DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBBCu;
        // 0x36dbc0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dbbc) {
            ctx->pc = 0x36DD18u;
            goto label_36dd18;
        }
    }
    ctx->pc = 0x36DBC4u;
    // 0x36dbc4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x36dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36dbc8: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x36dbc8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x36dbcc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36DBCCu;
    {
        const bool branch_taken_0x36dbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dbcc) {
            ctx->pc = 0x36DBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36DBCCu;
            // 0x36dbd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DBD4u;
            goto label_36dbd4;
        }
    }
    ctx->pc = 0x36DBD4u;
label_36dbd4:
    // 0x36dbd4: 0x8812  mflo        $s1
    ctx->pc = 0x36dbd4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x36dbd8: 0x1810  mfhi        $v1
    ctx->pc = 0x36dbd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x36dbdc: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x36DBDCu;
    {
        const bool branch_taken_0x36dbdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBDCu;
        // 0x36dbe0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dbdc) {
            ctx->pc = 0x36DD18u;
            goto label_36dd18;
        }
    }
    ctx->pc = 0x36DBE4u;
    // 0x36dbe4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36dbe8: 0x9043cc12  lbu         $v1, -0x33EE($v0)
    ctx->pc = 0x36dbe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FCC12u));
    // 0x36dbec: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x36DBECu;
    {
        const bool branch_taken_0x36dbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DBECu;
        // 0x36dbf0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dbec) {
            ctx->pc = 0x36DD18u;
            goto label_36dd18;
        }
    }
    ctx->pc = 0x36DBF4u;
    // 0x36dbf4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x36dbf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dbf8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36DBF8u;
    {
        const bool branch_taken_0x36dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dbf8) {
            ctx->pc = 0x36DBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36DBF8u;
            // 0x36dbfc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DC00u;
            goto label_36dc00;
        }
    }
    ctx->pc = 0x36DC00u;
label_36dc00:
    // 0x36dc00: 0x5220004b  beql        $s1, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x36DC00u;
    {
        const bool branch_taken_0x36dc00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dc00) {
            ctx->pc = 0x36DC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36DC00u;
            // 0x36dc04: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DD30u;
            goto label_36dd30;
        }
    }
    ctx->pc = 0x36DC08u;
label_36dc08:
    // 0x36dc08: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36DC08u;
    {
        const bool branch_taken_0x36dc08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DC08u;
        // 0x36dc0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dc08) {
            ctx->pc = 0x36DC14u;
            goto label_36dc14;
        }
    }
    ctx->pc = 0x36DC10u;
    // 0x36dc10: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x36dc10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_36dc14:
    // 0x36dc14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x36dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36dc18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36dc1c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x36dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x36dc20: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x36dc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x36dc24: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x36dc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x36dc28: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x36dc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x36dc2c: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x36dc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x36dc30: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x36dc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dc34: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x36dc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dc38: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x36dc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dc3c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36DC3Cu;
    {
        const bool branch_taken_0x36dc3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DC3Cu;
        // 0x36dc40: 0xb7a50008  sdr         $a1, 0x8($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dc3c) {
            ctx->pc = 0x36DC48u;
            goto label_36dc48;
        }
    }
    ctx->pc = 0x36DC44u;
    // 0x36dc44: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x36dc44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_36dc48:
    // 0x36dc48: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x36dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x36dc4c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x36dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x36dc50: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x36dc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x36dc54: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x36dc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x36dc58: 0x684b000f  ldl         $t3, 0xF($v0)
    ctx->pc = 0x36dc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x36dc5c: 0x6c4b0008  ldr         $t3, 0x8($v0)
    ctx->pc = 0x36dc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x36dc60: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x36dc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dc64: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x36dc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dc68: 0xb3ab001f  sdl         $t3, 0x1F($sp)
    ctx->pc = 0x36dc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dc6c: 0xb7ab0018  sdr         $t3, 0x18($sp)
    ctx->pc = 0x36dc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dc70: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36DC70u;
    {
        const bool branch_taken_0x36dc70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DC70u;
        // 0x36dc74: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dc70) {
            ctx->pc = 0x36DC7Cu;
            goto label_36dc7c;
        }
    }
    ctx->pc = 0x36DC78u;
    // 0x36dc78: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x36dc78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_36dc7c:
    // 0x36dc7c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x36dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x36dc80: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x36dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x36dc84: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x36dc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x36dc88: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x36dc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x36dc8c: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x36dc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x36dc90: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x36dc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x36dc94: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x36dc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dc98: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x36dc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dc9c: 0xb3a6002f  sdl         $a2, 0x2F($sp)
    ctx->pc = 0x36dc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dca0: 0xb7a60028  sdr         $a2, 0x28($sp)
    ctx->pc = 0x36dca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dca4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36DCA4u;
    {
        const bool branch_taken_0x36dca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DCA4u;
        // 0x36dca8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dca4) {
            ctx->pc = 0x36DCB0u;
            goto label_36dcb0;
        }
    }
    ctx->pc = 0x36DCACu;
    // 0x36dcac: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x36dcacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_36dcb0:
    // 0x36dcb0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x36dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x36dcb4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x36dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36dcb8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x36dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x36dcbc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36dcc0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36dcc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dcc4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36dcc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dcc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36dcc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dccc: 0x684b0007  ldl         $t3, 0x7($v0)
    ctx->pc = 0x36dcccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x36dcd0: 0x6c4b0000  ldr         $t3, 0x0($v0)
    ctx->pc = 0x36dcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x36dcd4: 0x684c000f  ldl         $t4, 0xF($v0)
    ctx->pc = 0x36dcd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x36dcd8: 0x6c4c0008  ldr         $t4, 0x8($v0)
    ctx->pc = 0x36dcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x36dcdc: 0xb3ab0037  sdl         $t3, 0x37($sp)
    ctx->pc = 0x36dcdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dce0: 0xb7ab0030  sdr         $t3, 0x30($sp)
    ctx->pc = 0x36dce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dce4: 0xb3ac003f  sdl         $t4, 0x3F($sp)
    ctx->pc = 0x36dce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dce8: 0xb7ac0038  sdr         $t4, 0x38($sp)
    ctx->pc = 0x36dce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dcec: 0xc0db596  jal         func_36D658
    ctx->pc = 0x36DCECu;
    SET_GPR_U32(ctx, 31, 0x36DCF4u);
    ctx->pc = 0x36DCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DCECu;
    // 0x36dcf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D658u, 0x36DCECu, 0x36DCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DCF4u;
label_36dcf4:
    // 0x36dcf4: 0x52000002  beql        $s0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x36DCF4u;
    {
        const bool branch_taken_0x36dcf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dcf4) {
            ctx->pc = 0x36DCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36DCF4u;
            // 0x36dcf8: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DD00u;
            goto label_36dd00;
        }
    }
    ctx->pc = 0x36DCFCu;
    // 0x36dcfc: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x36dcfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_36dd00:
    // 0x36dd00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36dd00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x36dd04: 0x1671ffc0  bne         $s3, $s1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x36DD04u;
    {
        const bool branch_taken_0x36dd04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        if (branch_taken_0x36dd04) {
            ctx->pc = 0x36DC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36dc08;
        }
    }
    ctx->pc = 0x36DD0Cu;
    // 0x36dd0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36DD0Cu;
    {
        const bool branch_taken_0x36dd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DD0Cu;
        // 0x36dd10: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dd0c) {
            ctx->pc = 0x36DD30u;
            goto label_36dd30;
        }
    }
    ctx->pc = 0x36DD14u;
label_36dd14:
    // 0x36dd14: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x36dd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_36dd18:
    // 0x36dd18: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x36dd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36dd1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd20: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x36dd20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd24: 0xc0db596  jal         func_36D658
    ctx->pc = 0x36DD24u;
    SET_GPR_U32(ctx, 31, 0x36DD2Cu);
    ctx->pc = 0x36DD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DD24u;
    // 0x36dd28: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D658u, 0x36DD24u, 0x36DD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DD2Cu;
label_36dd2c:
    // 0x36dd2c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x36dd2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_36dd30:
    // 0x36dd30: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x36dd30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36dd34: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x36dd34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36dd38: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x36dd38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36dd3c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x36dd3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36dd40: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x36dd40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x36dd44: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x36dd44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36dd48: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x36dd48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36dd4c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x36dd4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36dd50: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x36dd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x36dd54: 0x3e00008  jr          $ra
    ctx->pc = 0x36DD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DD54u;
        // 0x36dd58: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DD5Cu;
    // 0x36dd5c: 0x0  nop
    ctx->pc = 0x36dd5cu;
    // NOP
    ctx->pc = 0x36dd60u;
}
