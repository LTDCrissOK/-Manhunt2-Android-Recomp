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

// Function: sub_00123B90
// Address: 0x123b90 - 0x123bf0
void sub_00123B90_0x123b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123B90_0x123b90");
#endif

    switch (ctx->pc) {
        case 0x123bb8u: goto label_123bb8;
        case 0x123bccu: goto label_123bcc;
        default: break;
    }

    ctx->pc = 0x123b90u;

    // 0x123b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123b94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123b98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123b9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ba0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123ba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ba8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x123bac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x123bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123bb0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123BB0u;
    SET_GPR_U32(ctx, 31, 0x123BB8u);
    ctx->pc = 0x123BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BB0u;
    // 0x123bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123BB0u, 0x123BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BB8u;
label_123bb8:
    // 0x123bb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123BB8u;
    {
        const bool branch_taken_0x123bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BB8u;
        // 0x123bbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bb8) {
            ctx->pc = 0x123BD4u;
            goto label_123bd4;
        }
    }
    ctx->pc = 0x123BC0u;
    // 0x123bc0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x123bc4: 0xc042e3c  jal         func_10B8F0
    ctx->pc = 0x123BC4u;
    SET_GPR_U32(ctx, 31, 0x123BCCu);
    ctx->pc = 0x123BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BC4u;
    // 0x123bc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B8F0u, 0x123BC4u, 0x123BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BCCu;
label_123bcc:
    // 0x123bcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123BCCu;
    {
        const bool branch_taken_0x123bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BCCu;
        // 0x123bd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bcc) {
            ctx->pc = 0x123BDCu;
            goto label_123bdc;
        }
    }
    ctx->pc = 0x123BD4u;
label_123bd4:
    // 0x123bd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123bdc:
    // 0x123bdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123be0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123be4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x123be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123be8: 0x3e00008  jr          $ra
    ctx->pc = 0x123BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BE8u;
        // 0x123bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123BF0u;
}
