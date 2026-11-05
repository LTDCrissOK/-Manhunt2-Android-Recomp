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

// Function: sub_002A65A0
// Address: 0x2a65a0 - 0x2a6618
void sub_002A65A0_0x2a65a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A65A0_0x2a65a0");
#endif

    switch (ctx->pc) {
        case 0x2a65e4u: goto label_2a65e4;
        case 0x2a6600u: goto label_2a6600;
        default: break;
    }

    ctx->pc = 0x2a65a0u;

    // 0x2a65a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a65a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a65a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a65a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a65a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a65a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a65ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a65acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a65b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a65b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a65b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a65b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65b8: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x2a65b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x2a65bc: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A65BCu;
    {
        const bool branch_taken_0x2a65bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65BCu;
        // 0x2a65c0: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a65bc) {
            ctx->pc = 0x2A65ECu;
            goto label_2a65ec;
        }
    }
    ctx->pc = 0x2A65C4u;
    // 0x2a65c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a65c8: 0x54a2000e  bnel        $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A65C8u;
    {
        const bool branch_taken_0x2a65c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a65c8) {
            ctx->pc = 0x2A65CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A65C8u;
            // 0x2a65cc: 0xa20002b0  sb          $zero, 0x2B0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 688), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6604u;
            goto label_2a6604;
        }
    }
    ctx->pc = 0x2A65D0u;
    // 0x2a65d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a65d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a65d4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a65d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a65d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2a65d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a65dc: 0xc0a7100  jal         func_29C400
    ctx->pc = 0x2A65DCu;
    SET_GPR_U32(ctx, 31, 0x2A65E4u);
    ctx->pc = 0x2A65E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A65DCu;
    // 0x2a65e0: 0x92070010  lbu         $a3, 0x10($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C400u, 0x2A65DCu, 0x2A65E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65E4u;
label_2a65e4:
    // 0x2a65e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A65E4u;
    {
        const bool branch_taken_0x2a65e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65E4u;
        // 0x2a65e8: 0xa20002b0  sb          $zero, 0x2B0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 688), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a65e4) {
            ctx->pc = 0x2A6604u;
            goto label_2a6604;
        }
    }
    ctx->pc = 0x2A65ECu;
label_2a65ec:
    // 0x2a65ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a65f0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a65f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a65f4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2a65f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a65f8: 0xc0a7100  jal         func_29C400
    ctx->pc = 0x2A65F8u;
    SET_GPR_U32(ctx, 31, 0x2A6600u);
    ctx->pc = 0x2A65FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A65F8u;
    // 0x2a65fc: 0x92070010  lbu         $a3, 0x10($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C400u, 0x2A65F8u, 0x2A6600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6600u;
label_2a6600:
    // 0x2a6600: 0xa20002b0  sb          $zero, 0x2B0($s0)
    ctx->pc = 0x2a6600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 688), (uint8_t)GPR_U32(ctx, 0));
label_2a6604:
    // 0x2a6604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a660c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a660cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a6610: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6610u;
        // 0x2a6614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6618u;
}
