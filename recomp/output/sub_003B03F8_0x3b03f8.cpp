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

// Function: sub_003B03F8
// Address: 0x3b03f8 - 0x3b0470
void sub_003B03F8_0x3b03f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B03F8_0x3b03f8");
#endif

    switch (ctx->pc) {
        case 0x3b03f8u: goto label_3b03f8;
        case 0x3b03fcu: goto label_3b03fc;
        case 0x3b0400u: goto label_3b0400;
        case 0x3b0404u: goto label_3b0404;
        case 0x3b0408u: goto label_3b0408;
        case 0x3b040cu: goto label_3b040c;
        case 0x3b0410u: goto label_3b0410;
        case 0x3b0414u: goto label_3b0414;
        case 0x3b0418u: goto label_3b0418;
        case 0x3b041cu: goto label_3b041c;
        case 0x3b0420u: goto label_3b0420;
        case 0x3b0424u: goto label_3b0424;
        case 0x3b0428u: goto label_3b0428;
        case 0x3b042cu: goto label_3b042c;
        case 0x3b0430u: goto label_3b0430;
        case 0x3b0434u: goto label_3b0434;
        case 0x3b0438u: goto label_3b0438;
        case 0x3b043cu: goto label_3b043c;
        case 0x3b0440u: goto label_3b0440;
        case 0x3b0444u: goto label_3b0444;
        case 0x3b0448u: goto label_3b0448;
        case 0x3b044cu: goto label_3b044c;
        case 0x3b0450u: goto label_3b0450;
        case 0x3b0454u: goto label_3b0454;
        case 0x3b0458u: goto label_3b0458;
        case 0x3b045cu: goto label_3b045c;
        case 0x3b0460u: goto label_3b0460;
        case 0x3b0464u: goto label_3b0464;
        case 0x3b0468u: goto label_3b0468;
        case 0x3b046cu: goto label_3b046c;
        default: break;
    }

    ctx->pc = 0x3b03f8u;

label_3b03f8:
    // 0x3b03f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b03f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3b03fc:
    // 0x3b03fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b03fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b0400:
    // 0x3b0400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b0400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b0404:
    // 0x3b0404: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_3b0408:
    if (ctx->pc == 0x3B0408u) {
        ctx->pc = 0x3B0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0404u;
        // 0x3b0408: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B040Cu;
        goto label_3b040c;
    }
    ctx->pc = 0x3B0404u;
    {
        const bool branch_taken_0x3b0404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0404u;
        // 0x3b0408: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0404) {
            ctx->pc = 0x3B0428u;
            goto label_3b0428;
        }
    }
    ctx->pc = 0x3B040Cu;
label_3b040c:
    // 0x3b040c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b040cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3b0410:
    // 0x3b0410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b0410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0414:
    // 0x3b0414: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b0414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b0418:
    // 0x3b0418: 0x2484fdf0  addiu       $a0, $a0, -0x210
    ctx->pc = 0x3b0418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966768));
label_3b041c:
    // 0x3b041c: 0x80eb292  j           func_3ACA48
label_3b0420:
    if (ctx->pc == 0x3B0420u) {
        ctx->pc = 0x3B0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B041Cu;
        // 0x3b0420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0424u;
        goto label_3b0424;
    }
    ctx->pc = 0x3B041Cu;
    ctx->pc = 0x3B0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B041Cu;
    // 0x3b0420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA48u;
    sub_003ACA48_0x3aca48(rdram, ctx, runtime); return;
    ctx->pc = 0x3B0424u;
label_3b0424:
    // 0x3b0424: 0x0  nop
    ctx->pc = 0x3b0424u;
    // NOP
label_3b0428:
    // 0x3b0428: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b0428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3b042c:
    // 0x3b042c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3b042cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3b0430:
    // 0x3b0430: 0x24504780  addiu       $s0, $v0, 0x4780
    ctx->pc = 0x3b0430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 18304));
label_3b0434:
    // 0x3b0434: 0xc0efd60  jal         func_3BF580
label_3b0438:
    if (ctx->pc == 0x3B0438u) {
        ctx->pc = 0x3B0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0434u;
        // 0x3b0438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B043Cu;
        goto label_3b043c;
    }
    ctx->pc = 0x3B0434u;
    SET_GPR_U32(ctx, 31, 0x3B043Cu);
    ctx->pc = 0x3B0438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0434u;
    // 0x3b0438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x3B0434u, 0x3B043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B043Cu;
label_3b043c:
    // 0x3b043c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3b043cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_3b0440:
    // 0x3b0440: 0x8c634778  lw          $v1, 0x4778($v1)
    ctx->pc = 0x3b0440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18296)));
label_3b0444:
    // 0x3b0444: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3b0448:
    if (ctx->pc == 0x3B0448u) {
        ctx->pc = 0x3B0448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0444u;
        // 0x3b0448: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B044Cu;
        goto label_3b044c;
    }
    ctx->pc = 0x3B0444u;
    {
        const bool branch_taken_0x3b0444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0444u;
        // 0x3b0448: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0444) {
            ctx->pc = 0x3B0458u;
            goto label_3b0458;
        }
    }
    ctx->pc = 0x3B044Cu;
label_3b044c:
    // 0x3b044c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3b0450:
    // 0x3b0450: 0x60f809  jalr        $v1
label_3b0454:
    if (ctx->pc == 0x3B0454u) {
        ctx->pc = 0x3B0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0450u;
        // 0x3b0454: 0x8c44477c  lw          $a0, 0x477C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0458u;
        goto label_3b0458;
    }
    ctx->pc = 0x3B0450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B0458u);
        ctx->pc = 0x3B0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0450u;
        // 0x3b0454: 0x8c44477c  lw          $a0, 0x477C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18300)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0450u, 0x3B0458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0458u;
label_3b0458:
    // 0x3b0458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b045c:
    // 0x3b045c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b045cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0460:
    // 0x3b0460: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b0460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b0464:
    // 0x3b0464: 0x80eb292  j           func_3ACA48
label_3b0468:
    if (ctx->pc == 0x3B0468u) {
        ctx->pc = 0x3B0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0464u;
        // 0x3b0468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B046Cu;
        goto label_3b046c;
    }
    ctx->pc = 0x3B0464u;
    ctx->pc = 0x3B0468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0464u;
    // 0x3b0468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA48u;
    sub_003ACA48_0x3aca48(rdram, ctx, runtime); return;
    ctx->pc = 0x3B046Cu;
label_3b046c:
    // 0x3b046c: 0x0  nop
    ctx->pc = 0x3b046cu;
    // NOP
    ctx->pc = 0x3b0470u;
}
