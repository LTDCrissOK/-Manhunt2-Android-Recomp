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

// Function: sub_002B3FC0
// Address: 0x2b3fc0 - 0x2b4048
void sub_002B3FC0_0x2b3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3FC0_0x2b3fc0");
#endif

    switch (ctx->pc) {
        case 0x2b3fdcu: goto label_2b3fdc;
        case 0x2b3ffcu: goto label_2b3ffc;
        case 0x2b400cu: goto label_2b400c;
        default: break;
    }

    ctx->pc = 0x2b3fc0u;

    // 0x2b3fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3fc4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2b3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b3fc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b3fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b3fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b3fd4: 0xc0ad012  jal         func_2B4048
    ctx->pc = 0x2B3FD4u;
    SET_GPR_U32(ctx, 31, 0x2B3FDCu);
    ctx->pc = 0x2B3FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3FD4u;
    // 0x2b3fd8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4048u, 0x2B3FD4u, 0x2B3FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FDCu;
label_2b3fdc:
    // 0x2b3fdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b3fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b3fe0: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2b3fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2b3fe4: 0x260908c0  addiu       $t1, $s0, 0x8C0
    ctx->pc = 0x2b3fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 2240));
    // 0x2b3fe8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fec: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2b3fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b3ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b3ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ff4: 0xc0ef15a  jal         func_3BC568
    ctx->pc = 0x2B3FF4u;
    SET_GPR_U32(ctx, 31, 0x2B3FFCu);
    ctx->pc = 0x2B3FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3FF4u;
    // 0x2b3ff8: 0x24c6f8c8  addiu       $a2, $a2, -0x738 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC568u, 0x2B3FF4u, 0x2B3FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FFCu;
label_2b3ffc:
    // 0x2b3ffc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b3ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4000: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b4000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4004: 0xc0ef0b2  jal         func_3BC2C8
    ctx->pc = 0x2B4004u;
    SET_GPR_U32(ctx, 31, 0x2B400Cu);
    ctx->pc = 0x2B4008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4004u;
    // 0x2b4008: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B4004u, 0x2B400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B400Cu;
label_2b400c:
    // 0x2b400c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2b400cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b4010: 0x4810009  bgez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4010u;
    {
        const bool branch_taken_0x2b4010 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2B4014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4010u;
        // 0x2b4014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4010) {
            ctx->pc = 0x2B4038u;
            goto label_2b4038;
        }
    }
    ctx->pc = 0x2B4018u;
    // 0x2b4018: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x2b4018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b401c: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B401Cu;
    {
        const bool branch_taken_0x2b401c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B401Cu;
        // 0x2b4020: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b401c) {
            ctx->pc = 0x2B4034u;
            goto label_2b4034;
        }
    }
    ctx->pc = 0x2B4024u;
    // 0x2b4024: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2b4024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b4028: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x2b4028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2b402c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B402Cu;
    {
        const bool branch_taken_0x2b402c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B402Cu;
        // 0x2b4030: 0xa3100b  movn        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b402c) {
            ctx->pc = 0x2B4038u;
            goto label_2b4038;
        }
    }
    ctx->pc = 0x2B4034u;
label_2b4034:
    // 0x2b4034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4038:
    // 0x2b4038: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b4038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b403c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b403cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4040: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4040u;
        // 0x2b4044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4048u;
}
