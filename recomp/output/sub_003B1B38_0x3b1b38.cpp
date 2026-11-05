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

// Function: sub_003B1B38
// Address: 0x3b1b38 - 0x3b1bf0
void sub_003B1B38_0x3b1b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1B38_0x3b1b38");
#endif

    switch (ctx->pc) {
        case 0x3b1b74u: goto label_3b1b74;
        case 0x3b1b9cu: goto label_3b1b9c;
        case 0x3b1bc8u: goto label_3b1bc8;
        default: break;
    }

    ctx->pc = 0x3b1b38u;

    // 0x3b1b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b1b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b1b3c: 0x24060a28  addiu       $a2, $zero, 0xA28
    ctx->pc = 0x3b1b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x3b1b40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b1b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b1b44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b1b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b1b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b1b4c: 0x2410fff8  addiu       $s0, $zero, -0x8
    ctx->pc = 0x3b1b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x3b1b50: 0x26620007  addiu       $v0, $s3, 0x7
    ctx->pc = 0x3b1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x3b1b54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b1b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b1b58: 0x509024  and         $s2, $v0, $s0
    ctx->pc = 0x3b1b58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x3b1b5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b1b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b1b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b1b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b1b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b1b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b1b6c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B1B6Cu;
    SET_GPR_U32(ctx, 31, 0x3B1B74u);
    ctx->pc = 0x3B1B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1B6Cu;
    // 0x3b1b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B1B6Cu, 0x3B1B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1B74u;
label_3b1b74:
    // 0x3b1b74: 0x2405101c  addiu       $a1, $zero, 0x101C
    ctx->pc = 0x3b1b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4124));
    // 0x3b1b78: 0x26440a2f  addiu       $a0, $s2, 0xA2F
    ctx->pc = 0x3b1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2607));
    // 0x3b1b7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b1b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b80: 0x909024  and         $s2, $a0, $s0
    ctx->pc = 0x3b1b80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x3b1b84: 0x2643101c  addiu       $v1, $s2, 0x101C
    ctx->pc = 0x3b1b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4124));
    // 0x3b1b88: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x3b1b88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3b1b8c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B1B8Cu;
    {
        const bool branch_taken_0x3b1b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B8Cu;
        // 0x3b1b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1b8c) {
            ctx->pc = 0x3B1BD4u;
            goto label_3b1bd4;
        }
    }
    ctx->pc = 0x3B1B94u;
    // 0x3b1b94: 0xc0ecb88  jal         func_3B2E20
    ctx->pc = 0x3B1B94u;
    SET_GPR_U32(ctx, 31, 0x3B1B9Cu);
    ctx->pc = 0x3B2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2E20u, 0x3B1B94u, 0x3B1B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1B9Cu;
label_3b1b9c:
    // 0x3b1b9c: 0x2404ffe0  addiu       $a0, $zero, -0x20
    ctx->pc = 0x3b1b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x3b1ba0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3b1ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ba4: 0x26630023  addiu       $v1, $s3, 0x23
    ctx->pc = 0x3b1ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 35));
    // 0x3b1ba8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3b1ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3b1bac: 0x266401e4  addiu       $a0, $s3, 0x1E4
    ctx->pc = 0x3b1bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 484));
    // 0x3b1bb0: 0xae6701b0  sw          $a3, 0x1B0($s3)
    ctx->pc = 0x3b1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 432), GPR_U32(ctx, 7));
    // 0x3b1bb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1bb8: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B1BB8u;
    {
        const bool branch_taken_0x3b1bb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BB8u;
        // 0x3b1bbc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1bb8) {
            ctx->pc = 0x3B1BD4u;
            goto label_3b1bd4;
        }
    }
    ctx->pc = 0x3B1BC0u;
    // 0x3b1bc0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B1BC0u;
    SET_GPR_U32(ctx, 31, 0x3B1BC8u);
    ctx->pc = 0x3B1BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1BC0u;
    // 0x3b1bc4: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B1BC0u, 0x3B1BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1BC8u;
label_3b1bc8:
    // 0x3b1bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1bcc: 0xa26301a4  sb          $v1, 0x1A4($s3)
    ctx->pc = 0x3b1bccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 420), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b1bd0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3b1bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b1bd4:
    // 0x3b1bd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b1bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1bd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b1bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b1bdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b1bdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1be0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b1be0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b1be4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b1be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1be8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BE8u;
        // 0x3b1bec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1BF0u;
}
