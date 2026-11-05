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

// Function: sub_00287AF8
// Address: 0x287af8 - 0x287c38
void sub_00287AF8_0x287af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287AF8_0x287af8");
#endif

    switch (ctx->pc) {
        case 0x287b08u: goto label_287b08;
        case 0x287b18u: goto label_287b18;
        case 0x287b28u: goto label_287b28;
        case 0x287bc0u: goto label_287bc0;
        case 0x287be8u: goto label_287be8;
        case 0x287c24u: goto label_287c24;
        default: break;
    }

    ctx->pc = 0x287af8u;

    // 0x287af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x287af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x287afc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x287afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x287b00: 0xc0a203e  jal         func_2880F8
    ctx->pc = 0x287B00u;
    SET_GPR_U32(ctx, 31, 0x287B08u);
    ctx->pc = 0x287B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B00u;
    // 0x287b04: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2880F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2880F8u, 0x287B00u, 0x287B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B08u;
label_287b08:
    // 0x287b08: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x287B08u;
    {
        const bool branch_taken_0x287b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B08u;
        // 0x287b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b08) {
            ctx->pc = 0x287C28u;
            goto label_287c28;
        }
    }
    ctx->pc = 0x287B10u;
    // 0x287b10: 0xc0a1faa  jal         func_287EA8
    ctx->pc = 0x287B10u;
    SET_GPR_U32(ctx, 31, 0x287B18u);
    ctx->pc = 0x287EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287EA8u, 0x287B10u, 0x287B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B18u;
label_287b18:
    // 0x287b18: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x287B18u;
    {
        const bool branch_taken_0x287b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B18u;
        // 0x287b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b18) {
            ctx->pc = 0x287C28u;
            goto label_287c28;
        }
    }
    ctx->pc = 0x287B20u;
    // 0x287b20: 0xc0a1dc8  jal         func_287720
    ctx->pc = 0x287B20u;
    SET_GPR_U32(ctx, 31, 0x287B28u);
    ctx->pc = 0x287720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287720u, 0x287B20u, 0x287B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B28u;
label_287b28:
    // 0x287b28: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x287B28u;
    {
        const bool branch_taken_0x287b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B28u;
        // 0x287b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b28) {
            ctx->pc = 0x287B34u;
            goto label_287b34;
        }
    }
    ctx->pc = 0x287B30u;
    // 0x287b30: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x287b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_287b34:
    // 0x287b34: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x287b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x287b38: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x287b38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x287b3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287B3Cu;
    {
        const bool branch_taken_0x287b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B3Cu;
        // 0x287b40: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b3c) {
            ctx->pc = 0x287B5Cu;
            goto label_287b5c;
        }
    }
    ctx->pc = 0x287B44u;
    // 0x287b44: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x287b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x287b48: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287b4c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2468u));
    // 0x287b50: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x287b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x287b54: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287B54u;
    {
        const bool branch_taken_0x287b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287b54) {
            ctx->pc = 0x287B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287B54u;
            // 0x287b58: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287B64u;
            goto label_287b64;
        }
    }
    ctx->pc = 0x287B5Cu;
label_287b5c:
    // 0x287b5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287B5Cu;
    {
        const bool branch_taken_0x287b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B5Cu;
        // 0x287b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b5c) {
            ctx->pc = 0x287B68u;
            goto label_287b68;
        }
    }
    ctx->pc = 0x287B64u;
label_287b64:
    // 0x287b64: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x287b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_287b68:
    // 0x287b68: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x287B68u;
    {
        const bool branch_taken_0x287b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B68u;
        // 0x287b6c: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b68) {
            ctx->pc = 0x287BA8u;
            goto label_287ba8;
        }
    }
    ctx->pc = 0x287B70u;
    // 0x287b70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287B70u;
    {
        const bool branch_taken_0x287b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B70u;
        // 0x287b74: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b70) {
            ctx->pc = 0x287B8Cu;
            goto label_287b8c;
        }
    }
    ctx->pc = 0x287B78u;
    // 0x287b78: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287b7c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x287b80: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x287b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x287b84: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287B84u;
    {
        const bool branch_taken_0x287b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287b84) {
            ctx->pc = 0x287B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287B84u;
            // 0x287b88: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287B94u;
            goto label_287b94;
        }
    }
    ctx->pc = 0x287B8Cu;
label_287b8c:
    // 0x287b8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287B8Cu;
    {
        const bool branch_taken_0x287b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B8Cu;
        // 0x287b90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b8c) {
            ctx->pc = 0x287B98u;
            goto label_287b98;
        }
    }
    ctx->pc = 0x287B94u;
label_287b94:
    // 0x287b94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x287b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_287b98:
    // 0x287b98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287B98u;
    {
        const bool branch_taken_0x287b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B98u;
        // 0x287b9c: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b98) {
            ctx->pc = 0x287BACu;
            goto label_287bac;
        }
    }
    ctx->pc = 0x287BA0u;
    // 0x287ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287ba4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x287ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_287ba8:
    // 0x287ba8: 0x8c82aa88  lw          $v0, -0x5578($a0)
    ctx->pc = 0x287ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
label_287bac:
    // 0x287bac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287BACu;
    {
        const bool branch_taken_0x287bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BACu;
        // 0x287bb0: 0x240903fc  addiu       $t1, $zero, 0x3FC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bac) {
            ctx->pc = 0x287BC8u;
            goto label_287bc8;
        }
    }
    ctx->pc = 0x287BB4u;
    // 0x287bb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287bb8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x287BB8u;
    {
        const bool branch_taken_0x287bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BB8u;
        // 0x287bbc: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bb8) {
            ctx->pc = 0x287C0Cu;
            goto label_287c0c;
        }
    }
    ctx->pc = 0x287BC0u;
label_287bc0:
    // 0x287bc0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x287BC0u;
    {
        const bool branch_taken_0x287bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BC0u;
        // 0x287bc4: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bc0) {
            ctx->pc = 0x287C0Cu;
            goto label_287c0c;
        }
    }
    ctx->pc = 0x287BC8u;
label_287bc8:
    // 0x287bc8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x287bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x287bcc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x287bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x287bd0: 0x24482480  addiu       $t0, $v0, 0x2480
    ctx->pc = 0x287bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x287bd4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x287bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x287bd8: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x287bd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287bdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x287bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287be0: 0x24660078  addiu       $a2, $v1, 0x78
    ctx->pc = 0x287be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x287be4: 0x0  nop
    ctx->pc = 0x287be4u;
    // NOP
label_287be8:
    // 0x287be8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x287be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x287bec: 0x5049fff4  beql        $v0, $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x287BECu;
    {
        const bool branch_taken_0x287bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x287bec) {
            ctx->pc = 0x287BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287BECu;
            // 0x287bf0: 0x1041021  addu        $v0, $t0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287bc0;
        }
    }
    ctx->pc = 0x287BF4u;
    // 0x287bf4: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x287BF4u;
    {
        const bool branch_taken_0x287bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x287BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BF4u;
        // 0x287bf8: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bf4) {
            ctx->pc = 0x287C08u;
            goto label_287c08;
        }
    }
    ctx->pc = 0x287BFCu;
    // 0x287bfc: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x287bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x287c00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x287C00u;
    {
        const bool branch_taken_0x287c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C00u;
        // 0x287c04: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c00) {
            ctx->pc = 0x287BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287be8;
        }
    }
    ctx->pc = 0x287C08u;
label_287c08:
    // 0x287c08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287c0c:
    // 0x287c0c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x287C0Cu;
    {
        const bool branch_taken_0x287c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C0Cu;
        // 0x287c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c0c) {
            ctx->pc = 0x287C18u;
            goto label_287c18;
        }
    }
    ctx->pc = 0x287C14u;
    // 0x287c14: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x287c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_287c18:
    // 0x287c18: 0x24a5a4d4  addiu       $a1, $a1, -0x5B2C
    ctx->pc = 0x287c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943956));
    // 0x287c1c: 0xc0a1f2a  jal         func_287CA8
    ctx->pc = 0x287C1Cu;
    SET_GPR_U32(ctx, 31, 0x287C24u);
    ctx->pc = 0x287C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C1Cu;
    // 0x287c20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287CA8u, 0x287C1Cu, 0x287C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C24u;
label_287c24:
    // 0x287c24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x287c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_287c28:
    // 0x287c28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x287c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x287C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C2Cu;
        // 0x287c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287C34u;
    // 0x287c34: 0x0  nop
    ctx->pc = 0x287c34u;
    // NOP
    ctx->pc = 0x287c38u;
}
