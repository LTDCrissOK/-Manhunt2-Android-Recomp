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

// Function: sub_00374750
// Address: 0x374750 - 0x3747b8
void sub_00374750_0x374750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374750_0x374750");
#endif

    switch (ctx->pc) {
        case 0x374764u: goto label_374764;
        case 0x37478cu: goto label_37478c;
        default: break;
    }

    ctx->pc = 0x374750u;

    // 0x374750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x374754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x374758: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x374758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37475c: 0xc0dd294  jal         func_374A50
    ctx->pc = 0x37475Cu;
    SET_GPR_U32(ctx, 31, 0x374764u);
    ctx->pc = 0x374760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37475Cu;
    // 0x374760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374A50u, 0x37475Cu, 0x374764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374764u;
label_374764:
    // 0x374764: 0x50500010  beql        $v0, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x374764u;
    {
        const bool branch_taken_0x374764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x374764) {
            ctx->pc = 0x374768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374764u;
            // 0x374768: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3747A8u;
            goto label_3747a8;
        }
    }
    ctx->pc = 0x37476Cu;
    // 0x37476c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37476Cu;
    {
        const bool branch_taken_0x37476c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x374770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37476Cu;
        // 0x374770: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37476c) {
            ctx->pc = 0x37477Cu;
            goto label_37477c;
        }
    }
    ctx->pc = 0x374774u;
    // 0x374774: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x374774u;
    {
        const bool branch_taken_0x374774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374774u;
        // 0x374778: 0x24848150  addiu       $a0, $a0, -0x7EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374774) {
            ctx->pc = 0x374784u;
            goto label_374784;
        }
    }
    ctx->pc = 0x37477Cu;
label_37477c:
    // 0x37477c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x37477cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x374780: 0x248480f8  addiu       $a0, $a0, -0x7F08
    ctx->pc = 0x374780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934776));
label_374784:
    // 0x374784: 0xc0dde56  jal         func_377958
    ctx->pc = 0x374784u;
    SET_GPR_U32(ctx, 31, 0x37478Cu);
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x374784u, 0x37478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37478Cu;
label_37478c:
    // 0x37478c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x37478cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x374790: 0xac626080  sw          $v0, 0x6080($v1)
    ctx->pc = 0x374790u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6C6080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C6080u, _value); } while (0);
    // 0x374794: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x374794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x374798: 0x8c62cd00  lw          $v0, -0x3300($v1)
    ctx->pc = 0x374798u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x37479c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x37479cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3747a0: 0xac62cd00  sw          $v0, -0x3300($v1)
    ctx->pc = 0x3747a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD00u, _value); } while (0);
    // 0x3747a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3747a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3747a8:
    // 0x3747a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3747a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3747ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3747ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3747B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747ACu;
        // 0x3747b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3747ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3747B4u;
    // 0x3747b4: 0x0  nop
    ctx->pc = 0x3747b4u;
    // NOP
    ctx->pc = 0x3747b8u;
}
