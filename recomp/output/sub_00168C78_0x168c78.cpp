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

// Function: sub_00168C78
// Address: 0x168c78 - 0x168ce8
void sub_00168C78_0x168c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168C78_0x168c78");
#endif

    switch (ctx->pc) {
        case 0x168ca0u: goto label_168ca0;
        case 0x168cb8u: goto label_168cb8;
        default: break;
    }

    ctx->pc = 0x168c78u;

    // 0x168c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168c7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168c80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168c84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x168c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168c8c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x168c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x168c90: 0x96300320  lhu         $s0, 0x320($s1)
    ctx->pc = 0x168c90u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x168c94: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x168c94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x168c98: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x168C98u;
    SET_GPR_U32(ctx, 31, 0x168CA0u);
    ctx->pc = 0x168C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168C98u;
    // 0x168c9c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x168C98u, 0x168CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168CA0u;
label_168ca0:
    // 0x168ca0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x168ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x168ca4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x168ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x168ca8: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x168ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x168cac: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168CACu;
    {
        const bool branch_taken_0x168cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CACu;
        // 0x168cb0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cac) {
            ctx->pc = 0x168CD0u;
            goto label_168cd0;
        }
    }
    ctx->pc = 0x168CB4u;
    // 0x168cb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x168cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_168cb8:
    // 0x168cb8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x168cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x168cbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x168cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x168cc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x168cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x168cc4: 0x0  nop
    ctx->pc = 0x168cc4u;
    // NOP
    // 0x168cc8: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x168CC8u;
    {
        const bool branch_taken_0x168cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x168CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CC8u;
        // 0x168ccc: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cc8) {
            ctx->pc = 0x168CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168cb8;
        }
    }
    ctx->pc = 0x168CD0u;
label_168cd0:
    // 0x168cd0: 0xae240324  sw          $a0, 0x324($s1)
    ctx->pc = 0x168cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 804), GPR_U32(ctx, 4));
    // 0x168cd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168cd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168cdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x168CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CE0u;
        // 0x168ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168CE8u;
}
