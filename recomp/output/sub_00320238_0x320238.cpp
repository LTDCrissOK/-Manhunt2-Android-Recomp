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

// Function: sub_00320238
// Address: 0x320238 - 0x3202c0
void sub_00320238_0x320238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320238_0x320238");
#endif

    switch (ctx->pc) {
        case 0x32025cu: goto label_32025c;
        case 0x320280u: goto label_320280;
        case 0x3202a0u: goto label_3202a0;
        default: break;
    }

    ctx->pc = 0x320238u;

    // 0x320238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32023c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x32023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x320240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x320240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x320244: 0x8c442840  lw          $a0, 0x2840($v0)
    ctx->pc = 0x320244u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5B2840u));
    // 0x320248: 0x24502840  addiu       $s0, $v0, 0x2840
    ctx->pc = 0x320248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x32024c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32024Cu;
    {
        const bool branch_taken_0x32024c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x320250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32024Cu;
        // 0x320250: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32024c) {
            ctx->pc = 0x32025Cu;
            goto label_32025c;
        }
    }
    ctx->pc = 0x320254u;
    // 0x320254: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x320254u;
    SET_GPR_U32(ctx, 31, 0x32025Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x320254u, 0x32025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32025Cu;
label_32025c:
    // 0x32025c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32025cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x320260: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x320260u;
    {
        const bool branch_taken_0x320260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x320260) {
            ctx->pc = 0x320264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320260u;
            // 0x320264: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3202A4u;
            goto label_3202a4;
        }
    }
    ctx->pc = 0x320268u;
    // 0x320268: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x320268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x32026c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x32026cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x320270: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x320270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x320274: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x320274u;
    {
        const bool branch_taken_0x320274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x320278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320274u;
        // 0x320278: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320274) {
            ctx->pc = 0x320298u;
            goto label_320298;
        }
    }
    ctx->pc = 0x32027Cu;
    // 0x32027c: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x32027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_320280:
    // 0x320280: 0x0  nop
    ctx->pc = 0x320280u;
    // NOP
    // 0x320284: 0x0  nop
    ctx->pc = 0x320284u;
    // NOP
    // 0x320288: 0x0  nop
    ctx->pc = 0x320288u;
    // NOP
    // 0x32028c: 0x0  nop
    ctx->pc = 0x32028cu;
    // NOP
    // 0x320290: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x320290u;
    {
        const bool branch_taken_0x320290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320290u;
        // 0x320294: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320290) {
            ctx->pc = 0x320280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320280;
        }
    }
    ctx->pc = 0x320298u;
label_320298:
    // 0x320298: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x320298u;
    SET_GPR_U32(ctx, 31, 0x3202A0u);
    ctx->pc = 0x32029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320298u;
    // 0x32029c: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x320298u, 0x3202A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202A0u;
label_3202a0:
    // 0x3202a0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3202a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3202a4:
    // 0x3202a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3202a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3202a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3202a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3202ac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3202acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3202b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3202b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3202b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3202b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3202b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3202B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3202BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202B8u;
        // 0x3202bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3202B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3202C0u;
}
