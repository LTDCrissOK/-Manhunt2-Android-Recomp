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

// Function: sub_00281338
// Address: 0x281338 - 0x2813c0
void sub_00281338_0x281338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281338_0x281338");
#endif

    switch (ctx->pc) {
        case 0x28134cu: goto label_28134c;
        case 0x281378u: goto label_281378;
        case 0x281380u: goto label_281380;
        case 0x281390u: goto label_281390;
        case 0x281398u: goto label_281398;
        default: break;
    }

    ctx->pc = 0x281338u;

    // 0x281338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28133c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x281340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281344: 0xc0a04c6  jal         func_281318
    ctx->pc = 0x281344u;
    SET_GPR_U32(ctx, 31, 0x28134Cu);
    ctx->pc = 0x281348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281344u;
    // 0x281348: 0xac40a448  sw          $zero, -0x5BB8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943816), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281318u, 0x281344u, 0x28134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28134Cu;
label_28134c:
    // 0x28134c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28134cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x281350: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x281350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x281354: 0xac60a330  sw          $zero, -0x5CD0($v1)
    ctx->pc = 0x281354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA330u, _value); } while (0);
    // 0x281358: 0x2462a330  addiu       $v0, $v1, -0x5CD0
    ctx->pc = 0x281358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943536));
    // 0x28135c: 0x24a4a340  addiu       $a0, $a1, -0x5CC0
    ctx->pc = 0x28135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943552));
    // 0x281360: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x281360u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA334u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA334u, _value); } while (0);
    // 0x281364: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x281364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA344u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA344u, _value); } while (0);
    // 0x281368: 0xaca0a340  sw          $zero, -0x5CC0($a1)
    ctx->pc = 0x281368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA340u, _value); } while (0);
    // 0x28136c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x28136cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA338u, _value); } while (0);
    // 0x281370: 0xc0a013a  jal         func_2804E8
    ctx->pc = 0x281370u;
    SET_GPR_U32(ctx, 31, 0x281378u);
    ctx->pc = 0x281374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281370u;
    // 0x281374: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2804E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804E8u, 0x281370u, 0x281378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281378u;
label_281378:
    // 0x281378: 0xc0a4758  jal         func_291D60
    ctx->pc = 0x281378u;
    SET_GPR_U32(ctx, 31, 0x281380u);
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x281378u, 0x281380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281380u;
label_281380:
    // 0x281380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x281380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281388: 0xc0a5172  jal         func_2945C8
    ctx->pc = 0x281388u;
    SET_GPR_U32(ctx, 31, 0x281390u);
    ctx->pc = 0x28138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281388u;
    // 0x28138c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2945C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2945C8u, 0x281388u, 0x281390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281390u;
label_281390:
    // 0x281390: 0xc0a367e  jal         func_28D9F8
    ctx->pc = 0x281390u;
    SET_GPR_U32(ctx, 31, 0x281398u);
    ctx->pc = 0x28D9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F8u, 0x281390u, 0x281398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281398u;
label_281398:
    // 0x281398: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x281398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28139c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28139cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2813a0: 0x2442cb28  addiu       $v0, $v0, -0x34D8
    ctx->pc = 0x2813a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x2813a4: 0xac400288  sw          $zero, 0x288($v0)
    ctx->pc = 0x2813a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66CDB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CDB0u, _value); } while (0);
    // 0x2813a8: 0xac400278  sw          $zero, 0x278($v0)
    ctx->pc = 0x2813a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66CDA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CDA0u, _value); } while (0);
    // 0x2813ac: 0xac40027c  sw          $zero, 0x27C($v0)
    ctx->pc = 0x2813acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66CDA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CDA4u, _value); } while (0);
    // 0x2813b0: 0xac400280  sw          $zero, 0x280($v0)
    ctx->pc = 0x2813b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66CDA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CDA8u, _value); } while (0);
    // 0x2813b4: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2813b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66CDACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CDACu, _value); } while (0);
    // 0x2813b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2813B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2813BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813B8u;
        // 0x2813bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2813B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2813C0u;
}
