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

// Function: sub_00115628
// Address: 0x115628 - 0x115690
void sub_00115628_0x115628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115628_0x115628");
#endif

    switch (ctx->pc) {
        case 0x11565cu: goto label_11565c;
        case 0x115678u: goto label_115678;
        default: break;
    }

    ctx->pc = 0x115628u;

    // 0x115628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11562c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x11562cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x115630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115634: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x115634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x115638: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11563c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11563cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115640: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115644: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x115644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x115648: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x115648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11564c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11564Cu;
    {
        const bool branch_taken_0x11564c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11564Cu;
        // 0x115650: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11564c) {
            ctx->pc = 0x11565Cu;
            goto label_11565c;
        }
    }
    ctx->pc = 0x115654u;
    // 0x115654: 0xc0455b2  jal         func_1156C8
    ctx->pc = 0x115654u;
    SET_GPR_U32(ctx, 31, 0x11565Cu);
    ctx->pc = 0x1156C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156C8u, 0x115654u, 0x11565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11565Cu;
label_11565c:
    // 0x11565c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x11565cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x115660: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x115660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x115664: 0x24420310  addiu       $v0, $v0, 0x310
    ctx->pc = 0x115664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    // 0x115668: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115668u;
    {
        const bool branch_taken_0x115668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115668u;
        // 0x11566c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115668) {
            ctx->pc = 0x115678u;
            goto label_115678;
        }
    }
    ctx->pc = 0x115670u;
    // 0x115670: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x115670u;
    SET_GPR_U32(ctx, 31, 0x115678u);
    ctx->pc = 0x115674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115670u;
    // 0x115674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x115670u, 0x115678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115678u;
label_115678:
    // 0x115678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11567c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11567cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115684: 0x3e00008  jr          $ra
    ctx->pc = 0x115684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115684u;
        // 0x115688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11568Cu;
    // 0x11568c: 0x0  nop
    ctx->pc = 0x11568cu;
    // NOP
    ctx->pc = 0x115690u;
}
