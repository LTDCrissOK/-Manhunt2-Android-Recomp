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

// Function: sub_002832C8
// Address: 0x2832c8 - 0x2833e0
void sub_002832C8_0x2832c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002832C8_0x2832c8");
#endif

    switch (ctx->pc) {
        case 0x2832dcu: goto label_2832dc;
        case 0x28330cu: goto label_28330c;
        case 0x283334u: goto label_283334;
        case 0x28335cu: goto label_28335c;
        case 0x283384u: goto label_283384;
        case 0x2833acu: goto label_2833ac;
        default: break;
    }

    ctx->pc = 0x2832c8u;

    // 0x2832c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2832c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2832cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2832ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2832d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2832d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2832d4: 0xc0a0cf8  jal         func_2833E0
    ctx->pc = 0x2832D4u;
    SET_GPR_U32(ctx, 31, 0x2832DCu);
    ctx->pc = 0x2833E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2833E0u, 0x2832D4u, 0x2832DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832DCu;
label_2832dc:
    // 0x2832dc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2832dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2832e0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2832e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2832e4: 0x2463af50  addiu       $v1, $v1, -0x50B0
    ctx->pc = 0x2832e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946640));
    // 0x2832e8: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2832e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BAF98u));
    // 0x2832ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2832ECu;
    {
        const bool branch_taken_0x2832ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2832F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832ECu;
        // 0x2832f0: 0xac620060  sw          $v0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832ec) {
            ctx->pc = 0x283300u;
            goto label_283300;
        }
    }
    ctx->pc = 0x2832F4u;
    // 0x2832f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2832f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2832f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2832F8u;
    {
        const bool branch_taken_0x2832f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2832FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832F8u;
        // 0x2832fc: 0xac620064  sw          $v0, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832f8) {
            ctx->pc = 0x283304u;
            goto label_283304;
        }
    }
    ctx->pc = 0x283300u;
label_283300:
    // 0x283300: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x283300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
label_283304:
    // 0x283304: 0xc0a0d3e  jal         func_2834F8
    ctx->pc = 0x283304u;
    SET_GPR_U32(ctx, 31, 0x28330Cu);
    ctx->pc = 0x2834F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2834F8u, 0x283304u, 0x28330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28330Cu;
label_28330c:
    // 0x28330c: 0x2604af50  addiu       $a0, $s0, -0x50B0
    ctx->pc = 0x28330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946640));
    // 0x283310: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x283310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x283314: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x283314u;
    {
        const bool branch_taken_0x283314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283314u;
        // 0x283318: 0xac820068  sw          $v0, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283314) {
            ctx->pc = 0x283328u;
            goto label_283328;
        }
    }
    ctx->pc = 0x28331Cu;
    // 0x28331c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283320u;
    {
        const bool branch_taken_0x283320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283320u;
        // 0x283324: 0xac82006c  sw          $v0, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283320) {
            ctx->pc = 0x28332Cu;
            goto label_28332c;
        }
    }
    ctx->pc = 0x283328u;
label_283328:
    // 0x283328: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x283328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
label_28332c:
    // 0x28332c: 0xc0a0d84  jal         func_283610
    ctx->pc = 0x28332Cu;
    SET_GPR_U32(ctx, 31, 0x283334u);
    ctx->pc = 0x283610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283610u, 0x28332Cu, 0x283334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283334u;
label_283334:
    // 0x283334: 0x2604af50  addiu       $a0, $s0, -0x50B0
    ctx->pc = 0x283334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946640));
    // 0x283338: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x283338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x28333c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28333Cu;
    {
        const bool branch_taken_0x28333c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28333Cu;
        // 0x283340: 0xac820070  sw          $v0, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28333c) {
            ctx->pc = 0x283350u;
            goto label_283350;
        }
    }
    ctx->pc = 0x283344u;
    // 0x283344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283348u;
    {
        const bool branch_taken_0x283348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283348u;
        // 0x28334c: 0xac820074  sw          $v0, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283348) {
            ctx->pc = 0x283354u;
            goto label_283354;
        }
    }
    ctx->pc = 0x283350u;
label_283350:
    // 0x283350: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x283350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
label_283354:
    // 0x283354: 0xc0a0dca  jal         func_283728
    ctx->pc = 0x283354u;
    SET_GPR_U32(ctx, 31, 0x28335Cu);
    ctx->pc = 0x283728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283728u, 0x283354u, 0x28335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28335Cu;
label_28335c:
    // 0x28335c: 0x2604af50  addiu       $a0, $s0, -0x50B0
    ctx->pc = 0x28335cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946640));
    // 0x283360: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x283360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x283364: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x283364u;
    {
        const bool branch_taken_0x283364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283364u;
        // 0x283368: 0xac820078  sw          $v0, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283364) {
            ctx->pc = 0x283378u;
            goto label_283378;
        }
    }
    ctx->pc = 0x28336Cu;
    // 0x28336c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283370u;
    {
        const bool branch_taken_0x283370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283370u;
        // 0x283374: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283370) {
            ctx->pc = 0x28337Cu;
            goto label_28337c;
        }
    }
    ctx->pc = 0x283378u;
label_283378:
    // 0x283378: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x283378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
label_28337c:
    // 0x28337c: 0xc0a0e10  jal         func_283840
    ctx->pc = 0x28337Cu;
    SET_GPR_U32(ctx, 31, 0x283384u);
    ctx->pc = 0x283840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283840u, 0x28337Cu, 0x283384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283384u;
label_283384:
    // 0x283384: 0x2604af50  addiu       $a0, $s0, -0x50B0
    ctx->pc = 0x283384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946640));
    // 0x283388: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x283388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x28338c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28338Cu;
    {
        const bool branch_taken_0x28338c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28338Cu;
        // 0x283390: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28338c) {
            ctx->pc = 0x2833A0u;
            goto label_2833a0;
        }
    }
    ctx->pc = 0x283394u;
    // 0x283394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283398: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283398u;
    {
        const bool branch_taken_0x283398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283398u;
        // 0x28339c: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283398) {
            ctx->pc = 0x2833A4u;
            goto label_2833a4;
        }
    }
    ctx->pc = 0x2833A0u;
label_2833a0:
    // 0x2833a0: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x2833a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_2833a4:
    // 0x2833a4: 0xc0a0e54  jal         func_283950
    ctx->pc = 0x2833A4u;
    SET_GPR_U32(ctx, 31, 0x2833ACu);
    ctx->pc = 0x283950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283950u, 0x2833A4u, 0x2833ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833ACu;
label_2833ac:
    // 0x2833ac: 0x2604af50  addiu       $a0, $s0, -0x50B0
    ctx->pc = 0x2833acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946640));
    // 0x2833b0: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2833b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2833b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2833B4u;
    {
        const bool branch_taken_0x2833b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2833B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833B4u;
        // 0x2833b8: 0xac820088  sw          $v0, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833b4) {
            ctx->pc = 0x2833C8u;
            goto label_2833c8;
        }
    }
    ctx->pc = 0x2833BCu;
    // 0x2833bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2833bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2833c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2833C0u;
    {
        const bool branch_taken_0x2833c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2833C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833C0u;
        // 0x2833c4: 0xac82008c  sw          $v0, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833c0) {
            ctx->pc = 0x2833CCu;
            goto label_2833cc;
        }
    }
    ctx->pc = 0x2833C8u;
label_2833c8:
    // 0x2833c8: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x2833c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
label_2833cc:
    // 0x2833cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2833ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2833d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2833d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2833d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2833D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2833D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833D4u;
        // 0x2833d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2833D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2833DCu;
    // 0x2833dc: 0x0  nop
    ctx->pc = 0x2833dcu;
    // NOP
    ctx->pc = 0x2833e0u;
}
