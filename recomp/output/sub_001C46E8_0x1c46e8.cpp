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

// Function: sub_001C46E8
// Address: 0x1c46e8 - 0x1c4768
void sub_001C46E8_0x1c46e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C46E8_0x1c46e8");
#endif

    switch (ctx->pc) {
        case 0x1c4710u: goto label_1c4710;
        case 0x1c4728u: goto label_1c4728;
        default: break;
    }

    ctx->pc = 0x1c46e8u;

    // 0x1c46e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c46e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c46ec: 0x24a50488  addiu       $a1, $a1, 0x488
    ctx->pc = 0x1c46ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1160));
    // 0x1c46f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c46f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c46f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c46f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c46f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c46f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c46fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c4700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4704: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1c4704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c4708: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4708u;
    {
        const bool branch_taken_0x1c4708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4708u;
        // 0x1c470c: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4708) {
            ctx->pc = 0x1C4728u;
            goto label_1c4728;
        }
    }
    ctx->pc = 0x1C4710u;
label_1c4710:
    // 0x1c4710: 0x8c460064  lw          $a2, 0x64($v0)
    ctx->pc = 0x1c4710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1c4714: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x1c4714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1c4718: 0x50660004  beql        $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4718u;
    {
        const bool branch_taken_0x1c4718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1c4718) {
            ctx->pc = 0x1C471Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4718u;
            // 0x1c471c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C472Cu;
            goto label_1c472c;
        }
    }
    ctx->pc = 0x1C4720u;
    // 0x1c4720: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1C4720u;
    SET_GPR_U32(ctx, 31, 0x1C4728u);
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1C4720u, 0x1C4728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4728u;
label_1c4728:
    // 0x1c4728: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c472c:
    // 0x1c472c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4730: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4730u;
    {
        const bool branch_taken_0x1c4730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4730u;
        // 0x1c4734: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4730) {
            ctx->pc = 0x1C473Cu;
            goto label_1c473c;
        }
    }
    ctx->pc = 0x1C4738u;
    // 0x1c4738: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c4738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c473c:
    // 0x1c473c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C473Cu;
    {
        const bool branch_taken_0x1c473c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C473Cu;
        // 0x1c4740: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c473c) {
            ctx->pc = 0x1C474Cu;
            goto label_1c474c;
        }
    }
    ctx->pc = 0x1C4744u;
    // 0x1c4744: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c4744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4748: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c4748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1c474c:
    // 0x1c474c: 0x5460fff0  bnel        $v1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C474Cu;
    {
        const bool branch_taken_0x1c474c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c474c) {
            ctx->pc = 0x1C4750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C474Cu;
            // 0x1c4750: 0x8c621000  lw          $v0, 0x1000($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4710;
        }
    }
    ctx->pc = 0x1C4754u;
    // 0x1c4754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4758: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c475c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c475cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4760: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4760u;
        // 0x1c4764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4768u;
}
