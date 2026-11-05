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

// Function: sub_002542E8
// Address: 0x2542e8 - 0x254340
void sub_002542E8_0x2542e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002542E8_0x2542e8");
#endif

    switch (ctx->pc) {
        case 0x254324u: goto label_254324;
        case 0x25432cu: goto label_25432c;
        default: break;
    }

    ctx->pc = 0x2542e8u;

    // 0x2542e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2542e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2542ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2542ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2542f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2542f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2542f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2542f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542f8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2542f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2542fc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2542fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x254300: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x254300u;
    {
        const bool branch_taken_0x254300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254300) {
            ctx->pc = 0x254304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254300u;
            // 0x254304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254330u;
            goto label_254330;
        }
    }
    ctx->pc = 0x254308u;
    // 0x254308: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x254308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x25430c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x25430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x254310: 0xae031060  sw          $v1, 0x1060($s0)
    ctx->pc = 0x254310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 3));
    // 0x254314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x254314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254318: 0xac44035c  sw          $a0, 0x35C($v0)
    ctx->pc = 0x254318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 4));
    // 0x25431c: 0xc061d02  jal         func_187408
    ctx->pc = 0x25431Cu;
    SET_GPR_U32(ctx, 31, 0x254324u);
    ctx->pc = 0x254320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25431Cu;
    // 0x254320: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187408u, 0x25431Cu, 0x254324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254324u;
label_254324:
    // 0x254324: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x254324u;
    SET_GPR_U32(ctx, 31, 0x25432Cu);
    ctx->pc = 0x254328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254324u;
    // 0x254328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x254324u, 0x25432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25432Cu;
label_25432c:
    // 0x25432c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254330:
    // 0x254330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254334: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254338: 0x3e00008  jr          $ra
    ctx->pc = 0x254338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254338u;
        // 0x25433c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254340u;
}
