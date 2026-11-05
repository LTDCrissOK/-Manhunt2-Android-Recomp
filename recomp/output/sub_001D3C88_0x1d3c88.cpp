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

// Function: sub_001D3C88
// Address: 0x1d3c88 - 0x1d3d28
void sub_001D3C88_0x1d3c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3C88_0x1d3c88");
#endif

    switch (ctx->pc) {
        case 0x1d3cb0u: goto label_1d3cb0;
        default: break;
    }

    ctx->pc = 0x1d3c88u;

    // 0x1d3c88: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d3c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3c8c: 0x41f42  srl         $v1, $a0, 29
    ctx->pc = 0x1d3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 29));
    // 0x1d3c90: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1d3c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d3c94: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D3C94u;
    {
        const bool branch_taken_0x1d3c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C94u;
        // 0x1d3c98: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c94) {
            ctx->pc = 0x1D3CF8u;
            goto label_1d3cf8;
        }
    }
    ctx->pc = 0x1D3C9Cu;
    // 0x1d3c9c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D3C9Cu;
    {
        const bool branch_taken_0x1d3c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C9Cu;
        // 0x1d3ca0: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c9c) {
            ctx->pc = 0x1D3CD8u;
            goto label_1d3cd8;
        }
    }
    ctx->pc = 0x1D3CA4u;
    // 0x1d3ca4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3CA4u;
    {
        const bool branch_taken_0x1d3ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CA4u;
        // 0x1d3ca8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ca4) {
            ctx->pc = 0x1D3CC4u;
            goto label_1d3cc4;
        }
    }
    ctx->pc = 0x1D3CACu;
    // 0x1d3cac: 0x41382  srl         $v0, $a0, 14
    ctx->pc = 0x1d3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 14));
label_1d3cb0:
    // 0x1d3cb0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1d3cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1d3cb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d3cb8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d3cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d3cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CBCu;
        // 0x1d3cc0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3CC4u;
label_1d3cc4:
    // 0x1d3cc4: 0x41382  srl         $v0, $a0, 14
    ctx->pc = 0x1d3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 14));
    // 0x1d3cc8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1d3cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1d3ccc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d3cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CD0u;
        // 0x1d3cd4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3CD8u;
label_1d3cd8:
    // 0x1d3cd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3CD8u;
    {
        const bool branch_taken_0x1d3cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CD8u;
        // 0x1d3cdc: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cd8) {
            ctx->pc = 0x1D3CE8u;
            goto label_1d3ce8;
        }
    }
    ctx->pc = 0x1D3CE0u;
    // 0x1d3ce0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D3CE0u;
    {
        const bool branch_taken_0x1d3ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CE0u;
        // 0x1d3ce4: 0x41382  srl         $v0, $a0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ce0) {
            ctx->pc = 0x1D3CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3cb0;
        }
    }
    ctx->pc = 0x1D3CE8u;
label_1d3ce8:
    // 0x1d3ce8: 0x41382  srl         $v0, $a0, 14
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 14));
    // 0x1d3cec: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1d3cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1d3cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CF0u;
        // 0x1d3cf4: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3CF8u;
label_1d3cf8:
    // 0x1d3cf8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d3cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d3cfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3CFCu;
    {
        const bool branch_taken_0x1d3cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CFCu;
        // 0x1d3d00: 0x41382  srl         $v0, $a0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cfc) {
            ctx->pc = 0x1D3D14u;
            goto label_1d3d14;
        }
    }
    ctx->pc = 0x1D3D04u;
    // 0x1d3d04: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1d3d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1d3d08: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d3d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D0Cu;
        // 0x1d3d10: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3D14u;
label_1d3d14:
    // 0x1d3d14: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d3d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3d18: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1d3d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1d3d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D1Cu;
        // 0x1d3d20: 0x431018  mult        $v0, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3D24u;
    // 0x1d3d24: 0x0  nop
    ctx->pc = 0x1d3d24u;
    // NOP
    ctx->pc = 0x1d3d28u;
}
