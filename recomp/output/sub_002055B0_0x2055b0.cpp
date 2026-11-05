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

// Function: sub_002055B0
// Address: 0x2055b0 - 0x205610
void sub_002055B0_0x2055b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002055B0_0x2055b0");
#endif

    switch (ctx->pc) {
        case 0x2055d8u: goto label_2055d8;
        case 0x2055f8u: goto label_2055f8;
        default: break;
    }

    ctx->pc = 0x2055b0u;

    // 0x2055b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2055b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2055b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2055b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2055b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2055b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2055bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2055bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2055c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2055c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2055c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2055c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2055c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2055c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2055cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2055ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2055d0: 0xc0e6fbe  jal         func_39BEF8
    ctx->pc = 0x2055D0u;
    SET_GPR_U32(ctx, 31, 0x2055D8u);
    ctx->pc = 0x2055D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2055D0u;
    // 0x2055d4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BEF8u, 0x2055D0u, 0x2055D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055D8u;
label_2055d8:
    // 0x2055d8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2055d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2055dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2055dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2055e0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2055E0u;
    {
        const bool branch_taken_0x2055e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2055e0) {
            ctx->pc = 0x2055E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2055E0u;
            // 0x2055e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2055FCu;
            goto label_2055fc;
        }
    }
    ctx->pc = 0x2055E8u;
    // 0x2055e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2055e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2055ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2055ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2055f0: 0xc0e6fbe  jal         func_39BEF8
    ctx->pc = 0x2055F0u;
    SET_GPR_U32(ctx, 31, 0x2055F8u);
    ctx->pc = 0x2055F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2055F0u;
    // 0x2055f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BEF8u, 0x2055F0u, 0x2055F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055F8u;
label_2055f8:
    // 0x2055f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2055f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2055fc:
    // 0x2055fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2055fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x205600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205604: 0x3e00008  jr          $ra
    ctx->pc = 0x205604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205604u;
        // 0x205608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20560Cu;
    // 0x20560c: 0x0  nop
    ctx->pc = 0x20560cu;
    // NOP
    ctx->pc = 0x205610u;
}
