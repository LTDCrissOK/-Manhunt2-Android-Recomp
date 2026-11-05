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

// Function: sub_00107FE0
// Address: 0x107fe0 - 0x108010
void sub_00107FE0_0x107fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107FE0_0x107fe0");
#endif

    switch (ctx->pc) {
        case 0x107fe0u: goto label_107fe0;
        case 0x107fe4u: goto label_107fe4;
        case 0x107fe8u: goto label_107fe8;
        case 0x107fecu: goto label_107fec;
        case 0x107ff0u: goto label_107ff0;
        case 0x107ff4u: goto label_107ff4;
        case 0x107ff8u: goto label_107ff8;
        case 0x107ffcu: goto label_107ffc;
        case 0x108000u: goto label_108000;
        case 0x108004u: goto label_108004;
        case 0x108008u: goto label_108008;
        case 0x10800cu: goto label_10800c;
        default: break;
    }

    ctx->pc = 0x107fe0u;

label_107fe0:
    // 0x107fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107fe4:
    // 0x107fe4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107fe8:
    // 0x107fe8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107fec:
    if (ctx->pc == 0x107FECu) {
        ctx->pc = 0x107FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FE8u;
        // 0x107fec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107FF0u;
        goto label_107ff0;
    }
    ctx->pc = 0x107FE8u;
    {
        const bool branch_taken_0x107fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FE8u;
        // 0x107fec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fe8) {
            ctx->pc = 0x108000u;
            goto label_108000;
        }
    }
    ctx->pc = 0x107FF0u;
label_107ff0:
    // 0x107ff0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107ff4:
    // 0x107ff4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107ff8:
    // 0x107ff8: 0x40f809  jalr        $v0
label_107ffc:
    if (ctx->pc == 0x107FFCu) {
        ctx->pc = 0x107FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FF8u;
        // 0x107ffc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108000u;
        goto label_108000;
    }
    ctx->pc = 0x107FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108000u);
        ctx->pc = 0x107FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FF8u;
        // 0x107ffc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107FF8u, 0x108000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108000u;
label_108000:
    // 0x108000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108004:
    // 0x108004: 0x3e00008  jr          $ra
label_108008:
    if (ctx->pc == 0x108008u) {
        ctx->pc = 0x108008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108004u;
        // 0x108008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10800Cu;
        goto label_10800c;
    }
    ctx->pc = 0x108004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108004u;
        // 0x108008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10800Cu;
label_10800c:
    // 0x10800c: 0x0  nop
    ctx->pc = 0x10800cu;
    // NOP
    ctx->pc = 0x108010u;
}
