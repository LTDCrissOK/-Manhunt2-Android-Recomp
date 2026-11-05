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

// Function: sub_00133700
// Address: 0x133700 - 0x133750
void sub_00133700_0x133700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133700_0x133700");
#endif

    switch (ctx->pc) {
        case 0x133700u: goto label_133700;
        case 0x133704u: goto label_133704;
        case 0x133708u: goto label_133708;
        case 0x13370cu: goto label_13370c;
        case 0x133710u: goto label_133710;
        case 0x133714u: goto label_133714;
        case 0x133718u: goto label_133718;
        case 0x13371cu: goto label_13371c;
        case 0x133720u: goto label_133720;
        case 0x133724u: goto label_133724;
        case 0x133728u: goto label_133728;
        case 0x13372cu: goto label_13372c;
        case 0x133730u: goto label_133730;
        case 0x133734u: goto label_133734;
        case 0x133738u: goto label_133738;
        case 0x13373cu: goto label_13373c;
        case 0x133740u: goto label_133740;
        case 0x133744u: goto label_133744;
        case 0x133748u: goto label_133748;
        case 0x13374cu: goto label_13374c;
        default: break;
    }

    ctx->pc = 0x133700u;

label_133700:
    // 0x133700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_133704:
    // 0x133704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_133708:
    // 0x133708: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x133708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13370c:
    // 0x13370c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13370cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133710:
    // 0x133710: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_133714:
    // 0x133714: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x133714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_133718:
    // 0x133718: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x133718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_13371c:
    // 0x13371c: 0x40f809  jalr        $v0
label_133720:
    if (ctx->pc == 0x133720u) {
        ctx->pc = 0x133720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13371Cu;
        // 0x133720: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133724u;
        goto label_133724;
    }
    ctx->pc = 0x13371Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133724u);
        ctx->pc = 0x133720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13371Cu;
        // 0x133720: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13371Cu, 0x133724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133724u;
label_133724:
    // 0x133724: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x133724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_133728:
    // 0x133728: 0xc04ce1a  jal         func_133868
label_13372c:
    if (ctx->pc == 0x13372Cu) {
        ctx->pc = 0x13372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133728u;
        // 0x13372c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133730u;
        goto label_133730;
    }
    ctx->pc = 0x133728u;
    SET_GPR_U32(ctx, 31, 0x133730u);
    ctx->pc = 0x13372Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133728u;
    // 0x13372c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133868u, 0x133728u, 0x133730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133730u;
label_133730:
    // 0x133730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133734:
    // 0x133734: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_133738:
    // 0x133738: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x133738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_13373c:
    // 0x13373c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13373cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133740:
    // 0x133740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133744:
    // 0x133744: 0x3e00008  jr          $ra
label_133748:
    if (ctx->pc == 0x133748u) {
        ctx->pc = 0x133748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133744u;
        // 0x133748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13374Cu;
        goto label_13374c;
    }
    ctx->pc = 0x133744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133744u;
        // 0x133748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13374Cu;
label_13374c:
    // 0x13374c: 0x0  nop
    ctx->pc = 0x13374cu;
    // NOP
    ctx->pc = 0x133750u;
}
