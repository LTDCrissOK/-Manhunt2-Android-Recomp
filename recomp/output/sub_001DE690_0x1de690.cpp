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

// Function: sub_001DE690
// Address: 0x1de690 - 0x1de768
void sub_001DE690_0x1de690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE690_0x1de690");
#endif

    switch (ctx->pc) {
        case 0x1de6b4u: goto label_1de6b4;
        case 0x1de6ccu: goto label_1de6cc;
        case 0x1de6e0u: goto label_1de6e0;
        case 0x1de718u: goto label_1de718;
        case 0x1de734u: goto label_1de734;
        default: break;
    }

    ctx->pc = 0x1de690u;

    // 0x1de690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1de690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1de694: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1de694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1de698: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1de698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1de69c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1de69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1de6a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1de6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1de6a4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1de6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1de6a8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1de6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1de6ac: 0xc077fee  jal         func_1DFFB8
    ctx->pc = 0x1DE6ACu;
    SET_GPR_U32(ctx, 31, 0x1DE6B4u);
    ctx->pc = 0x1DE6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6ACu;
    // 0x1de6b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFB8u, 0x1DE6ACu, 0x1DE6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6B4u;
label_1de6b4:
    // 0x1de6b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE6B4u;
    {
        const bool branch_taken_0x1de6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6B4u;
        // 0x1de6b8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6b4) {
            ctx->pc = 0x1DE6C4u;
            goto label_1de6c4;
        }
    }
    ctx->pc = 0x1DE6BCu;
    // 0x1de6bc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1DE6BCu;
    {
        const bool branch_taken_0x1de6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6BCu;
        // 0x1de6c0: 0x8c6291c0  lw          $v0, -0x6E40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6bc) {
            ctx->pc = 0x1DE748u;
            goto label_1de748;
        }
    }
    ctx->pc = 0x1DE6C4u;
label_1de6c4:
    // 0x1de6c4: 0xc0f75c2  jal         func_3DD708
    ctx->pc = 0x1DE6C4u;
    SET_GPR_U32(ctx, 31, 0x1DE6CCu);
    ctx->pc = 0x1DE6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6C4u;
    // 0x1de6c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD708u, 0x1DE6C4u, 0x1DE6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6CCu;
label_1de6cc:
    // 0x1de6cc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DE6CCu;
    {
        const bool branch_taken_0x1de6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6CCu;
        // 0x1de6d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6cc) {
            ctx->pc = 0x1DE748u;
            goto label_1de748;
        }
    }
    ctx->pc = 0x1DE6D4u;
    // 0x1de6d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6d8: 0xc077e7a  jal         func_1DF9E8
    ctx->pc = 0x1DE6D8u;
    SET_GPR_U32(ctx, 31, 0x1DE6E0u);
    ctx->pc = 0x1DE6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6D8u;
    // 0x1de6dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9E8u, 0x1DE6D8u, 0x1DE6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6E0u;
label_1de6e0:
    // 0x1de6e0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1de6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1de6e4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1de6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1de6e8: 0xc440d858  lwc1        $f0, -0x27A8($v0)
    ctx->pc = 0x1de6e8u;
    { uint32_t bits = FAST_READ32(0x45D858u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de6ec: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1de6ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1de6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1de6f4: 0x8c6491f4  lw          $a0, -0x6E0C($v1)
    ctx->pc = 0x1de6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F91F4u));
    // 0x1de6f8: 0xe44091b0  swc1        $f0, -0x6E50($v0)
    ctx->pc = 0x1de6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F91B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91B0u, _value); } while (0); }
    // 0x1de6fc: 0x18800011  blez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE6FCu;
    {
        const bool branch_taken_0x1de6fc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1DE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6FCu;
        // 0x1de700: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6fc) {
            ctx->pc = 0x1DE744u;
            goto label_1de744;
        }
    }
    ctx->pc = 0x1DE704u;
    // 0x1de704: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1de704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1de708: 0x3c13001e  lui         $s3, 0x1E
    ctx->pc = 0x1de708u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)30 << 16));
    // 0x1de70c: 0x2451c758  addiu       $s1, $v0, -0x38A8
    ctx->pc = 0x1de70cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
    // 0x1de710: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1de710u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66C758u));
    // 0x1de714: 0x0  nop
    ctx->pc = 0x1de714u;
    // NOP
label_1de718:
    // 0x1de718: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de71c: 0x2667dc60  addiu       $a3, $s3, -0x23A0
    ctx->pc = 0x1de71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958176));
    // 0x1de720: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1de720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de724: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1de724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1de728: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1de728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1de72c: 0xc0dbdf4  jal         func_36F7D0
    ctx->pc = 0x1DE72Cu;
    SET_GPR_U32(ctx, 31, 0x1DE734u);
    ctx->pc = 0x1DE730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE72Cu;
    // 0x1de730: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F7D0u, 0x1DE72Cu, 0x1DE734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE734u;
label_1de734:
    // 0x1de734: 0x8e8391f4  lw          $v1, -0x6E0C($s4)
    ctx->pc = 0x1de734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939124)));
    // 0x1de738: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1de738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1de73c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DE73Cu;
    {
        const bool branch_taken_0x1de73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de73c) {
            ctx->pc = 0x1DE740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE73Cu;
            // 0x1de740: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de718;
        }
    }
    ctx->pc = 0x1DE744u;
label_1de744:
    // 0x1de744: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1de744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1de748:
    // 0x1de748: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1de748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de74c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1de74cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de750: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1de750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de754: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1de754u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de758: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1de758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de75c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1de75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1de760: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE760u;
        // 0x1de764: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE768u;
}
