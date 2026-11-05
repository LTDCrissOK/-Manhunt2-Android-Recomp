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

// Function: sub_00227DA0
// Address: 0x227da0 - 0x227e28
void sub_00227DA0_0x227da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227DA0_0x227da0");
#endif

    switch (ctx->pc) {
        case 0x227dd0u: goto label_227dd0;
        case 0x227de0u: goto label_227de0;
        default: break;
    }

    ctx->pc = 0x227da0u;

    // 0x227da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227da4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x227da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x227da8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x227da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x227dac: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x227dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x227db0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227db4: 0x24513d20  addiu       $s1, $v0, 0x3D20
    ctx->pc = 0x227db4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x227db8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227dbc: 0xa060971c  sb          $zero, -0x68E4($v1)
    ctx->pc = 0x227dbcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F971Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F971Cu, _value); } while (0);
    // 0x227dc0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x227dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x227dc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x227DC4u;
    {
        const bool branch_taken_0x227dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DC4u;
        // 0x227dc8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227dc4) {
            ctx->pc = 0x227DE4u;
            goto label_227de4;
        }
    }
    ctx->pc = 0x227DCCu;
    // 0x227dcc: 0x0  nop
    ctx->pc = 0x227dccu;
    // NOP
label_227dd0:
    // 0x227dd0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x227DD0u;
    {
        const bool branch_taken_0x227dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227dd0) {
            ctx->pc = 0x227DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227DD0u;
            // 0x227dd4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227DE8u;
            goto label_227de8;
        }
    }
    ctx->pc = 0x227DD8u;
    // 0x227dd8: 0xc089faa  jal         func_227EA8
    ctx->pc = 0x227DD8u;
    SET_GPR_U32(ctx, 31, 0x227DE0u);
    ctx->pc = 0x227EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EA8u, 0x227DD8u, 0x227DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DE0u;
label_227de0:
    // 0x227de0: 0xa2000708  sb          $zero, 0x708($s0)
    ctx->pc = 0x227de0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1800), (uint8_t)GPR_U32(ctx, 0));
label_227de4:
    // 0x227de4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x227de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_227de8:
    // 0x227de8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x227de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227dec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x227DECu;
    {
        const bool branch_taken_0x227dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DECu;
        // 0x227df0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227dec) {
            ctx->pc = 0x227DF8u;
            goto label_227df8;
        }
    }
    ctx->pc = 0x227DF4u;
    // 0x227df4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x227df4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_227df8:
    // 0x227df8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x227DF8u;
    {
        const bool branch_taken_0x227df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x227DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DF8u;
        // 0x227dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227df8) {
            ctx->pc = 0x227E08u;
            goto label_227e08;
        }
    }
    ctx->pc = 0x227E00u;
    // 0x227e00: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x227e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x227e04: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x227e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_227e08:
    // 0x227e08: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x227E08u;
    {
        const bool branch_taken_0x227e08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x227e08) {
            ctx->pc = 0x227E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227E08u;
            // 0x227e0c: 0x92020708  lbu         $v0, 0x708($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227dd0;
        }
    }
    ctx->pc = 0x227E10u;
    // 0x227e10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227e14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227e18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x227E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E1Cu;
        // 0x227e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227E24u;
    // 0x227e24: 0x0  nop
    ctx->pc = 0x227e24u;
    // NOP
    ctx->pc = 0x227e28u;
}
