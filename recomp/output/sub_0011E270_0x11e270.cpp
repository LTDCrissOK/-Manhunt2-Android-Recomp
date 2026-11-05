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

// Function: sub_0011E270
// Address: 0x11e270 - 0x11e320
void sub_0011E270_0x11e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E270_0x11e270");
#endif

    switch (ctx->pc) {
        case 0x11e294u: goto label_11e294;
        case 0x11e2a4u: goto label_11e2a4;
        case 0x11e2c0u: goto label_11e2c0;
        case 0x11e2dcu: goto label_11e2dc;
        default: break;
    }

    ctx->pc = 0x11e270u;

    // 0x11e270: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11e270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11e274: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x11e274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x11e278: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e27c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x11e27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x11e280: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11e280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e284: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x11e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x11e288: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x11e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x11e28c: 0xc0ab004  jal         func_2AC010
    ctx->pc = 0x11E28Cu;
    SET_GPR_U32(ctx, 31, 0x11E294u);
    ctx->pc = 0x11E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E28Cu;
    // 0x11e290: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC010u, 0x11E28Cu, 0x11E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E294u;
label_11e294:
    // 0x11e294: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11e294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11e298: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e29c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11E29Cu;
    SET_GPR_U32(ctx, 31, 0x11E2A4u);
    ctx->pc = 0x11E2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E29Cu;
    // 0x11e2a0: 0x24a5c3c0  addiu       $a1, $a1, -0x3C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11E29Cu, 0x11E2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2A4u;
label_11e2a4:
    // 0x11e2a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E2A4u;
    {
        const bool branch_taken_0x11e2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2A4u;
        // 0x11e2a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2a4) {
            ctx->pc = 0x11E2B4u;
            goto label_11e2b4;
        }
    }
    ctx->pc = 0x11E2ACu;
    // 0x11e2ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11E2ACu;
    {
        const bool branch_taken_0x11e2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2ACu;
        // 0x11e2b0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2ac) {
            ctx->pc = 0x11E2FCu;
            goto label_11e2fc;
        }
    }
    ctx->pc = 0x11E2B4u;
label_11e2b4:
    // 0x11e2b4: 0x26320434  addiu       $s2, $s1, 0x434
    ctx->pc = 0x11e2b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1076));
    // 0x11e2b8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x11e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11e2bc: 0x0  nop
    ctx->pc = 0x11e2bcu;
    // NOP
label_11e2c0:
    // 0x11e2c0: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x11e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x11e2c4: 0x8c430410  lw          $v1, 0x410($v0)
    ctx->pc = 0x11e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1040)));
    // 0x11e2c8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E2C8u;
    {
        const bool branch_taken_0x11e2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2C8u;
        // 0x11e2cc: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2c8) {
            ctx->pc = 0x11E2E4u;
            goto label_11e2e4;
        }
    }
    ctx->pc = 0x11E2D0u;
    // 0x11e2d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11e2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e2d4: 0xc0aaf7c  jal         func_2ABDF0
    ctx->pc = 0x11E2D4u;
    SET_GPR_U32(ctx, 31, 0x11E2DCu);
    ctx->pc = 0x11E2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E2D4u;
    // 0x11e2d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABDF0u, 0x11E2D4u, 0x11E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2DCu;
label_11e2dc:
    // 0x11e2dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E2DCu;
    {
        const bool branch_taken_0x11e2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2DCu;
        // 0x11e2e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2dc) {
            ctx->pc = 0x11E2FCu;
            goto label_11e2fc;
        }
    }
    ctx->pc = 0x11E2E4u;
label_11e2e4:
    // 0x11e2e4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x11e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11e2e8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11e2e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11e2ec: 0x2e030009  sltiu       $v1, $s0, 0x9
    ctx->pc = 0x11e2ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x11e2f0: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x11E2F0u;
    {
        const bool branch_taken_0x11e2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e2f0) {
            ctx->pc = 0x11E2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E2F0u;
            // 0x11e2f4: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e2c0;
        }
    }
    ctx->pc = 0x11E2F8u;
    // 0x11e2f8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x11e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11e2fc:
    // 0x11e2fc: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11e2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11e300: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x11e300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11e304: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x11e304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11e308: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x11e308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x11e30c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E30Cu;
        // 0x11e310: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E314u;
    // 0x11e314: 0x0  nop
    ctx->pc = 0x11e314u;
    // NOP
    // 0x11e318: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11e318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11e31c: 0x0  nop
    ctx->pc = 0x11e31cu;
    // NOP
    ctx->pc = 0x11e320u;
}
