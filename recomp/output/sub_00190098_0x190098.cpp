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

// Function: sub_00190098
// Address: 0x190098 - 0x1900e0
void sub_00190098_0x190098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190098_0x190098");
#endif

    switch (ctx->pc) {
        case 0x190098u: goto label_190098;
        case 0x19009cu: goto label_19009c;
        case 0x1900a0u: goto label_1900a0;
        case 0x1900a4u: goto label_1900a4;
        case 0x1900a8u: goto label_1900a8;
        case 0x1900acu: goto label_1900ac;
        case 0x1900b0u: goto label_1900b0;
        case 0x1900b4u: goto label_1900b4;
        case 0x1900b8u: goto label_1900b8;
        case 0x1900bcu: goto label_1900bc;
        case 0x1900c0u: goto label_1900c0;
        case 0x1900c4u: goto label_1900c4;
        case 0x1900c8u: goto label_1900c8;
        case 0x1900ccu: goto label_1900cc;
        case 0x1900d0u: goto label_1900d0;
        case 0x1900d4u: goto label_1900d4;
        case 0x1900d8u: goto label_1900d8;
        case 0x1900dcu: goto label_1900dc;
        default: break;
    }

    ctx->pc = 0x190098u;

label_190098:
    // 0x190098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19009c:
    // 0x19009c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1900a0:
    // 0x1900a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1900a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1900a4:
    // 0x1900a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1900a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1900a8:
    // 0x1900a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1900a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1900ac:
    // 0x1900ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1900b0:
    if (ctx->pc == 0x1900B0u) {
        ctx->pc = 0x1900B4u;
        goto label_1900b4;
    }
    ctx->pc = 0x1900ACu;
    {
        const bool branch_taken_0x1900ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1900ac) {
            ctx->pc = 0x1900C4u;
            goto label_1900c4;
        }
    }
    ctx->pc = 0x1900B4u;
label_1900b4:
    // 0x1900b4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1900b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1900b8:
    // 0x1900b8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1900b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1900bc:
    // 0x1900bc: 0x40f809  jalr        $v0
label_1900c0:
    if (ctx->pc == 0x1900C0u) {
        ctx->pc = 0x1900C4u;
        goto label_1900c4;
    }
    ctx->pc = 0x1900BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1900C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1900BCu, 0x1900C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1900C4u;
label_1900c4:
    // 0x1900c4: 0xc095510  jal         func_255440
label_1900c8:
    if (ctx->pc == 0x1900C8u) {
        ctx->pc = 0x1900C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900C4u;
        // 0x1900c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1900CCu;
        goto label_1900cc;
    }
    ctx->pc = 0x1900C4u;
    SET_GPR_U32(ctx, 31, 0x1900CCu);
    ctx->pc = 0x1900C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1900C4u;
    // 0x1900c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255440u, 0x1900C4u, 0x1900CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1900CCu;
label_1900cc:
    // 0x1900cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1900ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1900d0:
    // 0x1900d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1900d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1900d4:
    // 0x1900d4: 0x3e00008  jr          $ra
label_1900d8:
    if (ctx->pc == 0x1900D8u) {
        ctx->pc = 0x1900D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900D4u;
        // 0x1900d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1900DCu;
        goto label_1900dc;
    }
    ctx->pc = 0x1900D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1900D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900D4u;
        // 0x1900d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1900D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1900DCu;
label_1900dc:
    // 0x1900dc: 0x0  nop
    ctx->pc = 0x1900dcu;
    // NOP
    ctx->pc = 0x1900e0u;
}
