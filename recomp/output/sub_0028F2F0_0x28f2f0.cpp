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

// Function: sub_0028F2F0
// Address: 0x28f2f0 - 0x28f378
void sub_0028F2F0_0x28f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F2F0_0x28f2f0");
#endif

    switch (ctx->pc) {
        case 0x28f310u: goto label_28f310;
        case 0x28f324u: goto label_28f324;
        case 0x28f330u: goto label_28f330;
        default: break;
    }

    ctx->pc = 0x28f2f0u;

    // 0x28f2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f2f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f2f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28f2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28f2fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f300: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28f300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28f304: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28f304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f308: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x28f308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x28f30c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28f30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28f310:
    // 0x28f310: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28f310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28f314: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x28F314u;
    {
        const bool branch_taken_0x28f314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f314) {
            ctx->pc = 0x28F318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F314u;
            // 0x28f318: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F344u;
            goto label_28f344;
        }
    }
    ctx->pc = 0x28F31Cu;
    // 0x28f31c: 0xc0a3b92  jal         func_28EE48
    ctx->pc = 0x28F31Cu;
    SET_GPR_U32(ctx, 31, 0x28F324u);
    ctx->pc = 0x28EE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EE48u, 0x28F31Cu, 0x28F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F324u;
label_28f324:
    // 0x28f324: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x28f324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28f328: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x28F328u;
    SET_GPR_U32(ctx, 31, 0x28F330u);
    ctx->pc = 0x28F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F328u;
    // 0x28f32c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x28F328u, 0x28F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F330u;
label_28f330:
    // 0x28f330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28f330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28f334: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F334u;
    {
        const bool branch_taken_0x28f334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F334u;
        // 0x28f338: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f334) {
            ctx->pc = 0x28F344u;
            goto label_28f344;
        }
    }
    ctx->pc = 0x28F33Cu;
    // 0x28f33c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28F33Cu;
    {
        const bool branch_taken_0x28f33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F33Cu;
        // 0x28f340: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f33c) {
            ctx->pc = 0x28F354u;
            goto label_28f354;
        }
    }
    ctx->pc = 0x28F344u;
label_28f344:
    // 0x28f344: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x28f344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x28f348: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x28F348u;
    {
        const bool branch_taken_0x28f348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F348u;
        // 0x28f34c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f348) {
            ctx->pc = 0x28F310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f310;
        }
    }
    ctx->pc = 0x28F350u;
    // 0x28f350: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f354:
    // 0x28f354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28f358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f35c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28f35cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f360: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28f360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28f364: 0x3e00008  jr          $ra
    ctx->pc = 0x28F364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F364u;
        // 0x28f368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F36Cu;
    // 0x28f36c: 0x0  nop
    ctx->pc = 0x28f36cu;
    // NOP
    // 0x28f370: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f374: 0x0  nop
    ctx->pc = 0x28f374u;
    // NOP
    ctx->pc = 0x28f378u;
}
