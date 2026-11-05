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

// Function: sub_00365810
// Address: 0x365810 - 0x3658a0
void sub_00365810_0x365810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365810_0x365810");
#endif

    switch (ctx->pc) {
        case 0x365840u: goto label_365840;
        case 0x365848u: goto label_365848;
        default: break;
    }

    ctx->pc = 0x365810u;

    // 0x365810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x365814: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x365814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x365818: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x365818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36581c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x365820: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x365820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x365824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x365828: 0x2444dc10  addiu       $a0, $v0, -0x23F0
    ctx->pc = 0x365828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x36582c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x365830: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x365830u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BDC14u));
    // 0x365834: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x365834u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5BDC1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC1Cu, _value); } while (0);
    // 0x365838: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x365838u;
    {
        const bool branch_taken_0x365838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365838u;
        // 0x36583c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365838) {
            ctx->pc = 0x365854u;
            goto label_365854;
        }
    }
    ctx->pc = 0x365840u;
label_365840:
    // 0x365840: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365840u;
    SET_GPR_U32(ctx, 31, 0x365848u);
    ctx->pc = 0x365844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365840u;
    // 0x365844: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365840u, 0x365848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365848u;
label_365848:
    // 0x365848: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36584c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x36584Cu;
    {
        const bool branch_taken_0x36584c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36584Cu;
        // 0x365850: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36584c) {
            ctx->pc = 0x365884u;
            goto label_365884;
        }
    }
    ctx->pc = 0x365854u;
label_365854:
    // 0x365854: 0x2623dc10  addiu       $v1, $s1, -0x23F0
    ctx->pc = 0x365854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958096));
    // 0x365858: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x365858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x36585c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36585Cu;
    {
        const bool branch_taken_0x36585c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36585Cu;
        // 0x365860: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36585c) {
            ctx->pc = 0x365868u;
            goto label_365868;
        }
    }
    ctx->pc = 0x365864u;
    // 0x365864: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x365864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_365868:
    // 0x365868: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x365868u;
    {
        const bool branch_taken_0x365868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365868) {
            ctx->pc = 0x365878u;
            goto label_365878;
        }
    }
    ctx->pc = 0x365870u;
    // 0x365870: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x365870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x365874: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x365874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_365878:
    // 0x365878: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x365878u;
    {
        const bool branch_taken_0x365878 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x365878) {
            ctx->pc = 0x36587Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365878u;
            // 0x36587c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365840;
        }
    }
    ctx->pc = 0x365880u;
    // 0x365880: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365884:
    // 0x365884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x365884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x365888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36588c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36588cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365890: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x365890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365894: 0x3e00008  jr          $ra
    ctx->pc = 0x365894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365894u;
        // 0x365898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36589Cu;
    // 0x36589c: 0x0  nop
    ctx->pc = 0x36589cu;
    // NOP
    ctx->pc = 0x3658a0u;
}
