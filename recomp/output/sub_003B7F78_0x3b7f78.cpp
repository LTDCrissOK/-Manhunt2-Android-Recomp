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

// Function: sub_003B7F78
// Address: 0x3b7f78 - 0x3b7fd0
void sub_003B7F78_0x3b7f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7F78_0x3b7f78");
#endif

    switch (ctx->pc) {
        case 0x3b7f78u: goto label_3b7f78;
        case 0x3b7f7cu: goto label_3b7f7c;
        case 0x3b7f80u: goto label_3b7f80;
        case 0x3b7f84u: goto label_3b7f84;
        case 0x3b7f88u: goto label_3b7f88;
        case 0x3b7f8cu: goto label_3b7f8c;
        case 0x3b7f90u: goto label_3b7f90;
        case 0x3b7f94u: goto label_3b7f94;
        case 0x3b7f98u: goto label_3b7f98;
        case 0x3b7f9cu: goto label_3b7f9c;
        case 0x3b7fa0u: goto label_3b7fa0;
        case 0x3b7fa4u: goto label_3b7fa4;
        case 0x3b7fa8u: goto label_3b7fa8;
        case 0x3b7facu: goto label_3b7fac;
        case 0x3b7fb0u: goto label_3b7fb0;
        case 0x3b7fb4u: goto label_3b7fb4;
        case 0x3b7fb8u: goto label_3b7fb8;
        case 0x3b7fbcu: goto label_3b7fbc;
        case 0x3b7fc0u: goto label_3b7fc0;
        case 0x3b7fc4u: goto label_3b7fc4;
        case 0x3b7fc8u: goto label_3b7fc8;
        case 0x3b7fccu: goto label_3b7fcc;
        default: break;
    }

    ctx->pc = 0x3b7f78u;

label_3b7f78:
    // 0x3b7f78: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3b7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3b7f7c:
    // 0x3b7f7c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7f7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b7f80:
    // 0x3b7f80: 0x8c459508  lw          $a1, -0x6AF8($v0)
    ctx->pc = 0x3b7f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939912)));
label_3b7f84:
    // 0x3b7f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b7f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b7f88:
    // 0x3b7f88: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_3b7f8c:
    if (ctx->pc == 0x3B7F8Cu) {
        ctx->pc = 0x3B7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F88u;
        // 0x3b7f8c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7F90u;
        goto label_3b7f90;
    }
    ctx->pc = 0x3B7F88u;
    {
        const bool branch_taken_0x3b7f88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F88u;
        // 0x3b7f8c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f88) {
            ctx->pc = 0x3B7FBCu;
            goto label_3b7fbc;
        }
    }
    ctx->pc = 0x3B7F90u;
label_3b7f90:
    // 0x3b7f90: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3b7f94:
    // 0x3b7f94: 0x8c43aca4  lw          $v1, -0x535C($v0)
    ctx->pc = 0x3b7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945956)));
label_3b7f98:
    // 0x3b7f98: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_3b7f9c:
    if (ctx->pc == 0x3B7F9Cu) {
        ctx->pc = 0x3B7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F98u;
        // 0x3b7f9c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7FA0u;
        goto label_3b7fa0;
    }
    ctx->pc = 0x3B7F98u;
    {
        const bool branch_taken_0x3b7f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F98u;
        // 0x3b7f9c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f98) {
            ctx->pc = 0x3B7FC0u;
            goto label_3b7fc0;
        }
    }
    ctx->pc = 0x3B7FA0u;
label_3b7fa0:
    // 0x3b7fa0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3b7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3b7fa4:
    // 0x3b7fa4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3b7fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3b7fa8:
    // 0x3b7fa8: 0x8c5c950c  lw          $gp, -0x6AF4($v0)
    ctx->pc = 0x3b7fa8u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939916)));
label_3b7fac:
    // 0x3b7fac: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3b7facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3b7fb0:
    // 0x3b7fb0: 0xa0f809  jalr        $a1
label_3b7fb4:
    if (ctx->pc == 0x3B7FB4u) {
        ctx->pc = 0x3B7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7FB0u;
        // 0x3b7fb4: 0x8c649510  lw          $a0, -0x6AF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7FB8u;
        goto label_3b7fb8;
    }
    ctx->pc = 0x3B7FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3B7FB8u);
        ctx->pc = 0x3B7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7FB0u;
        // 0x3b7fb4: 0x8c649510  lw          $a0, -0x6AF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939920)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7FB0u, 0x3B7FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B7FB8u;
label_3b7fb8:
    // 0x3b7fb8: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x3b7fb8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b7fbc:
    // 0x3b7fbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b7fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b7fc0:
    // 0x3b7fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b7fc4:
    // 0x3b7fc4: 0x3e00008  jr          $ra
label_3b7fc8:
    if (ctx->pc == 0x3B7FC8u) {
        ctx->pc = 0x3B7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7FC4u;
        // 0x3b7fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7FCCu;
        goto label_3b7fcc;
    }
    ctx->pc = 0x3B7FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7FC4u;
        // 0x3b7fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7FCCu;
label_3b7fcc:
    // 0x3b7fcc: 0x0  nop
    ctx->pc = 0x3b7fccu;
    // NOP
    ctx->pc = 0x3b7fd0u;
}
