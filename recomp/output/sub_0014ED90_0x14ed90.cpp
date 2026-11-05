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

// Function: sub_0014ED90
// Address: 0x14ed90 - 0x14edf0
void sub_0014ED90_0x14ed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ED90_0x14ed90");
#endif

    switch (ctx->pc) {
        case 0x14edc0u: goto label_14edc0;
        case 0x14edccu: goto label_14edcc;
        case 0x14eddcu: goto label_14eddc;
        default: break;
    }

    ctx->pc = 0x14ed90u;

    // 0x14ed90: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14ed90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14ed94: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x14ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14ed98: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x14ed98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14ed9c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ed9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14eda0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14eda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14eda4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14eda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14eda8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x14eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14edac: 0x8cb004e8  lw          $s0, 0x4E8($a1)
    ctx->pc = 0x14edacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1256)));
    // 0x14edb0: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14EDB0u;
    {
        const bool branch_taken_0x14edb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14edb0) {
            ctx->pc = 0x14EDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EDB0u;
            // 0x14edb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EDE0u;
            goto label_14ede0;
        }
    }
    ctx->pc = 0x14EDB8u;
    // 0x14edb8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14EDB8u;
    SET_GPR_U32(ctx, 31, 0x14EDC0u);
    ctx->pc = 0x14EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDB8u;
    // 0x14edbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14EDB8u, 0x14EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDC0u;
label_14edc0:
    // 0x14edc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14edc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14edc4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14EDC4u;
    SET_GPR_U32(ctx, 31, 0x14EDCCu);
    ctx->pc = 0x14EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDC4u;
    // 0x14edc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14EDC4u, 0x14EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDCCu;
label_14edcc:
    // 0x14edcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14edccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14edd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14edd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14edd4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14EDD4u;
    SET_GPR_U32(ctx, 31, 0x14EDDCu);
    ctx->pc = 0x14EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDD4u;
    // 0x14edd8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14EDD4u, 0x14EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDDCu;
label_14eddc:
    // 0x14eddc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14eddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14ede0:
    // 0x14ede0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14ede0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ede4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14ede4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ede8: 0x3e00008  jr          $ra
    ctx->pc = 0x14EDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDE8u;
        // 0x14edec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EDF0u;
}
