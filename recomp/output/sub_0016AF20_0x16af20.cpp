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

// Function: sub_0016AF20
// Address: 0x16af20 - 0x16af80
void sub_0016AF20_0x16af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AF20_0x16af20");
#endif

    switch (ctx->pc) {
        case 0x16af3cu: goto label_16af3c;
        case 0x16af64u: goto label_16af64;
        default: break;
    }

    ctx->pc = 0x16af20u;

    // 0x16af20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16af24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16af24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16af28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16af28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16af2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16af30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16af30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16af34: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x16AF34u;
    SET_GPR_U32(ctx, 31, 0x16AF3Cu);
    ctx->pc = 0x16AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF34u;
    // 0x16af38: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x16AF34u, 0x16AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF3Cu;
label_16af3c:
    // 0x16af3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16af3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16af40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16af44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af48: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x16af48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x16af4c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x16af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x16af50: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x16af50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x16af54: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x16af54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x16af58: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x16af58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x16af5c: 0xc05aacc  jal         func_16AB30
    ctx->pc = 0x16AF5Cu;
    SET_GPR_U32(ctx, 31, 0x16AF64u);
    ctx->pc = 0x16AF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF5Cu;
    // 0x16af60: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AB30u, 0x16AF5Cu, 0x16AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF64u;
label_16af64:
    // 0x16af64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16af64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16af68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16af6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16af6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16af70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16af70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16af74: 0x3e00008  jr          $ra
    ctx->pc = 0x16AF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF74u;
        // 0x16af78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AF7Cu;
    // 0x16af7c: 0x0  nop
    ctx->pc = 0x16af7cu;
    // NOP
    ctx->pc = 0x16af80u;
}
