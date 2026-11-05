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

// Function: sub_00148A58
// Address: 0x148a58 - 0x148dc8
void sub_00148A58_0x148a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148A58_0x148a58");
#endif

    switch (ctx->pc) {
        case 0x148a94u: goto label_148a94;
        case 0x148b14u: goto label_148b14;
        case 0x148b28u: goto label_148b28;
        case 0x148b38u: goto label_148b38;
        case 0x148b50u: goto label_148b50;
        case 0x148b68u: goto label_148b68;
        case 0x148b90u: goto label_148b90;
        case 0x148be8u: goto label_148be8;
        case 0x148c08u: goto label_148c08;
        case 0x148c18u: goto label_148c18;
        case 0x148c50u: goto label_148c50;
        case 0x148c6cu: goto label_148c6c;
        case 0x148ce4u: goto label_148ce4;
        case 0x148d04u: goto label_148d04;
        case 0x148d14u: goto label_148d14;
        case 0x148d4cu: goto label_148d4c;
        case 0x148d5cu: goto label_148d5c;
        case 0x148d78u: goto label_148d78;
        case 0x148d88u: goto label_148d88;
        case 0x148d98u: goto label_148d98;
        default: break;
    }

    ctx->pc = 0x148a58u;

    // 0x148a58: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x148a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x148a5c: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x148a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x148a60: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x148a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x148a64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x148a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a68: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x148a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x148a6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x148a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a70: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x148a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x148a74: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x148a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x148a78: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x148a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x148a7c: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x148a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x148a80: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x148a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x148a84: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x148a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x148a88: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x148a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x148a8c: 0xc05238e  jal         func_148E38
    ctx->pc = 0x148A8Cu;
    SET_GPR_U32(ctx, 31, 0x148A94u);
    ctx->pc = 0x148A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148A8Cu;
    // 0x148a90: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E38u, 0x148A8Cu, 0x148A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A94u;
label_148a94:
    // 0x148a94: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148A94u;
    {
        const bool branch_taken_0x148a94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x148A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A94u;
        // 0x148a98: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a94) {
            ctx->pc = 0x148AB0u;
            goto label_148ab0;
        }
    }
    ctx->pc = 0x148A9Cu;
    // 0x148a9c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x148a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x148aa0: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x148AA0u;
    {
        const bool branch_taken_0x148aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AA0u;
        // 0x148aa4: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148aa0) {
            ctx->pc = 0x148D9Cu;
            goto label_148d9c;
        }
    }
    ctx->pc = 0x148AA8u;
    // 0x148aa8: 0x46000bd  bltz        $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x148AA8u;
    {
        const bool branch_taken_0x148aa8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x148AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AA8u;
        // 0x148aac: 0xdfb10098  ld          $s1, 0x98($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148aa8) {
            ctx->pc = 0x148DA0u;
            goto label_148da0;
        }
    }
    ctx->pc = 0x148AB0u;
label_148ab0:
    // 0x148ab0: 0x9247046c  lbu         $a3, 0x46C($s2)
    ctx->pc = 0x148ab0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x148ab4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x148ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x148ab8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x148ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x148abc: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x148abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x148ac0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x148ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x148ac4: 0x8e4606f0  lw          $a2, 0x6F0($s2)
    ctx->pc = 0x148ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1776)));
    // 0x148ac8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x148ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x148acc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148ad0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x148ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x148ad4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x148ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148ad8: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x148ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x148adc: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x148ADCu;
    {
        const bool branch_taken_0x148adc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x148AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148ADCu;
        // 0x148ae0: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148adc) {
            ctx->pc = 0x148AECu;
            goto label_148aec;
        }
    }
    ctx->pc = 0x148AE4u;
    // 0x148ae4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x148AE4u;
    {
        const bool branch_taken_0x148ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AE4u;
        // 0x148ae8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ae4) {
            ctx->pc = 0x148B20u;
            goto label_148b20;
        }
    }
    ctx->pc = 0x148AECu;
label_148aec:
    // 0x148aec: 0x8e420464  lw          $v0, 0x464($s2)
    ctx->pc = 0x148aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1124)));
    // 0x148af0: 0x8c5e0010  lw          $fp, 0x10($v0)
    ctx->pc = 0x148af0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x148af4: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x148AF4u;
    {
        const bool branch_taken_0x148af4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x148AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AF4u;
        // 0x148af8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148af4) {
            ctx->pc = 0x148B04u;
            goto label_148b04;
        }
    }
    ctx->pc = 0x148AFCu;
    // 0x148afc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x148AFCu;
    {
        const bool branch_taken_0x148afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AFCu;
        // 0x148b00: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148afc) {
            ctx->pc = 0x148B20u;
            goto label_148b20;
        }
    }
    ctx->pc = 0x148B04u;
label_148b04:
    // 0x148b04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x148b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b08: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x148b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x148b0c: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x148B0Cu;
    SET_GPR_U32(ctx, 31, 0x148B14u);
    ctx->pc = 0x148B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B0Cu;
    // 0x148b10: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B958u, 0x148B0Cu, 0x148B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B14u;
label_148b14:
    // 0x148b14: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x148b14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b18: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x148B18u;
    {
        const bool branch_taken_0x148b18 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x148B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B18u;
        // 0x148b1c: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b18) {
            ctx->pc = 0x148B40u;
            goto label_148b40;
        }
    }
    ctx->pc = 0x148B20u;
label_148b20:
    // 0x148b20: 0xc05243a  jal         func_1490E8
    ctx->pc = 0x148B20u;
    SET_GPR_U32(ctx, 31, 0x148B28u);
    ctx->pc = 0x148B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B20u;
    // 0x148b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490E8u, 0x148B20u, 0x148B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B28u;
label_148b28:
    // 0x148b28: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x148B28u;
    {
        const bool branch_taken_0x148b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B28u;
        // 0x148b2c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b28) {
            ctx->pc = 0x148D9Cu;
            goto label_148d9c;
        }
    }
    ctx->pc = 0x148B30u;
    // 0x148b30: 0xc0524e4  jal         func_149390
    ctx->pc = 0x148B30u;
    SET_GPR_U32(ctx, 31, 0x148B38u);
    ctx->pc = 0x148B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B30u;
    // 0x148b34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149390u, 0x148B30u, 0x148B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B38u;
label_148b38:
    // 0x148b38: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x148B38u;
    {
        const bool branch_taken_0x148b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B38u;
        // 0x148b3c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b38) {
            ctx->pc = 0x148D9Cu;
            goto label_148d9c;
        }
    }
    ctx->pc = 0x148B40u;
label_148b40:
    // 0x148b40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x148b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148b44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b48: 0xc05243a  jal         func_1490E8
    ctx->pc = 0x148B48u;
    SET_GPR_U32(ctx, 31, 0x148B50u);
    ctx->pc = 0x148B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B48u;
    // 0x148b4c: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490E8u, 0x148B48u, 0x148B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B50u;
label_148b50:
    // 0x148b50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x148b50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b54: 0x12600036  beqz        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x148B54u;
    {
        const bool branch_taken_0x148b54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B54u;
        // 0x148b58: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b54) {
            ctx->pc = 0x148C30u;
            goto label_148c30;
        }
    }
    ctx->pc = 0x148B5Cu;
    // 0x148b5c: 0x12a00034  beqz        $s5, . + 4 + (0x34 << 2)
    ctx->pc = 0x148B5Cu;
    {
        const bool branch_taken_0x148b5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B5Cu;
        // 0x148b60: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b5c) {
            ctx->pc = 0x148C30u;
            goto label_148c30;
        }
    }
    ctx->pc = 0x148B64u;
    // 0x148b64: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x148b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_148b68:
    // 0x148b68: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x148b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x148b6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x148b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148b70: 0x1493002b  bne         $a0, $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x148B70u;
    {
        const bool branch_taken_0x148b70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x148B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B70u;
        // 0x148b74: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b70) {
            ctx->pc = 0x148C20u;
            goto label_148c20;
        }
    }
    ctx->pc = 0x148B78u;
    // 0x148b78: 0x141600  sll         $v0, $s4, 24
    ctx->pc = 0x148b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
    // 0x148b7c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x148b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x148b80: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x148b80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x148b84: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x148b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b88: 0xc044234  jal         func_1108D0
    ctx->pc = 0x148B88u;
    SET_GPR_U32(ctx, 31, 0x148B90u);
    ctx->pc = 0x148B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B88u;
    // 0x148b8c: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x148B88u, 0x148B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B90u;
label_148b90:
    // 0x148b90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x148b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b94: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x148b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x148b98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x148B98u;
    {
        const bool branch_taken_0x148b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B98u;
        // 0x148b9c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b98) {
            ctx->pc = 0x148BC4u;
            goto label_148bc4;
        }
    }
    ctx->pc = 0x148BA0u;
    // 0x148ba0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148ba4: 0x2442ea40  addiu       $v0, $v0, -0x15C0
    ctx->pc = 0x148ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961728));
    // 0x148ba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x148ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148bac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x148bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148bb0: 0x800008  jr          $a0
    ctx->pc = 0x148BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148BB8u: goto label_148bb8;
            case 0x148BC0u: goto label_148bc0;
            case 0x148BC4u: goto label_148bc4;
            case 0x148D98u: goto label_148d98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148BB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x148BB8u;
label_148bb8:
    // 0x148bb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x148BB8u;
    {
        const bool branch_taken_0x148bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BB8u;
        // 0x148bbc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148bb8) {
            ctx->pc = 0x148BC4u;
            goto label_148bc4;
        }
    }
    ctx->pc = 0x148BC0u;
label_148bc0:
    // 0x148bc0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x148bc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148bc4:
    // 0x148bc4: 0x16e00016  bnez        $s7, . + 4 + (0x16 << 2)
    ctx->pc = 0x148BC4u;
    {
        const bool branch_taken_0x148bc4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x148BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BC4u;
        // 0x148bc8: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148bc4) {
            ctx->pc = 0x148C20u;
            goto label_148c20;
        }
    }
    ctx->pc = 0x148BCCu;
    // 0x148bcc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x148bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x148bd0: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x148bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x148bd4: 0x2444b060  addiu       $a0, $v0, -0x4FA0
    ctx->pc = 0x148bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x148bd8: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x148bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x148bdc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x148bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148be0: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x148BE0u;
    SET_GPR_U32(ctx, 31, 0x148BE8u);
    ctx->pc = 0x148BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148BE0u;
    // 0x148be4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x148BE0u, 0x148BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148BE8u;
label_148be8:
    // 0x148be8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bec: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x148BECu;
    {
        const bool branch_taken_0x148bec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x148BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BECu;
        // 0x148bf0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148bec) {
            ctx->pc = 0x148C18u;
            goto label_148c18;
        }
    }
    ctx->pc = 0x148BF4u;
    // 0x148bf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x148bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bfc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x148bfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x148c00: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x148C00u;
    SET_GPR_U32(ctx, 31, 0x148C08u);
    ctx->pc = 0x148C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148C00u;
    // 0x148c04: 0x30510001  andi        $s1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x148C00u, 0x148C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C08u;
label_148c08:
    // 0x148c08: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x148c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x148c0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c10: 0xc042128  jal         func_1084A0
    ctx->pc = 0x148C10u;
    SET_GPR_U32(ctx, 31, 0x148C18u);
    ctx->pc = 0x148C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148C10u;
    // 0x148c14: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x148C10u, 0x148C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C18u;
label_148c18:
    // 0x148c18: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x148c18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c1c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x148c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_148c20:
    // 0x148c20: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x148c20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x148c24: 0x295182b  sltu        $v1, $s4, $s5
    ctx->pc = 0x148c24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x148c28: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x148C28u;
    {
        const bool branch_taken_0x148c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C28u;
        // 0x148c2c: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c28) {
            ctx->pc = 0x148B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148b68;
        }
    }
    ctx->pc = 0x148C30u;
label_148c30:
    // 0x148c30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x148c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c34: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x148c34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x148c38: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x148c38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148c3c: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x148c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x148c40: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x148C40u;
    {
        const bool branch_taken_0x148c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C40u;
        // 0x148c44: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c40) {
            ctx->pc = 0x148D34u;
            goto label_148d34;
        }
    }
    ctx->pc = 0x148C48u;
    // 0x148c48: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x148c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x148c4c: 0x0  nop
    ctx->pc = 0x148c4cu;
    // NOP
label_148c50:
    // 0x148c50: 0x12620033  beq         $s3, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x148C50u;
    {
        const bool branch_taken_0x148c50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x148C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C50u;
        // 0x148c54: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c50) {
            ctx->pc = 0x148D20u;
            goto label_148d20;
        }
    }
    ctx->pc = 0x148C58u;
    // 0x148c58: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x148c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x148c5c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x148c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x148c60: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x148c60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148c64: 0xc044234  jal         func_1108D0
    ctx->pc = 0x148C64u;
    SET_GPR_U32(ctx, 31, 0x148C6Cu);
    ctx->pc = 0x148C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148C64u;
    // 0x148c68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x148C64u, 0x148C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C6Cu;
label_148c6c:
    // 0x148c6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x148c6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c70: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x148c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x148c74: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x148C74u;
    {
        const bool branch_taken_0x148c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C74u;
        // 0x148c78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c74) {
            ctx->pc = 0x148CB0u;
            goto label_148cb0;
        }
    }
    ctx->pc = 0x148C7Cu;
    // 0x148c7c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x148c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x148c80: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x148C80u;
    {
        const bool branch_taken_0x148c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148c80) {
            ctx->pc = 0x148C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148C80u;
            // 0x148c84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148CB4u;
            goto label_148cb4;
        }
    }
    ctx->pc = 0x148C88u;
    // 0x148c88: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x148c88u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
    // 0x148c8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148C8Cu;
    {
        const bool branch_taken_0x148c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C8Cu;
        // 0x148c90: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c8c) {
            ctx->pc = 0x148CA0u;
            goto label_148ca0;
        }
    }
    ctx->pc = 0x148C94u;
    // 0x148c94: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x148c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x148c98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148C98u;
    {
        const bool branch_taken_0x148c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148c98) {
            ctx->pc = 0x148CB4u;
            goto label_148cb4;
        }
    }
    ctx->pc = 0x148CA0u;
label_148ca0:
    // 0x148ca0: 0x131600  sll         $v0, $s3, 24
    ctx->pc = 0x148ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x148ca4: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x148ca4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ca8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x148CA8u;
    {
        const bool branch_taken_0x148ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CA8u;
        // 0x148cac: 0x2a603  sra         $s4, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ca8) {
            ctx->pc = 0x148CB4u;
            goto label_148cb4;
        }
    }
    ctx->pc = 0x148CB0u;
label_148cb0:
    // 0x148cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x148cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148cb4:
    // 0x148cb4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x148CB4u;
    {
        const bool branch_taken_0x148cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x148CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CB4u;
        // 0x148cb8: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148cb4) {
            ctx->pc = 0x148D24u;
            goto label_148d24;
        }
    }
    ctx->pc = 0x148CBCu;
    // 0x148cbc: 0x5620001a  bnel        $s1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x148CBCu;
    {
        const bool branch_taken_0x148cbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x148cbc) {
            ctx->pc = 0x148CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148CBCu;
            // 0x148cc0: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x148D28u;
            goto label_148d28;
        }
    }
    ctx->pc = 0x148CC4u;
    // 0x148cc4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x148cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x148cc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x148cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ccc: 0x2444b060  addiu       $a0, $v0, -0x4FA0
    ctx->pc = 0x148cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x148cd0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x148cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cd4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x148cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x148cd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x148cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cdc: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x148CDCu;
    SET_GPR_U32(ctx, 31, 0x148CE4u);
    ctx->pc = 0x148CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148CDCu;
    // 0x148ce0: 0x24478738  addiu       $a3, $v0, -0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x148CDCu, 0x148CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CE4u;
label_148ce4:
    // 0x148ce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ce8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x148CE8u;
    {
        const bool branch_taken_0x148ce8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x148CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CE8u;
        // 0x148cec: 0x131600  sll         $v0, $s3, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ce8) {
            ctx->pc = 0x148D18u;
            goto label_148d18;
        }
    }
    ctx->pc = 0x148CF0u;
    // 0x148cf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x148cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cf8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x148cf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x148cfc: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x148CFCu;
    SET_GPR_U32(ctx, 31, 0x148D04u);
    ctx->pc = 0x148D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148CFCu;
    // 0x148d00: 0x30510001  andi        $s1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x148CFCu, 0x148D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D04u;
label_148d04:
    // 0x148d04: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x148d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x148d08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d0c: 0xc042128  jal         func_1084A0
    ctx->pc = 0x148D0Cu;
    SET_GPR_U32(ctx, 31, 0x148D14u);
    ctx->pc = 0x148D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D0Cu;
    // 0x148d10: 0x24448758  addiu       $a0, $v0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x148D0Cu, 0x148D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D14u;
label_148d14:
    // 0x148d14: 0x131600  sll         $v0, $s3, 24
    ctx->pc = 0x148d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
label_148d18:
    // 0x148d18: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x148d18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x148d1c: 0x2a603  sra         $s4, $v0, 24
    ctx->pc = 0x148d1cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 24));
label_148d20:
    // 0x148d20: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x148d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_148d24:
    // 0x148d24: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x148d24u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_148d28:
    // 0x148d28: 0x275182b  sltu        $v1, $s3, $s5
    ctx->pc = 0x148d28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x148d2c: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x148D2Cu;
    {
        const bool branch_taken_0x148d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D2Cu;
        // 0x148d30: 0x8fa20084  lw          $v0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d2c) {
            ctx->pc = 0x148C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148c50;
        }
    }
    ctx->pc = 0x148D34u;
label_148d34:
    // 0x148d34: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x148D34u;
    {
        const bool branch_taken_0x148d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D34u;
        // 0x148d38: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d34) {
            ctx->pc = 0x148D64u;
            goto label_148d64;
        }
    }
    ctx->pc = 0x148D3Cu;
    // 0x148d3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d40: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x148d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x148d44: 0xc05255e  jal         func_149578
    ctx->pc = 0x148D44u;
    SET_GPR_U32(ctx, 31, 0x148D4Cu);
    ctx->pc = 0x148D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D44u;
    // 0x148d48: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149578u, 0x148D44u, 0x148D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D4Cu;
label_148d4c:
    // 0x148d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d50: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x148d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148d54: 0xc052434  jal         func_1490D0
    ctx->pc = 0x148D54u;
    SET_GPR_U32(ctx, 31, 0x148D5Cu);
    ctx->pc = 0x148D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D54u;
    // 0x148d58: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490D0u, 0x148D54u, 0x148D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D5Cu;
label_148d5c:
    // 0x148d5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x148D5Cu;
    {
        const bool branch_taken_0x148d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D5Cu;
        // 0x148d60: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d5c) {
            ctx->pc = 0x148D9Cu;
            goto label_148d9c;
        }
    }
    ctx->pc = 0x148D64u;
label_148d64:
    // 0x148d64: 0x16e0000d  bnez        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x148D64u;
    {
        const bool branch_taken_0x148d64 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x148D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D64u;
        // 0x148d68: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d64) {
            ctx->pc = 0x148D9Cu;
            goto label_148d9c;
        }
    }
    ctx->pc = 0x148D6Cu;
    // 0x148d6c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x148d6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x148d70: 0xc05243a  jal         func_1490E8
    ctx->pc = 0x148D70u;
    SET_GPR_U32(ctx, 31, 0x148D78u);
    ctx->pc = 0x148D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D70u;
    // 0x148d74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490E8u, 0x148D70u, 0x148D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D78u;
label_148d78:
    // 0x148d78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x148D78u;
    {
        const bool branch_taken_0x148d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D78u;
        // 0x148d7c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d78) {
            ctx->pc = 0x148D9Cu;
            goto label_148d9c;
        }
    }
    ctx->pc = 0x148D80u;
    // 0x148d80: 0xc0524e4  jal         func_149390
    ctx->pc = 0x148D80u;
    SET_GPR_U32(ctx, 31, 0x148D88u);
    ctx->pc = 0x148D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D80u;
    // 0x148d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149390u, 0x148D80u, 0x148D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D88u;
label_148d88:
    // 0x148d88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d90: 0xc052434  jal         func_1490D0
    ctx->pc = 0x148D90u;
    SET_GPR_U32(ctx, 31, 0x148D98u);
    ctx->pc = 0x148D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148D90u;
    // 0x148d94: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490D0u, 0x148D90u, 0x148D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D98u;
label_148d98:
    // 0x148d98: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x148d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_148d9c:
    // 0x148d9c: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x148d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_148da0:
    // 0x148da0: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x148da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x148da4: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x148da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x148da8: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x148da8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x148dac: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x148dacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x148db0: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x148db0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x148db4: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x148db4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x148db8: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x148db8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x148dbc: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x148dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x148dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x148DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148DC0u;
        // 0x148dc4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148DC8u;
}
