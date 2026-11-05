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

// Function: sub_002A3E60
// Address: 0x2a3e60 - 0x2a3ed8
void sub_002A3E60_0x2a3e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3E60_0x2a3e60");
#endif

    switch (ctx->pc) {
        case 0x2a3e88u: goto label_2a3e88;
        case 0x2a3ea4u: goto label_2a3ea4;
        case 0x2a3eb8u: goto label_2a3eb8;
        default: break;
    }

    ctx->pc = 0x2a3e60u;

    // 0x2a3e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a3e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3e68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a3e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a3e6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a3e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a3e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a3e74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a3e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a3e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a3e7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3e80: 0xc0a7d1e  jal         func_29F478
    ctx->pc = 0x2A3E80u;
    SET_GPR_U32(ctx, 31, 0x2A3E88u);
    ctx->pc = 0x2A3E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E80u;
    // 0x2a3e84: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F478u, 0x2A3E80u, 0x2A3E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E88u;
label_2a3e88:
    // 0x2a3e88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a3e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e8c: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2A3E8Cu;
    {
        const bool branch_taken_0x2a3e8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E8Cu;
        // 0x2a3e90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e8c) {
            ctx->pc = 0x2A3EBCu;
            goto label_2a3ebc;
        }
    }
    ctx->pc = 0x2A3E94u;
    // 0x2a3e94: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a3e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a3e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e9c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A3E9Cu;
    SET_GPR_U32(ctx, 31, 0x2A3EA4u);
    ctx->pc = 0x2A3EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E9Cu;
    // 0x2a3ea0: 0x24a5d5e0  addiu       $a1, $a1, -0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A3E9Cu, 0x2A3EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3EA4u;
label_2a3ea4:
    // 0x2a3ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3ea8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3EA8u;
    {
        const bool branch_taken_0x2a3ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3EA8u;
        // 0x2a3eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ea8) {
            ctx->pc = 0x2A3EB8u;
            goto label_2a3eb8;
        }
    }
    ctx->pc = 0x2A3EB0u;
    // 0x2a3eb0: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x2A3EB0u;
    SET_GPR_U32(ctx, 31, 0x2A3EB8u);
    ctx->pc = 0x2A3EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3EB0u;
    // 0x2a3eb4: 0x2665027c  addiu       $a1, $s3, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x2A3EB0u, 0x2A3EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3EB8u;
label_2a3eb8:
    // 0x2a3eb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a3eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a3ebc:
    // 0x2a3ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a3ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a3ec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a3ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3ec8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a3ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a3ecc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3ED0u;
        // 0x2a3ed4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3ED8u;
}
