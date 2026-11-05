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

// Function: sub_00141808
// Address: 0x141808 - 0x141870
void sub_00141808_0x141808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141808_0x141808");
#endif

    switch (ctx->pc) {
        case 0x14184cu: goto label_14184c;
        case 0x141858u: goto label_141858;
        default: break;
    }

    ctx->pc = 0x141808u;

    // 0x141808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14180c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14180cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x141810: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x141810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141814: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x141814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x141818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14181c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14181cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141824: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x141824u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x141828: 0x24e79a08  addiu       $a3, $a3, -0x65F8
    ctx->pc = 0x141828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941192));
    // 0x14182c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x141830: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141834: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x141834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x141838: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x141838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14183c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14183cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x141840: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x141840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x141844: 0xc04d91a  jal         func_136468
    ctx->pc = 0x141844u;
    SET_GPR_U32(ctx, 31, 0x14184Cu);
    ctx->pc = 0x141848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141844u;
    // 0x141848: 0x8cf0020c  lw          $s0, 0x20C($a3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136468u, 0x141844u, 0x14184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14184Cu;
label_14184c:
    // 0x14184c: 0x8e250ab0  lw          $a1, 0xAB0($s1)
    ctx->pc = 0x14184cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
    // 0x141850: 0xc043e76  jal         func_10F9D8
    ctx->pc = 0x141850u;
    SET_GPR_U32(ctx, 31, 0x141858u);
    ctx->pc = 0x141854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141850u;
    // 0x141854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9D8u, 0x141850u, 0x141858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141858u;
label_141858:
    // 0x141858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14185c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14185cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141864: 0x3e00008  jr          $ra
    ctx->pc = 0x141864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141864u;
        // 0x141868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14186Cu;
    // 0x14186c: 0x0  nop
    ctx->pc = 0x14186cu;
    // NOP
    ctx->pc = 0x141870u;
}
