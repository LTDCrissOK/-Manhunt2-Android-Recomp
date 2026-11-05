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

// Function: sub_002BEBF0
// Address: 0x2bebf0 - 0x2bec50
void sub_002BEBF0_0x2bebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEBF0_0x2bebf0");
#endif

    switch (ctx->pc) {
        case 0x2bec04u: goto label_2bec04;
        case 0x2bec18u: goto label_2bec18;
        case 0x2bec38u: goto label_2bec38;
        default: break;
    }

    ctx->pc = 0x2bebf0u;

    // 0x2bebf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bebf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bebf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bebf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bebfc: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BEBFCu;
    SET_GPR_U32(ctx, 31, 0x2BEC04u);
    ctx->pc = 0x2BEC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBFCu;
    // 0x2bec00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BEBFCu, 0x2BEC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC04u;
label_2bec04:
    // 0x2bec04: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bec04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bec08: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bec0c: 0x24633c08  addiu       $v1, $v1, 0x3C08
    ctx->pc = 0x2bec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15368));
    // 0x2bec10: 0xc0b004e  jal         func_2C0138
    ctx->pc = 0x2BEC10u;
    SET_GPR_U32(ctx, 31, 0x2BEC18u);
    ctx->pc = 0x2BEC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC10u;
    // 0x2bec14: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0138u, 0x2BEC10u, 0x2BEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC18u;
label_2bec18:
    // 0x2bec18: 0x24031020  addiu       $v1, $zero, 0x1020
    ctx->pc = 0x2bec18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4128));
    // 0x2bec1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bec20: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bec20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bec24: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bec24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bec28: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bec28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bec2c: 0x24845188  addiu       $a0, $a0, 0x5188
    ctx->pc = 0x2bec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20872));
    // 0x2bec30: 0xc0f9ea8  jal         func_3E7AA0
    ctx->pc = 0x2BEC30u;
    SET_GPR_U32(ctx, 31, 0x2BEC38u);
    ctx->pc = 0x2BEC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC30u;
    // 0x2bec34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7AA0u, 0x2BEC30u, 0x2BEC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC38u;
label_2bec38:
    // 0x2bec38: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bec38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bec3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bec3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bec44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bec44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bec48: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC48u;
        // 0x2bec4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEC50u;
}
