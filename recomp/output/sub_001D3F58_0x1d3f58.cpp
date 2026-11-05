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

// Function: sub_001D3F58
// Address: 0x1d3f58 - 0x1d4228
void sub_001D3F58_0x1d3f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3F58_0x1d3f58");
#endif

    switch (ctx->pc) {
        case 0x1d3f98u: goto label_1d3f98;
        case 0x1d3fc0u: goto label_1d3fc0;
        case 0x1d3fe0u: goto label_1d3fe0;
        case 0x1d4008u: goto label_1d4008;
        case 0x1d4028u: goto label_1d4028;
        case 0x1d4040u: goto label_1d4040;
        case 0x1d4058u: goto label_1d4058;
        case 0x1d4078u: goto label_1d4078;
        case 0x1d40a4u: goto label_1d40a4;
        case 0x1d40c4u: goto label_1d40c4;
        case 0x1d40d8u: goto label_1d40d8;
        case 0x1d40e4u: goto label_1d40e4;
        case 0x1d4110u: goto label_1d4110;
        case 0x1d4158u: goto label_1d4158;
        case 0x1d41b8u: goto label_1d41b8;
        default: break;
    }

    ctx->pc = 0x1d3f58u;

    // 0x1d3f58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d3f5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d3f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d3f60: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d3f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d3f64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d3f64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3f6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3f70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3f74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d3f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d3f78: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d3f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d3f7c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d3f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1d3f80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d3f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d3f84: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x1d3f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1d3f88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3F88u;
    {
        const bool branch_taken_0x1d3f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F88u;
        // 0x1d3f8c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f88) {
            ctx->pc = 0x1D3F98u;
            goto label_1d3f98;
        }
    }
    ctx->pc = 0x1D3F90u;
    // 0x1d3f90: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D3F90u;
    SET_GPR_U32(ctx, 31, 0x1D3F98u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D3F90u, 0x1D3F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F98u;
label_1d3f98:
    // 0x1d3f98: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1d3f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d3f9c: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D3F9Cu;
    {
        const bool branch_taken_0x1d3f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3f9c) {
            ctx->pc = 0x1D3FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3F9Cu;
            // 0x1d3fa0: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3FE4u;
            goto label_1d3fe4;
        }
    }
    ctx->pc = 0x1D3FA4u;
    // 0x1d3fa4: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x1d3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x1d3fa8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d3fac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d3facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d3fb0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3FB0u;
    {
        const bool branch_taken_0x1d3fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FB0u;
        // 0x1d3fb4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fb0) {
            ctx->pc = 0x1D3FD8u;
            goto label_1d3fd8;
        }
    }
    ctx->pc = 0x1D3FB8u;
    // 0x1d3fb8: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1d3fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1d3fbc: 0x0  nop
    ctx->pc = 0x1d3fbcu;
    // NOP
label_1d3fc0:
    // 0x1d3fc0: 0x0  nop
    ctx->pc = 0x1d3fc0u;
    // NOP
    // 0x1d3fc4: 0x0  nop
    ctx->pc = 0x1d3fc4u;
    // NOP
    // 0x1d3fc8: 0x0  nop
    ctx->pc = 0x1d3fc8u;
    // NOP
    // 0x1d3fcc: 0x0  nop
    ctx->pc = 0x1d3fccu;
    // NOP
    // 0x1d3fd0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3FD0u;
    {
        const bool branch_taken_0x1d3fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FD0u;
        // 0x1d3fd4: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fd0) {
            ctx->pc = 0x1D3FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3fc0;
        }
    }
    ctx->pc = 0x1D3FD8u;
label_1d3fd8:
    // 0x1d3fd8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D3FD8u;
    SET_GPR_U32(ctx, 31, 0x1D3FE0u);
    ctx->pc = 0x1D3FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3FD8u;
    // 0x1d3fdc: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D3FD8u, 0x1D3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3FE0u;
label_1d3fe0:
    // 0x1d3fe0: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x1d3fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1d3fe4:
    // 0x1d3fe4: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D3FE4u;
    {
        const bool branch_taken_0x1d3fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3fe4) {
            ctx->pc = 0x1D3FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3FE4u;
            // 0x1d3fe8: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D402Cu;
            goto label_1d402c;
        }
    }
    ctx->pc = 0x1D3FECu;
    // 0x1d3fec: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x1d3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x1d3ff0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1d3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1d3ff4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d3ff8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3FF8u;
    {
        const bool branch_taken_0x1d3ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FF8u;
        // 0x1d3ffc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ff8) {
            ctx->pc = 0x1D4020u;
            goto label_1d4020;
        }
    }
    ctx->pc = 0x1D4000u;
    // 0x1d4000: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x1d4000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1d4004: 0x0  nop
    ctx->pc = 0x1d4004u;
    // NOP
label_1d4008:
    // 0x1d4008: 0x0  nop
    ctx->pc = 0x1d4008u;
    // NOP
    // 0x1d400c: 0x0  nop
    ctx->pc = 0x1d400cu;
    // NOP
    // 0x1d4010: 0x0  nop
    ctx->pc = 0x1d4010u;
    // NOP
    // 0x1d4014: 0x0  nop
    ctx->pc = 0x1d4014u;
    // NOP
    // 0x1d4018: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D4018u;
    {
        const bool branch_taken_0x1d4018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4018u;
        // 0x1d401c: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4018) {
            ctx->pc = 0x1D4008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4008;
        }
    }
    ctx->pc = 0x1D4020u;
label_1d4020:
    // 0x1d4020: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D4020u;
    SET_GPR_U32(ctx, 31, 0x1D4028u);
    ctx->pc = 0x1D4024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4020u;
    // 0x1d4024: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D4020u, 0x1D4028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4028u;
label_1d4028:
    // 0x1d4028: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1d4028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1d402c:
    // 0x1d402c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1d402cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1d4030: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1d4030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d4034: 0x92c20004  lbu         $v0, 0x4($s6)
    ctx->pc = 0x1d4034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1d4038: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1D4038u;
    SET_GPR_U32(ctx, 31, 0x1D4040u);
    ctx->pc = 0x1D403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4038u;
    // 0x1d403c: 0xa2620004  sb          $v0, 0x4($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1D4038u, 0x1D4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4040u;
label_1d4040:
    // 0x1d4040: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d4040u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d4044: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1d4044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1d4048: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x1d4048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1d404c: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x1d404cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d4050: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1D4050u;
    SET_GPR_U32(ctx, 31, 0x1D4058u);
    ctx->pc = 0x1D4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4050u;
    // 0x1d4054: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1D4050u, 0x1D4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4058u;
label_1d4058:
    // 0x1d4058: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x1d4058u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d405c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1d405cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1d4060: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D4060u;
    {
        const bool branch_taken_0x1d4060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4060u;
        // 0x1d4064: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4060) {
            ctx->pc = 0x1D40ACu;
            goto label_1d40ac;
        }
    }
    ctx->pc = 0x1D4068u;
    // 0x1d4068: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x1d4068u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x1d406c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1d406cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d4070: 0x26905b00  addiu       $s0, $s4, 0x5B00
    ctx->pc = 0x1d4070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 23296));
    // 0x1d4074: 0x0  nop
    ctx->pc = 0x1d4074u;
    // NOP
label_1d4078:
    // 0x1d4078: 0xc6835b00  lwc1        $f3, 0x5B00($s4)
    ctx->pc = 0x1d4078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 23296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d407c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1d407cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4080: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1d4080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d4084: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d4084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d4088: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d4088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d408c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1d408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4090: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x1d4090u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1d4094: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x1d4094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1d4098: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1d4098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1d409c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D409Cu;
    SET_GPR_U32(ctx, 31, 0x1D40A4u);
    ctx->pc = 0x1D40A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D409Cu;
    // 0x1d40a0: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D409Cu, 0x1D40A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40A4u;
label_1d40a4:
    // 0x1d40a4: 0x1657fff4  bne         $s2, $s7, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D40A4u;
    {
        const bool branch_taken_0x1d40a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        ctx->pc = 0x1D40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40A4u;
        // 0x1d40a8: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40a4) {
            ctx->pc = 0x1D4078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4078;
        }
    }
    ctx->pc = 0x1D40ACu;
label_1d40ac:
    // 0x1d40ac: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d40acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d40b0: 0xae750010  sw          $s5, 0x10($s3)
    ctx->pc = 0x1d40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 21));
    // 0x1d40b4: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1d40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1d40b8: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x1d40b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d40bc: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1D40BCu;
    SET_GPR_U32(ctx, 31, 0x1D40C4u);
    ctx->pc = 0x1D40C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40BCu;
    // 0x1d40c0: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1D40BCu, 0x1D40C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40C4u;
label_1d40c4:
    // 0x1d40c4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x1d40c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d40c8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1d40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1d40cc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D40CCu;
    {
        const bool branch_taken_0x1d40cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40CCu;
        // 0x1d40d0: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40cc) {
            ctx->pc = 0x1D40F0u;
            goto label_1d40f0;
        }
    }
    ctx->pc = 0x1D40D4u;
    // 0x1d40d4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1d40d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d40d8:
    // 0x1d40d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d40d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d40dc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1D40DCu;
    SET_GPR_U32(ctx, 31, 0x1D40E4u);
    ctx->pc = 0x1D40E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40DCu;
    // 0x1d40e0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1D40DCu, 0x1D40E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40E4u;
label_1d40e4:
    // 0x1d40e4: 0x0  nop
    ctx->pc = 0x1d40e4u;
    // NOP
    // 0x1d40e8: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D40E8u;
    {
        const bool branch_taken_0x1d40e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40E8u;
        // 0x1d40ec: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40e8) {
            ctx->pc = 0x1D40D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d40d8;
        }
    }
    ctx->pc = 0x1D40F0u;
label_1d40f0:
    // 0x1d40f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d40f4: 0xae740014  sw          $s4, 0x14($s3)
    ctx->pc = 0x1d40f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 20));
    // 0x1d40f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d40fc: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x1d40fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1d4100: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d4100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1d4104: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4104u;
    {
        const bool branch_taken_0x1d4104 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4104u;
        // 0x1d4108: 0x8ec3000c  lw          $v1, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4104) {
            ctx->pc = 0x1D4130u;
            goto label_1d4130;
        }
    }
    ctx->pc = 0x1D410Cu;
    // 0x1d410c: 0x0  nop
    ctx->pc = 0x1d410cu;
    // NOP
label_1d4110:
    // 0x1d4110: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1d4110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d4114: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1d4114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d4118: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1d4118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d411c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d411cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d4120: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1d4120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d4124: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d4124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d4128: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D4128u;
    {
        const bool branch_taken_0x1d4128 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4128u;
        // 0x1d412c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4128) {
            ctx->pc = 0x1D4110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4110;
        }
    }
    ctx->pc = 0x1D4130u;
label_1d4130:
    // 0x1d4130: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x1d4130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1d4134: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D4134u;
    {
        const bool branch_taken_0x1d4134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4134) {
            ctx->pc = 0x1D4138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4134u;
            // 0x1d4138: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4198u;
            goto label_1d4198;
        }
    }
    ctx->pc = 0x1D413Cu;
    // 0x1d413c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d4140: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1d4140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4144: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d4144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d4148: 0x22943  sra         $a1, $v0, 5
    ctx->pc = 0x1d4148u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d414c: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D414Cu;
    {
        const bool branch_taken_0x1d414c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1D4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D414Cu;
        // 0x1d4150: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d414c) {
            ctx->pc = 0x1D4194u;
            goto label_1d4194;
        }
    }
    ctx->pc = 0x1D4154u;
    // 0x1d4154: 0x0  nop
    ctx->pc = 0x1d4154u;
    // NOP
label_1d4158:
    // 0x1d4158: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1d4158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d415c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1d415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1d4160: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1d4160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d4164: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1d4164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4168: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d4168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d416c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1d416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4170: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1d4170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d4174: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1d4174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4178: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1d4178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1d417c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d417cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4180: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1d4180u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4184: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1d4184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1d4188: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d4188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d418c: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D418Cu;
    {
        const bool branch_taken_0x1d418c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1D4190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D418Cu;
        // 0x1d4190: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d418c) {
            ctx->pc = 0x1D4158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4158;
        }
    }
    ctx->pc = 0x1D4194u;
label_1d4194:
    // 0x1d4194: 0x8ec30014  lw          $v1, 0x14($s6)
    ctx->pc = 0x1d4194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_1d4198:
    // 0x1d4198: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D4198u;
    {
        const bool branch_taken_0x1d4198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4198u;
        // 0x1d419c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4198) {
            ctx->pc = 0x1D41F8u;
            goto label_1d41f8;
        }
    }
    ctx->pc = 0x1D41A0u;
    // 0x1d41a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d41a4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1d41a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41a8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1d41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1d41ac: 0x22983  sra         $a1, $v0, 6
    ctx->pc = 0x1d41acu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1d41b0: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D41B0u;
    {
        const bool branch_taken_0x1d41b0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1D41B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41B0u;
        // 0x1d41b4: 0x8e660014  lw          $a2, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41b0) {
            ctx->pc = 0x1D41F4u;
            goto label_1d41f4;
        }
    }
    ctx->pc = 0x1D41B8u;
label_1d41b8:
    // 0x1d41b8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1d41b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d41bc: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1d41bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d41c0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1d41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1d41c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d41c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d41c8: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1d41c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d41cc: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1d41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1d41d0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d41d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d41d4: 0xf8c10020  sqc2        $vf1, 0x20($a2)
    ctx->pc = 0x1d41d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d41d8: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x1d41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1d41dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d41dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d41e0: 0xf8c10030  sqc2        $vf1, 0x30($a2)
    ctx->pc = 0x1d41e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d41e4: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1d41e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1d41e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d41e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d41ec: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D41ECu;
    {
        const bool branch_taken_0x1d41ec = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1D41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41ECu;
        // 0x1d41f0: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41ec) {
            ctx->pc = 0x1D41B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d41b8;
        }
    }
    ctx->pc = 0x1D41F4u;
label_1d41f4:
    // 0x1d41f4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1d41f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d41f8:
    // 0x1d41f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d41f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d41fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d41fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4200: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d4200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4204: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d4204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d4208: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d4208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d420c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d420cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d4210: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d4210u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4214: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d4214u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d4218: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d4218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d421c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D421Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D421Cu;
        // 0x1d4220: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D421Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4224u;
    // 0x1d4224: 0x0  nop
    ctx->pc = 0x1d4224u;
    // NOP
    ctx->pc = 0x1d4228u;
}
