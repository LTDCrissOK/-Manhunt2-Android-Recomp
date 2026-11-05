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

// Function: sub_00276B90
// Address: 0x276b90 - 0x276be0
void sub_00276B90_0x276b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276B90_0x276b90");
#endif

    switch (ctx->pc) {
        case 0x276bc0u: goto label_276bc0;
        case 0x276bccu: goto label_276bcc;
        default: break;
    }

    ctx->pc = 0x276b90u;

    // 0x276b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276b94: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x276b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x276b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276b9c: 0x24422b80  addiu       $v0, $v0, 0x2B80
    ctx->pc = 0x276b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11136));
    // 0x276ba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x276ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x276ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276bac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x276bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bb0: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x276bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    // 0x276bb4: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x276bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x276bb8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x276BB8u;
    SET_GPR_U32(ctx, 31, 0x276BC0u);
    ctx->pc = 0x276BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276BB8u;
    // 0x276bbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x276BB8u, 0x276BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276BC0u;
label_276bc0:
    // 0x276bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bc4: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x276BC4u;
    SET_GPR_U32(ctx, 31, 0x276BCCu);
    ctx->pc = 0x276BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276BC4u;
    // 0x276bc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x276BC4u, 0x276BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276BCCu;
label_276bcc:
    // 0x276bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x276bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x276BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BD8u;
        // 0x276bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276BE0u;
}
