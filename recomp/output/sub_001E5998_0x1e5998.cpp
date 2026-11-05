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

// Function: sub_001E5998
// Address: 0x1e5998 - 0x1e5a18
void sub_001E5998_0x1e5998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5998_0x1e5998");
#endif

    switch (ctx->pc) {
        case 0x1e59c0u: goto label_1e59c0;
        case 0x1e59dcu: goto label_1e59dc;
        case 0x1e59fcu: goto label_1e59fc;
        default: break;
    }

    ctx->pc = 0x1e5998u;

    // 0x1e5998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e599c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e599cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e59a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e59a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e59a4: 0x8c6291dc  lw          $v0, -0x6E24($v1)
    ctx->pc = 0x1e59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91DCu));
    // 0x1e59a8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1e59a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e59acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e59b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E59B0u;
    {
        const bool branch_taken_0x1e59b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E59B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59B0u;
        // 0x1e59b4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59b0) {
            ctx->pc = 0x1E5A00u;
            goto label_1e5a00;
        }
    }
    ctx->pc = 0x1E59B8u;
    // 0x1e59b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e59b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59bc: 0x8e2391dc  lw          $v1, -0x6E24($s1)
    ctx->pc = 0x1e59bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
label_1e59c0:
    // 0x1e59c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1e59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e59c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e59c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e59c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e59cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E59CCu;
    {
        const bool branch_taken_0x1e59cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59CCu;
        // 0x1e59d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59cc) {
            ctx->pc = 0x1E59DCu;
            goto label_1e59dc;
        }
    }
    ctx->pc = 0x1E59D4u;
    // 0x1e59d4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1E59D4u;
    SET_GPR_U32(ctx, 31, 0x1E59DCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1E59D4u, 0x1E59DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E59DCu;
label_1e59dc:
    // 0x1e59dc: 0x2e020050  sltiu       $v0, $s0, 0x50
    ctx->pc = 0x1e59dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1e59e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E59E0u;
    {
        const bool branch_taken_0x1e59e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59E0u;
        // 0x1e59e4: 0x8e2391dc  lw          $v1, -0x6E24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59e0) {
            ctx->pc = 0x1E59C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e59c0;
        }
    }
    ctx->pc = 0x1E59E8u;
    // 0x1e59e8: 0x8e2491dc  lw          $a0, -0x6E24($s1)
    ctx->pc = 0x1e59e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e59ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E59ECu;
    {
        const bool branch_taken_0x1e59ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e59ec) {
            ctx->pc = 0x1E59F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E59ECu;
            // 0x1e59f0: 0xae2091dc  sw          $zero, -0x6E24($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294939100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5A00u;
            goto label_1e5a00;
        }
    }
    ctx->pc = 0x1E59F4u;
    // 0x1e59f4: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1E59F4u;
    SET_GPR_U32(ctx, 31, 0x1E59FCu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1E59F4u, 0x1E59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E59FCu;
label_1e59fc:
    // 0x1e59fc: 0xae2091dc  sw          $zero, -0x6E24($s1)
    ctx->pc = 0x1e59fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939100), GPR_U32(ctx, 0));
label_1e5a00:
    // 0x1e5a00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5a04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5a08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A0Cu;
        // 0x1e5a10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5A14u;
    // 0x1e5a14: 0x0  nop
    ctx->pc = 0x1e5a14u;
    // NOP
    ctx->pc = 0x1e5a18u;
}
