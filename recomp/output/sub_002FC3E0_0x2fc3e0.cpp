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

// Function: sub_002FC3E0
// Address: 0x2fc3e0 - 0x2fc438
void sub_002FC3E0_0x2fc3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC3E0_0x2fc3e0");
#endif

    switch (ctx->pc) {
        case 0x2fc3e0u: goto label_2fc3e0;
        case 0x2fc3e4u: goto label_2fc3e4;
        case 0x2fc3e8u: goto label_2fc3e8;
        case 0x2fc3ecu: goto label_2fc3ec;
        case 0x2fc3f0u: goto label_2fc3f0;
        case 0x2fc3f4u: goto label_2fc3f4;
        case 0x2fc3f8u: goto label_2fc3f8;
        case 0x2fc3fcu: goto label_2fc3fc;
        case 0x2fc400u: goto label_2fc400;
        case 0x2fc404u: goto label_2fc404;
        case 0x2fc408u: goto label_2fc408;
        case 0x2fc40cu: goto label_2fc40c;
        case 0x2fc410u: goto label_2fc410;
        case 0x2fc414u: goto label_2fc414;
        case 0x2fc418u: goto label_2fc418;
        case 0x2fc41cu: goto label_2fc41c;
        case 0x2fc420u: goto label_2fc420;
        case 0x2fc424u: goto label_2fc424;
        case 0x2fc428u: goto label_2fc428;
        case 0x2fc42cu: goto label_2fc42c;
        case 0x2fc430u: goto label_2fc430;
        case 0x2fc434u: goto label_2fc434;
        default: break;
    }

    ctx->pc = 0x2fc3e0u;

label_2fc3e0:
    // 0x2fc3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2fc3e4:
    // 0x2fc3e4: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x2fc3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_2fc3e8:
    // 0x2fc3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fc3ec:
    // 0x2fc3ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fc3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2fc3f0:
    // 0x2fc3f0: 0x8c8311c0  lw          $v1, 0x11C0($a0)
    ctx->pc = 0x2fc3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4544)));
label_2fc3f4:
    // 0x2fc3f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2fc3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2fc3f8:
    // 0x2fc3f8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2fc3fc:
    if (ctx->pc == 0x2FC3FCu) {
        ctx->pc = 0x2FC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3F8u;
        // 0x2fc3fc: 0xac8311c0  sw          $v1, 0x11C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC400u;
        goto label_2fc400;
    }
    ctx->pc = 0x2FC3F8u;
    {
        const bool branch_taken_0x2fc3f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3F8u;
        // 0x2fc3fc: 0xac8311c0  sw          $v1, 0x11C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc3f8) {
            ctx->pc = 0x2FC414u;
            goto label_2fc414;
        }
    }
    ctx->pc = 0x2FC400u;
label_2fc400:
    // 0x2fc400: 0x8c850424  lw          $a1, 0x424($a0)
    ctx->pc = 0x2fc400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1060)));
label_2fc404:
    // 0x2fc404: 0xc08db1e  jal         func_236C78
label_2fc408:
    if (ctx->pc == 0x2FC408u) {
        ctx->pc = 0x2FC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC404u;
        // 0x2fc408: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC40Cu;
        goto label_2fc40c;
    }
    ctx->pc = 0x2FC404u;
    SET_GPR_U32(ctx, 31, 0x2FC40Cu);
    ctx->pc = 0x2FC408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC404u;
    // 0x2fc408: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x2FC404u, 0x2FC40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC40Cu;
label_2fc40c:
    // 0x2fc40c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2fc410:
    if (ctx->pc == 0x2FC410u) {
        ctx->pc = 0x2FC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC40Cu;
        // 0x2fc410: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC414u;
        goto label_2fc414;
    }
    ctx->pc = 0x2FC40Cu;
    {
        const bool branch_taken_0x2fc40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC40Cu;
        // 0x2fc410: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc40c) {
            ctx->pc = 0x2FC42Cu;
            goto label_2fc42c;
        }
    }
    ctx->pc = 0x2FC414u;
label_2fc414:
    // 0x2fc414: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2fc414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2fc418:
    // 0x2fc418: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fc418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fc41c:
    // 0x2fc41c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2fc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2fc420:
    // 0x2fc420: 0x40f809  jalr        $v0
label_2fc424:
    if (ctx->pc == 0x2FC424u) {
        ctx->pc = 0x2FC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC420u;
        // 0x2fc424: 0x8c850424  lw          $a1, 0x424($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC428u;
        goto label_2fc428;
    }
    ctx->pc = 0x2FC420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FC428u);
        ctx->pc = 0x2FC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC420u;
        // 0x2fc424: 0x8c850424  lw          $a1, 0x424($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1060)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC420u, 0x2FC428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FC428u;
label_2fc428:
    // 0x2fc428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc42c:
    // 0x2fc42c: 0x3e00008  jr          $ra
label_2fc430:
    if (ctx->pc == 0x2FC430u) {
        ctx->pc = 0x2FC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC42Cu;
        // 0x2fc430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC434u;
        goto label_2fc434;
    }
    ctx->pc = 0x2FC42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC42Cu;
        // 0x2fc430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC434u;
label_2fc434:
    // 0x2fc434: 0x0  nop
    ctx->pc = 0x2fc434u;
    // NOP
    ctx->pc = 0x2fc438u;
}
