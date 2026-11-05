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

// Function: sub_00314A90
// Address: 0x314a90 - 0x314d50
void sub_00314A90_0x314a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314A90_0x314a90");
#endif

    switch (ctx->pc) {
        case 0x314ae0u: goto label_314ae0;
        case 0x314b10u: goto label_314b10;
        case 0x314b40u: goto label_314b40;
        case 0x314b68u: goto label_314b68;
        case 0x314c04u: goto label_314c04;
        case 0x314c28u: goto label_314c28;
        case 0x314c88u: goto label_314c88;
        case 0x314cc8u: goto label_314cc8;
        case 0x314cf0u: goto label_314cf0;
        default: break;
    }

    ctx->pc = 0x314a90u;

    // 0x314a90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x314a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x314a94: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x314a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x314a98: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x314a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x314a9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x314a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314aa0: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x314aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x314aa4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x314aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x314aa8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x314aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x314aac: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x314aacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ab0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x314ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x314ab4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x314ab4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ab8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x314ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x314abc: 0x3c10005b  lui         $s0, 0x5B
    ctx->pc = 0x314abcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
    // 0x314ac0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x314ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x314ac4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x314ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ac8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x314ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x314acc: 0x26102190  addiu       $s0, $s0, 0x2190
    ctx->pc = 0x314accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8592));
    // 0x314ad0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x314ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x314ad4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x314ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x314ad8: 0xc0c514c  jal         func_314530
    ctx->pc = 0x314AD8u;
    SET_GPR_U32(ctx, 31, 0x314AE0u);
    ctx->pc = 0x314ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314AD8u;
    // 0x314adc: 0xafb10020  sw          $s1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314530u, 0x314AD8u, 0x314AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314AE0u;
label_314ae0:
    // 0x314ae0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x314AE0u;
    {
        const bool branch_taken_0x314ae0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x314ae0) {
            ctx->pc = 0x314AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314AE0u;
            // 0x314ae4: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314AE8u;
            goto label_314ae8;
        }
    }
    ctx->pc = 0x314AE8u;
label_314ae8:
    // 0x314ae8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x314ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x314aec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x314aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x314af0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x314af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x314af4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x314af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x314af8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x314af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x314afc: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x314AFCu;
    {
        const bool branch_taken_0x314afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x314B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AFCu;
        // 0x314b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314afc) {
            ctx->pc = 0x314B2Cu;
            goto label_314b2c;
        }
    }
    ctx->pc = 0x314B04u;
    // 0x314b04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x314b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314b08: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x314b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x314b0c: 0x0  nop
    ctx->pc = 0x314b0cu;
    // NOP
label_314b10:
    // 0x314b10: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x314B10u;
    {
        const bool branch_taken_0x314b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x314B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B10u;
        // 0x314b14: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b10) {
            ctx->pc = 0x314B2Cu;
            goto label_314b2c;
        }
    }
    ctx->pc = 0x314B18u;
    // 0x314b18: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x314b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x314b1c: 0x0  nop
    ctx->pc = 0x314b1cu;
    // NOP
    // 0x314b20: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x314B20u;
    {
        const bool branch_taken_0x314b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x314b20) {
            ctx->pc = 0x314B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314B20u;
            // 0x314b24: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314b10;
        }
    }
    ctx->pc = 0x314B28u;
    // 0x314b28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314b2c:
    // 0x314b2c: 0x54400075  bnel        $v0, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x314B2Cu;
    {
        const bool branch_taken_0x314b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314b2c) {
            ctx->pc = 0x314B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314B2Cu;
            // 0x314b30: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D04u;
            goto label_314d04;
        }
    }
    ctx->pc = 0x314B34u;
    // 0x314b34: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x314b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x314b38: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x314B38u;
    SET_GPR_U32(ctx, 31, 0x314B40u);
    ctx->pc = 0x314B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B38u;
    // 0x314b3c: 0x26502190  addiu       $s0, $s2, 0x2190 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x314B38u, 0x314B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B40u;
label_314b40:
    // 0x314b40: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x314b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x314b44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x314b44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314b48: 0x24634440  addiu       $v1, $v1, 0x4440
    ctx->pc = 0x314b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17472));
    // 0x314b4c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x314b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x314b50: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x314b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x314b54: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x314b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x314b58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x314b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x314b5c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x314b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x314b60: 0xc0c514c  jal         func_314530
    ctx->pc = 0x314B60u;
    SET_GPR_U32(ctx, 31, 0x314B68u);
    ctx->pc = 0x314B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B60u;
    // 0x314b64: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314530u, 0x314B60u, 0x314B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B68u;
label_314b68:
    // 0x314b68: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x314b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314b6c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x314B6Cu;
    {
        const bool branch_taken_0x314b6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x314b6c) {
            ctx->pc = 0x314B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314B6Cu;
            // 0x314b70: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314B74u;
            goto label_314b74;
        }
    }
    ctx->pc = 0x314B74u;
label_314b74:
    // 0x314b74: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x314b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x314b78: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x314b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x314b7c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x314b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x314b80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x314b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x314b84: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x314b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x314b88: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x314b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x314b8c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x314b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x314b90: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x314b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x314b94: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x314B94u;
    {
        const bool branch_taken_0x314b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x314B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B94u;
        // 0x314b98: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b94) {
            ctx->pc = 0x314BC0u;
            goto label_314bc0;
        }
    }
    ctx->pc = 0x314B9Cu;
    // 0x314b9c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x314B9Cu;
    {
        const bool branch_taken_0x314b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x314b9c) {
            ctx->pc = 0x314BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314B9Cu;
            // 0x314ba0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314BB4u;
            goto label_314bb4;
        }
    }
    ctx->pc = 0x314BA4u;
    // 0x314ba4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x314ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x314ba8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x314ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x314bac: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x314bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x314bb0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x314bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_314bb4:
    // 0x314bb4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x314bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x314bb8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x314BB8u;
    {
        const bool branch_taken_0x314bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BB8u;
        // 0x314bbc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314bb8) {
            ctx->pc = 0x314D14u;
            goto label_314d14;
        }
    }
    ctx->pc = 0x314BC0u;
label_314bc0:
    // 0x314bc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x314bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x314bc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x314bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314bcc: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x314bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x314bd0: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x314bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x314bd4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x314bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x314bd8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x314bd8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x314bdc: 0x27a2002c  addiu       $v0, $sp, 0x2C
    ctx->pc = 0x314bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x314be0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x314be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x314be4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x314be4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x314be8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x314be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x314bec: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x314becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x314bf0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x314BF0u;
    {
        const bool branch_taken_0x314bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BF0u;
        // 0x314bf4: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314bf0) {
            ctx->pc = 0x314C0Cu;
            goto label_314c0c;
        }
    }
    ctx->pc = 0x314BF8u;
    // 0x314bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x314bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314bfc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x314BFCu;
    SET_GPR_U32(ctx, 31, 0x314C04u);
    ctx->pc = 0x314C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314BFCu;
    // 0x314c00: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x314BFCu, 0x314C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314C04u;
label_314c04:
    // 0x314c04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x314C04u;
    {
        const bool branch_taken_0x314c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C04u;
        // 0x314c08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c04) {
            ctx->pc = 0x314C18u;
            goto label_314c18;
        }
    }
    ctx->pc = 0x314C0Cu;
label_314c0c:
    // 0x314c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314c10: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x314c10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314c18:
    // 0x314c18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x314c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x314c1c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x314c1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314c20: 0x1093000a  beq         $a0, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x314C20u;
    {
        const bool branch_taken_0x314c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x314C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C20u;
        // 0x314c24: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c20) {
            ctx->pc = 0x314C4Cu;
            goto label_314c4c;
        }
    }
    ctx->pc = 0x314C28u;
label_314c28:
    // 0x314c28: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x314C28u;
    {
        const bool branch_taken_0x314c28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x314c28) {
            ctx->pc = 0x314C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314C28u;
            // 0x314c2c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314C44u;
            goto label_314c44;
        }
    }
    ctx->pc = 0x314C30u;
    // 0x314c30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x314c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x314c34: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x314c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x314c38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x314c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x314c3c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x314c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x314c40: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x314c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_314c44:
    // 0x314c44: 0x1493fff8  bne         $a0, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x314C44u;
    {
        const bool branch_taken_0x314c44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x314C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C44u;
        // 0x314c48: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c44) {
            ctx->pc = 0x314C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314c28;
        }
    }
    ctx->pc = 0x314C4Cu;
label_314c4c:
    // 0x314c4c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x314c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x314c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314c54: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x314C54u;
    {
        const bool branch_taken_0x314c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x314C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C54u;
        // 0x314c58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c54) {
            ctx->pc = 0x314C7Cu;
            goto label_314c7c;
        }
    }
    ctx->pc = 0x314C5Cu;
    // 0x314c5c: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x314C5Cu;
    {
        const bool branch_taken_0x314c5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x314c5c) {
            ctx->pc = 0x314C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314C5Cu;
            // 0x314c60: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314CB0u;
            goto label_314cb0;
        }
    }
    ctx->pc = 0x314C64u;
    // 0x314c64: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x314c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x314c68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x314c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x314c6c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x314c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x314c70: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x314c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x314c74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x314C74u;
    {
        const bool branch_taken_0x314c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C74u;
        // 0x314c78: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c74) {
            ctx->pc = 0x314CB0u;
            goto label_314cb0;
        }
    }
    ctx->pc = 0x314C7Cu;
label_314c7c:
    // 0x314c7c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x314c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314c80: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x314C80u;
    {
        const bool branch_taken_0x314c80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C80u;
        // 0x314c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c80) {
            ctx->pc = 0x314CA8u;
            goto label_314ca8;
        }
    }
    ctx->pc = 0x314C88u;
label_314c88:
    // 0x314c88: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x314C88u;
    {
        const bool branch_taken_0x314c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C88u;
        // 0x314c8c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c88) {
            ctx->pc = 0x314CA0u;
            goto label_314ca0;
        }
    }
    ctx->pc = 0x314C90u;
    // 0x314c90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x314c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x314c94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x314c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x314c98: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x314c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x314c9c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x314c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_314ca0:
    // 0x314ca0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x314CA0u;
    {
        const bool branch_taken_0x314ca0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x314CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CA0u;
        // 0x314ca4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ca0) {
            ctx->pc = 0x314C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314c88;
        }
    }
    ctx->pc = 0x314CA8u;
label_314ca8:
    // 0x314ca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x314ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314cac: 0x0  nop
    ctx->pc = 0x314cacu;
    // NOP
label_314cb0:
    // 0x314cb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x314cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x314cb4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x314cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x314cb8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x314CB8u;
    {
        const bool branch_taken_0x314cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x314CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CB8u;
        // 0x314cbc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314cb8) {
            ctx->pc = 0x314CE0u;
            goto label_314ce0;
        }
    }
    ctx->pc = 0x314CC0u;
    // 0x314cc0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x314cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x314cc4: 0x0  nop
    ctx->pc = 0x314cc4u;
    // NOP
label_314cc8:
    // 0x314cc8: 0x0  nop
    ctx->pc = 0x314cc8u;
    // NOP
    // 0x314ccc: 0x0  nop
    ctx->pc = 0x314cccu;
    // NOP
    // 0x314cd0: 0x0  nop
    ctx->pc = 0x314cd0u;
    // NOP
    // 0x314cd4: 0x0  nop
    ctx->pc = 0x314cd4u;
    // NOP
    // 0x314cd8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x314CD8u;
    {
        const bool branch_taken_0x314cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x314CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CD8u;
        // 0x314cdc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314cd8) {
            ctx->pc = 0x314CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314cc8;
        }
    }
    ctx->pc = 0x314CE0u;
label_314ce0:
    // 0x314ce0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x314CE0u;
    {
        const bool branch_taken_0x314ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CE0u;
        // 0x314ce4: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ce0) {
            ctx->pc = 0x314CF4u;
            goto label_314cf4;
        }
    }
    ctx->pc = 0x314CE8u;
    // 0x314ce8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x314CE8u;
    SET_GPR_U32(ctx, 31, 0x314CF0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x314CE8u, 0x314CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314CF0u;
label_314cf0:
    // 0x314cf0: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x314cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_314cf4:
    // 0x314cf4: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x314cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x314cf8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x314cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x314cfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x314CFCu;
    {
        const bool branch_taken_0x314cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CFCu;
        // 0x314d00: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314cfc) {
            ctx->pc = 0x314D14u;
            goto label_314d14;
        }
    }
    ctx->pc = 0x314D04u;
label_314d04:
    // 0x314d04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x314d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x314d08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x314D08u;
    {
        const bool branch_taken_0x314d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D08u;
        // 0x314d0c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d08) {
            ctx->pc = 0x314D20u;
            goto label_314d20;
        }
    }
    ctx->pc = 0x314D10u;
    // 0x314d10: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x314d10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_314d14:
    // 0x314d14: 0xaeb70010  sw          $s7, 0x10($s5)
    ctx->pc = 0x314d14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 23));
    // 0x314d18: 0xaebe000c  sw          $fp, 0xC($s5)
    ctx->pc = 0x314d18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 30));
    // 0x314d1c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x314d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_314d20:
    // 0x314d20: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x314d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x314d24: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x314d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314d28: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x314d28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x314d2c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x314d2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314d30: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x314d30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x314d34: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x314d34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314d38: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x314d38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x314d3c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x314d3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x314d40: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x314d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x314d44: 0x3e00008  jr          $ra
    ctx->pc = 0x314D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D44u;
        // 0x314d48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314D4Cu;
    // 0x314d4c: 0x0  nop
    ctx->pc = 0x314d4cu;
    // NOP
    ctx->pc = 0x314d50u;
}
