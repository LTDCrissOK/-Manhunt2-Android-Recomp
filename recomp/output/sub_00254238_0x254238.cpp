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

// Function: sub_00254238
// Address: 0x254238 - 0x254290
void sub_00254238_0x254238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254238_0x254238");
#endif

    switch (ctx->pc) {
        case 0x254274u: goto label_254274;
        case 0x25427cu: goto label_25427c;
        default: break;
    }

    ctx->pc = 0x254238u;

    // 0x254238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25423c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25423cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254240: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x254244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254248: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x254248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x25424c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x25424cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x254250: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x254250u;
    {
        const bool branch_taken_0x254250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254250) {
            ctx->pc = 0x254254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254250u;
            // 0x254254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254280u;
            goto label_254280;
        }
    }
    ctx->pc = 0x254258u;
    // 0x254258: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x254258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x25425c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x25425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x254260: 0xae031060  sw          $v1, 0x1060($s0)
    ctx->pc = 0x254260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 3));
    // 0x254264: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x254264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254268: 0xac44035c  sw          $a0, 0x35C($v0)
    ctx->pc = 0x254268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 4));
    // 0x25426c: 0xc061c46  jal         func_187118
    ctx->pc = 0x25426Cu;
    SET_GPR_U32(ctx, 31, 0x254274u);
    ctx->pc = 0x254270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25426Cu;
    // 0x254270: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187118u, 0x25426Cu, 0x254274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254274u;
label_254274:
    // 0x254274: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x254274u;
    SET_GPR_U32(ctx, 31, 0x25427Cu);
    ctx->pc = 0x254278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254274u;
    // 0x254278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x254274u, 0x25427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25427Cu;
label_25427c:
    // 0x25427c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254280:
    // 0x254280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254284: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254288: 0x3e00008  jr          $ra
    ctx->pc = 0x254288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254288u;
        // 0x25428c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254290u;
}
