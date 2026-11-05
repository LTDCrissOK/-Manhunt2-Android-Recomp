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

// Function: sub_003AA238
// Address: 0x3aa238 - 0x3aa2c0
void sub_003AA238_0x3aa238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA238_0x3aa238");
#endif

    switch (ctx->pc) {
        case 0x3aa2a8u: goto label_3aa2a8;
        default: break;
    }

    ctx->pc = 0x3aa238u;

    // 0x3aa238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aa23c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aa240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aa240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa244: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AA244u;
    {
        const bool branch_taken_0x3aa244 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA244u;
        // 0x3aa248: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa244) {
            ctx->pc = 0x3AA270u;
            goto label_3aa270;
        }
    }
    ctx->pc = 0x3AA24Cu;
    // 0x3aa24c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aa250: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aa254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa258: 0x2484ed80  addiu       $a0, $a0, -0x1280
    ctx->pc = 0x3aa258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962560));
    // 0x3aa25c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aa25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa260: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x3aa260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x3aa264: 0x80ea7ec  j           func_3A9FB0
    ctx->pc = 0x3AA264u;
    ctx->pc = 0x3AA268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA264u;
    // 0x3aa268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9FB0u;
    sub_003A9FB0_0x3a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA26Cu;
    // 0x3aa26c: 0x0  nop
    ctx->pc = 0x3aa26cu;
    // NOP
label_3aa270:
    // 0x3aa270: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3aa270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3aa274: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AA274u;
    {
        const bool branch_taken_0x3aa274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA274u;
        // 0x3aa278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa274) {
            ctx->pc = 0x3AA2A0u;
            goto label_3aa2a0;
        }
    }
    ctx->pc = 0x3AA27Cu;
    // 0x3aa27c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aa280: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aa284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa288: 0x2484edb0  addiu       $a0, $a0, -0x1250
    ctx->pc = 0x3aa288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962608));
    // 0x3aa28c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aa28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa290: 0x24a5edc0  addiu       $a1, $a1, -0x1240
    ctx->pc = 0x3aa290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
    // 0x3aa294: 0x80ea7ec  j           func_3A9FB0
    ctx->pc = 0x3AA294u;
    ctx->pc = 0x3AA298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA294u;
    // 0x3aa298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9FB0u;
    sub_003A9FB0_0x3a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA29Cu;
    // 0x3aa29c: 0x0  nop
    ctx->pc = 0x3aa29cu;
    // NOP
label_3aa2a0:
    // 0x3aa2a0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AA2A0u;
    SET_GPR_U32(ctx, 31, 0x3AA2A8u);
    ctx->pc = 0x3AA2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA2A0u;
    // 0x3aa2a4: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AA2A0u, 0x3AA2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA2A8u;
label_3aa2a8:
    // 0x3aa2a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3aa2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3aa2ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aa2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa2b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA2B4u;
        // 0x3aa2b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA2BCu;
    // 0x3aa2bc: 0x0  nop
    ctx->pc = 0x3aa2bcu;
    // NOP
    ctx->pc = 0x3aa2c0u;
}
