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

// Function: sub_003A22E8
// Address: 0x3a22e8 - 0x3a2350
void sub_003A22E8_0x3a22e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A22E8_0x3a22e8");
#endif

    switch (ctx->pc) {
        case 0x3a22e8u: goto label_3a22e8;
        case 0x3a22ecu: goto label_3a22ec;
        case 0x3a22f0u: goto label_3a22f0;
        case 0x3a22f4u: goto label_3a22f4;
        case 0x3a22f8u: goto label_3a22f8;
        case 0x3a22fcu: goto label_3a22fc;
        case 0x3a2300u: goto label_3a2300;
        case 0x3a2304u: goto label_3a2304;
        case 0x3a2308u: goto label_3a2308;
        case 0x3a230cu: goto label_3a230c;
        case 0x3a2310u: goto label_3a2310;
        case 0x3a2314u: goto label_3a2314;
        case 0x3a2318u: goto label_3a2318;
        case 0x3a231cu: goto label_3a231c;
        case 0x3a2320u: goto label_3a2320;
        case 0x3a2324u: goto label_3a2324;
        case 0x3a2328u: goto label_3a2328;
        case 0x3a232cu: goto label_3a232c;
        case 0x3a2330u: goto label_3a2330;
        case 0x3a2334u: goto label_3a2334;
        case 0x3a2338u: goto label_3a2338;
        case 0x3a233cu: goto label_3a233c;
        case 0x3a2340u: goto label_3a2340;
        case 0x3a2344u: goto label_3a2344;
        case 0x3a2348u: goto label_3a2348;
        case 0x3a234cu: goto label_3a234c;
        default: break;
    }

    ctx->pc = 0x3a22e8u;

label_3a22e8:
    // 0x3a22e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a22e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a22ec:
    // 0x3a22ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a22ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a22f0:
    // 0x3a22f0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3a22f4:
    if (ctx->pc == 0x3A22F4u) {
        ctx->pc = 0x3A22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22F0u;
        // 0x3a22f4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A22F8u;
        goto label_3a22f8;
    }
    ctx->pc = 0x3A22F0u;
    {
        const bool branch_taken_0x3a22f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22F0u;
        // 0x3a22f4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a22f0) {
            ctx->pc = 0x3A2310u;
            goto label_3a2310;
        }
    }
    ctx->pc = 0x3A22F8u;
label_3a22f8:
    // 0x3a22f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a22f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a22fc:
    // 0x3a22fc: 0xc0e8688  jal         func_3A1A20
label_3a2300:
    if (ctx->pc == 0x3A2300u) {
        ctx->pc = 0x3A2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22FCu;
        // 0x3a2300: 0x2484c7b0  addiu       $a0, $a0, -0x3850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2304u;
        goto label_3a2304;
    }
    ctx->pc = 0x3A22FCu;
    SET_GPR_U32(ctx, 31, 0x3A2304u);
    ctx->pc = 0x3A2300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A22FCu;
    // 0x3a2300: 0x2484c7b0  addiu       $a0, $a0, -0x3850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A20u, 0x3A22FCu, 0x3A2304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2304u;
label_3a2304:
    // 0x3a2304: 0x1000000e  b           . + 4 + (0xE << 2)
label_3a2308:
    if (ctx->pc == 0x3A2308u) {
        ctx->pc = 0x3A2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2304u;
        // 0x3a2308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A230Cu;
        goto label_3a230c;
    }
    ctx->pc = 0x3A2304u;
    {
        const bool branch_taken_0x3a2304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2304u;
        // 0x3a2308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2304) {
            ctx->pc = 0x3A2340u;
            goto label_3a2340;
        }
    }
    ctx->pc = 0x3A230Cu;
label_3a230c:
    // 0x3a230c: 0x0  nop
    ctx->pc = 0x3a230cu;
    // NOP
label_3a2310:
    // 0x3a2310: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2314:
    // 0x3a2314: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3a2314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3a2318:
    // 0x3a2318: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a231c:
    if (ctx->pc == 0x3A231Cu) {
        ctx->pc = 0x3A231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2318u;
        // 0x3a231c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2320u;
        goto label_3a2320;
    }
    ctx->pc = 0x3A2318u;
    {
        const bool branch_taken_0x3a2318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2318) {
            ctx->pc = 0x3A231Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2318u;
            // 0x3a231c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2330u;
            goto label_3a2330;
        }
    }
    ctx->pc = 0x3A2320u;
label_3a2320:
    // 0x3a2320: 0x40f809  jalr        $v0
label_3a2324:
    if (ctx->pc == 0x3A2324u) {
        ctx->pc = 0x3A2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2320u;
        // 0x3a2324: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2328u;
        goto label_3a2328;
    }
    ctx->pc = 0x3A2320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2328u);
        ctx->pc = 0x3A2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2320u;
        // 0x3a2324: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2320u, 0x3A2328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2328u;
label_3a2328:
    // 0x3a2328: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a232c:
    if (ctx->pc == 0x3A232Cu) {
        ctx->pc = 0x3A232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2328u;
        // 0x3a232c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2330u;
        goto label_3a2330;
    }
    ctx->pc = 0x3A2328u;
    {
        const bool branch_taken_0x3a2328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2328u;
        // 0x3a232c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2328) {
            ctx->pc = 0x3A233Cu;
            goto label_3a233c;
        }
    }
    ctx->pc = 0x3A2330u;
label_3a2330:
    // 0x3a2330: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a2330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2334:
    // 0x3a2334: 0xc0e8688  jal         func_3A1A20
label_3a2338:
    if (ctx->pc == 0x3A2338u) {
        ctx->pc = 0x3A2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2334u;
        // 0x3a2338: 0x2484c7d0  addiu       $a0, $a0, -0x3830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A233Cu;
        goto label_3a233c;
    }
    ctx->pc = 0x3A2334u;
    SET_GPR_U32(ctx, 31, 0x3A233Cu);
    ctx->pc = 0x3A2338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2334u;
    // 0x3a2338: 0x2484c7d0  addiu       $a0, $a0, -0x3830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A20u, 0x3A2334u, 0x3A233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A233Cu;
label_3a233c:
    // 0x3a233c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a233cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a2340:
    // 0x3a2340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2344:
    // 0x3a2344: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a2344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a2348:
    // 0x3a2348: 0x3e00008  jr          $ra
label_3a234c:
    if (ctx->pc == 0x3A234Cu) {
        ctx->pc = 0x3A234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2348u;
        // 0x3a234c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2350u;
        goto label_fallthrough_0x3a2348;
    }
    ctx->pc = 0x3A2348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2348u;
        // 0x3a234c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a2348:
    ctx->pc = 0x3A2350u;
}
