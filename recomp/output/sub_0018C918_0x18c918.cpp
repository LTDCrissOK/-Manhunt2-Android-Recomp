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

// Function: sub_0018C918
// Address: 0x18c918 - 0x18c960
void sub_0018C918_0x18c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C918_0x18c918");
#endif

    switch (ctx->pc) {
        case 0x18c918u: goto label_18c918;
        case 0x18c91cu: goto label_18c91c;
        case 0x18c920u: goto label_18c920;
        case 0x18c924u: goto label_18c924;
        case 0x18c928u: goto label_18c928;
        case 0x18c92cu: goto label_18c92c;
        case 0x18c930u: goto label_18c930;
        case 0x18c934u: goto label_18c934;
        case 0x18c938u: goto label_18c938;
        case 0x18c93cu: goto label_18c93c;
        case 0x18c940u: goto label_18c940;
        case 0x18c944u: goto label_18c944;
        case 0x18c948u: goto label_18c948;
        case 0x18c94cu: goto label_18c94c;
        case 0x18c950u: goto label_18c950;
        case 0x18c954u: goto label_18c954;
        case 0x18c958u: goto label_18c958;
        case 0x18c95cu: goto label_18c95c;
        default: break;
    }

    ctx->pc = 0x18c918u;

label_18c918:
    // 0x18c918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18c91c:
    // 0x18c91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18c920:
    // 0x18c920: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18c924:
    // 0x18c924: 0xc061a1e  jal         func_186878
label_18c928:
    if (ctx->pc == 0x18C928u) {
        ctx->pc = 0x18C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C924u;
        // 0x18c928: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C92Cu;
        goto label_18c92c;
    }
    ctx->pc = 0x18C924u;
    SET_GPR_U32(ctx, 31, 0x18C92Cu);
    ctx->pc = 0x18C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C924u;
    // 0x18c928: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18C924u, 0x18C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C92Cu;
label_18c92c:
    // 0x18c92c: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x18c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
label_18c930:
    // 0x18c930: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18c930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18c934:
    // 0x18c934: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_18c938:
    if (ctx->pc == 0x18C938u) {
        ctx->pc = 0x18C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C934u;
        // 0x18c938: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C93Cu;
        goto label_18c93c;
    }
    ctx->pc = 0x18C934u;
    {
        const bool branch_taken_0x18c934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C934u;
        // 0x18c938: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c934) {
            ctx->pc = 0x18C950u;
            goto label_18c950;
        }
    }
    ctx->pc = 0x18C93Cu;
label_18c93c:
    // 0x18c93c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18c940:
    // 0x18c940: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18c944:
    // 0x18c944: 0x40f809  jalr        $v0
label_18c948:
    if (ctx->pc == 0x18C948u) {
        ctx->pc = 0x18C94Cu;
        goto label_18c94c;
    }
    ctx->pc = 0x18C944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C94Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C944u, 0x18C94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C94Cu;
label_18c94c:
    // 0x18c94c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18c94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18c950:
    // 0x18c950: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18c950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18c954:
    // 0x18c954: 0x3e00008  jr          $ra
label_18c958:
    if (ctx->pc == 0x18C958u) {
        ctx->pc = 0x18C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C954u;
        // 0x18c958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C95Cu;
        goto label_18c95c;
    }
    ctx->pc = 0x18C954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C954u;
        // 0x18c958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C95Cu;
label_18c95c:
    // 0x18c95c: 0x0  nop
    ctx->pc = 0x18c95cu;
    // NOP
    ctx->pc = 0x18c960u;
}
