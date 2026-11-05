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

// Function: sub_00134EA8
// Address: 0x134ea8 - 0x134f10
void sub_00134EA8_0x134ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134EA8_0x134ea8");
#endif

    switch (ctx->pc) {
        case 0x134ed0u: goto label_134ed0;
        default: break;
    }

    ctx->pc = 0x134ea8u;

    // 0x134ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134eac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x134eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x134eb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134eb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x134eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134eb8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134EB8u;
    {
        const bool branch_taken_0x134eb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x134EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EB8u;
        // 0x134ebc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134eb8) {
            ctx->pc = 0x134EC8u;
            goto label_134ec8;
        }
    }
    ctx->pc = 0x134EC0u;
    // 0x134ec0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x134EC0u;
    {
        const bool branch_taken_0x134ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EC0u;
        // 0x134ec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ec0) {
            ctx->pc = 0x134EFCu;
            goto label_134efc;
        }
    }
    ctx->pc = 0x134EC8u;
label_134ec8:
    // 0x134ec8: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x134EC8u;
    SET_GPR_U32(ctx, 31, 0x134ED0u);
    ctx->pc = 0x134F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134F10u, 0x134EC8u, 0x134ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134ED0u;
label_134ed0:
    // 0x134ed0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x134ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x134ed4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x134ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x134ed8: 0x24458ed0  addiu       $a1, $v0, -0x7130
    ctx->pc = 0x134ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x134edc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x134edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x134ee0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134ee4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134EE4u;
    {
        const bool branch_taken_0x134ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EE4u;
        // 0x134ee8: 0xa41821  addu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ee4) {
            ctx->pc = 0x134EF8u;
            goto label_134ef8;
        }
    }
    ctx->pc = 0x134EECu;
    // 0x134eec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x134eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x134ef0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x134EF0u;
    {
        const bool branch_taken_0x134ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EF0u;
        // 0x134ef4: 0x50102a  slt         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ef0) {
            ctx->pc = 0x134EFCu;
            goto label_134efc;
        }
    }
    ctx->pc = 0x134EF8u;
label_134ef8:
    // 0x134ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134efc:
    // 0x134efc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134f00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x134f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134f04: 0x3e00008  jr          $ra
    ctx->pc = 0x134F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F04u;
        // 0x134f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134F0Cu;
    // 0x134f0c: 0x0  nop
    ctx->pc = 0x134f0cu;
    // NOP
    ctx->pc = 0x134f10u;
}
