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

// Function: sub_002BFB78
// Address: 0x2bfb78 - 0x2bfbd8
void sub_002BFB78_0x2bfb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFB78_0x2bfb78");
#endif

    switch (ctx->pc) {
        case 0x2bfb8cu: goto label_2bfb8c;
        case 0x2bfba0u: goto label_2bfba0;
        case 0x2bfbc0u: goto label_2bfbc0;
        default: break;
    }

    ctx->pc = 0x2bfb78u;

    // 0x2bfb78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfb7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bfb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bfb80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bfb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bfb84: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BFB84u;
    SET_GPR_U32(ctx, 31, 0x2BFB8Cu);
    ctx->pc = 0x2BFB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB84u;
    // 0x2bfb88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BFB84u, 0x2BFB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB8Cu;
label_2bfb8c:
    // 0x2bfb8c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bfb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bfb90: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bfb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bfb94: 0x24633a28  addiu       $v1, $v1, 0x3A28
    ctx->pc = 0x2bfb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14888));
    // 0x2bfb98: 0xc0b004e  jal         func_2C0138
    ctx->pc = 0x2BFB98u;
    SET_GPR_U32(ctx, 31, 0x2BFBA0u);
    ctx->pc = 0x2BFB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB98u;
    // 0x2bfb9c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0138u, 0x2BFB98u, 0x2BFBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFBA0u;
label_2bfba0:
    // 0x2bfba0: 0x24034200  addiu       $v1, $zero, 0x4200
    ctx->pc = 0x2bfba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16896));
    // 0x2bfba4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bfba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bfba8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bfbac: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bfbacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bfbb0: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bfbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bfbb4: 0x24845188  addiu       $a0, $a0, 0x5188
    ctx->pc = 0x2bfbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20872));
    // 0x2bfbb8: 0xc0f9ea8  jal         func_3E7AA0
    ctx->pc = 0x2BFBB8u;
    SET_GPR_U32(ctx, 31, 0x2BFBC0u);
    ctx->pc = 0x2BFBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFBB8u;
    // 0x2bfbbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7AA0u, 0x2BFBB8u, 0x2BFBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFBC0u;
label_2bfbc0:
    // 0x2bfbc0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bfbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bfbc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bfbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bfbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfbcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfbccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBD0u;
        // 0x2bfbd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFBD8u;
}
