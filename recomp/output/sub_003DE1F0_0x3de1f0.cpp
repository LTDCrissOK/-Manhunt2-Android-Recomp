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

// Function: sub_003DE1F0
// Address: 0x3de1f0 - 0x3de280
void sub_003DE1F0_0x3de1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE1F0_0x3de1f0");
#endif

    switch (ctx->pc) {
        case 0x3de21cu: goto label_3de21c;
        case 0x3de23cu: goto label_3de23c;
        default: break;
    }

    ctx->pc = 0x3de1f0u;

    // 0x3de1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3de1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3de1f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3de1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3de1f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3de1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3de1fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3de1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3de200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3de204: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3de204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3de208: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3de208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de20c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE20Cu;
    {
        const bool branch_taken_0x3de20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE20Cu;
        // 0x3de210: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de20c) {
            ctx->pc = 0x3DE230u;
            goto label_3de230;
        }
    }
    ctx->pc = 0x3DE214u;
    // 0x3de214: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DE214u;
    SET_GPR_U32(ctx, 31, 0x3DE21Cu);
    ctx->pc = 0x3DE218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE214u;
    // 0x3de218: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DE214u, 0x3DE21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE21Cu;
label_3de21c:
    // 0x3de21c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3de21cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3de220: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3de220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3de224: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3de224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3de228: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE228u;
    {
        const bool branch_taken_0x3de228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE228u;
        // 0x3de22c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de228) {
            ctx->pc = 0x3DE24Cu;
            goto label_3de24c;
        }
    }
    ctx->pc = 0x3DE230u;
label_3de230:
    // 0x3de230: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3de230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de234: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DE234u;
    SET_GPR_U32(ctx, 31, 0x3DE23Cu);
    ctx->pc = 0x3DE238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE234u;
    // 0x3de238: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DE234u, 0x3DE23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE23Cu;
label_3de23c:
    // 0x3de23c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3de23cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3de240: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3de240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3de244: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3de244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3de248: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3de248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3de24c:
    // 0x3de24c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3de24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3de250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de254: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3de254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3de258: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3de258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de25c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3de25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de260: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3de260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de264: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3de264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3de268: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3de268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3de26c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3de26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3de270: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3de270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3de274: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE274u;
        // 0x3de278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE27Cu;
    // 0x3de27c: 0x0  nop
    ctx->pc = 0x3de27cu;
    // NOP
    ctx->pc = 0x3de280u;
}
