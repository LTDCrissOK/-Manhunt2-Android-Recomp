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

// Function: sub_003C7DB0
// Address: 0x3c7db0 - 0x3c7f40
void sub_003C7DB0_0x3c7db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7DB0_0x3c7db0");
#endif

    switch (ctx->pc) {
        case 0x3c7de0u: goto label_3c7de0;
        case 0x3c7df4u: goto label_3c7df4;
        case 0x3c7e2cu: goto label_3c7e2c;
        case 0x3c7e60u: goto label_3c7e60;
        case 0x3c7eb8u: goto label_3c7eb8;
        case 0x3c7f00u: goto label_3c7f00;
        default: break;
    }

    ctx->pc = 0x3c7db0u;

    // 0x3c7db0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c7db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c7db4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c7db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3c7db8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c7db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c7dbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c7dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7dc0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3c7dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3c7dc4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3c7dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7dc8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c7dc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7dcc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c7dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3c7dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c7dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c7dd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c7dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7dd8: 0xc0f1f52  jal         func_3C7D48
    ctx->pc = 0x3C7DD8u;
    SET_GPR_U32(ctx, 31, 0x3C7DE0u);
    ctx->pc = 0x3C7DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7DD8u;
    // 0x3c7ddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7D48u, 0x3C7DD8u, 0x3C7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7DE0u;
label_3c7de0:
    // 0x3c7de0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c7de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7de4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C7DE4u;
    {
        const bool branch_taken_0x3c7de4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7DE4u;
        // 0x3c7de8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7de4) {
            ctx->pc = 0x3C7E08u;
            goto label_3c7e08;
        }
    }
    ctx->pc = 0x3C7DECu;
    // 0x3c7dec: 0xc0f1d12  jal         func_3C7448
    ctx->pc = 0x3C7DECu;
    SET_GPR_U32(ctx, 31, 0x3C7DF4u);
    ctx->pc = 0x3C7DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7DECu;
    // 0x3c7df0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7448u, 0x3C7DECu, 0x3C7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7DF4u;
label_3c7df4:
    // 0x3c7df4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3c7df4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c7df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c7dfc: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x3c7dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x3c7e00: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3C7E00u;
    {
        const bool branch_taken_0x3c7e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E00u;
        // 0x3c7e04: 0xad620010  sw          $v0, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7e00) {
            ctx->pc = 0x3C7F1Cu;
            goto label_3c7f1c;
        }
    }
    ctx->pc = 0x3C7E08u;
label_3c7e08:
    // 0x3c7e08: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C7E08u;
    {
        const bool branch_taken_0x3c7e08 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3C7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E08u;
        // 0x3c7e0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7e08) {
            ctx->pc = 0x3C7E20u;
            goto label_3c7e20;
        }
    }
    ctx->pc = 0x3C7E10u;
    // 0x3c7e10: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x3c7e10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7e14: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3c7e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c7e18: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3c7e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7e1c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x3c7e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3c7e20:
    // 0x3c7e20: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3c7e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3c7e24: 0xc0f1d12  jal         func_3C7448
    ctx->pc = 0x3C7E24u;
    SET_GPR_U32(ctx, 31, 0x3C7E2Cu);
    ctx->pc = 0x3C7E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7E24u;
    // 0x3c7e28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7448u, 0x3C7E24u, 0x3C7E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7E2Cu;
label_3c7e2c:
    // 0x3c7e2c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3c7e2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7e30: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x3c7e30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3c7e34: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x3c7e34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x3c7e38: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x3c7e38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x3c7e3c: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x3c7e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x3c7e40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c7e40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7e44: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x3c7e44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3c7e48: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3c7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3c7e4c: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x3c7e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x3c7e50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c7e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3c7e54: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x3c7e54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3c7e58: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x3c7e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3c7e5c: 0x0  nop
    ctx->pc = 0x3c7e5cu;
    // NOP
label_3c7e60:
    // 0x3c7e60: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3c7e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3c7e64: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3c7e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3c7e68: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3c7e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3c7e6c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x3c7e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3c7e70: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3c7e70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3c7e74: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3c7e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c7e78: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x3c7e78u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x3c7e7c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3c7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c7e80: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x3c7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3c7e84: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3c7e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3c7e88: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x3c7e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3c7e8c: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x3c7e8cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3c7e90: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x3c7e90u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c7e94: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x3c7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x3c7e98: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x3c7e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3c7e9c: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x3c7e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c7ea0: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x3c7ea0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3c7ea4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3C7EA4u;
    {
        const bool branch_taken_0x3c7ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7EA4u;
        // 0x3c7ea8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7ea4) {
            ctx->pc = 0x3C7E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7e60;
        }
    }
    ctx->pc = 0x3C7EACu;
    // 0x3c7eac: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x3c7eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3c7eb0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3C7EB0u;
    {
        const bool branch_taken_0x3c7eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7eb0) {
            ctx->pc = 0x3C7EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7EB0u;
            // 0x3c7eb4: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7EF0u;
            goto label_3c7ef0;
        }
    }
    ctx->pc = 0x3C7EB8u;
label_3c7eb8:
    // 0x3c7eb8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3c7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3c7ebc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3c7ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3c7ec0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c7ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c7ec4: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x3c7ec4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3c7ec8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3c7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3c7ecc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x3c7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3c7ed0: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x3c7ed0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3c7ed4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x3c7ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c7ed8: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x3c7ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3c7edc: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x3c7edcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c7ee0: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x3c7ee0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3c7ee4: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3C7EE4u;
    {
        const bool branch_taken_0x3c7ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7EE4u;
        // 0x3c7ee8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7ee4) {
            ctx->pc = 0x3C7EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7eb8;
        }
    }
    ctx->pc = 0x3C7EECu;
    // 0x3c7eec: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3c7eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_3c7ef0:
    // 0x3c7ef0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3c7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3c7ef4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C7EF4u;
    {
        const bool branch_taken_0x3c7ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7ef4) {
            ctx->pc = 0x3C7EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7EF4u;
            // 0x3c7ef8: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7F1Cu;
            goto label_3c7f1c;
        }
    }
    ctx->pc = 0x3C7EFCu;
    // 0x3c7efc: 0x0  nop
    ctx->pc = 0x3c7efcu;
    // NOP
label_3c7f00:
    // 0x3c7f00: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3c7f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x3c7f04: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3c7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3c7f08: 0x0  nop
    ctx->pc = 0x3c7f08u;
    // NOP
    // 0x3c7f0c: 0x0  nop
    ctx->pc = 0x3c7f0cu;
    // NOP
    // 0x3c7f10: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C7F10u;
    {
        const bool branch_taken_0x3c7f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F10u;
        // 0x3c7f14: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7f10) {
            ctx->pc = 0x3C7F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7f00;
        }
    }
    ctx->pc = 0x3C7F18u;
    // 0x3c7f18: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x3c7f18u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_3c7f1c:
    // 0x3c7f1c: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x3c7f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7f20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c7f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c7f24: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c7f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c7f28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c7f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7f2c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3c7f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c7f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c7f34: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F34u;
        // 0x3c7f38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7F3Cu;
    // 0x3c7f3c: 0x0  nop
    ctx->pc = 0x3c7f3cu;
    // NOP
    ctx->pc = 0x3c7f40u;
}
