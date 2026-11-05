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

// Function: sub_003DCB80
// Address: 0x3dcb80 - 0x3dcbf0
void sub_003DCB80_0x3dcb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCB80_0x3dcb80");
#endif

    switch (ctx->pc) {
        case 0x3dcba8u: goto label_3dcba8;
        case 0x3dcbb0u: goto label_3dcbb0;
        default: break;
    }

    ctx->pc = 0x3dcb80u;

    // 0x3dcb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dcb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dcb84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dcb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dcb88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dcb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dcb8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dcb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcb90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dcb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dcb94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dcb94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcb98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3dcb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3dcb9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DCB9Cu;
    {
        const bool branch_taken_0x3dcb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB9Cu;
        // 0x3dcba0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcb9c) {
            ctx->pc = 0x3DCBB0u;
            goto label_3dcbb0;
        }
    }
    ctx->pc = 0x3DCBA4u;
    // 0x3dcba4: 0x0  nop
    ctx->pc = 0x3dcba4u;
    // NOP
label_3dcba8:
    // 0x3dcba8: 0xc0f6230  jal         func_3D88C0
    ctx->pc = 0x3DCBA8u;
    SET_GPR_U32(ctx, 31, 0x3DCBB0u);
    ctx->pc = 0x3D88C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D88C0u, 0x3DCBA8u, 0x3DCBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCBB0u;
label_3dcbb0:
    // 0x3dcbb0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3dcbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3dcbb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dcbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcbb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3dcbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcbbc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DCBBCu;
    {
        const bool branch_taken_0x3dcbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCBBCu;
        // 0x3dcbc0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcbbc) {
            ctx->pc = 0x3DCBC8u;
            goto label_3dcbc8;
        }
    }
    ctx->pc = 0x3DCBC4u;
    // 0x3dcbc4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3dcbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3dcbc8:
    // 0x3dcbc8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DCBC8u;
    {
        const bool branch_taken_0x3dcbc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCBC8u;
        // 0x3dcbcc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcbc8) {
            ctx->pc = 0x3DCBD8u;
            goto label_3dcbd8;
        }
    }
    ctx->pc = 0x3DCBD0u;
    // 0x3dcbd0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3dcbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3dcbd4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3dcbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_3dcbd8:
    // 0x3dcbd8: 0x14c0fff3  bnez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x3DCBD8u;
    {
        const bool branch_taken_0x3dcbd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCBD8u;
        // 0x3dcbdc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcbd8) {
            ctx->pc = 0x3DCBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dcba8;
        }
    }
    ctx->pc = 0x3DCBE0u;
    // 0x3dcbe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dcbe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dcbe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dcbe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dcbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCBE8u;
        // 0x3dcbec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCBF0u;
}
