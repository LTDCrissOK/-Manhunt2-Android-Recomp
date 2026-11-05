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

// Function: sub_00394C60
// Address: 0x394c60 - 0x394d20
void sub_00394C60_0x394c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394C60_0x394c60");
#endif

    switch (ctx->pc) {
        case 0x394ca4u: goto label_394ca4;
        case 0x394cacu: goto label_394cac;
        case 0x394cd0u: goto label_394cd0;
        case 0x394ce4u: goto label_394ce4;
        case 0x394cfcu: goto label_394cfc;
        default: break;
    }

    ctx->pc = 0x394c60u;

    // 0x394c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x394c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x394c64: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x394c64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x394c68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x394c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x394c6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x394c6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x394c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x394c74: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x394c74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x394c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x394c7c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x394c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x394c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x394c84: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x394c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x394c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c90: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x394c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x394c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x394c98: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x394c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x394c9c: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x394C9Cu;
    SET_GPR_U32(ctx, 31, 0x394CA4u);
    ctx->pc = 0x394CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394C9Cu;
    // 0x394ca0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x394C9Cu, 0x394CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394CA4u;
label_394ca4:
    // 0x394ca4: 0xc0e525a  jal         func_394968
    ctx->pc = 0x394CA4u;
    SET_GPR_U32(ctx, 31, 0x394CACu);
    ctx->pc = 0x394968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394968u, 0x394CA4u, 0x394CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394CACu;
label_394cac:
    // 0x394cac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x394cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394cb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x394cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394cb4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x394cb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x394cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394cbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x394cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394cc0: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x394CC0u;
    {
        const bool branch_taken_0x394cc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x394CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CC0u;
        // 0x394cc4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394cc0) {
            ctx->pc = 0x394CE4u;
            goto label_394ce4;
        }
    }
    ctx->pc = 0x394CC8u;
    // 0x394cc8: 0xc0e52fe  jal         func_394BF8
    ctx->pc = 0x394CC8u;
    SET_GPR_U32(ctx, 31, 0x394CD0u);
    ctx->pc = 0x394BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394BF8u, 0x394CC8u, 0x394CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394CD0u;
label_394cd0:
    // 0x394cd0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x394CD0u;
    {
        const bool branch_taken_0x394cd0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x394CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CD0u;
        // 0x394cd4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394cd0) {
            ctx->pc = 0x394CE8u;
            goto label_394ce8;
        }
    }
    ctx->pc = 0x394CD8u;
    // 0x394cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x394cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394cdc: 0xc0e53da  jal         func_394F68
    ctx->pc = 0x394CDCu;
    SET_GPR_U32(ctx, 31, 0x394CE4u);
    ctx->pc = 0x394CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394CDCu;
    // 0x394ce0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F68u, 0x394CDCu, 0x394CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394CE4u;
label_394ce4:
    // 0x394ce4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x394ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_394ce8:
    // 0x394ce8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x394ce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394cec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x394cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394cf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x394cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394cf4: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x394CF4u;
    SET_GPR_U32(ctx, 31, 0x394CFCu);
    ctx->pc = 0x394CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394CF4u;
    // 0x394cf8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x394CF4u, 0x394CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394CFCu;
label_394cfc:
    // 0x394cfc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x394cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x394d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394d04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x394d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x394d08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x394d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394d0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x394d0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x394d10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x394d10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394d14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x394d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x394d18: 0x3e00008  jr          $ra
    ctx->pc = 0x394D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D18u;
        // 0x394d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394D20u;
}
