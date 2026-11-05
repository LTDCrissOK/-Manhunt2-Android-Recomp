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

// Function: sub_003A21A0
// Address: 0x3a21a0 - 0x3a2208
void sub_003A21A0_0x3a21a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A21A0_0x3a21a0");
#endif

    switch (ctx->pc) {
        case 0x3a21c4u: goto label_3a21c4;
        default: break;
    }

    ctx->pc = 0x3a21a0u;

    // 0x3a21a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a21a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a21a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a21a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a21a8: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x3a21a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
    // 0x3a21ac: 0x26106968  addiu       $s0, $s0, 0x6968
    ctx->pc = 0x3a21acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26984));
    // 0x3a21b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a21b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a21b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a21b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a21b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a21b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a21bc: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A21BCu;
    SET_GPR_U32(ctx, 31, 0x3A21C4u);
    ctx->pc = 0x3A21C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A21BCu;
    // 0x3a21c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A21BCu, 0x3A21C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A21C4u;
label_3a21c4:
    // 0x3a21c4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x3a21c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a21c8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3a21c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a21cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a21ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a21d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A21D0u;
    {
        const bool branch_taken_0x3a21d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A21D0u;
        // 0x3a21d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a21d0) {
            ctx->pc = 0x3A21F0u;
            goto label_3a21f0;
        }
    }
    ctx->pc = 0x3A21D8u;
    // 0x3a21d8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3a21d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a21dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a21dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a21e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a21e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a21e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a21e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a21e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A21E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A21ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A21E8u;
        // 0x3a21ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A21E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A21F0u;
label_3a21f0:
    // 0x3a21f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a21f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a21f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a21f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a21f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a21f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a21fc: 0x80efa49  j           func_3BE924
    ctx->pc = 0x3A21FCu;
    ctx->pc = 0x3A2200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A21FCu;
    // 0x3a2200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    sub_003BE924_0x3be924(rdram, ctx, runtime); return;
    ctx->pc = 0x3A2204u;
    // 0x3a2204: 0x0  nop
    ctx->pc = 0x3a2204u;
    // NOP
    ctx->pc = 0x3a2208u;
}
