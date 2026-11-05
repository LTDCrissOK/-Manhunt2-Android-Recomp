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

// Function: sub_002D9720
// Address: 0x2d9720 - 0x2d9790
void sub_002D9720_0x2d9720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9720_0x2d9720");
#endif

    switch (ctx->pc) {
        case 0x2d973cu: goto label_2d973c;
        case 0x2d974cu: goto label_2d974c;
        case 0x2d975cu: goto label_2d975c;
        case 0x2d976cu: goto label_2d976c;
        default: break;
    }

    ctx->pc = 0x2d9720u;

    // 0x2d9720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d9728: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d972c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d972cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9730: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d9734: 0xc0b65e4  jal         func_2D9790
    ctx->pc = 0x2D9734u;
    SET_GPR_U32(ctx, 31, 0x2D973Cu);
    ctx->pc = 0x2D9738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9734u;
    // 0x2d9738: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9790u, 0x2D9734u, 0x2D973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D973Cu;
label_2d973c:
    // 0x2d973c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D973Cu;
    {
        const bool branch_taken_0x2d973c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d973c) {
            ctx->pc = 0x2D9740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D973Cu;
            // 0x2d9740: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D9744u;
    // 0x2d9744: 0xc0b6632  jal         func_2D98C8
    ctx->pc = 0x2D9744u;
    SET_GPR_U32(ctx, 31, 0x2D974Cu);
    ctx->pc = 0x2D9748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9744u;
    // 0x2d9748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D98C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D98C8u, 0x2D9744u, 0x2D974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D974Cu;
label_2d974c:
    // 0x2d974c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D974Cu;
    {
        const bool branch_taken_0x2d974c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d974c) {
            ctx->pc = 0x2D9750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D974Cu;
            // 0x2d9750: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D9754u;
    // 0x2d9754: 0xc0b6682  jal         func_2D9A08
    ctx->pc = 0x2D9754u;
    SET_GPR_U32(ctx, 31, 0x2D975Cu);
    ctx->pc = 0x2D9758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9754u;
    // 0x2d9758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9A08u, 0x2D9754u, 0x2D975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D975Cu;
label_2d975c:
    // 0x2d975c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D975Cu;
    {
        const bool branch_taken_0x2d975c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d975c) {
            ctx->pc = 0x2D9760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D975Cu;
            // 0x2d9760: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9778u;
            goto label_2d9778;
        }
    }
    ctx->pc = 0x2D9764u;
    // 0x2d9764: 0xc0b66b6  jal         func_2D9AD8
    ctx->pc = 0x2D9764u;
    SET_GPR_U32(ctx, 31, 0x2D976Cu);
    ctx->pc = 0x2D9768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9764u;
    // 0x2d9768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9AD8u, 0x2D9764u, 0x2D976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D976Cu;
label_2d976c:
    // 0x2d976c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D976Cu;
    {
        const bool branch_taken_0x2d976c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D976Cu;
        // 0x2d9770: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d976c) {
            ctx->pc = 0x2D977Cu;
            goto label_2d977c;
        }
    }
    ctx->pc = 0x2D9774u;
    // 0x2d9774: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2d9774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9778:
    // 0x2d9778: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d9778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d977c:
    // 0x2d977c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d977cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d9780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d9784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9788: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9788u;
        // 0x2d978c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9790u;
}
