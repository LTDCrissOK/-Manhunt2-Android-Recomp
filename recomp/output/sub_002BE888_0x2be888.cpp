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

// Function: sub_002BE888
// Address: 0x2be888 - 0x2be8e8
void sub_002BE888_0x2be888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE888_0x2be888");
#endif

    switch (ctx->pc) {
        case 0x2be89cu: goto label_2be89c;
        case 0x2be8b0u: goto label_2be8b0;
        case 0x2be8d0u: goto label_2be8d0;
        default: break;
    }

    ctx->pc = 0x2be888u;

    // 0x2be888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be88c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2be88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2be890: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2be890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2be894: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BE894u;
    SET_GPR_U32(ctx, 31, 0x2BE89Cu);
    ctx->pc = 0x2BE898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE894u;
    // 0x2be898: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BE894u, 0x2BE89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE89Cu;
label_2be89c:
    // 0x2be89c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2be89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2be8a0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2be8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2be8a4: 0x24633c88  addiu       $v1, $v1, 0x3C88
    ctx->pc = 0x2be8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15496));
    // 0x2be8a8: 0xc0b004e  jal         func_2C0138
    ctx->pc = 0x2BE8A8u;
    SET_GPR_U32(ctx, 31, 0x2BE8B0u);
    ctx->pc = 0x2BE8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE8A8u;
    // 0x2be8ac: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0138u, 0x2BE8A8u, 0x2BE8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8B0u;
label_2be8b0:
    // 0x2be8b0: 0x24031001  addiu       $v1, $zero, 0x1001
    ctx->pc = 0x2be8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x2be8b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2be8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be8b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be8bc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2be8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2be8c0: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2be8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2be8c4: 0x24845188  addiu       $a0, $a0, 0x5188
    ctx->pc = 0x2be8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20872));
    // 0x2be8c8: 0xc0f9ea8  jal         func_3E7AA0
    ctx->pc = 0x2BE8C8u;
    SET_GPR_U32(ctx, 31, 0x2BE8D0u);
    ctx->pc = 0x2BE8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE8C8u;
    // 0x2be8cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7AA0u, 0x2BE8C8u, 0x2BE8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8D0u;
label_2be8d0:
    // 0x2be8d0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2be8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2be8d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2be8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2be8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2be8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8E0u;
        // 0x2be8e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE8E8u;
}
