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

// Function: sub_0013C820
// Address: 0x13c820 - 0x13c870
void sub_0013C820_0x13c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C820_0x13c820");
#endif

    switch (ctx->pc) {
        case 0x13c820u: goto label_13c820;
        case 0x13c824u: goto label_13c824;
        case 0x13c828u: goto label_13c828;
        case 0x13c82cu: goto label_13c82c;
        case 0x13c830u: goto label_13c830;
        case 0x13c834u: goto label_13c834;
        case 0x13c838u: goto label_13c838;
        case 0x13c83cu: goto label_13c83c;
        case 0x13c840u: goto label_13c840;
        case 0x13c844u: goto label_13c844;
        case 0x13c848u: goto label_13c848;
        case 0x13c84cu: goto label_13c84c;
        case 0x13c850u: goto label_13c850;
        case 0x13c854u: goto label_13c854;
        case 0x13c858u: goto label_13c858;
        case 0x13c85cu: goto label_13c85c;
        case 0x13c860u: goto label_13c860;
        case 0x13c864u: goto label_13c864;
        case 0x13c868u: goto label_13c868;
        case 0x13c86cu: goto label_13c86c;
        default: break;
    }

    ctx->pc = 0x13c820u;

label_13c820:
    // 0x13c820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13c824:
    // 0x13c824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c828:
    // 0x13c828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c82c:
    // 0x13c82c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c830:
    // 0x13c830: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13c830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13c834:
    // 0x13c834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13c838:
    // 0x13c838: 0xc041d7c  jal         func_1075F0
label_13c83c:
    if (ctx->pc == 0x13C83Cu) {
        ctx->pc = 0x13C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C838u;
        // 0x13c83c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C840u;
        goto label_13c840;
    }
    ctx->pc = 0x13C838u;
    SET_GPR_U32(ctx, 31, 0x13C840u);
    ctx->pc = 0x13C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C838u;
    // 0x13c83c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1075F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1075F0u, 0x13C838u, 0x13C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C840u;
label_13c840:
    // 0x13c840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c844:
    // 0x13c844: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13c844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13c848:
    // 0x13c848: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13c848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13c84c:
    // 0x13c84c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13c850:
    // 0x13c850: 0x40f809  jalr        $v0
label_13c854:
    if (ctx->pc == 0x13C854u) {
        ctx->pc = 0x13C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C850u;
        // 0x13c854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C858u;
        goto label_13c858;
    }
    ctx->pc = 0x13C850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C858u);
        ctx->pc = 0x13C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C850u;
        // 0x13c854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C850u, 0x13C858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C858u;
label_13c858:
    // 0x13c858: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13c858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c85c:
    // 0x13c85c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c85cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13c860:
    // 0x13c860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c864:
    // 0x13c864: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c868:
    // 0x13c868: 0x3e00008  jr          $ra
label_13c86c:
    if (ctx->pc == 0x13C86Cu) {
        ctx->pc = 0x13C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C868u;
        // 0x13c86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C870u;
        goto label_fallthrough_0x13c868;
    }
    ctx->pc = 0x13C868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C868u;
        // 0x13c86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13c868:
    ctx->pc = 0x13C870u;
}
