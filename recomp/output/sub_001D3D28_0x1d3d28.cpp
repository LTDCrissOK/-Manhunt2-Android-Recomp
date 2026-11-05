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

// Function: sub_001D3D28
// Address: 0x1d3d28 - 0x1d3db0
void sub_001D3D28_0x1d3d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3D28_0x1d3d28");
#endif

    ctx->pc = 0x1d3d28u;

    // 0x1d3d28: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3D28u;
    {
        const bool branch_taken_0x1d3d28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3d28) {
            ctx->pc = 0x1D3D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3D28u;
            // 0x1d3d2c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3D38u;
            goto label_1d3d38;
        }
    }
    ctx->pc = 0x1D3D30u;
    // 0x1d3d30: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D3D30u;
    {
        const bool branch_taken_0x1d3d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D30u;
        // 0x1d3d34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d30) {
            ctx->pc = 0x1D3DA0u;
            goto label_1d3da0;
        }
    }
    ctx->pc = 0x1D3D38u;
label_1d3d38:
    // 0x1d3d38: 0x23742  srl         $a2, $v0, 29
    ctx->pc = 0x1d3d38u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
    // 0x1d3d3c: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x1d3d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1d3d40: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D3D40u;
    {
        const bool branch_taken_0x1d3d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D40u;
        // 0x1d3d44: 0x30c20002  andi        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d40) {
            ctx->pc = 0x1D3D88u;
            goto label_1d3d88;
        }
    }
    ctx->pc = 0x1D3D48u;
    // 0x1d3d48: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3D48u;
    {
        const bool branch_taken_0x1d3d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D48u;
        // 0x1d3d4c: 0x30c20004  andi        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d48) {
            ctx->pc = 0x1D3D74u;
            goto label_1d3d74;
        }
    }
    ctx->pc = 0x1D3D50u;
    // 0x1d3d50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3D50u;
    {
        const bool branch_taken_0x1d3d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D50u;
        // 0x1d3d54: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d50) {
            ctx->pc = 0x1D3D60u;
            goto label_1d3d60;
        }
    }
    ctx->pc = 0x1D3D58u;
    // 0x1d3d58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3D58u;
    {
        const bool branch_taken_0x1d3d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D58u;
        // 0x1d3d5c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d58) {
            ctx->pc = 0x1D3D68u;
            goto label_1d3d68;
        }
    }
    ctx->pc = 0x1D3D60u;
label_1d3d60:
    // 0x1d3d60: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1d3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d3d64: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1d3d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d3d68:
    // 0x1d3d68: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d3d68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d3d6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D3D6Cu;
    {
        const bool branch_taken_0x1d3d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D6Cu;
        // 0x1d3d70: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d6c) {
            ctx->pc = 0x1D3DA0u;
            goto label_1d3da0;
        }
    }
    ctx->pc = 0x1D3D74u;
label_1d3d74:
    // 0x1d3d74: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3D74u;
    {
        const bool branch_taken_0x1d3d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3d74) {
            ctx->pc = 0x1D3D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3D74u;
            // 0x1d3d78: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3DA0u;
            goto label_1d3da0;
        }
    }
    ctx->pc = 0x1D3D7Cu;
    // 0x1d3d7c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1d3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d3d80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3D80u;
    {
        const bool branch_taken_0x1d3d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D80u;
        // 0x1d3d84: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d80) {
            ctx->pc = 0x1D3DA0u;
            goto label_1d3da0;
        }
    }
    ctx->pc = 0x1D3D88u;
label_1d3d88:
    // 0x1d3d88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3D88u;
    {
        const bool branch_taken_0x1d3d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3d88) {
            ctx->pc = 0x1D3D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3D88u;
            // 0x1d3d8c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3D9Cu;
            goto label_1d3d9c;
        }
    }
    ctx->pc = 0x1D3D90u;
    // 0x1d3d90: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1d3d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d3d94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3D94u;
    {
        const bool branch_taken_0x1d3d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D94u;
        // 0x1d3d98: 0x34450002  ori         $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d94) {
            ctx->pc = 0x1D3DA0u;
            goto label_1d3da0;
        }
    }
    ctx->pc = 0x1D3D9Cu;
label_1d3d9c:
    // 0x1d3d9c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1d3d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1d3da0:
    // 0x1d3da0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d3da4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DA4u;
        // 0x1d3da8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DACu;
    // 0x1d3dac: 0x0  nop
    ctx->pc = 0x1d3dacu;
    // NOP
    ctx->pc = 0x1d3db0u;
}
