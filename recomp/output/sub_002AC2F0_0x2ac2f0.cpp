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

// Function: sub_002AC2F0
// Address: 0x2ac2f0 - 0x2ac350
void sub_002AC2F0_0x2ac2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC2F0_0x2ac2f0");
#endif

    switch (ctx->pc) {
        case 0x2ac304u: goto label_2ac304;
        case 0x2ac30cu: goto label_2ac30c;
        case 0x2ac314u: goto label_2ac314;
        default: break;
    }

    ctx->pc = 0x2ac2f0u;

    // 0x2ac2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac2f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac2f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ac2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ac2fc: 0xc0ab41a  jal         func_2AD068
    ctx->pc = 0x2AC2FCu;
    SET_GPR_U32(ctx, 31, 0x2AC304u);
    ctx->pc = 0x2AC300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC2FCu;
    // 0x2ac300: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD068u, 0x2AC2FCu, 0x2AC304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC304u;
label_2ac304:
    // 0x2ac304: 0xc0f8d94  jal         func_3E3650
    ctx->pc = 0x2AC304u;
    SET_GPR_U32(ctx, 31, 0x2AC30Cu);
    ctx->pc = 0x2AC308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC304u;
    // 0x2ac308: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3650u, 0x2AC304u, 0x2AC30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC30Cu;
label_2ac30c:
    // 0x2ac30c: 0xc0f8db2  jal         func_3E36C8
    ctx->pc = 0x2AC30Cu;
    SET_GPR_U32(ctx, 31, 0x2AC314u);
    ctx->pc = 0x2AC310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC30Cu;
    // 0x2ac310: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E36C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E36C8u, 0x2AC30Cu, 0x2AC314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC314u;
label_2ac314:
    // 0x2ac314: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2ac314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2ac318: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x2ac318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x2ac31c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x2ac31cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x2ac320: 0x24633820  addiu       $v1, $v1, 0x3820
    ctx->pc = 0x2ac320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14368));
    // 0x2ac324: 0x24843810  addiu       $a0, $a0, 0x3810
    ctx->pc = 0x2ac324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14352));
    // 0x2ac328: 0x24a53830  addiu       $a1, $a1, 0x3830
    ctx->pc = 0x2ac328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14384));
    // 0x2ac32c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2ac32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2ac330: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ac330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac334: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x2ac334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x2ac338: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2ac338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2ac33c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2ac33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2ac340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac344: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ac344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ac348: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC348u;
        // 0x2ac34c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC350u;
}
