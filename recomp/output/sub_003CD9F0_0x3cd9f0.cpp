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

// Function: sub_003CD9F0
// Address: 0x3cd9f0 - 0x3cda60
void sub_003CD9F0_0x3cd9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD9F0_0x3cd9f0");
#endif

    switch (ctx->pc) {
        case 0x3cda0cu: goto label_3cda0c;
        case 0x3cda14u: goto label_3cda14;
        case 0x3cda28u: goto label_3cda28;
        case 0x3cda44u: goto label_3cda44;
        default: break;
    }

    ctx->pc = 0x3cd9f0u;

    // 0x3cd9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cd9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3cd9f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3cd9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3cd9f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3cd9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3cd9fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cd9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cda00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cda00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3cda04: 0xc0f3600  jal         func_3CD800
    ctx->pc = 0x3CDA04u;
    SET_GPR_U32(ctx, 31, 0x3CDA0Cu);
    ctx->pc = 0x3CDA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDA04u;
    // 0x3cda08: 0x3c110043  lui         $s1, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD800u, 0x3CDA04u, 0x3CDA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDA0Cu;
label_3cda0c:
    // 0x3cda0c: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CDA0Cu;
    SET_GPR_U32(ctx, 31, 0x3CDA14u);
    ctx->pc = 0x3CDA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDA0Cu;
    // 0x3cda10: 0x8e24d698  lw          $a0, -0x2968($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CDA0Cu, 0x3CDA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDA14u;
label_3cda14:
    // 0x3cda14: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x3cda14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3cda18: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CDA18u;
    {
        const bool branch_taken_0x3cda18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDA18u;
        // 0x3cda1c: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cda18) {
            ctx->pc = 0x3CDA30u;
            goto label_3cda30;
        }
    }
    ctx->pc = 0x3CDA20u;
    // 0x3cda20: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3CDA20u;
    SET_GPR_U32(ctx, 31, 0x3CDA28u);
    ctx->pc = 0x3CDA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDA20u;
    // 0x3cda24: 0x8e24d698  lw          $a0, -0x2968($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3CDA20u, 0x3CDA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDA28u;
label_3cda28:
    // 0x3cda28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CDA28u;
    {
        const bool branch_taken_0x3cda28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDA28u;
        // 0x3cda2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cda28) {
            ctx->pc = 0x3CDA48u;
            goto label_3cda48;
        }
    }
    ctx->pc = 0x3CDA30u;
label_3cda30:
    // 0x3cda30: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x3cda30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3cda34: 0x24424e40  addiu       $v0, $v0, 0x4E40
    ctx->pc = 0x3cda34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20032));
    // 0x3cda38: 0x8e24d698  lw          $a0, -0x2968($s1)
    ctx->pc = 0x3cda38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956696)));
    // 0x3cda3c: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3CDA3Cu;
    SET_GPR_U32(ctx, 31, 0x3CDA44u);
    ctx->pc = 0x3CDA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDA3Cu;
    // 0x3cda40: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3CDA3Cu, 0x3CDA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDA44u;
label_3cda44:
    // 0x3cda44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3cda44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cda48:
    // 0x3cda48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cda48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cda4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3cda4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cda50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3cda50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cda54: 0x3e00008  jr          $ra
    ctx->pc = 0x3CDA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CDA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDA54u;
        // 0x3cda58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CDA5Cu;
    // 0x3cda5c: 0x0  nop
    ctx->pc = 0x3cda5cu;
    // NOP
    ctx->pc = 0x3cda60u;
}
