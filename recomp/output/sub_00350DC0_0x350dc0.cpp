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

// Function: sub_00350DC0
// Address: 0x350dc0 - 0x350e28
void sub_00350DC0_0x350dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350DC0_0x350dc0");
#endif

    switch (ctx->pc) {
        case 0x350de8u: goto label_350de8;
        case 0x350dfcu: goto label_350dfc;
        case 0x350e0cu: goto label_350e0c;
        default: break;
    }

    ctx->pc = 0x350dc0u;

    // 0x350dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350dc4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x350dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x350dc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x350dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x350dcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x350dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x350dd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x350dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350dd4: 0x2451be60  addiu       $s1, $v0, -0x41A0
    ctx->pc = 0x350dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950496));
    // 0x350dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x350dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x350ddc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x350ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350de0: 0xc0f754a  jal         func_3DD528
    ctx->pc = 0x350DE0u;
    SET_GPR_U32(ctx, 31, 0x350DE8u);
    ctx->pc = 0x350DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350DE0u;
    // 0x350de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD528u, 0x350DE0u, 0x350DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350DE8u;
label_350de8:
    // 0x350de8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x350DE8u;
    {
        const bool branch_taken_0x350de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350de8) {
            ctx->pc = 0x350DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350DE8u;
            // 0x350dec: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350E00u;
            goto label_350e00;
        }
    }
    ctx->pc = 0x350DF0u;
    // 0x350df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350df4: 0xc0fbc38  jal         func_3EF0E0
    ctx->pc = 0x350DF4u;
    SET_GPR_U32(ctx, 31, 0x350DFCu);
    ctx->pc = 0x350DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350DF4u;
    // 0x350df8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF0E0u, 0x350DF4u, 0x350DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350DFCu;
label_350dfc:
    // 0x350dfc: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x350dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_350e00:
    // 0x350e00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x350e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e04: 0xc0fbc14  jal         func_3EF050
    ctx->pc = 0x350E04u;
    SET_GPR_U32(ctx, 31, 0x350E0Cu);
    ctx->pc = 0x350E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E04u;
    // 0x350e08: 0x2484be50  addiu       $a0, $a0, -0x41B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF050u, 0x350E04u, 0x350E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E0Cu;
label_350e0c:
    // 0x350e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350e10: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x350e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x350e14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x350e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350e18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x350e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x350E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E1Cu;
        // 0x350e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350E24u;
    // 0x350e24: 0x0  nop
    ctx->pc = 0x350e24u;
    // NOP
    ctx->pc = 0x350e28u;
}
