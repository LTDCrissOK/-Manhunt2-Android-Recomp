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

// Function: sub_003E15E0
// Address: 0x3e15e0 - 0x3e1648
void sub_003E15E0_0x3e15e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E15E0_0x3e15e0");
#endif

    switch (ctx->pc) {
        case 0x3e1610u: goto label_3e1610;
        case 0x3e1624u: goto label_3e1624;
        default: break;
    }

    ctx->pc = 0x3e15e0u;

    // 0x3e15e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e15e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e15e4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e15e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e15e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e15ec: 0x24422d20  addiu       $v0, $v0, 0x2D20
    ctx->pc = 0x3e15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11552));
    // 0x3e15f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e15f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e15f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e15f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e15f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e15f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e15fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e15fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1600: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x3e1600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x3e1604: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x3e1604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x3e1608: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1608u;
    SET_GPR_U32(ctx, 31, 0x3E1610u);
    ctx->pc = 0x3E160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1608u;
    // 0x3e160c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1608u, 0x3E1610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1610u;
label_3e1610:
    // 0x3e1610: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e1610u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e1614: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1614u;
    {
        const bool branch_taken_0x3e1614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1614u;
        // 0x3e1618: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1614) {
            ctx->pc = 0x3E1628u;
            goto label_3e1628;
        }
    }
    ctx->pc = 0x3E161Cu;
    // 0x3e161c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E161Cu;
    SET_GPR_U32(ctx, 31, 0x3E1624u);
    ctx->pc = 0x3E1620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E161Cu;
    // 0x3e1620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E161Cu, 0x3E1624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1624u;
label_3e1624:
    // 0x3e1624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e1624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1628:
    // 0x3e1628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e1628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e162c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e162cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1630: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1630u;
        // 0x3e1634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1638u;
    // 0x3e1638: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x3e1638u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3e163c: 0x0  nop
    ctx->pc = 0x3e163cu;
    // NOP
    // 0x3e1640: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x3e1640u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3e1644: 0x0  nop
    ctx->pc = 0x3e1644u;
    // NOP
    ctx->pc = 0x3e1648u;
}
