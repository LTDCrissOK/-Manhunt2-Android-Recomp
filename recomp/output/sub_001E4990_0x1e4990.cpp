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

// Function: sub_001E4990
// Address: 0x1e4990 - 0x1e4a08
void sub_001E4990_0x1e4990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4990_0x1e4990");
#endif

    switch (ctx->pc) {
        case 0x1e49c4u: goto label_1e49c4;
        case 0x1e49d8u: goto label_1e49d8;
        case 0x1e49ecu: goto label_1e49ec;
        default: break;
    }

    ctx->pc = 0x1e4990u;

    // 0x1e4990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4998: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e4998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e499c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e499cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e49a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e49a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e49a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e49a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e49ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e49acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e49b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49b4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e49b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49b8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1e49b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e49bc: 0xc0791fe  jal         func_1E47F8
    ctx->pc = 0x1E49BCu;
    SET_GPR_U32(ctx, 31, 0x1E49C4u);
    ctx->pc = 0x1E49C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E49BCu;
    // 0x1e49c0: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47F8u, 0x1E49BCu, 0x1E49C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E49C4u;
label_1e49c4:
    // 0x1e49c4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1e49c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e49c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e49c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49cc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1e49ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e49d0: 0xc0791fe  jal         func_1E47F8
    ctx->pc = 0x1E49D0u;
    SET_GPR_U32(ctx, 31, 0x1E49D8u);
    ctx->pc = 0x1E49D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E49D0u;
    // 0x1e49d4: 0x26470010  addiu       $a3, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47F8u, 0x1E49D0u, 0x1E49D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E49D8u;
label_1e49d8:
    // 0x1e49d8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1e49d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e49dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e49dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e49e0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1e49e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e49e4: 0xc0791fe  jal         func_1E47F8
    ctx->pc = 0x1E49E4u;
    SET_GPR_U32(ctx, 31, 0x1E49ECu);
    ctx->pc = 0x1E49E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E49E4u;
    // 0x1e49e8: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47F8u, 0x1E49E4u, 0x1E49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E49ECu;
label_1e49ec:
    // 0x1e49ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e49ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e49f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e49f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e49f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e49f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e49f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e49f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e49fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E49FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49FCu;
        // 0x1e4a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E49FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4A04u;
    // 0x1e4a04: 0x0  nop
    ctx->pc = 0x1e4a04u;
    // NOP
    ctx->pc = 0x1e4a08u;
}
