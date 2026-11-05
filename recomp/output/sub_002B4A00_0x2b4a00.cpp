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

// Function: sub_002B4A00
// Address: 0x2b4a00 - 0x2b4a78
void sub_002B4A00_0x2b4a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4A00_0x2b4a00");
#endif

    switch (ctx->pc) {
        case 0x2b4a30u: goto label_2b4a30;
        case 0x2b4a48u: goto label_2b4a48;
        default: break;
    }

    ctx->pc = 0x2b4a00u;

    // 0x2b4a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4a04: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2b4a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2b4a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4a0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b4a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b4a10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b4a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b4a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b4a18: 0x2451fa18  addiu       $s1, $v0, -0x5E8
    ctx->pc = 0x2b4a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965784));
    // 0x2b4a1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b4a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b4a20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b4a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b4a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b4a28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4A28u;
    {
        const bool branch_taken_0x2b4a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A28u;
        // 0x2b4a2c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a28) {
            ctx->pc = 0x2B4A34u;
            goto label_2b4a34;
        }
    }
    ctx->pc = 0x2B4A30u;
label_2b4a30:
    // 0x2b4a30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b4a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b4a34:
    // 0x2b4a34: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x2b4a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b4a38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4A38u;
    {
        const bool branch_taken_0x2b4a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A38u;
        // 0x2b4a3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a38) {
            ctx->pc = 0x2B4A54u;
            goto label_2b4a54;
        }
    }
    ctx->pc = 0x2B4A40u;
    // 0x2b4a40: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B4A40u;
    SET_GPR_U32(ctx, 31, 0x2B4A48u);
    ctx->pc = 0x2B4A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A40u;
    // 0x2b4a44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B4A40u, 0x2B4A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A48u;
label_2b4a48:
    // 0x2b4a48: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B4A48u;
    {
        const bool branch_taken_0x2b4a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A48u;
        // 0x2b4a4c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a48) {
            ctx->pc = 0x2B4A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4a30;
        }
    }
    ctx->pc = 0x2B4A50u;
    // 0x2b4a50: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2b4a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4a54:
    // 0x2b4a54: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b4a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4a5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b4a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4a60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b4a60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4a64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b4a64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4a68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b4a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A6Cu;
        // 0x2b4a70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4A74u;
    // 0x2b4a74: 0x0  nop
    ctx->pc = 0x2b4a74u;
    // NOP
    ctx->pc = 0x2b4a78u;
}
