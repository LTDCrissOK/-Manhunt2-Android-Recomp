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

// Function: sub_002A7C78
// Address: 0x2a7c78 - 0x2a7cf8
void sub_002A7C78_0x2a7c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7C78_0x2a7c78");
#endif

    switch (ctx->pc) {
        case 0x2a7cb0u: goto label_2a7cb0;
        case 0x2a7cbcu: goto label_2a7cbc;
        case 0x2a7cdcu: goto label_2a7cdc;
        default: break;
    }

    ctx->pc = 0x2a7c78u;

    // 0x2a7c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a7c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a7c7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a7c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a7c80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a7c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a7c84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a7c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a7c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7c8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a7c8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a7c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a7c94: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x2a7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x2a7c98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A7C98u;
    {
        const bool branch_taken_0x2a7c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C98u;
        // 0x2a7c9c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c98) {
            ctx->pc = 0x2A7CC8u;
            goto label_2a7cc8;
        }
    }
    ctx->pc = 0x2A7CA0u;
    // 0x2a7ca0: 0x2630005c  addiu       $s0, $s1, 0x5C
    ctx->pc = 0x2a7ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x2a7ca4: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7CA4u;
    {
        const bool branch_taken_0x2a7ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CA4u;
        // 0x2a7ca8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ca4) {
            ctx->pc = 0x2A7CC8u;
            goto label_2a7cc8;
        }
    }
    ctx->pc = 0x2A7CACu;
    // 0x2a7cac: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x2a7cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_2a7cb0:
    // 0x2a7cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7cb4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A7CB4u;
    SET_GPR_U32(ctx, 31, 0x2A7CBCu);
    ctx->pc = 0x2A7CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7CB4u;
    // 0x2a7cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A7CB4u, 0x2A7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7CBCu;
label_2a7cbc:
    // 0x2a7cbc: 0x0  nop
    ctx->pc = 0x2a7cbcu;
    // NOP
    // 0x2a7cc0: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A7CC0u;
    {
        const bool branch_taken_0x2a7cc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2A7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CC0u;
        // 0x2a7cc4: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7cc0) {
            ctx->pc = 0x2A7CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7cb0;
        }
    }
    ctx->pc = 0x2A7CC8u;
label_2a7cc8:
    // 0x2a7cc8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2a7cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2a7ccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7CCCu;
    {
        const bool branch_taken_0x2a7ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CCCu;
        // 0x2a7cd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ccc) {
            ctx->pc = 0x2A7CE0u;
            goto label_2a7ce0;
        }
    }
    ctx->pc = 0x2A7CD4u;
    // 0x2a7cd4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2A7CD4u;
    SET_GPR_U32(ctx, 31, 0x2A7CDCu);
    ctx->pc = 0x2A7CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7CD4u;
    // 0x2a7cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A7CD4u, 0x2A7CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7CDCu;
label_2a7cdc:
    // 0x2a7cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a7ce0:
    // 0x2a7ce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a7ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7ce4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a7ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7ce8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a7ce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a7cec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a7cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CF0u;
        // 0x2a7cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7CF8u;
}
