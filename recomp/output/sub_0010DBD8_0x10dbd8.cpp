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

// Function: sub_0010DBD8
// Address: 0x10dbd8 - 0x10dc28
void sub_0010DBD8_0x10dbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DBD8_0x10dbd8");
#endif

    switch (ctx->pc) {
        case 0x10dc00u: goto label_10dc00;
        case 0x10dc14u: goto label_10dc14;
        default: break;
    }

    ctx->pc = 0x10dbd8u;

    // 0x10dbd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10dbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10dbdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10dbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10dbe0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10dbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10dbe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10dbe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10dbec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10dbf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DBF0u;
    {
        const bool branch_taken_0x10dbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBF0u;
        // 0x10dbf4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbf0) {
            ctx->pc = 0x10DC00u;
            goto label_10dc00;
        }
    }
    ctx->pc = 0x10DBF8u;
    // 0x10dbf8: 0xc043750  jal         func_10DD40
    ctx->pc = 0x10DBF8u;
    SET_GPR_U32(ctx, 31, 0x10DC00u);
    ctx->pc = 0x10DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD40u, 0x10DBF8u, 0x10DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC00u;
label_10dc00:
    // 0x10dc00: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x10dc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x10dc04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DC04u;
    {
        const bool branch_taken_0x10dc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dc04) {
            ctx->pc = 0x10DC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DC04u;
            // 0x10dc08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DC18u;
            goto label_10dc18;
        }
    }
    ctx->pc = 0x10DC0Cu;
    // 0x10dc0c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x10DC0Cu;
    SET_GPR_U32(ctx, 31, 0x10DC14u);
    ctx->pc = 0x10DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC0Cu;
    // 0x10dc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x10DC0Cu, 0x10DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC14u;
label_10dc14:
    // 0x10dc14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10dc14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10dc18:
    // 0x10dc18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10dc18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10dc1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10dc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dc20: 0x3e00008  jr          $ra
    ctx->pc = 0x10DC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC20u;
        // 0x10dc24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DC28u;
}
