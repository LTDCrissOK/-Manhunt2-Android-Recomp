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

// Function: sub_001162C0
// Address: 0x1162c0 - 0x116330
void sub_001162C0_0x1162c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001162C0_0x1162c0");
#endif

    switch (ctx->pc) {
        case 0x1162d8u: goto label_1162d8;
        case 0x1162f4u: goto label_1162f4;
        case 0x116304u: goto label_116304;
        default: break;
    }

    ctx->pc = 0x1162c0u;

    // 0x1162c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1162c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1162c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1162c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1162c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1162c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1162cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1162ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1162d0: 0xc08951c  jal         func_225470
    ctx->pc = 0x1162D0u;
    SET_GPR_U32(ctx, 31, 0x1162D8u);
    ctx->pc = 0x1162D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162D0u;
    // 0x1162d4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1162D0u, 0x1162D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162D8u;
label_1162d8:
    // 0x1162d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1162d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162dc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1162DCu;
    {
        const bool branch_taken_0x1162dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1162E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162DCu;
        // 0x1162e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162dc) {
            ctx->pc = 0x1162ECu;
            goto label_1162ec;
        }
    }
    ctx->pc = 0x1162E4u;
    // 0x1162e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1162E4u;
    {
        const bool branch_taken_0x1162e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1162E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162E4u;
        // 0x1162e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162e4) {
            ctx->pc = 0x116318u;
            goto label_116318;
        }
    }
    ctx->pc = 0x1162ECu;
label_1162ec:
    // 0x1162ec: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1162ECu;
    SET_GPR_U32(ctx, 31, 0x1162F4u);
    ctx->pc = 0x1162F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162ECu;
    // 0x1162f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1162ECu, 0x1162F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162F4u;
label_1162f4:
    // 0x1162f4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1162F4u;
    {
        const bool branch_taken_0x1162f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1162f4) {
            ctx->pc = 0x1162F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1162F4u;
            // 0x1162f8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116314u;
            goto label_116314;
        }
    }
    ctx->pc = 0x1162FCu;
    // 0x1162fc: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1162FCu;
    SET_GPR_U32(ctx, 31, 0x116304u);
    ctx->pc = 0x116300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162FCu;
    // 0x116300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1162FCu, 0x116304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116304u;
label_116304:
    // 0x116304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116308: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116308u;
    {
        const bool branch_taken_0x116308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116308u;
        // 0x11630c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116308) {
            ctx->pc = 0x116318u;
            goto label_116318;
        }
    }
    ctx->pc = 0x116310u;
    // 0x116310: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x116310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116314:
    // 0x116314: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x116314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116318:
    // 0x116318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11631c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11631cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116324: 0x3e00008  jr          $ra
    ctx->pc = 0x116324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116324u;
        // 0x116328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11632Cu;
    // 0x11632c: 0x0  nop
    ctx->pc = 0x11632cu;
    // NOP
    ctx->pc = 0x116330u;
}
