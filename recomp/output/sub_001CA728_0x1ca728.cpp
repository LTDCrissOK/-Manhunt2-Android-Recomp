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

// Function: sub_001CA728
// Address: 0x1ca728 - 0x1ca7a8
void sub_001CA728_0x1ca728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA728_0x1ca728");
#endif

    switch (ctx->pc) {
        case 0x1ca758u: goto label_1ca758;
        case 0x1ca784u: goto label_1ca784;
        default: break;
    }

    ctx->pc = 0x1ca728u;

    // 0x1ca728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca72c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ca72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1ca730: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca734: 0x24421488  addiu       $v0, $v0, 0x1488
    ctx->pc = 0x1ca734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5256));
    // 0x1ca738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca73c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca740: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ca740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1ca744: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca748: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x1ca748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x1ca74c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ca74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ca750: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x1ca750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ca754: 0x0  nop
    ctx->pc = 0x1ca754u;
    // NOP
label_1ca758:
    // 0x1ca758: 0xac65fffc  sw          $a1, -0x4($v1)
    ctx->pc = 0x1ca758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
    // 0x1ca75c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ca75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ca760: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ca760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ca764: 0x2c820014  sltiu       $v0, $a0, 0x14
    ctx->pc = 0x1ca764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1ca768: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CA768u;
    {
        const bool branch_taken_0x1ca768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA768u;
        // 0x1ca76c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca768) {
            ctx->pc = 0x1CA758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca758;
        }
    }
    ctx->pc = 0x1CA770u;
    // 0x1ca770: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1ca770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1ca774: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca778: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1ca778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1ca77c: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x1CA77Cu;
    SET_GPR_U32(ctx, 31, 0x1CA784u);
    ctx->pc = 0x1CA780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA77Cu;
    // 0x1ca780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x1CA77Cu, 0x1CA784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA784u;
label_1ca784:
    // 0x1ca784: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1ca784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1ca788: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ca788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca78c: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1ca78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x1ca790: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1ca790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1ca794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca798: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca79c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA79Cu;
        // 0x1ca7a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA7A4u;
    // 0x1ca7a4: 0x0  nop
    ctx->pc = 0x1ca7a4u;
    // NOP
    ctx->pc = 0x1ca7a8u;
}
