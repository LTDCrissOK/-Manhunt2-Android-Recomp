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

// Function: sub_003D3B58
// Address: 0x3d3b58 - 0x3d3d98
void sub_003D3B58_0x3d3b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3B58_0x3d3b58");
#endif

    switch (ctx->pc) {
        case 0x3d3b6cu: goto label_3d3b6c;
        case 0x3d3b80u: goto label_3d3b80;
        case 0x3d3c38u: goto label_3d3c38;
        case 0x3d3c70u: goto label_3d3c70;
        case 0x3d3d20u: goto label_3d3d20;
        default: break;
    }

    ctx->pc = 0x3d3b58u;

    // 0x3d3b58: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3d3b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3b5c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3d3b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3d3b60: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x3d3b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d3b64: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3B64u;
    {
        const bool branch_taken_0x3d3b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3b64) {
            ctx->pc = 0x3D3B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3B64u;
            // 0x3d3b68: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3B74u;
            goto label_3d3b74;
        }
    }
    ctx->pc = 0x3D3B6Cu;
label_3d3b6c:
    // 0x3d3b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B6Cu;
        // 0x3d3b70: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3B74u;
label_3d3b74:
    // 0x3d3b74: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x3d3b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d3b78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3B78u;
    {
        const bool branch_taken_0x3d3b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B78u;
        // 0x3d3b7c: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3b78) {
            ctx->pc = 0x3D3B88u;
            goto label_3d3b88;
        }
    }
    ctx->pc = 0x3D3B80u;
label_3d3b80:
    // 0x3d3b80: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B80u;
        // 0x3d3b84: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3B88u;
label_3d3b88:
    // 0x3d3b88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D3B88u;
    {
        const bool branch_taken_0x3d3b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B88u;
        // 0x3d3b8c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3b88) {
            ctx->pc = 0x3D3BB0u;
            goto label_3d3bb0;
        }
    }
    ctx->pc = 0x3D3B90u;
    // 0x3d3b90: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D3B90u;
    {
        const bool branch_taken_0x3d3b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3b90) {
            ctx->pc = 0x3D3B6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3b6c;
        }
    }
    ctx->pc = 0x3D3B98u;
    // 0x3d3b98: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3d3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d3b9c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3d3b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3d3ba0: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3D3BA0u;
    {
        const bool branch_taken_0x3d3ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BA0u;
        // 0x3d3ba4: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ba0) {
            ctx->pc = 0x3D3B6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3b6c;
        }
    }
    ctx->pc = 0x3D3BA8u;
    // 0x3d3ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BA8u;
        // 0x3d3bac: 0x24428e30  addiu       $v0, $v0, -0x71D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3BB0u;
label_3d3bb0:
    // 0x3d3bb0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3D3BB0u;
    {
        const bool branch_taken_0x3d3bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BB0u;
        // 0x3d3bb4: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3bb0) {
            ctx->pc = 0x3D3B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3b80;
        }
    }
    ctx->pc = 0x3D3BB8u;
    // 0x3d3bb8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D3BB8u;
    {
        const bool branch_taken_0x3d3bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BB8u;
        // 0x3d3bbc: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3bb8) {
            ctx->pc = 0x3D3BF4u;
            goto label_3d3bf4;
        }
    }
    ctx->pc = 0x3D3BC0u;
    // 0x3d3bc0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3D3BC0u;
    {
        const bool branch_taken_0x3d3bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BC0u;
        // 0x3d3bc4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3bc0) {
            ctx->pc = 0x3D3B6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3b6c;
        }
    }
    ctx->pc = 0x3D3BC8u;
    // 0x3d3bc8: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x3d3bc8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3d3bcc: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x3d3bccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x3d3bd0: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x3d3bd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3d3bd4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x3d3bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x3d3bd8: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x3d3bd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3d3bdc: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x3d3bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x3d3be0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3d3be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3d3be4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3d3be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d3be8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3d3be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3d3bec: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BECu;
        // 0x3d3bf0: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3BF4u;
label_3d3bf4:
    // 0x3d3bf4: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3D3BF4u;
    {
        const bool branch_taken_0x3d3bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BF4u;
        // 0x3d3bf8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3bf4) {
            ctx->pc = 0x3D3B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3b80;
        }
    }
    ctx->pc = 0x3D3BFCu;
    // 0x3d3bfc: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x3d3bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3d3c00: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x3d3c00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d3c04: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x3d3c04u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3d3c08: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x3d3c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3d3c0c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3d3c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3d3c10: 0x32023  negu        $a0, $v1
    ctx->pc = 0x3d3c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3d3c14: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x3d3c14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x3d3c18: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x3d3c18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x3d3c1c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3D3C1Cu;
    {
        const bool branch_taken_0x3d3c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C1Cu;
        // 0x3d3c20: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3c1c) {
            ctx->pc = 0x3D3C94u;
            goto label_3d3c94;
        }
    }
    ctx->pc = 0x3D3C24u;
    // 0x3d3c24: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x3d3c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3d3c28: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3D3C28u;
    {
        const bool branch_taken_0x3d3c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C28u;
        // 0x3d3c2c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3c28) {
            ctx->pc = 0x3D3C5Cu;
            goto label_3d3c5c;
        }
    }
    ctx->pc = 0x3D3C30u;
    // 0x3d3c30: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x3d3c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d3c34: 0x0  nop
    ctx->pc = 0x3d3c34u;
    // NOP
label_3d3c38:
    // 0x3d3c38: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x3d3c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x3d3c3c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3d3c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3d3c40: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x3d3c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x3d3c44: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x3d3c44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3d3c48: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3d3c48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d3c4c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D3C4Cu;
    {
        const bool branch_taken_0x3d3c4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3c4c) {
            ctx->pc = 0x3D3C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3c38;
        }
    }
    ctx->pc = 0x3D3C54u;
    // 0x3d3c54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3C54u;
    {
        const bool branch_taken_0x3d3c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C54u;
        // 0x3d3c58: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3c54) {
            ctx->pc = 0x3D3C64u;
            goto label_3d3c64;
        }
    }
    ctx->pc = 0x3D3C5Cu;
label_3d3c5c:
    // 0x3d3c5c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x3d3c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d3c60: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x3d3c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3d3c64:
    // 0x3d3c64: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D3C64u;
    {
        const bool branch_taken_0x3d3c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3c64) {
            ctx->pc = 0x3D3CB8u;
            goto label_3d3cb8;
        }
    }
    ctx->pc = 0x3D3C6Cu;
    // 0x3d3c6c: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x3d3c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_3d3c70:
    // 0x3d3c70: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x3d3c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x3d3c74: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x3d3c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x3d3c78: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x3d3c78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3d3c7c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3d3c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3d3c80: 0x0  nop
    ctx->pc = 0x3d3c80u;
    // NOP
    // 0x3d3c84: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D3C84u;
    {
        const bool branch_taken_0x3d3c84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3c84) {
            ctx->pc = 0x3D3C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3c70;
        }
    }
    ctx->pc = 0x3D3C8Cu;
    // 0x3d3c8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3D3C8Cu;
    {
        const bool branch_taken_0x3d3c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C8Cu;
        // 0x3d3c90: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3c8c) {
            ctx->pc = 0x3D3CB8u;
            goto label_3d3cb8;
        }
    }
    ctx->pc = 0x3D3C94u;
label_3d3c94:
    // 0x3d3c94: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x3d3c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3d3c98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3C98u;
    {
        const bool branch_taken_0x3d3c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C98u;
        // 0x3d3c9c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3c98) {
            ctx->pc = 0x3D3CACu;
            goto label_3d3cac;
        }
    }
    ctx->pc = 0x3D3CA0u;
    // 0x3d3ca0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d3ca0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3ca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3CA4u;
    {
        const bool branch_taken_0x3d3ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CA4u;
        // 0x3d3ca8: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ca4) {
            ctx->pc = 0x3D3CB8u;
            goto label_3d3cb8;
        }
    }
    ctx->pc = 0x3D3CACu;
label_3d3cac:
    // 0x3d3cac: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3d3cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3cb0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x3d3cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d3cb4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d3cb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3cb8:
    // 0x3d3cb8: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3D3CB8u;
    {
        const bool branch_taken_0x3d3cb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x3D3CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CB8u;
        // 0x3d3cbc: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3cb8) {
            ctx->pc = 0x3D3D4Cu;
            goto label_3d3d4c;
        }
    }
    ctx->pc = 0x3D3CC0u;
    // 0x3d3cc0: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D3CC0u;
    {
        const bool branch_taken_0x3d3cc0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CC0u;
        // 0x3d3cc4: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3cc0) {
            ctx->pc = 0x3D3CCCu;
            goto label_3d3ccc;
        }
    }
    ctx->pc = 0x3D3CC8u;
    // 0x3d3cc8: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x3d3cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_3d3ccc:
    // 0x3d3ccc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3CCCu;
    {
        const bool branch_taken_0x3d3ccc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3D3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CCCu;
        // 0x3d3cd0: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ccc) {
            ctx->pc = 0x3D3CE4u;
            goto label_3d3ce4;
        }
    }
    ctx->pc = 0x3D3CD4u;
    // 0x3d3cd4: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x3d3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x3d3cd8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x3d3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x3d3cdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3CDCu;
    {
        const bool branch_taken_0x3d3cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CDCu;
        // 0x3d3ce0: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3cdc) {
            ctx->pc = 0x3D3CF4u;
            goto label_3d3cf4;
        }
    }
    ctx->pc = 0x3D3CE4u;
label_3d3ce4:
    // 0x3d3ce4: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x3d3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x3d3ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3cec: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x3d3cecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x3d3cf0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x3d3cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_3d3cf4:
    // 0x3d3cf4: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x3d3cf4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3d3cf8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d3cfc: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x3d3cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x3d3d00: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x3d3d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x3d3d04: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x3d3d04u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x3d3d08: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3d3d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d3d0c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D3D0Cu;
    {
        const bool branch_taken_0x3d3d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D0Cu;
        // 0x3d3d10: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3d0c) {
            ctx->pc = 0x3D3D5Cu;
            goto label_3d3d5c;
        }
    }
    ctx->pc = 0x3D3D14u;
    // 0x3d3d14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3d3d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d3d18: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x3d3d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x3d3d1c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x3d3d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_3d3d20:
    // 0x3d3d20: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d3d24: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x3d3d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x3d3d28: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x3d3d28u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x3d3d2c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x3d3d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x3d3d30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d3d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d3d34: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x3d3d34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d3d38: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3d3d38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3d3d3c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3D3D3Cu;
    {
        const bool branch_taken_0x3d3d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D3Cu;
        // 0x3d3d40: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3d3c) {
            ctx->pc = 0x3D3D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d3d20;
        }
    }
    ctx->pc = 0x3D3D44u;
    // 0x3d3d44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3D44u;
    {
        const bool branch_taken_0x3d3d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D44u;
        // 0x3d3d48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3d44) {
            ctx->pc = 0x3D3D5Cu;
            goto label_3d3d5c;
        }
    }
    ctx->pc = 0x3D3D4Cu;
label_3d3d4c:
    // 0x3d3d4c: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x3d3d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x3d3d50: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x3d3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x3d3d54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d3d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3d58: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x3d3d58u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_3d3d5c:
    // 0x3d3d5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d3d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d3d60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d3d64: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3d3d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3d3d68: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3d3d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3d3d6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D3D6Cu;
    {
        const bool branch_taken_0x3d3d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D6Cu;
        // 0x3d3d70: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3d6c) {
            ctx->pc = 0x3D3D90u;
            goto label_3d3d90;
        }
    }
    ctx->pc = 0x3D3D74u;
    // 0x3d3d74: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d3d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d3d78: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x3d3d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x3d3d7c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3d3d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3d3d80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d3d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d3d84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d3d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d3d88: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x3d3d88u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x3d3d8c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3d3d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_3d3d90:
    // 0x3d3d90: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D90u;
        // 0x3d3d94: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3D98u;
}
