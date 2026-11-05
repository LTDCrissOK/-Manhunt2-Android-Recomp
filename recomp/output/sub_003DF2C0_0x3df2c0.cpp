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

// Function: sub_003DF2C0
// Address: 0x3df2c0 - 0x3df318
void sub_003DF2C0_0x3df2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF2C0_0x3df2c0");
#endif

    switch (ctx->pc) {
        case 0x3df2f0u: goto label_3df2f0;
        case 0x3df304u: goto label_3df304;
        default: break;
    }

    ctx->pc = 0x3df2c0u;

    // 0x3df2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3df2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3df2c4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3df2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3df2c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3df2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3df2cc: 0x24421728  addiu       $v0, $v0, 0x1728
    ctx->pc = 0x3df2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5928));
    // 0x3df2d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3df2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3df2d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3df2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df2d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3df2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3df2dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3df2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df2e0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3df2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x3df2e4: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3df2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3df2e8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF2E8u;
    SET_GPR_U32(ctx, 31, 0x3DF2F0u);
    ctx->pc = 0x3DF2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF2E8u;
    // 0x3df2ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF2E8u, 0x3DF2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF2F0u;
label_3df2f0:
    // 0x3df2f0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3df2f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3df2f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF2F4u;
    {
        const bool branch_taken_0x3df2f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF2F4u;
        // 0x3df2f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df2f4) {
            ctx->pc = 0x3DF308u;
            goto label_3df308;
        }
    }
    ctx->pc = 0x3DF2FCu;
    // 0x3df2fc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DF2FCu;
    SET_GPR_U32(ctx, 31, 0x3DF304u);
    ctx->pc = 0x3DF300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF2FCu;
    // 0x3df300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DF2FCu, 0x3DF304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF304u;
label_3df304:
    // 0x3df304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3df304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3df308:
    // 0x3df308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3df308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3df30c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3df30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3df310: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF310u;
        // 0x3df314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF318u;
}
