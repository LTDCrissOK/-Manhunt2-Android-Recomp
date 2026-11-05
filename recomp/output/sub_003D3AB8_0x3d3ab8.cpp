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

// Function: sub_003D3AB8
// Address: 0x3d3ab8 - 0x3d3b58
void sub_003D3AB8_0x3d3ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3AB8_0x3d3ab8");
#endif

    ctx->pc = 0x3d3ab8u;

    // 0x3d3ab8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x3d3ab8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d3abc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d3abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d3ac0: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x3d3ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x3d3ac4: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x3d3ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x3d3ac8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x3d3ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3d3acc: 0x2153e  dsrl32      $v0, $v0, 20
    ctx->pc = 0x3d3accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x3d3ad0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x3d3ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x3d3ad4: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x3d3ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x3d3ad8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3AD8u;
    {
        const bool branch_taken_0x3d3ad8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AD8u;
        // 0x3d3adc: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ad8) {
            ctx->pc = 0x3D3AF0u;
            goto label_3d3af0;
        }
    }
    ctx->pc = 0x3D3AE0u;
    // 0x3d3ae0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d3ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AE4u;
        // 0x3d3ae8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3AECu;
    // 0x3d3aec: 0x0  nop
    ctx->pc = 0x3d3aecu;
    // NOP
label_3d3af0:
    // 0x3d3af0: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3D3AF0u;
    {
        const bool branch_taken_0x3d3af0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d3af0) {
            ctx->pc = 0x3D3AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3AF0u;
            // 0x3d3af4: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3B30u;
            goto label_3d3b30;
        }
    }
    ctx->pc = 0x3D3AF8u;
    // 0x3d3af8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3AF8u;
    {
        const bool branch_taken_0x3d3af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AF8u;
        // 0x3d3afc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3af8) {
            ctx->pc = 0x3D3B08u;
            goto label_3d3b08;
        }
    }
    ctx->pc = 0x3D3B00u;
    // 0x3d3b00: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B00u;
        // 0x3d3b04: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3B08u;
label_3d3b08:
    // 0x3d3b08: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3d3b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3d3b0c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x3d3b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x3d3b10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d3b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3d3b14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3B14u;
    {
        const bool branch_taken_0x3d3b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B14u;
        // 0x3d3b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3b14) {
            ctx->pc = 0x3D3B24u;
            goto label_3d3b24;
        }
    }
    ctx->pc = 0x3D3B1Cu;
    // 0x3d3b1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D3B1Cu;
    {
        const bool branch_taken_0x3d3b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B1Cu;
        // 0x3d3b20: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3b1c) {
            ctx->pc = 0x3D3B28u;
            goto label_3d3b28;
        }
    }
    ctx->pc = 0x3D3B24u;
label_3d3b24:
    // 0x3d3b24: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3d3b24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_3d3b28:
    // 0x3d3b28: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B28u;
        // 0x3d3b2c: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3B30u;
label_3d3b30:
    // 0x3d3b30: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3d3b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3d3b34: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x3d3b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x3d3b38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d3b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d3b3c: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x3d3b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x3d3b40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d3b44: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x3d3b44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x3d3b48: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x3d3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x3d3b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B4Cu;
        // 0x3d3b50: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3B54u;
    // 0x3d3b54: 0x0  nop
    ctx->pc = 0x3d3b54u;
    // NOP
    ctx->pc = 0x3d3b58u;
}
