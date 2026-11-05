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

// Function: sub_00319CF0
// Address: 0x319cf0 - 0x319d88
void sub_00319CF0_0x319cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319CF0_0x319cf0");
#endif

    switch (ctx->pc) {
        case 0x319d10u: goto label_319d10;
        case 0x319d1cu: goto label_319d1c;
        case 0x319d2cu: goto label_319d2c;
        case 0x319d38u: goto label_319d38;
        case 0x319d40u: goto label_319d40;
        case 0x319d4cu: goto label_319d4c;
        case 0x319d54u: goto label_319d54;
        case 0x319d6cu: goto label_319d6c;
        case 0x319d74u: goto label_319d74;
        default: break;
    }

    ctx->pc = 0x319cf0u;

    // 0x319cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319cf4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x319cf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x319cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x319cfc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x319cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x319d00: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x319D00u;
    {
        const bool branch_taken_0x319d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x319D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D00u;
        // 0x319d04: 0xa040b821  sb          $zero, -0x47DF($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294948897), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319d00) {
            ctx->pc = 0x319D38u;
            goto label_319d38;
        }
    }
    ctx->pc = 0x319D08u;
    // 0x319d08: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x319D08u;
    SET_GPR_U32(ctx, 31, 0x319D10u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x319D08u, 0x319D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D10u;
label_319d10:
    // 0x319d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d14: 0xc0a6dee  jal         func_29B7B8
    ctx->pc = 0x319D14u;
    SET_GPR_U32(ctx, 31, 0x319D1Cu);
    ctx->pc = 0x319D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D14u;
    // 0x319d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B7B8u, 0x319D14u, 0x319D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D1Cu;
label_319d1c:
    // 0x319d1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x319d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d24: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x319D24u;
    SET_GPR_U32(ctx, 31, 0x319D2Cu);
    ctx->pc = 0x319D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D24u;
    // 0x319d28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x319D24u, 0x319D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D2Cu;
label_319d2c:
    // 0x319d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d30: 0xc0a754c  jal         func_29D530
    ctx->pc = 0x319D30u;
    SET_GPR_U32(ctx, 31, 0x319D38u);
    ctx->pc = 0x319D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D30u;
    // 0x319d34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D530u, 0x319D30u, 0x319D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D38u;
label_319d38:
    // 0x319d38: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x319D38u;
    SET_GPR_U32(ctx, 31, 0x319D40u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x319D38u, 0x319D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D40u;
label_319d40:
    // 0x319d40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d44: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x319D44u;
    SET_GPR_U32(ctx, 31, 0x319D4Cu);
    ctx->pc = 0x319D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D44u;
    // 0x319d48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x319D44u, 0x319D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D4Cu;
label_319d4c:
    // 0x319d4c: 0xc0d9cb6  jal         func_3672D8
    ctx->pc = 0x319D4Cu;
    SET_GPR_U32(ctx, 31, 0x319D54u);
    ctx->pc = 0x319D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D4Cu;
    // 0x319d50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3672D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3672D8u, 0x319D4Cu, 0x319D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D54u;
label_319d54:
    // 0x319d54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x319d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x319d58: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x319d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x319d5c: 0x24a538d0  addiu       $a1, $a1, 0x38D0
    ctx->pc = 0x319d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14544));
    // 0x319d60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x319d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d64: 0xc0d9cc2  jal         func_367308
    ctx->pc = 0x319D64u;
    SET_GPR_U32(ctx, 31, 0x319D6Cu);
    ctx->pc = 0x319D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D64u;
    // 0x319d68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x319D64u, 0x319D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D6Cu;
label_319d6c:
    // 0x319d6c: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x319D6Cu;
    SET_GPR_U32(ctx, 31, 0x319D74u);
    ctx->pc = 0x319D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D6Cu;
    // 0x319d70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x319D6Cu, 0x319D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D74u;
label_319d74:
    // 0x319d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x319d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319d78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x319d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x319d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x319D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D7Cu;
        // 0x319d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319D84u;
    // 0x319d84: 0x0  nop
    ctx->pc = 0x319d84u;
    // NOP
    ctx->pc = 0x319d88u;
}
