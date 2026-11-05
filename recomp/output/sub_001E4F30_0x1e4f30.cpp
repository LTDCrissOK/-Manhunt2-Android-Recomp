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

// Function: sub_001E4F30
// Address: 0x1e4f30 - 0x1e4fb0
void sub_001E4F30_0x1e4f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4F30_0x1e4f30");
#endif

    switch (ctx->pc) {
        case 0x1e4f58u: goto label_1e4f58;
        case 0x1e4f74u: goto label_1e4f74;
        case 0x1e4f94u: goto label_1e4f94;
        default: break;
    }

    ctx->pc = 0x1e4f30u;

    // 0x1e4f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4f34: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e4f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e4f38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e4f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e4f3c: 0x8c6291d4  lw          $v0, -0x6E2C($v1)
    ctx->pc = 0x1e4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91D4u));
    // 0x1e4f40: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1e4f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4f48: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E4F48u;
    {
        const bool branch_taken_0x1e4f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F48u;
        // 0x1e4f4c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f48) {
            ctx->pc = 0x1E4F98u;
            goto label_1e4f98;
        }
    }
    ctx->pc = 0x1E4F50u;
    // 0x1e4f50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4f54: 0x8e2391d4  lw          $v1, -0x6E2C($s1)
    ctx->pc = 0x1e4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939092)));
label_1e4f58:
    // 0x1e4f58: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1e4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e4f5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4f60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e4f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4f64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4F64u;
    {
        const bool branch_taken_0x1e4f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F64u;
        // 0x1e4f68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f64) {
            ctx->pc = 0x1E4F74u;
            goto label_1e4f74;
        }
    }
    ctx->pc = 0x1E4F6Cu;
    // 0x1e4f6c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1E4F6Cu;
    SET_GPR_U32(ctx, 31, 0x1E4F74u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1E4F6Cu, 0x1E4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F74u;
label_1e4f74:
    // 0x1e4f74: 0x2e020014  sltiu       $v0, $s0, 0x14
    ctx->pc = 0x1e4f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1e4f78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E4F78u;
    {
        const bool branch_taken_0x1e4f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F78u;
        // 0x1e4f7c: 0x8e2391d4  lw          $v1, -0x6E2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f78) {
            ctx->pc = 0x1E4F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4f58;
        }
    }
    ctx->pc = 0x1E4F80u;
    // 0x1e4f80: 0x8e2491d4  lw          $a0, -0x6E2C($s1)
    ctx->pc = 0x1e4f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939092)));
    // 0x1e4f84: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4F84u;
    {
        const bool branch_taken_0x1e4f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f84) {
            ctx->pc = 0x1E4F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4F84u;
            // 0x1e4f88: 0xae2091d4  sw          $zero, -0x6E2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294939092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4F98u;
            goto label_1e4f98;
        }
    }
    ctx->pc = 0x1E4F8Cu;
    // 0x1e4f8c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1E4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1E4F94u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1E4F8Cu, 0x1E4F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F94u;
label_1e4f94:
    // 0x1e4f94: 0xae2091d4  sw          $zero, -0x6E2C($s1)
    ctx->pc = 0x1e4f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939092), GPR_U32(ctx, 0));
label_1e4f98:
    // 0x1e4f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4f9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4fa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FA4u;
        // 0x1e4fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4FACu;
    // 0x1e4fac: 0x0  nop
    ctx->pc = 0x1e4facu;
    // NOP
    ctx->pc = 0x1e4fb0u;
}
