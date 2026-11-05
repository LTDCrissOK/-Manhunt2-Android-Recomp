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

// Function: sub_003A5A68
// Address: 0x3a5a68 - 0x3a5b08
void sub_003A5A68_0x3a5a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5A68_0x3a5a68");
#endif

    switch (ctx->pc) {
        case 0x3a5a8cu: goto label_3a5a8c;
        case 0x3a5aacu: goto label_3a5aac;
        case 0x3a5ab4u: goto label_3a5ab4;
        case 0x3a5ac0u: goto label_3a5ac0;
        case 0x3a5accu: goto label_3a5acc;
        case 0x3a5ae0u: goto label_3a5ae0;
        case 0x3a5ae8u: goto label_3a5ae8;
        case 0x3a5af0u: goto label_3a5af0;
        default: break;
    }

    ctx->pc = 0x3a5a68u;

    // 0x3a5a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a5a6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a5a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a5a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a5a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a5a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a78: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a5a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3a5a7c: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A5A7Cu;
    {
        const bool branch_taken_0x3a5a7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A7Cu;
        // 0x3a5a80: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5a7c) {
            ctx->pc = 0x3A5AF4u;
            goto label_3a5af4;
        }
    }
    ctx->pc = 0x3A5A84u;
    // 0x3a5a84: 0xc0e9a94  jal         func_3A6A50
    ctx->pc = 0x3A5A84u;
    SET_GPR_U32(ctx, 31, 0x3A5A8Cu);
    ctx->pc = 0x3A5A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5A84u;
    // 0x3a5a88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A50u, 0x3A5A84u, 0x3A5A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5A8Cu;
label_3a5a8c:
    // 0x3a5a8c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a5a90: 0x24513c10  addiu       $s1, $v0, 0x3C10
    ctx->pc = 0x3a5a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15376));
    // 0x3a5a94: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3a5a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a5a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a5a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a9c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A5A9Cu;
    {
        const bool branch_taken_0x3a5a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A9Cu;
        // 0x3a5aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5a9c) {
            ctx->pc = 0x3A5AF0u;
            goto label_3a5af0;
        }
    }
    ctx->pc = 0x3A5AA4u;
    // 0x3a5aa4: 0xc0e997e  jal         func_3A65F8
    ctx->pc = 0x3A5AA4u;
    SET_GPR_U32(ctx, 31, 0x3A5AACu);
    ctx->pc = 0x3A65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65F8u, 0x3A5AA4u, 0x3A5AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5AACu;
label_3a5aac:
    // 0x3a5aac: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5AACu;
    SET_GPR_U32(ctx, 31, 0x3A5AB4u);
    ctx->pc = 0x3A5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5AACu;
    // 0x3a5ab0: 0x24044200  addiu       $a0, $zero, 0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5AACu, 0x3A5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5AB4u;
label_3a5ab4:
    // 0x3a5ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a5ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5ab8: 0xc0e8da8  jal         func_3A36A0
    ctx->pc = 0x3A5AB8u;
    SET_GPR_U32(ctx, 31, 0x3A5AC0u);
    ctx->pc = 0x3A5ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5AB8u;
    // 0x3a5abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36A0u, 0x3A5AB8u, 0x3A5AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5AC0u;
label_3a5ac0:
    // 0x3a5ac0: 0x24044201  addiu       $a0, $zero, 0x4201
    ctx->pc = 0x3a5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16897));
    // 0x3a5ac4: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5AC4u;
    SET_GPR_U32(ctx, 31, 0x3A5ACCu);
    ctx->pc = 0x3A5AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5AC4u;
    // 0x3a5ac8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5AC4u, 0x3A5ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5ACCu;
label_3a5acc:
    // 0x3a5acc: 0x24044300  addiu       $a0, $zero, 0x4300
    ctx->pc = 0x3a5accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17152));
    // 0x3a5ad0: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5AD0u;
    {
        const bool branch_taken_0x3a5ad0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3A5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5AD0u;
        // 0x3a5ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ad0) {
            ctx->pc = 0x3A5AF4u;
            goto label_3a5af4;
        }
    }
    ctx->pc = 0x3A5AD8u;
    // 0x3a5ad8: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5AD8u;
    SET_GPR_U32(ctx, 31, 0x3A5AE0u);
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5AD8u, 0x3A5AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5AE0u;
label_3a5ae0:
    // 0x3a5ae0: 0xc0e8dc2  jal         func_3A3708
    ctx->pc = 0x3A5AE0u;
    SET_GPR_U32(ctx, 31, 0x3A5AE8u);
    ctx->pc = 0x3A5AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5AE0u;
    // 0x3a5ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3708u, 0x3A5AE0u, 0x3A5AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5AE8u;
label_3a5ae8:
    // 0x3a5ae8: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5AE8u;
    SET_GPR_U32(ctx, 31, 0x3A5AF0u);
    ctx->pc = 0x3A5AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5AE8u;
    // 0x3a5aec: 0x24044301  addiu       $a0, $zero, 0x4301 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17153));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5AE8u, 0x3A5AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5AF0u;
label_3a5af0:
    // 0x3a5af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a5af4:
    // 0x3a5af4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a5af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5af8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a5af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a5afc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a5afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a5b00: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B00u;
        // 0x3a5b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5B08u;
}
