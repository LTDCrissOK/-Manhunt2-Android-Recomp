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

// Function: sub_0030C7D0
// Address: 0x30c7d0 - 0x30c848
void sub_0030C7D0_0x30c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C7D0_0x30c7d0");
#endif

    switch (ctx->pc) {
        case 0x30c7f4u: goto label_30c7f4;
        case 0x30c7fcu: goto label_30c7fc;
        case 0x30c810u: goto label_30c810;
        case 0x30c818u: goto label_30c818;
        case 0x30c824u: goto label_30c824;
        case 0x30c830u: goto label_30c830;
        default: break;
    }

    ctx->pc = 0x30c7d0u;

    // 0x30c7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c7d4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x30c7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x30c7d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30c7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30c7dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30c7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c7e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c7e4: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x30c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x30c7e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30c7ec: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x30C7ECu;
    SET_GPR_U32(ctx, 31, 0x30C7F4u);
    ctx->pc = 0x30C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7ECu;
    // 0x30c7f0: 0x24847eb8  addiu       $a0, $a0, 0x7EB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x30C7ECu, 0x30C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C7F4u;
label_30c7f4:
    // 0x30c7f4: 0xc0c2e50  jal         func_30B940
    ctx->pc = 0x30C7F4u;
    SET_GPR_U32(ctx, 31, 0x30C7FCu);
    ctx->pc = 0x30C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7F4u;
    // 0x30c7f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B940u, 0x30C7F4u, 0x30C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C7FCu;
label_30c7fc:
    // 0x30c7fc: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x30c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x30c800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30c800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c804: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x30c804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x30c808: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x30C808u;
    SET_GPR_U32(ctx, 31, 0x30C810u);
    ctx->pc = 0x30C80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C808u;
    // 0x30c80c: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x30C808u, 0x30C810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C810u;
label_30c810:
    // 0x30c810: 0xc0c4808  jal         func_312020
    ctx->pc = 0x30C810u;
    SET_GPR_U32(ctx, 31, 0x30C818u);
    ctx->pc = 0x30C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C810u;
    // 0x30c814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x30C810u, 0x30C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C818u;
label_30c818:
    // 0x30c818: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30c818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c81c: 0xc0c324e  jal         func_30C938
    ctx->pc = 0x30C81Cu;
    SET_GPR_U32(ctx, 31, 0x30C824u);
    ctx->pc = 0x30C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C81Cu;
    // 0x30c820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C938u, 0x30C81Cu, 0x30C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C824u;
label_30c824:
    // 0x30c824: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c828: 0xc0c48c2  jal         func_312308
    ctx->pc = 0x30C828u;
    SET_GPR_U32(ctx, 31, 0x30C830u);
    ctx->pc = 0x30C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C828u;
    // 0x30c82c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312308u, 0x30C828u, 0x30C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C830u;
label_30c830:
    // 0x30c830: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30c830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c834: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30c834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c83c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30c83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c840: 0x3e00008  jr          $ra
    ctx->pc = 0x30C840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C840u;
        // 0x30c844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C848u;
}
