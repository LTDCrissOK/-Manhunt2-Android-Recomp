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

// Function: sub_002D4098
// Address: 0x2d4098 - 0x2d4148
void sub_002D4098_0x2d4098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4098_0x2d4098");
#endif

    switch (ctx->pc) {
        case 0x2d40e0u: goto label_2d40e0;
        case 0x2d40f8u: goto label_2d40f8;
        default: break;
    }

    ctx->pc = 0x2d4098u;

    // 0x2d4098: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d4098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d409c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d40a0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d40a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d40a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d40a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d40a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d40a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d40ac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2d40acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d40b0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2d40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2d40b4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2d40b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2d40b8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d40bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2d40bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2d40c0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2d40c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2d40c4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2d40c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d40c8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2d40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2d40cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D40CCu;
    {
        const bool branch_taken_0x2d40cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40CCu;
        // 0x2d40d0: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40cc) {
            ctx->pc = 0x2D4130u;
            goto label_2d4130;
        }
    }
    ctx->pc = 0x2D40D4u;
    // 0x2d40d4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2d40d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d40d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d40dc: 0x0  nop
    ctx->pc = 0x2d40dcu;
    // NOP
label_2d40e0:
    // 0x2d40e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d40e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d40e4: 0x8ca301a0  lw          $v1, 0x1A0($a1)
    ctx->pc = 0x2d40e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x2d40e8: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D40E8u;
    {
        const bool branch_taken_0x2d40e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d40e8) {
            ctx->pc = 0x2D40FCu;
            goto label_2d40fc;
        }
    }
    ctx->pc = 0x2D40F0u;
    // 0x2d40f0: 0xc0b4fd8  jal         func_2D3F60
    ctx->pc = 0x2D40F0u;
    SET_GPR_U32(ctx, 31, 0x2D40F8u);
    ctx->pc = 0x2D40F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D40F0u;
    // 0x2d40f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3F60u, 0x2D40F0u, 0x2D40F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D40F8u;
label_2d40f8:
    // 0x2d40f8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d40fc:
    // 0x2d40fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D40FCu;
    {
        const bool branch_taken_0x2d40fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d40fc) {
            ctx->pc = 0x2D4100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D40FCu;
            // 0x2d4100: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4110u;
            goto label_2d4110;
        }
    }
    ctx->pc = 0x2D4104u;
    // 0x2d4104: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d4104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d4108: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4108u;
    {
        const bool branch_taken_0x2d4108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4108u;
        // 0x2d410c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4108) {
            ctx->pc = 0x2D4120u;
            goto label_2d4120;
        }
    }
    ctx->pc = 0x2D4110u;
label_2d4110:
    // 0x2d4110: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4110u;
    {
        const bool branch_taken_0x2d4110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4110u;
        // 0x2d4114: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4110) {
            ctx->pc = 0x2D4124u;
            goto label_2d4124;
        }
    }
    ctx->pc = 0x2D4118u;
    // 0x2d4118: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d4118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d411c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2d411cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2d4120:
    // 0x2d4120: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d4120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d4124:
    // 0x2d4124: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2d4124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d4128: 0x1462ffed  bne         $v1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2D4128u;
    {
        const bool branch_taken_0x2d4128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4128u;
        // 0x2d412c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4128) {
            ctx->pc = 0x2D40E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d40e0;
        }
    }
    ctx->pc = 0x2D4130u;
label_2d4130:
    // 0x2d4130: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d4130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4134: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d4134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4138: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d4138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d413c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D413Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D413Cu;
        // 0x2d4140: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D413Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4144u;
    // 0x2d4144: 0x0  nop
    ctx->pc = 0x2d4144u;
    // NOP
    ctx->pc = 0x2d4148u;
}
