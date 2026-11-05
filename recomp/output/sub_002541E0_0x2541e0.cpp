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

// Function: sub_002541E0
// Address: 0x2541e0 - 0x254238
void sub_002541E0_0x2541e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002541E0_0x2541e0");
#endif

    switch (ctx->pc) {
        case 0x25421cu: goto label_25421c;
        case 0x254224u: goto label_254224;
        default: break;
    }

    ctx->pc = 0x2541e0u;

    // 0x2541e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2541e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2541e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2541e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2541e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2541e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2541ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2541ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541f0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2541f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2541f4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2541f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2541f8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2541F8u;
    {
        const bool branch_taken_0x2541f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2541f8) {
            ctx->pc = 0x2541FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2541F8u;
            // 0x2541fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254228u;
            goto label_254228;
        }
    }
    ctx->pc = 0x254200u;
    // 0x254200: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x254200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x254204: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x254204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x254208: 0xae031060  sw          $v1, 0x1060($s0)
    ctx->pc = 0x254208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 3));
    // 0x25420c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25420cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254210: 0xac44035c  sw          $a0, 0x35C($v0)
    ctx->pc = 0x254210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 4));
    // 0x254214: 0xc061bfa  jal         func_186FE8
    ctx->pc = 0x254214u;
    SET_GPR_U32(ctx, 31, 0x25421Cu);
    ctx->pc = 0x254218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254214u;
    // 0x254218: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FE8u, 0x254214u, 0x25421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25421Cu;
label_25421c:
    // 0x25421c: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x25421Cu;
    SET_GPR_U32(ctx, 31, 0x254224u);
    ctx->pc = 0x254220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25421Cu;
    // 0x254220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x25421Cu, 0x254224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254224u;
label_254224:
    // 0x254224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254228:
    // 0x254228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25422c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25422cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254230: 0x3e00008  jr          $ra
    ctx->pc = 0x254230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254230u;
        // 0x254234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254238u;
}
