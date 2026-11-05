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

// Function: sub_00132540
// Address: 0x132540 - 0x1325d0
void sub_00132540_0x132540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132540_0x132540");
#endif

    switch (ctx->pc) {
        case 0x132584u: goto label_132584;
        case 0x132590u: goto label_132590;
        case 0x1325b4u: goto label_1325b4;
        default: break;
    }

    ctx->pc = 0x132540u;

    // 0x132540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132544: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x132544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13254c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13254cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x132550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132554: 0x24c2001c  addiu       $v0, $a2, 0x1C
    ctx->pc = 0x132554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x132558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13255c: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x13255cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x132560: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x132560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x132564: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x132564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132568: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132568u;
    {
        const bool branch_taken_0x132568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132568u;
        // 0x13256c: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132568) {
            ctx->pc = 0x13257Cu;
            goto label_13257c;
        }
    }
    ctx->pc = 0x132570u;
    // 0x132570: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x132570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x132574: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x132574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x132578: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x132578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_13257c:
    // 0x13257c: 0xc0461e0  jal         func_118780
    ctx->pc = 0x13257Cu;
    SET_GPR_U32(ctx, 31, 0x132584u);
    ctx->pc = 0x132580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13257Cu;
    // 0x132580: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118780u, 0x13257Cu, 0x132584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132584u;
label_132584:
    // 0x132584: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x132584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132588: 0xc042442  jal         func_109108
    ctx->pc = 0x132588u;
    SET_GPR_U32(ctx, 31, 0x132590u);
    ctx->pc = 0x13258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132588u;
    // 0x13258c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109108u, 0x132588u, 0x132590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132590u;
label_132590:
    // 0x132590: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x132590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x132594: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x132594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x132598: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x132598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x13259c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1325a0: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x1325a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x1325a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1325A4u;
    {
        const bool branch_taken_0x1325a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1325A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325A4u;
        // 0x1325a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325a4) {
            ctx->pc = 0x1325B8u;
            goto label_1325b8;
        }
    }
    ctx->pc = 0x1325ACu;
    // 0x1325ac: 0xc043f1a  jal         func_10FC68
    ctx->pc = 0x1325ACu;
    SET_GPR_U32(ctx, 31, 0x1325B4u);
    ctx->pc = 0x1325B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1325ACu;
    // 0x1325b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC68u, 0x1325ACu, 0x1325B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325B4u;
label_1325b4:
    // 0x1325b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1325b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1325b8:
    // 0x1325b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1325b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1325bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1325bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1325c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1325c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1325c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1325c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1325c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1325C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1325CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325C8u;
        // 0x1325cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1325C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1325D0u;
}
