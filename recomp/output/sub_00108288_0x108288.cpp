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

// Function: sub_00108288
// Address: 0x108288 - 0x1082b8
void sub_00108288_0x108288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108288_0x108288");
#endif

    switch (ctx->pc) {
        case 0x108288u: goto label_108288;
        case 0x10828cu: goto label_10828c;
        case 0x108290u: goto label_108290;
        case 0x108294u: goto label_108294;
        case 0x108298u: goto label_108298;
        case 0x10829cu: goto label_10829c;
        case 0x1082a0u: goto label_1082a0;
        case 0x1082a4u: goto label_1082a4;
        case 0x1082a8u: goto label_1082a8;
        case 0x1082acu: goto label_1082ac;
        case 0x1082b0u: goto label_1082b0;
        case 0x1082b4u: goto label_1082b4;
        default: break;
    }

    ctx->pc = 0x108288u;

label_108288:
    // 0x108288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10828c:
    // 0x10828c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108290:
    // 0x108290: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_108294:
    if (ctx->pc == 0x108294u) {
        ctx->pc = 0x108294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108290u;
        // 0x108294: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108298u;
        goto label_108298;
    }
    ctx->pc = 0x108290u;
    {
        const bool branch_taken_0x108290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108290u;
        // 0x108294: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108290) {
            ctx->pc = 0x1082A8u;
            goto label_1082a8;
        }
    }
    ctx->pc = 0x108298u;
label_108298:
    // 0x108298: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x108298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_10829c:
    // 0x10829c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x10829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1082a0:
    // 0x1082a0: 0x40f809  jalr        $v0
label_1082a4:
    if (ctx->pc == 0x1082A4u) {
        ctx->pc = 0x1082A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082A0u;
        // 0x1082a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1082A8u;
        goto label_1082a8;
    }
    ctx->pc = 0x1082A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1082A8u);
        ctx->pc = 0x1082A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082A0u;
        // 0x1082a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1082A0u, 0x1082A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1082A8u;
label_1082a8:
    // 0x1082a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1082a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1082ac:
    // 0x1082ac: 0x3e00008  jr          $ra
label_1082b0:
    if (ctx->pc == 0x1082B0u) {
        ctx->pc = 0x1082B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082ACu;
        // 0x1082b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1082B4u;
        goto label_1082b4;
    }
    ctx->pc = 0x1082ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1082B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082ACu;
        // 0x1082b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1082ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1082B4u;
label_1082b4:
    // 0x1082b4: 0x0  nop
    ctx->pc = 0x1082b4u;
    // NOP
    ctx->pc = 0x1082b8u;
}
