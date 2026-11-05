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

// Function: sub_001E8A20
// Address: 0x1e8a20 - 0x1e8c20
void sub_001E8A20_0x1e8a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8A20_0x1e8a20");
#endif

    switch (ctx->pc) {
        case 0x1e8a70u: goto label_1e8a70;
        case 0x1e8a90u: goto label_1e8a90;
        case 0x1e8ac0u: goto label_1e8ac0;
        case 0x1e8ae0u: goto label_1e8ae0;
        case 0x1e8afcu: goto label_1e8afc;
        case 0x1e8b38u: goto label_1e8b38;
        case 0x1e8bf8u: goto label_1e8bf8;
        default: break;
    }

    ctx->pc = 0x1e8a20u;

    // 0x1e8a20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e8a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e8a24: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x1e8a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x1e8a28: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1e8a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1e8a2c: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1e8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e8a30: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1e8a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1e8a34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e8a34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a38: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1e8a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1e8a3c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e8a3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a40: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1e8a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1e8a44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e8a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a48: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1e8a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1e8a4c: 0x24735870  addiu       $s3, $v1, 0x5870
    ctx->pc = 0x1e8a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
    // 0x1e8a50: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1e8a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1e8a54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e8a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e8a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e8a5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e8a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a60: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e8a64: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e8a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e8a68: 0xc0854d4  jal         func_215350
    ctx->pc = 0x1E8A68u;
    SET_GPR_U32(ctx, 31, 0x1E8A70u);
    ctx->pc = 0x1E8A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8A68u;
    // 0x1e8a6c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215350u, 0x1E8A68u, 0x1E8A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A70u;
label_1e8a70:
    // 0x1e8a70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e8a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8a74: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e8a78: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8A78u;
    {
        const bool branch_taken_0x1e8a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A78u;
        // 0x1e8a7c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a78) {
            ctx->pc = 0x1E8A84u;
            goto label_1e8a84;
        }
    }
    ctx->pc = 0x1E8A80u;
    // 0x1e8a80: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x1e8a80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e8a84:
    // 0x1e8a84: 0x12400058  beqz        $s2, . + 4 + (0x58 << 2)
    ctx->pc = 0x1E8A84u;
    {
        const bool branch_taken_0x1e8a84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A84u;
        // 0x1e8a88: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a84) {
            ctx->pc = 0x1E8BE8u;
            goto label_1e8be8;
        }
    }
    ctx->pc = 0x1E8A8Cu;
    // 0x1e8a8c: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x1e8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_1e8a90:
    // 0x1e8a90: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e8a94: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x1e8a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x1e8a98: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E8A98u;
    {
        const bool branch_taken_0x1e8a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A98u;
        // 0x1e8a9c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a98) {
            ctx->pc = 0x1E8BC0u;
            goto label_1e8bc0;
        }
    }
    ctx->pc = 0x1E8AA0u;
    // 0x1e8aa0: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x1e8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1e8aa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e8aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8aa8: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x1e8aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e8aac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1e8aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e8ab0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1e8ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e8ab4: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x1e8ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e8ab8: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x1E8AB8u;
    SET_GPR_U32(ctx, 31, 0x1E8AC0u);
    ctx->pc = 0x1E8ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8AB8u;
    // 0x1e8abc: 0x8cd10010  lw          $s1, 0x10($a2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x1E8AB8u, 0x1E8AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8AC0u;
label_1e8ac0:
    // 0x1e8ac0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1E8AC0u;
    {
        const bool branch_taken_0x1e8ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AC0u;
        // 0x1e8ac4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ac0) {
            ctx->pc = 0x1E8BC0u;
            goto label_1e8bc0;
        }
    }
    ctx->pc = 0x1E8AC8u;
    // 0x1e8ac8: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E8AC8u;
    {
        const bool branch_taken_0x1e8ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AC8u;
        // 0x1e8acc: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ac8) {
            ctx->pc = 0x1E8BC4u;
            goto label_1e8bc4;
        }
    }
    ctx->pc = 0x1E8AD0u;
    // 0x1e8ad0: 0x56200012  bnel        $s1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E8AD0u;
    {
        const bool branch_taken_0x1e8ad0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ad0) {
            ctx->pc = 0x1E8AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8AD0u;
            // 0x1e8ad4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8B1Cu;
            goto label_1e8b1c;
        }
    }
    ctx->pc = 0x1E8AD8u;
    // 0x1e8ad8: 0xc079e80  jal         func_1E7A00
    ctx->pc = 0x1E8AD8u;
    SET_GPR_U32(ctx, 31, 0x1E8AE0u);
    ctx->pc = 0x1E8ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8AD8u;
    // 0x1e8adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7A00u, 0x1E8AD8u, 0x1E8AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8AE0u;
label_1e8ae0:
    // 0x1e8ae0: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x1e8ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x1e8ae4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e8ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e8ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8af0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1e8af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8af4: 0xc079ef2  jal         func_1E7BC8
    ctx->pc = 0x1E8AF4u;
    SET_GPR_U32(ctx, 31, 0x1E8AFCu);
    ctx->pc = 0x1E8AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8AF4u;
    // 0x1e8af8: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7BC8u, 0x1E8AF4u, 0x1E8AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8AFCu;
label_1e8afc:
    // 0x1e8afc: 0x8e6200e8  lw          $v0, 0xE8($s3)
    ctx->pc = 0x1e8afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x1e8b00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8b04: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e8b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e8b08: 0xac5100ec  sw          $s1, 0xEC($v0)
    ctx->pc = 0x1e8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 17));
    // 0x1e8b0c: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x1e8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x1e8b10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e8b14: 0xae6300e8  sw          $v1, 0xE8($s3)
    ctx->pc = 0x1e8b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 3));
    // 0x1e8b18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e8b1c:
    // 0x1e8b1c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E8B1Cu;
    {
        const bool branch_taken_0x1e8b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B1Cu;
        // 0x1e8b20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b1c) {
            ctx->pc = 0x1E8BBCu;
            goto label_1e8bbc;
        }
    }
    ctx->pc = 0x1E8B24u;
    // 0x1e8b24: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x1e8b24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1e8b28: 0x266a008c  addiu       $t2, $s3, 0x8C
    ctx->pc = 0x1e8b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
    // 0x1e8b2c: 0x26690090  addiu       $t1, $s3, 0x90
    ctx->pc = 0x1e8b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x1e8b30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e8b30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b34: 0x0  nop
    ctx->pc = 0x1e8b34u;
    // NOP
label_1e8b38:
    // 0x1e8b38: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e8b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e8b3c: 0x8e64008c  lw          $a0, 0x8C($s3)
    ctx->pc = 0x1e8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1e8b40: 0x288204b0  slti        $v0, $a0, 0x4B0
    ctx->pc = 0x1e8b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1200) ? 1 : 0);
    // 0x1e8b44: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E8B44u;
    {
        const bool branch_taken_0x1e8b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B44u;
        // 0x1e8b48: 0x683021  addu        $a2, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b44) {
            ctx->pc = 0x1E8BA8u;
            goto label_1e8ba8;
        }
    }
    ctx->pc = 0x1E8B4Cu;
    // 0x1e8b4c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1e8b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e8b50: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x1e8b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1e8b54: 0x8b2018  mult        $a0, $a0, $t3
    ctx->pc = 0x1e8b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e8b58: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x1e8b58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
    // 0x1e8b5c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x1e8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1e8b60: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1e8b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e8b64: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1e8b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e8b68: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e8b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1e8b6c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1e8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e8b70: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1e8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1e8b74: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1e8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1e8b78: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1e8b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1e8b7c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e8b7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e8b80: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1e8b80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e8b84: 0x90c20010  lbu         $v0, 0x10($a2)
    ctx->pc = 0x1e8b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e8b88: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e8b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8b8c: 0xa0820010  sb          $v0, 0x10($a0)
    ctx->pc = 0x1e8b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e8b90: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x1e8b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x1e8b94: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x1e8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1e8b98: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1e8b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e8b9c: 0x142280a  movz        $a1, $t2, $v0
    ctx->pc = 0x1e8b9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 10));
    // 0x1e8ba0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e8ba4: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x1e8ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_1e8ba8:
    // 0x1e8ba8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e8ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e8bac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e8bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e8bb0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1e8bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e8bb4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1E8BB4u;
    {
        const bool branch_taken_0x1e8bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8BB4u;
        // 0x1e8bb8: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8bb4) {
            ctx->pc = 0x1E8B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8b38;
        }
    }
    ctx->pc = 0x1E8BBCu;
label_1e8bbc:
    // 0x1e8bbc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1e8bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e8bc0:
    // 0x1e8bc0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8bc4:
    // 0x1e8bc4: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8BC4u;
    {
        const bool branch_taken_0x1e8bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8BC4u;
        // 0x1e8bc8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8bc4) {
            ctx->pc = 0x1E8BDCu;
            goto label_1e8bdc;
        }
    }
    ctx->pc = 0x1E8BCCu;
    // 0x1e8bcc: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1e8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e8bd0: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8BD0u;
    {
        const bool branch_taken_0x1e8bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8BD0u;
        // 0x1e8bd4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8bd0) {
            ctx->pc = 0x1E8BDCu;
            goto label_1e8bdc;
        }
    }
    ctx->pc = 0x1E8BD8u;
    // 0x1e8bd8: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x1e8bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e8bdc:
    // 0x1e8bdc: 0x5640ffac  bnel        $s2, $zero, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1E8BDCu;
    {
        const bool branch_taken_0x1e8bdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8bdc) {
            ctx->pc = 0x1E8BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8BDCu;
            // 0x1e8be0: 0x8e4300b8  lw          $v1, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8a90;
        }
    }
    ctx->pc = 0x1E8BE4u;
    // 0x1e8be4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e8be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8be8:
    // 0x1e8be8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8BE8u;
    {
        const bool branch_taken_0x1e8be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8BE8u;
        // 0x1e8bec: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8be8) {
            ctx->pc = 0x1E8BFCu;
            goto label_1e8bfc;
        }
    }
    ctx->pc = 0x1E8BF0u;
    // 0x1e8bf0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1E8BF0u;
    SET_GPR_U32(ctx, 31, 0x1E8BF8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1E8BF0u, 0x1E8BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8BF8u;
label_1e8bf8:
    // 0x1e8bf8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1e8bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8bfc:
    // 0x1e8bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8c00: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1e8c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e8c04: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1e8c04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8c08: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1e8c08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e8c0c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1e8c0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8c10: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1e8c10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e8c14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e8c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C18u;
        // 0x1e8c1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8C20u;
}
