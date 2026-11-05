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

// Function: sub_002CE0E0
// Address: 0x2ce0e0 - 0x2ce148
void sub_002CE0E0_0x2ce0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE0E0_0x2ce0e0");
#endif

    switch (ctx->pc) {
        case 0x2ce134u: goto label_2ce134;
        default: break;
    }

    ctx->pc = 0x2ce0e0u;

    // 0x2ce0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce0e4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2ce0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2ce0e8: 0xac64a680  sw          $a0, -0x5980($v1)
    ctx->pc = 0x2ce0e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x57A680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57A680u, _value); } while (0);
    // 0x2ce0ec: 0x2462a680  addiu       $v0, $v1, -0x5980
    ctx->pc = 0x2ce0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944384));
    // 0x2ce0f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ce0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ce0f4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2ce0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2ce0f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ce0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ce0fc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2ce0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2ce100: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2ce100u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x57A684u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57A684u, _value); } while (0);
    // 0x2ce104: 0x2609a6c0  addiu       $t1, $s0, -0x5940
    ctx->pc = 0x2ce104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944448));
    // 0x2ce108: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2ce108u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x57A688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57A688u, _value); } while (0);
    // 0x2ce10c: 0x2484a640  addiu       $a0, $a0, -0x59C0
    ctx->pc = 0x2ce10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944320));
    // 0x2ce110: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x2ce110u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x57A68Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57A68Cu, _value); } while (0);
    // 0x2ce114: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ce114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce118: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ce118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce11c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ce11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ce120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce124: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2ce124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ce128: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x2ce128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ce12c: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x2CE12Cu;
    SET_GPR_U32(ctx, 31, 0x2CE134u);
    ctx->pc = 0x2CE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE12Cu;
    // 0x2ce130: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x2CE12Cu, 0x2CE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE134u;
label_2ce134:
    // 0x2ce134: 0x8e02a6c0  lw          $v0, -0x5940($s0)
    ctx->pc = 0x2ce134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944448)));
    // 0x2ce138: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ce138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce13c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ce13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ce140: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE140u;
        // 0x2ce144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE148u;
}
