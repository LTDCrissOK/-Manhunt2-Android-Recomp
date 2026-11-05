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

// Function: sub_00394AB8
// Address: 0x394ab8 - 0x394b00
void sub_00394AB8_0x394ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394AB8_0x394ab8");
#endif

    switch (ctx->pc) {
        case 0x394ad4u: goto label_394ad4;
        case 0x394ae0u: goto label_394ae0;
        case 0x394ae8u: goto label_394ae8;
        default: break;
    }

    ctx->pc = 0x394ab8u;

    // 0x394ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x394ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x394abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x394abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x394ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x394ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394ac4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x394ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x394ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x394ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x394acc: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x394ACCu;
    SET_GPR_U32(ctx, 31, 0x394AD4u);
    ctx->pc = 0x394AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394ACCu;
    // 0x394ad0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x394ACCu, 0x394AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394AD4u;
label_394ad4:
    // 0x394ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x394ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394ad8: 0xc0e52c0  jal         func_394B00
    ctx->pc = 0x394AD8u;
    SET_GPR_U32(ctx, 31, 0x394AE0u);
    ctx->pc = 0x394ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394AD8u;
    // 0x394adc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394B00u, 0x394AD8u, 0x394AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394AE0u;
label_394ae0:
    // 0x394ae0: 0xc0e579c  jal         func_395E70
    ctx->pc = 0x394AE0u;
    SET_GPR_U32(ctx, 31, 0x394AE8u);
    ctx->pc = 0x394AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394AE0u;
    // 0x394ae4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E70u, 0x394AE0u, 0x394AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394AE8u;
label_394ae8:
    // 0x394ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x394ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x394aec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x394aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x394af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x394af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394af8: 0x3e00008  jr          $ra
    ctx->pc = 0x394AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394AF8u;
        // 0x394afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394B00u;
}
