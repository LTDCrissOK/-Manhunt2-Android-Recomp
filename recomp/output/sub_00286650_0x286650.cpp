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

// Function: sub_00286650
// Address: 0x286650 - 0x2866c0
void sub_00286650_0x286650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286650_0x286650");
#endif

    switch (ctx->pc) {
        case 0x28666cu: goto label_28666c;
        default: break;
    }

    ctx->pc = 0x286650u;

    // 0x286650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x286658: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28665c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28665cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286660: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x286660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286664: 0xc0a0512  jal         func_281448
    ctx->pc = 0x286664u;
    SET_GPR_U32(ctx, 31, 0x28666Cu);
    ctx->pc = 0x286668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286664u;
    // 0x286668: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281448u, 0x286664u, 0x28666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28666Cu;
label_28666c:
    // 0x28666c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28666cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x286670: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x286670u;
    {
        const bool branch_taken_0x286670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x286674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286670u;
        // 0x286674: 0xa0402c0c  sb          $zero, 0x2C0C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 11276), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286670) {
            ctx->pc = 0x2866A0u;
            goto label_2866a0;
        }
    }
    ctx->pc = 0x286678u;
    // 0x286678: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x286678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28667c: 0x8c43259c  lw          $v1, 0x259C($v0)
    ctx->pc = 0x28667cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C259Cu));
    // 0x286680: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x286680u;
    {
        const bool branch_taken_0x286680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x286684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286680u;
        // 0x286684: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286680) {
            ctx->pc = 0x286698u;
            goto label_286698;
        }
    }
    ctx->pc = 0x286688u;
    // 0x286688: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x286688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28668c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286690: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x286690u;
    {
        const bool branch_taken_0x286690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286690u;
        // 0x286694: 0xac62a324  sw          $v0, -0x5CDC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286690) {
            ctx->pc = 0x2866ACu;
            goto label_2866ac;
        }
    }
    ctx->pc = 0x286698u;
label_286698:
    // 0x286698: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x286698u;
    {
        const bool branch_taken_0x286698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286698u;
        // 0x28669c: 0xac40a324  sw          $zero, -0x5CDC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286698) {
            ctx->pc = 0x2866ACu;
            goto label_2866ac;
        }
    }
    ctx->pc = 0x2866A0u;
label_2866a0:
    // 0x2866a0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2866a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2866a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2866a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2866a8: 0xac62259c  sw          $v0, 0x259C($v1)
    ctx->pc = 0x2866a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4C259Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C259Cu, _value); } while (0);
label_2866ac:
    // 0x2866ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2866acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2866b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2866b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2866b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2866b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2866b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2866B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2866BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866B8u;
        // 0x2866bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2866C0u;
}
