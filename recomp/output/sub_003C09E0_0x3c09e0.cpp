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

// Function: sub_003C09E0
// Address: 0x3c09e0 - 0x3c0a80
void sub_003C09E0_0x3c09e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C09E0_0x3c09e0");
#endif

    switch (ctx->pc) {
        case 0x3c0a24u: goto label_3c0a24;
        default: break;
    }

    ctx->pc = 0x3c09e0u;

    // 0x3c09e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c09e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c09e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c09e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c09e8: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x3c09e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x3c09ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c09ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c09f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c09f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c09f4: 0x8e02cddc  lw          $v0, -0x3224($s0)
    ctx->pc = 0x3c09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3c09f8: 0x8c450148  lw          $a1, 0x148($v0)
    ctx->pc = 0x3c09f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x3c09fc: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C09FCu;
    {
        const bool branch_taken_0x3c09fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C09FCu;
        // 0x3c0a00: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c09fc) {
            ctx->pc = 0x3C0A0Cu;
            goto label_3c0a0c;
        }
    }
    ctx->pc = 0x3C0A04u;
    // 0x3c0a04: 0x2445014c  addiu       $a1, $v0, 0x14C
    ctx->pc = 0x3c0a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
    // 0x3c0a08: 0xac450148  sw          $a1, 0x148($v0)
    ctx->pc = 0x3c0a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 5));
label_3c0a0c:
    // 0x3c0a0c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3c0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3c0a10: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x3c0a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3c0a14: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3C0A14u;
    {
        const bool branch_taken_0x3c0a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0a14) {
            ctx->pc = 0x3C0A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0A14u;
            // 0x3c0a18: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0A50u;
            goto label_3c0a50;
        }
    }
    ctx->pc = 0x3C0A1Cu;
    // 0x3c0a1c: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x3C0A1Cu;
    SET_GPR_U32(ctx, 31, 0x3C0A24u);
    ctx->pc = 0x3C0A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0A1Cu;
    // 0x3c0a20: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x3C0A1Cu, 0x3C0A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0A24u;
label_3c0a24:
    // 0x3c0a24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c0a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0a28: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C0A28u;
    {
        const bool branch_taken_0x3c0a28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0a28) {
            ctx->pc = 0x3C0A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0A28u;
            // 0x3c0a2c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0A38u;
            goto label_3c0a38;
        }
    }
    ctx->pc = 0x3C0A30u;
    // 0x3c0a30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3C0A30u;
    {
        const bool branch_taken_0x3c0a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A30u;
        // 0x3c0a34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0a30) {
            ctx->pc = 0x3C0A68u;
            goto label_3c0a68;
        }
    }
    ctx->pc = 0x3C0A38u;
label_3c0a38:
    // 0x3c0a38: 0x8e02cddc  lw          $v0, -0x3224($s0)
    ctx->pc = 0x3c0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954460)));
    // 0x3c0a3c: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x3c0a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x3c0a40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3c0a40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3c0a44: 0x8e02cddc  lw          $v0, -0x3224($s0)
    ctx->pc = 0x3c0a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954460)));
    // 0x3c0a48: 0xac450148  sw          $a1, 0x148($v0)
    ctx->pc = 0x3c0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 5));
    // 0x3c0a4c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3c0a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3c0a50:
    // 0x3c0a50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c0a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0a54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3c0a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3c0a58: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3c0a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3c0a5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c0a60: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x3c0a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x3c0a64: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x3c0a64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_3c0a68:
    // 0x3c0a68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c0a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c0a6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c0a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c0a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c0a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c0a74: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A74u;
        // 0x3c0a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0A7Cu;
    // 0x3c0a7c: 0x0  nop
    ctx->pc = 0x3c0a7cu;
    // NOP
    ctx->pc = 0x3c0a80u;
}
