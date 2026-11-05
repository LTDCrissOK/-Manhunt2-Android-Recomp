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

// Function: sub_003456B8
// Address: 0x3456b8 - 0x3456f8
void sub_003456B8_0x3456b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003456B8_0x3456b8");
#endif

    switch (ctx->pc) {
        case 0x3456b8u: goto label_3456b8;
        case 0x3456bcu: goto label_3456bc;
        case 0x3456c0u: goto label_3456c0;
        case 0x3456c4u: goto label_3456c4;
        case 0x3456c8u: goto label_3456c8;
        case 0x3456ccu: goto label_3456cc;
        case 0x3456d0u: goto label_3456d0;
        case 0x3456d4u: goto label_3456d4;
        case 0x3456d8u: goto label_3456d8;
        case 0x3456dcu: goto label_3456dc;
        case 0x3456e0u: goto label_3456e0;
        case 0x3456e4u: goto label_3456e4;
        case 0x3456e8u: goto label_3456e8;
        case 0x3456ecu: goto label_3456ec;
        case 0x3456f0u: goto label_3456f0;
        case 0x3456f4u: goto label_3456f4;
        default: break;
    }

    ctx->pc = 0x3456b8u;

label_3456b8:
    // 0x3456b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3456b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3456bc:
    // 0x3456bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3456bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3456c0:
    // 0x3456c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3456c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3456c4:
    // 0x3456c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3456c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3456c8:
    // 0x3456c8: 0xc0d15be  jal         func_3456F8
label_3456cc:
    if (ctx->pc == 0x3456CCu) {
        ctx->pc = 0x3456CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456C8u;
        // 0x3456cc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3456D0u;
        goto label_3456d0;
    }
    ctx->pc = 0x3456C8u;
    SET_GPR_U32(ctx, 31, 0x3456D0u);
    ctx->pc = 0x3456CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3456C8u;
    // 0x3456cc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3456F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3456F8u, 0x3456C8u, 0x3456D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456D0u;
label_3456d0:
    // 0x3456d0: 0xc0d4370  jal         func_350DC0
label_3456d4:
    if (ctx->pc == 0x3456D4u) {
        ctx->pc = 0x3456D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456D0u;
        // 0x3456d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3456D8u;
        goto label_3456d8;
    }
    ctx->pc = 0x3456D0u;
    SET_GPR_U32(ctx, 31, 0x3456D8u);
    ctx->pc = 0x3456D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3456D0u;
    // 0x3456d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350DC0u, 0x3456D0u, 0x3456D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456D8u;
label_3456d8:
    // 0x3456d8: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x3456d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_3456dc:
    // 0x3456dc: 0x60f809  jalr        $v1
label_3456e0:
    if (ctx->pc == 0x3456E0u) {
        ctx->pc = 0x3456E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456DCu;
        // 0x3456e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3456E4u;
        goto label_3456e4;
    }
    ctx->pc = 0x3456DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3456E4u);
        ctx->pc = 0x3456E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456DCu;
        // 0x3456e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3456DCu, 0x3456E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3456E4u;
label_3456e4:
    // 0x3456e4: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x3456e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_3456e8:
    // 0x3456e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3456e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3456ec:
    // 0x3456ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3456ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3456f0:
    // 0x3456f0: 0x3e00008  jr          $ra
label_3456f4:
    if (ctx->pc == 0x3456F4u) {
        ctx->pc = 0x3456F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456F0u;
        // 0x3456f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3456F8u;
        goto label_fallthrough_0x3456f0;
    }
    ctx->pc = 0x3456F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3456F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456F0u;
        // 0x3456f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3456F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3456f0:
    ctx->pc = 0x3456F8u;
}
