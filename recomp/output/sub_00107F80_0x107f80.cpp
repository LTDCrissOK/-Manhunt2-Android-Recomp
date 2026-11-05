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

// Function: sub_00107F80
// Address: 0x107f80 - 0x107fb0
void sub_00107F80_0x107f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107F80_0x107f80");
#endif

    switch (ctx->pc) {
        case 0x107f80u: goto label_107f80;
        case 0x107f84u: goto label_107f84;
        case 0x107f88u: goto label_107f88;
        case 0x107f8cu: goto label_107f8c;
        case 0x107f90u: goto label_107f90;
        case 0x107f94u: goto label_107f94;
        case 0x107f98u: goto label_107f98;
        case 0x107f9cu: goto label_107f9c;
        case 0x107fa0u: goto label_107fa0;
        case 0x107fa4u: goto label_107fa4;
        case 0x107fa8u: goto label_107fa8;
        case 0x107facu: goto label_107fac;
        default: break;
    }

    ctx->pc = 0x107f80u;

label_107f80:
    // 0x107f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107f84:
    // 0x107f84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107f88:
    // 0x107f88: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107f8c:
    if (ctx->pc == 0x107F8Cu) {
        ctx->pc = 0x107F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F88u;
        // 0x107f8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107F90u;
        goto label_107f90;
    }
    ctx->pc = 0x107F88u;
    {
        const bool branch_taken_0x107f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F88u;
        // 0x107f8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f88) {
            ctx->pc = 0x107FA0u;
            goto label_107fa0;
        }
    }
    ctx->pc = 0x107F90u;
label_107f90:
    // 0x107f90: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107f94:
    // 0x107f94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107f98:
    // 0x107f98: 0x40f809  jalr        $v0
label_107f9c:
    if (ctx->pc == 0x107F9Cu) {
        ctx->pc = 0x107F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F98u;
        // 0x107f9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107FA0u;
        goto label_107fa0;
    }
    ctx->pc = 0x107F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107FA0u);
        ctx->pc = 0x107F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F98u;
        // 0x107f9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107F98u, 0x107FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107FA0u;
label_107fa0:
    // 0x107fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107fa4:
    // 0x107fa4: 0x3e00008  jr          $ra
label_107fa8:
    if (ctx->pc == 0x107FA8u) {
        ctx->pc = 0x107FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FA4u;
        // 0x107fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107FACu;
        goto label_107fac;
    }
    ctx->pc = 0x107FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FA4u;
        // 0x107fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107FACu;
label_107fac:
    // 0x107fac: 0x0  nop
    ctx->pc = 0x107facu;
    // NOP
    ctx->pc = 0x107fb0u;
}
