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

// Function: sub_002DA8A8
// Address: 0x2da8a8 - 0x2da990
void sub_002DA8A8_0x2da8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA8A8_0x2da8a8");
#endif

    switch (ctx->pc) {
        case 0x2da8d4u: goto label_2da8d4;
        case 0x2da8dcu: goto label_2da8dc;
        case 0x2da904u: goto label_2da904;
        case 0x2da918u: goto label_2da918;
        case 0x2da92cu: goto label_2da92c;
        case 0x2da934u: goto label_2da934;
        case 0x2da95cu: goto label_2da95c;
        case 0x2da968u: goto label_2da968;
        default: break;
    }

    ctx->pc = 0x2da8a8u;

    // 0x2da8a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2da8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2da8ac: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2da8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2da8b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2da8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2da8b4: 0x24a5ee30  addiu       $a1, $a1, -0x11D0
    ctx->pc = 0x2da8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962736));
    // 0x2da8b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2da8b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da8bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2da8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2da8c0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2da8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2da8c4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2da8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2da8c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2da8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2da8cc: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x2DA8CCu;
    SET_GPR_U32(ctx, 31, 0x2DA8D4u);
    ctx->pc = 0x2DA8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA8CCu;
    // 0x2da8d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x2DA8CCu, 0x2DA8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8D4u;
label_2da8d4:
    // 0x2da8d4: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2DA8D4u;
    SET_GPR_U32(ctx, 31, 0x2DA8DCu);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2DA8D4u, 0x2DA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA8DCu;
label_2da8dc:
    // 0x2da8dc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2da8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2da8e0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2da8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2da8e4: 0x2451cb28  addiu       $s1, $v0, -0x34D8
    ctx->pc = 0x2da8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x2da8e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2da8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da8ec: 0x8e330298  lw          $s3, 0x298($s1)
    ctx->pc = 0x2da8ecu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x66CDC0u));
    // 0x2da8f0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2da8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2da8f4: 0x24a51628  addiu       $a1, $a1, 0x1628
    ctx->pc = 0x2da8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5672));
    // 0x2da8f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da8fc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2DA8FCu;
    SET_GPR_U32(ctx, 31, 0x2DA904u);
    ctx->pc = 0x2DA900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA8FCu;
    // 0x2da900: 0xae230298  sw          $v1, 0x298($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2DA8FCu, 0x2DA904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA904u;
label_2da904:
    // 0x2da904: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x2da904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x2da908: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da90c: 0x24a54ae8  addiu       $a1, $a1, 0x4AE8
    ctx->pc = 0x2da90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19176));
    // 0x2da910: 0xc09e98e  jal         func_27A638
    ctx->pc = 0x2DA910u;
    SET_GPR_U32(ctx, 31, 0x2DA918u);
    ctx->pc = 0x2DA914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA910u;
    // 0x2da914: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A638u, 0x2DA910u, 0x2DA918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA918u;
label_2da918:
    // 0x2da918: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA918u;
    {
        const bool branch_taken_0x2da918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA918u;
        // 0x2da91c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da918) {
            ctx->pc = 0x2DA92Cu;
            goto label_2da92c;
        }
    }
    ctx->pc = 0x2DA920u;
    // 0x2da920: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2da920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da924: 0xc0b6766  jal         func_2D9D98
    ctx->pc = 0x2DA924u;
    SET_GPR_U32(ctx, 31, 0x2DA92Cu);
    ctx->pc = 0x2DA928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA924u;
    // 0x2da928: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D98u, 0x2DA924u, 0x2DA92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA92Cu;
label_2da92c:
    // 0x2da92c: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2DA92Cu;
    SET_GPR_U32(ctx, 31, 0x2DA934u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2DA92Cu, 0x2DA934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA934u;
label_2da934:
    // 0x2da934: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2da934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2da938: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2da938u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2da93c: 0x8c62b0d0  lw          $v0, -0x4F30($v1)
    ctx->pc = 0x2da93cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x57B0D0u));
    // 0x2da940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da944: 0xae330298  sw          $s3, 0x298($s1)
    ctx->pc = 0x2da944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 19));
    // 0x2da948: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2da948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da94c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2da94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2da950: 0xacc0b5f8  sw          $zero, -0x4A08($a2)
    ctx->pc = 0x2da950u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FB5F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FB5F8u, _value); } while (0);
    // 0x2da954: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2DA954u;
    SET_GPR_U32(ctx, 31, 0x2DA95Cu);
    ctx->pc = 0x2DA958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA954u;
    // 0x2da958: 0xac62b0d0  sw          $v0, -0x4F30($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947024), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2DA954u, 0x2DA95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA95Cu;
label_2da95c:
    // 0x2da95c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da960: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2DA960u;
    SET_GPR_U32(ctx, 31, 0x2DA968u);
    ctx->pc = 0x2DA964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA960u;
    // 0x2da964: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2DA960u, 0x2DA968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA968u;
label_2da968:
    // 0x2da968: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2da968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da96c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2da96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2da970: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2da970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da974: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2da974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da978: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2da978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da97c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA97Cu;
        // 0x2da980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA984u;
    // 0x2da984: 0x0  nop
    ctx->pc = 0x2da984u;
    // NOP
    // 0x2da988: 0x0  nop
    ctx->pc = 0x2da988u;
    // NOP
    // 0x2da98c: 0x0  nop
    ctx->pc = 0x2da98cu;
    // NOP
    ctx->pc = 0x2da990u;
}
