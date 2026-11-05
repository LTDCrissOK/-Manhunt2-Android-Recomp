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

// Function: sub_002BA660
// Address: 0x2ba660 - 0x2ba6d8
void sub_002BA660_0x2ba660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA660_0x2ba660");
#endif

    switch (ctx->pc) {
        case 0x2ba694u: goto label_2ba694;
        default: break;
    }

    ctx->pc = 0x2ba660u;

    // 0x2ba660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ba664: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ba664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ba668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ba668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ba66c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ba66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ba670: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BA670u;
    {
        const bool branch_taken_0x2ba670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA670u;
        // 0x2ba674: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba670) {
            ctx->pc = 0x2BA6A0u;
            goto label_2ba6a0;
        }
    }
    ctx->pc = 0x2BA678u;
    // 0x2ba678: 0x94880004  lhu         $t0, 0x4($a0)
    ctx->pc = 0x2ba678u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ba67c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ba67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba680: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ba680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba684: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2ba684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2ba688: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2ba688u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2ba68c: 0xc0ae9b6  jal         func_2BA6D8
    ctx->pc = 0x2BA68Cu;
    SET_GPR_U32(ctx, 31, 0x2BA694u);
    ctx->pc = 0x2BA690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA68Cu;
    // 0x2ba690: 0x84403  sra         $t0, $t0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA6D8u, 0x2BA68Cu, 0x2BA694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA694u;
label_2ba694:
    // 0x2ba694: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ba694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba698: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA698u;
    {
        const bool branch_taken_0x2ba698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba698) {
            ctx->pc = 0x2BA6B4u;
            goto label_2ba6b4;
        }
    }
    ctx->pc = 0x2BA6A0u;
label_2ba6a0:
    // 0x2ba6a0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA6A0u;
    {
        const bool branch_taken_0x2ba6a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6A0u;
        // 0x2ba6a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba6a0) {
            ctx->pc = 0x2BA6ACu;
            goto label_2ba6ac;
        }
    }
    ctx->pc = 0x2BA6A8u;
    // 0x2ba6a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ba6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2ba6ac:
    // 0x2ba6ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA6ACu;
    {
        const bool branch_taken_0x2ba6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6ACu;
        // 0x2ba6b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba6ac) {
            ctx->pc = 0x2BA6C8u;
            goto label_2ba6c8;
        }
    }
    ctx->pc = 0x2BA6B4u;
label_2ba6b4:
    // 0x2ba6b4: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA6B4u;
    {
        const bool branch_taken_0x2ba6b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba6b4) {
            ctx->pc = 0x2BA6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA6B4u;
            // 0x2ba6b8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA6C8u;
            goto label_2ba6c8;
        }
    }
    ctx->pc = 0x2BA6BCu;
    // 0x2ba6bc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ba6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ba6c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ba6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ba6c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ba6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ba6c8:
    // 0x2ba6c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ba6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba6cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ba6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6D0u;
        // 0x2ba6d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA6D8u;
}
