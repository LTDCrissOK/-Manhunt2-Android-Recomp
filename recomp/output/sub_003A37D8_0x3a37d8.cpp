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

// Function: sub_003A37D8
// Address: 0x3a37d8 - 0x3a3848
void sub_003A37D8_0x3a37d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A37D8_0x3a37d8");
#endif

    switch (ctx->pc) {
        case 0x3a3830u: goto label_3a3830;
        default: break;
    }

    ctx->pc = 0x3a37d8u;

    // 0x3a37d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a37d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a37dc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3a37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3a37e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a37e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a37e4: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x3a37e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
    // 0x3a37e8: 0x24426ac0  addiu       $v0, $v0, 0x6AC0
    ctx->pc = 0x3a37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27328));
    // 0x3a37ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a37ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a37f0: 0x26106bc0  addiu       $s0, $s0, 0x6BC0
    ctx->pc = 0x3a37f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27584));
    // 0x3a37f4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a37f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3a37f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x656AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x656AC0u, _value); } while (0);
    // 0x3a37fc: 0x24642700  addiu       $a0, $v1, 0x2700
    ctx->pc = 0x3a37fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 9984));
    // 0x3a3800: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3a3800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x656AC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x656AC4u, _value); } while (0);
    // 0x3a3804: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a3804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a3808: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x3a3808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x656AC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x656AC8u, _value); } while (0);
    // 0x3a380c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a380cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3810: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x3a3810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x656ACCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x656ACCu, _value); } while (0);
    // 0x3a3814: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3a3814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3818: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3a3818u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a381c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3a381cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a3820: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3a3820u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a3824: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a3824u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3828: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x3A3828u;
    SET_GPR_U32(ctx, 31, 0x3A3830u);
    ctx->pc = 0x3A382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3828u;
    // 0x3a382c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x3A3828u, 0x3A3830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3830u;
label_3a3830:
    // 0x3a3830: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a3830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a3834: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a3834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a3838: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a3838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a383c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A383Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A383Cu;
        // 0x3a3840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A383Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3844u;
    // 0x3a3844: 0x0  nop
    ctx->pc = 0x3a3844u;
    // NOP
    ctx->pc = 0x3a3848u;
}
