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

// Function: sub_00178ED0
// Address: 0x178ed0 - 0x178f30
void sub_00178ED0_0x178ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178ED0_0x178ed0");
#endif

    switch (ctx->pc) {
        case 0x178eecu: goto label_178eec;
        case 0x178f00u: goto label_178f00;
        case 0x178f08u: goto label_178f08;
        case 0x178f18u: goto label_178f18;
        default: break;
    }

    ctx->pc = 0x178ed0u;

    // 0x178ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178ed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178edc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x178edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ee0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178ee4: 0xc05eca2  jal         func_17B288
    ctx->pc = 0x178EE4u;
    SET_GPR_U32(ctx, 31, 0x178EECu);
    ctx->pc = 0x178EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EE4u;
    // 0x178ee8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B288u, 0x178EE4u, 0x178EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EECu;
label_178eec:
    // 0x178eec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178EECu;
    {
        const bool branch_taken_0x178eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178eec) {
            ctx->pc = 0x178F00u;
            goto label_178f00;
        }
    }
    ctx->pc = 0x178EF4u;
    // 0x178ef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ef8: 0xc05e388  jal         func_178E20
    ctx->pc = 0x178EF8u;
    SET_GPR_U32(ctx, 31, 0x178F00u);
    ctx->pc = 0x178EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EF8u;
    // 0x178efc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E20u, 0x178EF8u, 0x178F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F00u;
label_178f00:
    // 0x178f00: 0xc05a5ee  jal         func_1697B8
    ctx->pc = 0x178F00u;
    SET_GPR_U32(ctx, 31, 0x178F08u);
    ctx->pc = 0x178F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F00u;
    // 0x178f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697B8u, 0x178F00u, 0x178F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F08u;
label_178f08:
    // 0x178f08: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x178f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x178f0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f10: 0xc042058  jal         func_108160
    ctx->pc = 0x178F10u;
    SET_GPR_U32(ctx, 31, 0x178F18u);
    ctx->pc = 0x178F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F10u;
    // 0x178f14: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108160u, 0x178F10u, 0x178F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F18u;
label_178f18:
    // 0x178f18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178f1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178f1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178f20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178f24: 0x3e00008  jr          $ra
    ctx->pc = 0x178F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F24u;
        // 0x178f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178F2Cu;
    // 0x178f2c: 0x0  nop
    ctx->pc = 0x178f2cu;
    // NOP
    ctx->pc = 0x178f30u;
}
