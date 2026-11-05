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

// Function: sub_003EE260
// Address: 0x3ee260 - 0x3ee308
void sub_003EE260_0x3ee260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE260_0x3ee260");
#endif

    switch (ctx->pc) {
        case 0x3ee28cu: goto label_3ee28c;
        case 0x3ee2a8u: goto label_3ee2a8;
        case 0x3ee2b8u: goto label_3ee2b8;
        default: break;
    }

    ctx->pc = 0x3ee260u;

    // 0x3ee260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ee260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ee264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ee264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ee268: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ee268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ee26c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ee26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ee270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ee274: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3ee274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3ee278: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ee278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3ee27c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EE27Cu;
    {
        const bool branch_taken_0x3ee27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE27Cu;
        // 0x3ee280: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee27c) {
            ctx->pc = 0x3EE294u;
            goto label_3ee294;
        }
    }
    ctx->pc = 0x3EE284u;
    // 0x3ee284: 0xc0f7676  jal         func_3DD9D8
    ctx->pc = 0x3EE284u;
    SET_GPR_U32(ctx, 31, 0x3EE28Cu);
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x3EE284u, 0x3EE28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE28Cu;
label_3ee28c:
    // 0x3ee28c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3EE28Cu;
    {
        const bool branch_taken_0x3ee28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE28Cu;
        // 0x3ee290: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee28c) {
            ctx->pc = 0x3EE2F0u;
            goto label_3ee2f0;
        }
    }
    ctx->pc = 0x3EE294u;
label_3ee294:
    // 0x3ee294: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3ee294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ee298: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EE298u;
    {
        const bool branch_taken_0x3ee298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE298u;
        // 0x3ee29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee298) {
            ctx->pc = 0x3EE2B0u;
            goto label_3ee2b0;
        }
    }
    ctx->pc = 0x3EE2A0u;
    // 0x3ee2a0: 0xc0f6dac  jal         func_3DB6B0
    ctx->pc = 0x3EE2A0u;
    SET_GPR_U32(ctx, 31, 0x3EE2A8u);
    ctx->pc = 0x3EE2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE2A0u;
    // 0x3ee2a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB6B0u, 0x3EE2A0u, 0x3EE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE2A8u;
label_3ee2a8:
    // 0x3ee2a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3EE2A8u;
    {
        const bool branch_taken_0x3ee2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE2A8u;
        // 0x3ee2ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee2a8) {
            ctx->pc = 0x3EE2F0u;
            goto label_3ee2f0;
        }
    }
    ctx->pc = 0x3EE2B0u;
label_3ee2b0:
    // 0x3ee2b0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EE2B0u;
    SET_GPR_U32(ctx, 31, 0x3EE2B8u);
    ctx->pc = 0x3EE2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE2B0u;
    // 0x3ee2b4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EE2B0u, 0x3EE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE2B8u;
label_3ee2b8:
    // 0x3ee2b8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3ee2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3ee2bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ee2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ee2c0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x3ee2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x3ee2c4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3ee2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ee2c8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3ee2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3ee2cc: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3ee2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x3ee2d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3ee2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ee2d4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ee2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ee2d8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3ee2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3ee2dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ee2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ee2e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ee2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ee2e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ee2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ee2e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3ee2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3ee2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ee2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ee2f0:
    // 0x3ee2f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ee2f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ee2f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ee2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ee2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE2F8u;
        // 0x3ee2fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE300u;
    // 0x3ee300: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3ee300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3ee304: 0x0  nop
    ctx->pc = 0x3ee304u;
    // NOP
    ctx->pc = 0x3ee308u;
}
