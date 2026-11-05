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

// Function: sub_003356F0
// Address: 0x3356f0 - 0x335750
void sub_003356F0_0x3356f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003356F0_0x3356f0");
#endif

    switch (ctx->pc) {
        case 0x335710u: goto label_335710;
        case 0x33571cu: goto label_33571c;
        default: break;
    }

    ctx->pc = 0x3356f0u;

    // 0x3356f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3356f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3356f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3356f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3356f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3356f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3356fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3356fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335700: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x335700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x335704: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x335704u;
    {
        const bool branch_taken_0x335704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x335708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335704u;
        // 0x335708: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335704) {
            ctx->pc = 0x335734u;
            goto label_335734;
        }
    }
    ctx->pc = 0x33570Cu;
    // 0x33570c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_335710:
    // 0x335710: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x335710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335714: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x335714u;
    SET_GPR_U32(ctx, 31, 0x33571Cu);
    ctx->pc = 0x335718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335714u;
    // 0x335718: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x335714u, 0x33571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33571Cu;
label_33571c:
    // 0x33571c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33571Cu;
    {
        const bool branch_taken_0x33571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33571c) {
            ctx->pc = 0x335720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33571Cu;
            // 0x335720: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33572Cu;
            goto label_33572c;
        }
    }
    ctx->pc = 0x335724u;
    // 0x335724: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x335724u;
    {
        const bool branch_taken_0x335724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335724u;
        // 0x335728: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335724) {
            ctx->pc = 0x335738u;
            goto label_335738;
        }
    }
    ctx->pc = 0x33572Cu;
label_33572c:
    // 0x33572c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33572Cu;
    {
        const bool branch_taken_0x33572c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x33572c) {
            ctx->pc = 0x335730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33572Cu;
            // 0x335730: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335710;
        }
    }
    ctx->pc = 0x335734u;
label_335734:
    // 0x335734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x335734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335738:
    // 0x335738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33573c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33573cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335744: 0x3e00008  jr          $ra
    ctx->pc = 0x335744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335744u;
        // 0x335748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33574Cu;
    // 0x33574c: 0x0  nop
    ctx->pc = 0x33574cu;
    // NOP
    ctx->pc = 0x335750u;
}
