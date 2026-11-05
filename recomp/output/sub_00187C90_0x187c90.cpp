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

// Function: sub_00187C90
// Address: 0x187c90 - 0x187cf8
void sub_00187C90_0x187c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187C90_0x187c90");
#endif

    switch (ctx->pc) {
        case 0x187c90u: goto label_187c90;
        case 0x187c94u: goto label_187c94;
        case 0x187c98u: goto label_187c98;
        case 0x187c9cu: goto label_187c9c;
        case 0x187ca0u: goto label_187ca0;
        case 0x187ca4u: goto label_187ca4;
        case 0x187ca8u: goto label_187ca8;
        case 0x187cacu: goto label_187cac;
        case 0x187cb0u: goto label_187cb0;
        case 0x187cb4u: goto label_187cb4;
        case 0x187cb8u: goto label_187cb8;
        case 0x187cbcu: goto label_187cbc;
        case 0x187cc0u: goto label_187cc0;
        case 0x187cc4u: goto label_187cc4;
        case 0x187cc8u: goto label_187cc8;
        case 0x187cccu: goto label_187ccc;
        case 0x187cd0u: goto label_187cd0;
        case 0x187cd4u: goto label_187cd4;
        case 0x187cd8u: goto label_187cd8;
        case 0x187cdcu: goto label_187cdc;
        case 0x187ce0u: goto label_187ce0;
        case 0x187ce4u: goto label_187ce4;
        case 0x187ce8u: goto label_187ce8;
        case 0x187cecu: goto label_187cec;
        case 0x187cf0u: goto label_187cf0;
        case 0x187cf4u: goto label_187cf4;
        default: break;
    }

    ctx->pc = 0x187c90u;

label_187c90:
    // 0x187c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_187c94:
    // 0x187c94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187c98:
    // 0x187c98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187c9c:
    // 0x187c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187ca0:
    // 0x187ca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_187ca4:
    // 0x187ca4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x187ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_187ca8:
    // 0x187ca8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x187ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_187cac:
    // 0x187cac: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_187cb0:
    if (ctx->pc == 0x187CB0u) {
        ctx->pc = 0x187CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CACu;
        // 0x187cb0: 0xae11004c  sw          $s1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CB4u;
        goto label_187cb4;
    }
    ctx->pc = 0x187CACu;
    {
        const bool branch_taken_0x187cac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x187CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CACu;
        // 0x187cb0: 0xae11004c  sw          $s1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cac) {
            ctx->pc = 0x187CE4u;
            goto label_187ce4;
        }
    }
    ctx->pc = 0x187CB4u;
label_187cb4:
    // 0x187cb4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x187cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_187cb8:
    // 0x187cb8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_187cbc:
    if (ctx->pc == 0x187CBCu) {
        ctx->pc = 0x187CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CB8u;
        // 0x187cbc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CC0u;
        goto label_187cc0;
    }
    ctx->pc = 0x187CB8u;
    {
        const bool branch_taken_0x187cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187cb8) {
            ctx->pc = 0x187CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187CB8u;
            // 0x187cbc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187CD4u;
            goto label_187cd4;
        }
    }
    ctx->pc = 0x187CC0u;
label_187cc0:
    // 0x187cc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187cc4:
    // 0x187cc4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x187cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_187cc8:
    // 0x187cc8: 0x40f809  jalr        $v0
label_187ccc:
    if (ctx->pc == 0x187CCCu) {
        ctx->pc = 0x187CD0u;
        goto label_187cd0;
    }
    ctx->pc = 0x187CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187CD0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187CC8u, 0x187CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187CD0u;
label_187cd0:
    // 0x187cd0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x187cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_187cd4:
    // 0x187cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187cd8:
    // 0x187cd8: 0x8e221060  lw          $v0, 0x1060($s1)
    ctx->pc = 0x187cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4192)));
label_187cdc:
    // 0x187cdc: 0xc062028  jal         func_1880A0
label_187ce0:
    if (ctx->pc == 0x187CE0u) {
        ctx->pc = 0x187CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CDCu;
        // 0x187ce0: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CE4u;
        goto label_187ce4;
    }
    ctx->pc = 0x187CDCu;
    SET_GPR_U32(ctx, 31, 0x187CE4u);
    ctx->pc = 0x187CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187CDCu;
    // 0x187ce0: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1880A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1880A0u, 0x187CDCu, 0x187CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187CE4u;
label_187ce4:
    // 0x187ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187ce8:
    // 0x187ce8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187cec:
    // 0x187cec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187cf0:
    // 0x187cf0: 0x3e00008  jr          $ra
label_187cf4:
    if (ctx->pc == 0x187CF4u) {
        ctx->pc = 0x187CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CF0u;
        // 0x187cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CF8u;
        goto label_fallthrough_0x187cf0;
    }
    ctx->pc = 0x187CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CF0u;
        // 0x187cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x187cf0:
    ctx->pc = 0x187CF8u;
}
