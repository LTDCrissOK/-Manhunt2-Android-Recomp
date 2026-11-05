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

// Function: sub_00335C80
// Address: 0x335c80 - 0x335d08
void sub_00335C80_0x335c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335C80_0x335c80");
#endif

    switch (ctx->pc) {
        case 0x335ca8u: goto label_335ca8;
        case 0x335cccu: goto label_335ccc;
        case 0x335cf0u: goto label_335cf0;
        default: break;
    }

    ctx->pc = 0x335c80u;

    // 0x335c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335c84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335c88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x335c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335c90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x335c94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x335c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x335c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x335c9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x335c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ca0: 0x26230018  addiu       $v1, $s1, 0x18
    ctx->pc = 0x335ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x335ca4: 0x24040067  addiu       $a0, $zero, 0x67
    ctx->pc = 0x335ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_335ca8:
    // 0x335ca8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x335ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x335cac: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x335CACu;
    {
        const bool branch_taken_0x335cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x335cac) {
            ctx->pc = 0x335CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335CACu;
            // 0x335cb0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335CB4u;
            goto label_335cb4;
        }
    }
    ctx->pc = 0x335CB4u;
label_335cb4:
    // 0x335cb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x335cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x335cb8: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x335CB8u;
    {
        const bool branch_taken_0x335cb8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x335CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335CB8u;
        // 0x335cbc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335cb8) {
            ctx->pc = 0x335CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335ca8;
        }
    }
    ctx->pc = 0x335CC0u;
    // 0x335cc0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x335cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x335cc4: 0xc0fba90  jal         func_3EEA40
    ctx->pc = 0x335CC4u;
    SET_GPR_U32(ctx, 31, 0x335CCCu);
    ctx->pc = 0x335CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335CC4u;
    // 0x335cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEA40u, 0x335CC4u, 0x335CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335CCCu;
label_335ccc:
    // 0x335ccc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x335cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x335cd0: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x335CD0u;
    {
        const bool branch_taken_0x335cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x335cd0) {
            ctx->pc = 0x335CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335CD0u;
            // 0x335cd4: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335CD8u;
            goto label_335cd8;
        }
    }
    ctx->pc = 0x335CD8u;
label_335cd8:
    // 0x335cd8: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x335CD8u;
    {
        const bool branch_taken_0x335cd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x335cd8) {
            ctx->pc = 0x335CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335CD8u;
            // 0x335cdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335CF4u;
            goto label_335cf4;
        }
    }
    ctx->pc = 0x335CE0u;
    // 0x335ce0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335CE0u;
    {
        const bool branch_taken_0x335ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x335CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335CE0u;
        // 0x335ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ce0) {
            ctx->pc = 0x335CF0u;
            goto label_335cf0;
        }
    }
    ctx->pc = 0x335CE8u;
    // 0x335ce8: 0xc0cdb7a  jal         func_336DE8
    ctx->pc = 0x335CE8u;
    SET_GPR_U32(ctx, 31, 0x335CF0u);
    ctx->pc = 0x335CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335CE8u;
    // 0x335cec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336DE8u, 0x335CE8u, 0x335CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335CF0u;
label_335cf0:
    // 0x335cf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_335cf4:
    // 0x335cf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335cf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335cf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335cfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x335cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x335d00: 0x3e00008  jr          $ra
    ctx->pc = 0x335D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D00u;
        // 0x335d04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335D08u;
}
