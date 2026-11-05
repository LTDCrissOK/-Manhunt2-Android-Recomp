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

// Function: sub_003A2280
// Address: 0x3a2280 - 0x3a22e8
void sub_003A2280_0x3a2280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2280_0x3a2280");
#endif

    switch (ctx->pc) {
        case 0x3a2280u: goto label_3a2280;
        case 0x3a2284u: goto label_3a2284;
        case 0x3a2288u: goto label_3a2288;
        case 0x3a228cu: goto label_3a228c;
        case 0x3a2290u: goto label_3a2290;
        case 0x3a2294u: goto label_3a2294;
        case 0x3a2298u: goto label_3a2298;
        case 0x3a229cu: goto label_3a229c;
        case 0x3a22a0u: goto label_3a22a0;
        case 0x3a22a4u: goto label_3a22a4;
        case 0x3a22a8u: goto label_3a22a8;
        case 0x3a22acu: goto label_3a22ac;
        case 0x3a22b0u: goto label_3a22b0;
        case 0x3a22b4u: goto label_3a22b4;
        case 0x3a22b8u: goto label_3a22b8;
        case 0x3a22bcu: goto label_3a22bc;
        case 0x3a22c0u: goto label_3a22c0;
        case 0x3a22c4u: goto label_3a22c4;
        case 0x3a22c8u: goto label_3a22c8;
        case 0x3a22ccu: goto label_3a22cc;
        case 0x3a22d0u: goto label_3a22d0;
        case 0x3a22d4u: goto label_3a22d4;
        case 0x3a22d8u: goto label_3a22d8;
        case 0x3a22dcu: goto label_3a22dc;
        case 0x3a22e0u: goto label_3a22e0;
        case 0x3a22e4u: goto label_3a22e4;
        default: break;
    }

    ctx->pc = 0x3a2280u;

label_3a2280:
    // 0x3a2280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a2280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a2284:
    // 0x3a2284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a2284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a2288:
    // 0x3a2288: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3a228c:
    if (ctx->pc == 0x3A228Cu) {
        ctx->pc = 0x3A228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2288u;
        // 0x3a228c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2290u;
        goto label_3a2290;
    }
    ctx->pc = 0x3A2288u;
    {
        const bool branch_taken_0x3a2288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2288u;
        // 0x3a228c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2288) {
            ctx->pc = 0x3A22A8u;
            goto label_3a22a8;
        }
    }
    ctx->pc = 0x3A2290u;
label_3a2290:
    // 0x3a2290: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a2290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a2294:
    // 0x3a2294: 0xc0e8688  jal         func_3A1A20
label_3a2298:
    if (ctx->pc == 0x3A2298u) {
        ctx->pc = 0x3A2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2294u;
        // 0x3a2298: 0x2484c778  addiu       $a0, $a0, -0x3888 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A229Cu;
        goto label_3a229c;
    }
    ctx->pc = 0x3A2294u;
    SET_GPR_U32(ctx, 31, 0x3A229Cu);
    ctx->pc = 0x3A2298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2294u;
    // 0x3a2298: 0x2484c778  addiu       $a0, $a0, -0x3888 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A20u, 0x3A2294u, 0x3A229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A229Cu;
label_3a229c:
    // 0x3a229c: 0x1000000e  b           . + 4 + (0xE << 2)
label_3a22a0:
    if (ctx->pc == 0x3A22A0u) {
        ctx->pc = 0x3A22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A229Cu;
        // 0x3a22a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A22A4u;
        goto label_3a22a4;
    }
    ctx->pc = 0x3A229Cu;
    {
        const bool branch_taken_0x3a229c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A229Cu;
        // 0x3a22a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a229c) {
            ctx->pc = 0x3A22D8u;
            goto label_3a22d8;
        }
    }
    ctx->pc = 0x3A22A4u;
label_3a22a4:
    // 0x3a22a4: 0x0  nop
    ctx->pc = 0x3a22a4u;
    // NOP
label_3a22a8:
    // 0x3a22a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a22ac:
    // 0x3a22ac: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x3a22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3a22b0:
    // 0x3a22b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a22b4:
    if (ctx->pc == 0x3A22B4u) {
        ctx->pc = 0x3A22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22B0u;
        // 0x3a22b4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A22B8u;
        goto label_3a22b8;
    }
    ctx->pc = 0x3A22B0u;
    {
        const bool branch_taken_0x3a22b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a22b0) {
            ctx->pc = 0x3A22B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A22B0u;
            // 0x3a22b4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A22C8u;
            goto label_3a22c8;
        }
    }
    ctx->pc = 0x3A22B8u;
label_3a22b8:
    // 0x3a22b8: 0x40f809  jalr        $v0
label_3a22bc:
    if (ctx->pc == 0x3A22BCu) {
        ctx->pc = 0x3A22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22B8u;
        // 0x3a22bc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A22C0u;
        goto label_3a22c0;
    }
    ctx->pc = 0x3A22B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A22C0u);
        ctx->pc = 0x3A22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22B8u;
        // 0x3a22bc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A22B8u, 0x3A22C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A22C0u;
label_3a22c0:
    // 0x3a22c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a22c4:
    if (ctx->pc == 0x3A22C4u) {
        ctx->pc = 0x3A22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22C0u;
        // 0x3a22c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A22C8u;
        goto label_3a22c8;
    }
    ctx->pc = 0x3A22C0u;
    {
        const bool branch_taken_0x3a22c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22C0u;
        // 0x3a22c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a22c0) {
            ctx->pc = 0x3A22D4u;
            goto label_3a22d4;
        }
    }
    ctx->pc = 0x3A22C8u;
label_3a22c8:
    // 0x3a22c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a22c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a22cc:
    // 0x3a22cc: 0xc0e8688  jal         func_3A1A20
label_3a22d0:
    if (ctx->pc == 0x3A22D0u) {
        ctx->pc = 0x3A22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22CCu;
        // 0x3a22d0: 0x2484c798  addiu       $a0, $a0, -0x3868 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A22D4u;
        goto label_3a22d4;
    }
    ctx->pc = 0x3A22CCu;
    SET_GPR_U32(ctx, 31, 0x3A22D4u);
    ctx->pc = 0x3A22D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A22CCu;
    // 0x3a22d0: 0x2484c798  addiu       $a0, $a0, -0x3868 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A20u, 0x3A22CCu, 0x3A22D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A22D4u;
label_3a22d4:
    // 0x3a22d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a22d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a22d8:
    // 0x3a22d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a22d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a22dc:
    // 0x3a22dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a22dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a22e0:
    // 0x3a22e0: 0x3e00008  jr          $ra
label_3a22e4:
    if (ctx->pc == 0x3A22E4u) {
        ctx->pc = 0x3A22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22E0u;
        // 0x3a22e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A22E8u;
        goto label_fallthrough_0x3a22e0;
    }
    ctx->pc = 0x3A22E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22E0u;
        // 0x3a22e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A22E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a22e0:
    ctx->pc = 0x3A22E8u;
}
