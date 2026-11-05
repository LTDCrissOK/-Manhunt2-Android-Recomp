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

// Function: sub_00254708
// Address: 0x254708 - 0x254760
void sub_00254708_0x254708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254708_0x254708");
#endif

    switch (ctx->pc) {
        case 0x254744u: goto label_254744;
        case 0x25474cu: goto label_25474c;
        default: break;
    }

    ctx->pc = 0x254708u;

    // 0x254708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25470c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254710: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x254714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254718: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x254718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x25471c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x25471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x254720: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x254720u;
    {
        const bool branch_taken_0x254720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254720) {
            ctx->pc = 0x254724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254720u;
            // 0x254724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254750u;
            goto label_254750;
        }
    }
    ctx->pc = 0x254728u;
    // 0x254728: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x254728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x25472c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x25472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x254730: 0xae031060  sw          $v1, 0x1060($s0)
    ctx->pc = 0x254730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 3));
    // 0x254734: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x254734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254738: 0xac44035c  sw          $a0, 0x35C($v0)
    ctx->pc = 0x254738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 4));
    // 0x25473c: 0xc061ed0  jal         func_187B40
    ctx->pc = 0x25473Cu;
    SET_GPR_U32(ctx, 31, 0x254744u);
    ctx->pc = 0x254740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25473Cu;
    // 0x254740: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187B40u, 0x25473Cu, 0x254744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254744u;
label_254744:
    // 0x254744: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x254744u;
    SET_GPR_U32(ctx, 31, 0x25474Cu);
    ctx->pc = 0x254748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254744u;
    // 0x254748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x254744u, 0x25474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25474Cu;
label_25474c:
    // 0x25474c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254750:
    // 0x254750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254754: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254758: 0x3e00008  jr          $ra
    ctx->pc = 0x254758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254758u;
        // 0x25475c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254760u;
}
