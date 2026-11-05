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

// Function: sub_003A2848
// Address: 0x3a2848 - 0x3a28e8
void sub_003A2848_0x3a2848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2848_0x3a2848");
#endif

    switch (ctx->pc) {
        case 0x3a2864u: goto label_3a2864;
        case 0x3a2884u: goto label_3a2884;
        case 0x3a28b4u: goto label_3a28b4;
        case 0x3a28bcu: goto label_3a28bc;
        default: break;
    }

    ctx->pc = 0x3a2848u;

    // 0x3a2848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a2848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a284c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a2850: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x3a2850u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x3a2854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a2854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a2858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a2858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a285c: 0xc0eb27a  jal         func_3AC9E8
    ctx->pc = 0x3A285Cu;
    SET_GPR_U32(ctx, 31, 0x3A2864u);
    ctx->pc = 0x3A2860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A285Cu;
    // 0x3a2860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9E8u, 0x3A285Cu, 0x3A2864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2864u;
label_3a2864:
    // 0x3a2864: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a2864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a2868: 0x26221dc8  addiu       $v0, $s1, 0x1DC8
    ctx->pc = 0x3a2868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 7624));
    // 0x3a286c: 0x2484d2a0  addiu       $a0, $a0, -0x2D60
    ctx->pc = 0x3a286cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955680));
    // 0x3a2870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a2870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2874: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2874u;
    {
        const bool branch_taken_0x3a2874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2874u;
        // 0x3a2878: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2874) {
            ctx->pc = 0x3A2890u;
            goto label_3a2890;
        }
    }
    ctx->pc = 0x3A287Cu;
    // 0x3a287c: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A287Cu;
    SET_GPR_U32(ctx, 31, 0x3A2884u);
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A287Cu, 0x3A2884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2884u;
label_3a2884:
    // 0x3a2884: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3A2884u;
    {
        const bool branch_taken_0x3a2884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2884u;
        // 0x3a2888: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2884) {
            ctx->pc = 0x3A28D8u;
            goto label_3a28d8;
        }
    }
    ctx->pc = 0x3A288Cu;
    // 0x3a288c: 0x0  nop
    ctx->pc = 0x3a288cu;
    // NOP
label_3a2890:
    // 0x3a2890: 0x82040002  lb          $a0, 0x2($s0)
    ctx->pc = 0x3a2890u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a2894: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A2894u;
    {
        const bool branch_taken_0x3a2894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2894u;
        // 0x3a2898: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2894) {
            ctx->pc = 0x3A28B4u;
            goto label_3a28b4;
        }
    }
    ctx->pc = 0x3A289Cu;
    // 0x3a289c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A289Cu;
    {
        const bool branch_taken_0x3a289c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A28A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A289Cu;
        // 0x3a28a0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a289c) {
            ctx->pc = 0x3A28B4u;
            goto label_3a28b4;
        }
    }
    ctx->pc = 0x3A28A4u;
    // 0x3a28a4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A28A4u;
    {
        const bool branch_taken_0x3a28a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A28A4u;
        // 0x3a28a8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a28a4) {
            ctx->pc = 0x3A28B4u;
            goto label_3a28b4;
        }
    }
    ctx->pc = 0x3A28ACu;
    // 0x3a28ac: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A28ACu;
    SET_GPR_U32(ctx, 31, 0x3A28B4u);
    ctx->pc = 0x3A28B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A28ACu;
    // 0x3a28b0: 0x2484d2e0  addiu       $a0, $a0, -0x2D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A28ACu, 0x3A28B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A28B4u;
label_3a28b4:
    // 0x3a28b4: 0xc0e89e4  jal         func_3A2790
    ctx->pc = 0x3A28B4u;
    SET_GPR_U32(ctx, 31, 0x3A28BCu);
    ctx->pc = 0x3A2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2790u, 0x3A28B4u, 0x3A28BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A28BCu;
label_3a28bc:
    // 0x3a28bc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a28c0: 0xa2201dc8  sb          $zero, 0x1DC8($s1)
    ctx->pc = 0x3a28c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7624), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a28c4: 0x24631e2c  addiu       $v1, $v1, 0x1E2C
    ctx->pc = 0x3a28c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7724));
    // 0x3a28c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x411E2Cu));
    // 0x3a28cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a28d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a28d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411E2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E2Cu, _value); } while (0);
    // 0x3a28d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a28d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a28d8:
    // 0x3a28d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a28d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a28dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a28dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a28e0: 0x80eb286  j           func_3ACA18
    ctx->pc = 0x3A28E0u;
    ctx->pc = 0x3A28E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A28E0u;
    // 0x3a28e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA18u;
    sub_003ACA18_0x3aca18(rdram, ctx, runtime); return;
    ctx->pc = 0x3A28E8u;
}
