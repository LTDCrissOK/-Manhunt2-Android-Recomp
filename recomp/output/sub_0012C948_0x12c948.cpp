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

// Function: sub_0012C948
// Address: 0x12c948 - 0x12c9d8
void sub_0012C948_0x12c948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C948_0x12c948");
#endif

    switch (ctx->pc) {
        case 0x12c96cu: goto label_12c96c;
        case 0x12c994u: goto label_12c994;
        case 0x12c9a8u: goto label_12c9a8;
        case 0x12c9b8u: goto label_12c9b8;
        default: break;
    }

    ctx->pc = 0x12c948u;

    // 0x12c948: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12c948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12c94c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c950: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12c950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12c954: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12c954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c95c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c960: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12c960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12c964: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12C964u;
    SET_GPR_U32(ctx, 31, 0x12C96Cu);
    ctx->pc = 0x12C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C964u;
    // 0x12c968: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12C964u, 0x12C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C96Cu;
label_12c96c:
    // 0x12c96c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c96cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c970: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12c970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12c974: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x12C974u;
    {
        const bool branch_taken_0x12c974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C974u;
        // 0x12c978: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c974) {
            ctx->pc = 0x12C9B8u;
            goto label_12c9b8;
        }
    }
    ctx->pc = 0x12C97Cu;
    // 0x12c97c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c980: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x12c980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12c984: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12c984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c988: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x12c988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12c98c: 0xc04b100  jal         func_12C400
    ctx->pc = 0x12C98Cu;
    SET_GPR_U32(ctx, 31, 0x12C994u);
    ctx->pc = 0x12C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C98Cu;
    // 0x12c990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C400u, 0x12C98Cu, 0x12C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C994u;
label_12c994:
    // 0x12c994: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c998: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12c998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c99c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9a0: 0xc04b0f0  jal         func_12C3C0
    ctx->pc = 0x12C9A0u;
    SET_GPR_U32(ctx, 31, 0x12C9A8u);
    ctx->pc = 0x12C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9A0u;
    // 0x12c9a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C3C0u, 0x12C9A0u, 0x12C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9A8u;
label_12c9a8:
    // 0x12c9a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12c9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9b0: 0xc04afce  jal         func_12BF38
    ctx->pc = 0x12C9B0u;
    SET_GPR_U32(ctx, 31, 0x12C9B8u);
    ctx->pc = 0x12C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9B0u;
    // 0x12c9b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BF38u, 0x12C9B0u, 0x12C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9B8u;
label_12c9b8:
    // 0x12c9b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c9bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c9bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c9c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c9c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c9c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12c9c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c9c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12c9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x12C9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9CCu;
        // 0x12c9d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C9D4u;
    // 0x12c9d4: 0x0  nop
    ctx->pc = 0x12c9d4u;
    // NOP
    ctx->pc = 0x12c9d8u;
}
