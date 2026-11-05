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

// Function: sub_00117F48
// Address: 0x117f48 - 0x117fa8
void sub_00117F48_0x117f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117F48_0x117f48");
#endif

    ctx->pc = 0x117f48u;

    // 0x117f48: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x117f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x117f4c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x117f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x117f50: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x117F50u;
    {
        const bool branch_taken_0x117f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x117F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F50u;
        // 0x117f54: 0x28620013  slti        $v0, $v1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f50) {
            ctx->pc = 0x117F90u;
            goto label_117f90;
        }
    }
    ctx->pc = 0x117F58u;
    // 0x117f58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117F58u;
    {
        const bool branch_taken_0x117f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F58u;
        // 0x117f5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f58) {
            ctx->pc = 0x117F70u;
            goto label_117f70;
        }
    }
    ctx->pc = 0x117F60u;
    // 0x117f60: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117F60u;
    {
        const bool branch_taken_0x117f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x117F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F60u;
        // 0x117f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f60) {
            ctx->pc = 0x117F84u;
            goto label_117f84;
        }
    }
    ctx->pc = 0x117F68u;
    // 0x117f68: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x117F68u;
    {
        const bool branch_taken_0x117f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117f68) {
            ctx->pc = 0x117F9Cu;
            goto label_117f9c;
        }
    }
    ctx->pc = 0x117F70u;
label_117f70:
    // 0x117f70: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x117f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x117f74: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117F74u;
    {
        const bool branch_taken_0x117f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x117F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F74u;
        // 0x117f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f74) {
            ctx->pc = 0x117F90u;
            goto label_117f90;
        }
    }
    ctx->pc = 0x117F7Cu;
    // 0x117f7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x117F7Cu;
    {
        const bool branch_taken_0x117f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117f7c) {
            ctx->pc = 0x117F9Cu;
            goto label_117f9c;
        }
    }
    ctx->pc = 0x117F84u;
label_117f84:
    // 0x117f84: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x117f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x117f88: 0x3e00008  jr          $ra
    ctx->pc = 0x117F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F88u;
        // 0x117f8c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117F90u;
label_117f90:
    // 0x117f90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x117f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x117f94: 0x3e00008  jr          $ra
    ctx->pc = 0x117F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F94u;
        // 0x117f98: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117F9Cu;
label_117f9c:
    // 0x117f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x117F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117FA4u;
    // 0x117fa4: 0x0  nop
    ctx->pc = 0x117fa4u;
    // NOP
    ctx->pc = 0x117fa8u;
}
