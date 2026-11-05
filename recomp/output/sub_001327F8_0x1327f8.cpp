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

// Function: sub_001327F8
// Address: 0x1327f8 - 0x132848
void sub_001327F8_0x1327f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001327F8_0x1327f8");
#endif

    switch (ctx->pc) {
        case 0x132820u: goto label_132820;
        case 0x132834u: goto label_132834;
        default: break;
    }

    ctx->pc = 0x1327f8u;

    // 0x1327f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1327f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1327fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1327fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132800: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13280c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132810: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132810u;
    {
        const bool branch_taken_0x132810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132810u;
        // 0x132814: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132810) {
            ctx->pc = 0x132820u;
            goto label_132820;
        }
    }
    ctx->pc = 0x132818u;
    // 0x132818: 0xc04ca24  jal         func_132890
    ctx->pc = 0x132818u;
    SET_GPR_U32(ctx, 31, 0x132820u);
    ctx->pc = 0x132890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132890u, 0x132818u, 0x132820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132820u;
label_132820:
    // 0x132820: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x132820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x132824: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x132824u;
    {
        const bool branch_taken_0x132824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132824) {
            ctx->pc = 0x132828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132824u;
            // 0x132828: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132838u;
            goto label_132838;
        }
    }
    ctx->pc = 0x13282Cu;
    // 0x13282c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x13282Cu;
    SET_GPR_U32(ctx, 31, 0x132834u);
    ctx->pc = 0x132830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13282Cu;
    // 0x132830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x13282Cu, 0x132834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132834u;
label_132834:
    // 0x132834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132838:
    // 0x132838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13283c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13283cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132840: 0x3e00008  jr          $ra
    ctx->pc = 0x132840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132840u;
        // 0x132844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132848u;
}
