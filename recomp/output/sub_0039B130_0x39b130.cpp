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

// Function: sub_0039B130
// Address: 0x39b130 - 0x39b188
void sub_0039B130_0x39b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B130_0x39b130");
#endif

    switch (ctx->pc) {
        case 0x39b154u: goto label_39b154;
        case 0x39b16cu: goto label_39b16c;
        default: break;
    }

    ctx->pc = 0x39b130u;

    // 0x39b130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39b134: 0x24a6fc00  addiu       $a2, $a1, -0x400
    ctx->pc = 0x39b134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
    // 0x39b138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b13c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39b13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b140: 0x26050400  addiu       $a1, $s0, 0x400
    ctx->pc = 0x39b140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x39b144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39b148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39b148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39b14c: 0xc0e6b70  jal         func_39ADC0
    ctx->pc = 0x39B14Cu;
    SET_GPR_U32(ctx, 31, 0x39B154u);
    ctx->pc = 0x39B150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B14Cu;
    // 0x39b150: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ADC0u, 0x39B14Cu, 0x39B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B154u;
label_39b154:
    // 0x39b154: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39b154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b158: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x39B158u;
    {
        const bool branch_taken_0x39b158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B158u;
        // 0x39b15c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b158) {
            ctx->pc = 0x39B170u;
            goto label_39b170;
        }
    }
    ctx->pc = 0x39B160u;
    // 0x39b160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39b160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b164: 0xc0ea0f0  jal         func_3A83C0
    ctx->pc = 0x39B164u;
    SET_GPR_U32(ctx, 31, 0x39B16Cu);
    ctx->pc = 0x39B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B164u;
    // 0x39b168: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A83C0u, 0x39B164u, 0x39B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B16Cu;
label_39b16c:
    // 0x39b16c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39b16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39b170:
    // 0x39b170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b17c: 0x3e00008  jr          $ra
    ctx->pc = 0x39B17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B17Cu;
        // 0x39b180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B184u;
    // 0x39b184: 0x0  nop
    ctx->pc = 0x39b184u;
    // NOP
    ctx->pc = 0x39b188u;
}
